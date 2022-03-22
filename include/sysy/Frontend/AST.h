#ifndef SYSY_AST_H
#define SYSY_AST_H


#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/ArrayRef.h"


namespace sysy 
{

namespace ast
{

class NodeAST
{
private:
    enum ASTKind
    {
        AST_compUnit,
        AST_decl,
        AST_constDecl,
        AST_bType,
        AST_constDef,
        AST_constInitVal,
        AST_varDecl,
        AST_varDecl_in,
        AST_varDef,
        AST_initVal,
        AST_funcDef,
        AST_funcType,
        AST_funcFParams,
        AST_funcFParam,
        AST_block,
        AST_blockItem,
        AST_stmt_in,
        AST_stmt,
        AST_exp,
        AST_cond,
        AST_lVal,
        AST_primaryExp,
        AST_number,
        AST_unaryExp,
        AST_unaryOp,
        AST_funcRParams,
        AST_mulExp,
        AST_addExp,
        AST_relExp,
        AST_eqExp,
        AST_lAndExp,
        AST_lOrExp,
        AST_constExp,
        AST_intConst,
        AST_EOF,
        AST_UNDEFINED
    };
public:
    ASTKind kind;
    NodeAST* parent;
    llvm::SmallVector<NodeAST*> children;

    NodeAST(ASTKind _kind)
        : kind(_kind), parent(nullptr){}
    NodeAST()
        : kind(AST_UNDEFINED), parent(nullptr){}
    
    virtual ~NodeAST();

    void setParent(NodeAST* _parent) { parent = _parent; }
    void addChildren(NodeAST* _children) { children.push_back(_children); }

    llvm::ArrayRef<NodeAST*> getChildren() { return children; }
    const NodeAST* getParent() const { return parent; }
    NodeAST* getParent() { return parent; }
    const ASTKind& getKind() const { return kind; };

}; // class ASTNode



} // namespace ast
} // namespace sysy

#endif
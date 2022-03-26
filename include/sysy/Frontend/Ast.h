#ifndef SYSY_AST_H
#define SYSY_AST_H

#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/ArrayRef.h"
#include "sysy/Frontend/Location.h"
#include "sysy/Frontend/AstType.h"
#include "sysy/Frontend/SysYOp.h"


namespace sysy 
{

namespace ast
{

// Subclass of the AstNode
class FuncDefNode;
class FuncParamListNode;
class FuncParamNode;
class BlockNode;

class StmtNode;
class DeclNode;
class ConstDefNode;
class VarDefNode;
class InitValNode;
class LvalNode;

class PrototypeNode;


class ExprNode;
class CondExprNode;
class LOrExprNode;
class LAndExprNode;
class EqExprNode;
class RelExprNode;
class MulExprNode;
class UnaryExprNode;
class PrimaryExprNode;


class AstNode
{
public:
    enum AstKind
    {
        AST_compUnit,
        AST_decl,
        AST_constDecl,
        AST_constDef,
        AST_varDecl,
        AST_varDef,
        AST_prototype,
        AST_initVal,
        AST_funcDef,
        AST_funcParams,
        AST_funcParam,
        AST_stmt,
        AST_block,
        AST_assignStmt,
        AST_expStmt,
        AST_ifStmt,
        AST_forStmt,
        AST_whileStmt,
        AST_breakStmt,
        AST_continueStmt,
        AST_returnStmt,
        AST_exp,
        AST_cond,
        AST_lVal,
        AST_primaryExp,
        AST_unaryExp,
        AST_mulExp,
        AST_addExp,
        AST_relExp,
        AST_eqExp,
        AST_lAndExp,
        AST_lOrExp,
        AST_EOF,
        AST_Undefined
    };
public:
    AstKind kind;
    Location loc;
    AstNode* parent;
    llvm::SmallVector<AstNode*> children;

    AstNode(AstKind _kind, const Location& _loc)
        : loc(_loc)
        , kind(_kind)
        , parent(nullptr) {}
    AstNode()
        : loc()
        , kind(AST_Undefined)
        , parent(nullptr) {}
    
    virtual ~AstNode();

    void setParent(AstNode* _parent) { parent = _parent; }
    void addChildren(AstNode* _children) { children.push_back(_children); }

    llvm::ArrayRef<AstNode*> getChildren() { return children; }
    const AstNode* getParent() const { return parent; }
    AstNode* getParent() { return parent; }
    const AstKind& getKind() const { return kind; };

    FuncDefNode* getParentFuction() const;

    virtual std::string getSignature() const = 0;
    std::string getText() const { return loc.getText().str(); }


}; // class ASTNode

class CompUnitNode : public AstNode
{
public:
    std::vector<FuncDefNode*> funcDef;
    std::vector<DeclNode*> decl;

    CompUnitNode(const Location& _loc, std::vector<FuncDefNode*> _funcDef, 
                std::vector<DeclNode*> _decl);
    ~CompUnitNode();

    // Need override getSignature.
    std::string getSignature() const override;

    std::vector<PrototypeNode*>& getPrototype();

    llvm::StringRef getPath() const { return loc.getfile(); }

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_compUnit; }
};

class FuncDefNode : public AstNode
{
public:
    AstType funcType;
    std::string funcName;
    FuncParamListNode* funcParamList;
    BlockNode* block;

    FuncDefNode(const Location& _loc, AstType _funcType, std::string _funcName,
                FuncParamListNode* _funcParamList, BlockNode* _block);
    ~FuncDefNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_funcDef; }
};

class FuncParamListNode : public AstNode
{
public:
    std::vector<FuncParamNode*> funcParam;

    FuncParamListNode(const Location& _loc, std::vector<FuncParamNode*> _funcParam);
    ~FuncParamListNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_funcParams; }
};


class FuncParamNode : public AstNode
{
public:
    AstType type;
    std::string varName;
    int dimension;
    std::vector<ExprNode*> exprList;
    
    FuncParamNode(const Location& _loc, AstType _type, std::string _varName, 
                    int _dimension, std::vector<ExprNode*> _exprList);
    ~FuncParamNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_funcParam; }
};

class StmtNode : public AstNode
{
public:
    StmtNode(AstKind _kind, const Location& _loc) 
            : AstNode(_kind, _loc) {}
    ~StmtNode() {}

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c)
    {
        bool decl = c->getKind() >= AST_decl && c->getKind() <= AST_prototype;;

        bool stmt = c->getKind() >= AST_stmt && c->getKind() <= AST_returnStmt;

        return decl || stmt;
    }
};

class DeclNode : public StmtNode
{
public:
    bool is_const;
    AstType type;

    DeclNode::DeclNode(AstKind _kind, const Location& _loc, bool _is_const, AstType _type)
            : StmtNode(_kind, _loc), is_const(_is_const), type(_type) {}
    DeclNode::~DeclNode() {}

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() >= AST_decl 
                                                && c->getKind() <= AST_prototype; }
};

class ConstDeclNode : public DeclNode
{
public:
    std::vector<ConstDefNode*> constDef;

    ConstDeclNode(const Location& _loc, AstType _type, 
                    std::vector<ConstDefNode*> _constDef);
    ~ConstDeclNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_constDecl; }
};

class VarDeclNode : public DeclNode
{
public:
    std::vector<VarDefNode*> varDef;

    VarDeclNode(const Location& _loc, AstType _type, 
                    std::vector<VarDefNode*> _varDef);
    ~VarDeclNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_varDecl; }
};

class ConstDefNode : public AstNode
{
public:
    std::vector<ExprNode*> constExpr;
    InitValNode* constInitVal;

    ConstDefNode(const Location& _loc, std::vector<ExprNode*> _constExpr, 
            InitValNode* _constInitVal);
    ~ConstDefNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_constDef; }
};

class VarDefNode : public AstNode
{
public:
    std::vector<ExprNode*> expr;
    InitValNode* varInitVal;

    VarDefNode(const Location& _loc, std::vector<ExprNode*> _expr, 
            InitValNode* _varInitVal);
    VarDefNode(const Location& _loc, std::vector<ExprNode*> _expr);
    ~VarDefNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_varDef; }
};

class InitValNode : public AstNode
{
public:
    std::vector<ExprNode*> initItem;

    InitValNode(const Location& _loc, std::vector<ExprNode*> _initItem);
    ~InitValNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_initVal; }
};

class AssignStmtNode : public StmtNode
{
public:
    LvalNode* lval;
    ExprNode* expr;

    AssignStmtNode(const Location& _loc, LvalNode* _lval, ExprNode* _expr);
    ~AssignStmtNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_assignStmt; }
};

class ExprStmtNode : public StmtNode
{
public:
    ExprNode* expr;

    ExprStmtNode(const Location& _loc, ExprNode* _expr);
    ~ExprStmtNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_ifStmt; }
};

class IfStmtNode : public StmtNode
{
public:
    CondExprNode* cond;
    StmtNode* thenBlock,* elseBlock;
    
    IfStmtNode(const Location& _loc, CondExprNode* _cond, StmtNode* _thenBlock, StmtNode* _elseBlock);
    ~IfStmtNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_expStmt; }
};

class ForStmtNode : public StmtNode
{
public:
    StmtNode* initial,* increment,* stmt;
    CondExprNode* cond;

    ForStmtNode(const Location& _loc, StmtNode* _initial, CondExprNode* _cond,
                StmtNode* _increment, StmtNode* _stmt);
    ~ForStmtNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_forStmt; }
};

class WhileStmtNode : public StmtNode
{
public:
    CondExprNode* cond;
    StmtNode* stmt;

    WhileStmtNode(const Location& _loc, CondExprNode* _cond, StmtNode* _stmt);
    ~WhileStmtNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_whileStmt; }
};

class BreakStmtNode : public StmtNode
{
public:
    bool is_break;

    BreakStmtNode(const Location& _loc, bool _is_break);
    ~BreakStmtNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_breakStmt; }
};

class ContinueStmtNode : public StmtNode
{
public:
    bool is_contiune;

    ContinueStmtNode(const Location& _loc, bool _is_contiune);
    ~ContinueStmtNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_continueStmt; }
};

class ReturnStmtNode : public StmtNode
{
public:
    ExprNode* expr;

    ReturnStmtNode(const Location& _loc, ExprNode* _expr);
    ~ReturnStmtNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_returnStmt; }
};


class PrototypeNode : public DeclNode
{
public:
    std::string funcName;
    FuncParamListNode* funcParamList;

    PrototypeNode(const Location& _loc, bool _is_const, AstType _type,
                    std::string _funcName, FuncParamListNode* _funcParamList);
    ~PrototypeNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_prototype; }
};

class BlockNode : public StmtNode
{
public:
    std::vector<StmtNode*> blockItems;

    BlockNode(const Location& _loc, std::vector<StmtNode*> _blockItems);
    ~BlockNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_block; }
};

class ExprNode : public AstNode
{
public:
    bool is_const;
    Immediate immediate;
    AstType type;

    ExprNode(AstKind _kind, const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type);
    ~ExprNode();

    std::string getSignature() const override;

    void setImmediate(Immediate _immediate);

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() >= AST_exp && c->getKind() <= AST_lOrExp; }
};

class CondExprNode : public ExprNode
{
public:
    LOrExprNode* lOrExpr;

    CondExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    LOrExprNode* _lOrExpr);
    ~CondExprNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_cond; }
};

class LOrExprNode : public ExprNode
{
public:
    LAndExprNode* lAndExpr;
    LOrExprNode* lOrExpr;

    LOrExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    LAndExprNode* _lAndExpr);
    LOrExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    LAndExprNode* _lAndExpr, LOrExprNode* _lOrExpr);
    ~LOrExprNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_lOrExp; }
};

class LAndExprNode : public ExprNode
{
public:
    EqExprNode* eqExpr;
    LAndExprNode* lAndExpr;

    LAndExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    EqExprNode* _eqExpr);
    LAndExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    EqExprNode* _eqExpr, LAndExprNode* _lAndExpr);
    ~LAndExprNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_lAndExp; }
};

class EqExprNode : public ExprNode
{
public:
    RelExprNode* relExpr;
    EqExprNode* eqExpr;
    RelationOp op;

    EqExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    RelExprNode* _relExpr);
    EqExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    RelExprNode* _relExpr, EqExprNode* _eqExpr, RelationOp _op);
    ~EqExprNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_eqExp; }
};

class RelExprNode : public ExprNode
{
public:
    AddExprNode* addExpr;
    RelExprNode* relExpr;
    RelationOp op;

    RelExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    AddExprNode* _addExpr);
    RelExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    AddExprNode* _addExpr, RelExprNode* _relExpr, RelationOp _op);
    ~RelExprNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_relExp; }
};

class AddExprNode : public ExprNode
{
public:
    MulExprNode* mulExpr;
    AddExprNode* addExpr;
    BinaryOp op;

    AddExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    MulExprNode* _mulExpr, AddExprNode* _addExpr, BinaryOp _op);
    AddExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    MulExprNode* _mulExpr);
    ~AddExprNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_addExp; }
};

class MulExprNode : public ExprNode
{
public:
    UnaryExprNode* unaryExpr;
    MulExprNode* mulExpr;
    BinaryOp op;

    MulExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    UnaryExprNode* _unaryExpr, MulExprNode* _mulExpr, BinaryOp _op);
    MulExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    UnaryExprNode* _unaryExpr);
    ~MulExprNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_mulExp; }
};

class UnaryExprNode : public ExprNode
{
public:
    PrimaryExprNode* primaryExpr;

    std::string funcName;
    std::vector<ExprNode*> funcParamList;

    UnaryOp op;
    UnaryExprNode* unaryExpr;

    UnaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    PrimaryExprNode* _primaryExpr);
    UnaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    std::string _funcName, std::vector<ExprNode*> _funcParamList);
    UnaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    UnaryOp _op, UnaryExprNode* _unaryExpr);
    ~UnaryExprNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_unaryExp; }

};

class PrimaryExprNode : public ExprNode
{
public:
    ExprNode* expr;

    LvalNode* lval;

    Immediate number;

    PrimaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                        ExprNode* _expr);
    PrimaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                        LvalNode* _lval);
    PrimaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                        Immediate _number);
    ~PrimaryExprNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_primaryExp; }
};

class LvalNode : public ExprNode
{
public:
    std::string variable;
    std::vector<ExprNode*> expr;

    LvalNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                std::string _variable, std::vector<ExprNode*> _expr);
    ~LvalNode();

    std::string getSignature() const override;

    /// LLVM style RTTI
    static bool classof(const AstNode* c) { return c->getKind() == AST_lVal; }
};

} // namespace ast
} // namespace sysy

#endif
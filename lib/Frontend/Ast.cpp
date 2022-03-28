#include "sysy/Frontend/Ast.h"
#include "sysy/Support/common.h"

namespace sysy
{
namespace ast
{
// Basic
FuncDefNode* AstNode::getParentFuction() const {}

std::vector<std::string> nodeName
{
    "compUnit",
    "decl",
    "constDecl",
    "constDef",
    "varDecl",
    "varDef",
    "prototype",
    "initVal",
    "funcDef",
    "funcParams",
    "funcParam",
    "stmt",
    "block",
    "assignStmt",
    "expStmt",
    "ifStmt",
    "forStmt",
    "whileStmt",
    "breakStmt",
    "continueStmt",
    "returnStmt",
    "expr",
    "cond",
    "lVal",
    "primaryExpr",
    "unaryExpr",
    "mulExpr",
    "addExpr",
    "relExpr",
    "eqExpr",
    "lAndExpr",
    "lOrExpr",
    "EOF",
    "Undefined"
};

void AstNode::printAst(int depth)
{
    for(int i = 1;i < depth; i++)
        if (i == 1)
            std::cout << "\t";
        else
            std::cout << "|\t";
    
    if(this->kind != AST_compUnit)
        std::cout << "|--> ";
    std::cout << "\033[36m[\033[m" << nodeName.at(kind) << "\033[36m]\033[m";
    if(kind >= AST_exp && kind <= AST_lOrExp && ((ExprNode*)this)->ready())
        std::cout << "\033[32m<\033[m" << ((ExprNode*)this)->immediate.Integer << "\033[32m>\033[m";
    else if(kind == AST_funcDef)
        std::cout << "\033[32m<\033[m" << ((FuncDefNode*)this)->funcName << "\033[32m>\033[m";
    else if(kind == AST_funcParam)
        std::cout << "\033[32m<\033[m" << ((FuncParamNode*)this)->varName << "\033[32m>\033[m";
    else if(kind == AST_unaryExp)
        std::cout << "\033[32m<\033[m" << ((UnaryExprNode*)this)->funcName << "\033[32m>\033[m";
    else if(kind == AST_lVal)
        std::cout << "\033[32m<\033[m" << ((LvalNode*)this)->variable << "\033[32m>\033[m";
    std::cout << std::endl;
    
    for(auto child : children)
        child->printAst(depth + 1);
}

// CompUnitNode
CompUnitNode::CompUnitNode(const Location& _loc, std::vector<FuncDefNode*> _funcDef, 
                            std::vector<DeclNode*> _decl) 
    : AstNode(AST_compUnit, _loc), funcDef(std::move(_funcDef)), decl(std::move(_decl)) 
{
    SET_IT_PARENT_VEC(funcDef);
    SET_IT_PARENT_VEC(decl);
}

CompUnitNode::~CompUnitNode() 
{
    // FREE_VEC(funcDef);
    // FREE_VEC(decl);
}

std::string CompUnitNode::getSignature() const 
{

}

std::vector<PrototypeNode*>& CompUnitNode::getPrototype() 
{

}

// FuncDefNode
FuncDefNode::FuncDefNode(const Location& _loc, AstType _funcType, std::string _funcName,
                            FuncParamListNode* _funcParamList, BlockNode* _block) 
    : AstNode(AST_funcDef, _loc), funcType(_funcType), block(_block),
    funcName(_funcName), funcParamList(_funcParamList) 
{
    SET_IT_PARENT(funcParamList);
    SET_IT_PARENT(block);
}

FuncDefNode::~FuncDefNode() {}

std::string FuncDefNode::getSignature() const {}

// FuncParamListNode
FuncParamListNode::FuncParamListNode(const Location& _loc, std::vector<FuncParamNode*> _funcParam) 
    : AstNode(AST_funcParams, _loc), funcParam(std::move(_funcParam))           
{
    SET_IT_PARENT_VEC(funcParam);
}

FuncParamListNode::~FuncParamListNode() {}

std::string FuncParamListNode::getSignature() const {}

// FuncParamNode
FuncParamNode::FuncParamNode(const Location& _loc, AstType _type, std::string _varName, 
                    int _dimension, std::vector<ExprNode*> _exprList) 
    : AstNode(AST_funcParam, _loc), type(_type), varName(_varName), dimension(_dimension),
    exprList(std::move(_exprList))
{
    SET_IT_PARENT_VEC(exprList);
}

FuncParamNode::~FuncParamNode() {}

std::string FuncParamNode::getSignature() const {}

// DeclNode
std::string DeclNode::getSignature() const {}

// ConstDeclNode
ConstDeclNode::ConstDeclNode(const Location& _loc, AstType _type, 
                                std::vector<ConstDefNode*> _constDef) 
    : DeclNode(AST_constDecl, _loc, true, _type), constDef(std::move(_constDef))
{
    SET_IT_PARENT_VEC(constDef);
}

ConstDeclNode::~ConstDeclNode() {}

std::string ConstDeclNode::getSignature() const {}

// VarDeclNode
VarDeclNode::VarDeclNode(const Location& _loc, AstType _type, std::vector<VarDefNode*> _varDef) 
    : DeclNode(AST_varDecl, _loc, false, _type), varDef(std::move(_varDef))
{
    SET_IT_PARENT_VEC(varDef);
}

VarDeclNode::~VarDeclNode() {}

std::string VarDeclNode::getSignature() const {}

// ConstDefNode
ConstDefNode::ConstDefNode(const Location& _loc, std::vector<ExprNode*> _constExpr, 
                            InitValNode* _constInitVal) 
    : AstNode(AST_constDef, _loc), constExpr(std::move(_constExpr)), constInitVal(_constInitVal)
{
    SET_IT_PARENT_VEC(constExpr);
    SET_IT_PARENT(constInitVal);
}

ConstDefNode::~ConstDefNode() {}

std::string ConstDefNode::getSignature() const {}

// VarDefNode
VarDefNode::VarDefNode(const Location& _loc, std::vector<ExprNode*> _expr, 
                        InitValNode* _varInitVal) 
    : AstNode(AST_varDef, _loc), expr(std::move(_expr)), varInitVal(_varInitVal)
{
    SET_IT_PARENT_VEC(expr);
    SET_IT_PARENT(varInitVal);
}

VarDefNode::VarDefNode(const Location& _loc, std::vector<ExprNode*> _expr) {}

VarDefNode::~VarDefNode() {}

std::string VarDefNode::getSignature() const {}

// InitValNode
InitValNode::InitValNode(const Location& _loc, std::vector<ExprNode*> _initItem) 
    : AstNode(AST_initVal, _loc), initItem(std::move(_initItem))
{
    SET_IT_PARENT_VEC(initItem);
}

InitValNode::~InitValNode() {}

std::string InitValNode::getSignature() const {}

// StmtNode
StmtNode::StmtNode(AstKind _kind, const Location& _loc)
    : AstNode(_kind, _loc) {}

std::string StmtNode::getSignature() const {}

// AssignStmtNode
AssignStmtNode::AssignStmtNode(const Location& _loc, LvalNode* _lval, ExprNode* _expr) 
    : StmtNode(AST_assignStmt, _loc), lval(_lval), expr(_expr)
{
    SET_IT_PARENT(lval);
    SET_IT_PARENT(expr);
}
    
AssignStmtNode::~AssignStmtNode() {}

std::string AssignStmtNode::getSignature() const {}

// ExprStmtNode
ExprStmtNode::ExprStmtNode(const Location& _loc, ExprNode* _expr) 
    : StmtNode(AST_expStmt, _loc), expr(_expr)
{
    SET_IT_PARENT(expr);
}

ExprStmtNode::~ExprStmtNode() {}

std::string ExprStmtNode::getSignature() const {}

// IfStmtNode
IfStmtNode::IfStmtNode(const Location& _loc, CondExprNode* _cond, StmtNode* _thenBlock, StmtNode* _elseBlock) 
    : StmtNode(AST_ifStmt, _loc), cond(_cond), thenBlock(_thenBlock), elseBlock(_elseBlock)
{
    SET_IT_PARENT(cond);
    SET_IT_PARENT(thenBlock);
    SET_IT_PARENT(elseBlock);
}

IfStmtNode::~IfStmtNode() {}

std::string IfStmtNode::getSignature() const {}

// ForStmtNode
ForStmtNode::ForStmtNode(const Location& _loc, StmtNode* _initial, CondExprNode* _cond,
                            StmtNode* _increment, StmtNode* _stmt) 
    : StmtNode(AST_forStmt, _loc), initial(_initial), cond(_cond), 
    increment(_increment), stmt(_stmt)
{
    SET_IT_PARENT(initial);
    SET_IT_PARENT(increment);
    SET_IT_PARENT(cond);
    SET_IT_PARENT(stmt);
}

ForStmtNode::~ForStmtNode() {}

std::string ForStmtNode::getSignature() const {}

// WhileStmtNode
WhileStmtNode::WhileStmtNode(const Location& _loc, CondExprNode* _cond, StmtNode* _stmt)
    : StmtNode(AST_whileStmt, _loc), cond(_cond), stmt(_stmt)
{
    SET_IT_PARENT(cond);
    SET_IT_PARENT(stmt);
}
    
WhileStmtNode::~WhileStmtNode() {}

std::string WhileStmtNode::getSignature() const {}

// BreakStmtNode
BreakStmtNode::BreakStmtNode(const Location& _loc, bool _is_break) 
    : StmtNode(AST_breakStmt, _loc), is_break(_is_break) {}
    
BreakStmtNode::~BreakStmtNode() {}

std::string BreakStmtNode::getSignature() const {}

// ContinueStmtNode
ContinueStmtNode::ContinueStmtNode(const Location& _loc, bool _is_contiune) 
    : StmtNode(AST_continueStmt, _loc), is_contiune(_is_contiune) {}

ContinueStmtNode::~ContinueStmtNode() {}

std::string ContinueStmtNode::getSignature() const {}

// ReturnStmtNode
ReturnStmtNode::ReturnStmtNode(const Location& _loc, ExprNode* _expr) 
    : StmtNode(AST_returnStmt, _loc), expr(_expr), has_ret_val(true) { SET_IT_PARENT(expr); }

ReturnStmtNode::ReturnStmtNode(const Location& _loc) 
    : StmtNode(AST_returnStmt, _loc), expr(nullptr), has_ret_val(false) {}

ReturnStmtNode::~ReturnStmtNode() {}

std::string ReturnStmtNode::getSignature() const {}

// PrototypeNode
PrototypeNode::PrototypeNode(const Location& _loc, bool _is_const, AstType _type,
                                std::string _funcName, FuncParamListNode* _funcParamList) 
    : DeclNode(AST_prototype, _loc, _is_const, _type), funcName(_funcName), funcParamList(_funcParamList)
{
    SET_IT_PARENT(funcParamList);
}

PrototypeNode::~PrototypeNode() {}

std::string PrototypeNode::getSignature() const {}

// BlockNode
BlockNode::BlockNode(const Location& _loc, std::vector<StmtNode*> _blockItems) 
    : StmtNode(AST_block, _loc), blockItems(std::move(_blockItems))
{
    SET_IT_PARENT_VEC(blockItems);
}

BlockNode::~BlockNode() {}

std::string BlockNode::getSignature() const {}

// ExprNode
ExprNode::ExprNode(AstKind _kind, const Location& _loc, bool _is_const,
                    Immediate _immediate, AstType _type, 
                    bool _is_var, std::string _variable,  std::vector<ExprNode*> _indexExpr)
    : AstNode(_kind, _loc), is_const(_is_const), immediate(_immediate), type(_type),
    is_var(_is_var), variable(_variable), indexExpr(std::move(_indexExpr))
{
    SET_IT_PARENT_VEC(indexExpr);
}

ExprNode::~ExprNode() {}

std::string ExprNode::getSignature() const {}

void ExprNode::setImmediate(Immediate _immediate)
{
    this->immediate = _immediate;
    this->is_const = true;
}

// CondExprNode
CondExprNode::CondExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                            bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr, 
                            LOrExprNode* _lOrExpr)
    : ExprNode(AST_cond, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), lOrExpr(_lOrExpr)
{
    SET_IT_PARENT(lOrExpr);
}

CondExprNode::~CondExprNode() {}

std::string CondExprNode::getSignature() const {}

// LOrExprNode
LOrExprNode::LOrExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                            bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                            LAndExprNode* _lAndExpr)
    : ExprNode(AST_lOrExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), lAndExpr(_lAndExpr), lOrExpr(nullptr)
{
    SET_IT_PARENT(lAndExpr);
}

LOrExprNode::LOrExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                            bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                            LAndExprNode* _lAndExpr, LOrExprNode* _lOrExpr)
    : ExprNode(AST_lOrExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), lAndExpr(_lAndExpr), lOrExpr(_lOrExpr)
{
    SET_IT_PARENT(lAndExpr);
    SET_IT_PARENT(lOrExpr);
}

LOrExprNode::~LOrExprNode() {}

std::string LOrExprNode::getSignature() const {}

// LAndExprNode
LAndExprNode::LAndExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                            bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                            EqExprNode* _eqExpr)
    : ExprNode(AST_lAndExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), eqExpr(_eqExpr), lAndExpr(nullptr)
{
    SET_IT_PARENT(eqExpr);
}

LAndExprNode::LAndExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                            bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                            EqExprNode* _eqExpr, LAndExprNode* _lAndExpr)
    : ExprNode(AST_lAndExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), eqExpr(_eqExpr), lAndExpr(_lAndExpr)
{
    SET_IT_PARENT(eqExpr);
    SET_IT_PARENT(lAndExpr);
}

LAndExprNode::~LAndExprNode() {}

std::string LAndExprNode::getSignature() const {}

// EqExprNode
EqExprNode::EqExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                        bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                        RelExprNode* _relExpr)
    : ExprNode(AST_eqExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), relExpr(_relExpr), eqExpr(nullptr), op(ROP_NONE)
{
    SET_IT_PARENT(relExpr);
}

EqExprNode::EqExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                        bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                        RelExprNode* _relExpr, EqExprNode* _eqExpr, RelationOp _op)
    : ExprNode(AST_eqExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), relExpr(_relExpr), eqExpr(_eqExpr), op(_op) 
{
    SET_IT_PARENT(relExpr);
    SET_IT_PARENT(eqExpr);
}

EqExprNode::~EqExprNode() {}

std::string EqExprNode::getSignature() const {}

// RelExprNode
RelExprNode::RelExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                            bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                            AddExprNode* _addExpr)
    : ExprNode(AST_relExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), addExpr(_addExpr), relExpr(nullptr), op(ROP_NONE)
{
    SET_IT_PARENT(addExpr);
}

RelExprNode::RelExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                            bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                            AddExprNode* _addExpr, RelExprNode* _relExpr, RelationOp _op)
    : ExprNode(AST_relExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), addExpr(_addExpr), relExpr(_relExpr), op(_op)
{
    SET_IT_PARENT(addExpr);
    SET_IT_PARENT(relExpr);
}

RelExprNode::~RelExprNode() {}

std::string RelExprNode::getSignature() const {}

// AddExprNode
AddExprNode::AddExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                            bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                            MulExprNode* _mulExpr, AddExprNode* _addExpr, BinaryOp _op)
    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), mulExpr(_mulExpr), addExpr(_addExpr), op(_op)
{
    SET_IT_PARENT(mulExpr);
    SET_IT_PARENT(addExpr);
}

AddExprNode::AddExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                            bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                            MulExprNode* _mulExpr)
    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), mulExpr(_mulExpr), addExpr(nullptr), op(BOP_NONE)
{
    SET_IT_PARENT(mulExpr);
}

AddExprNode::~AddExprNode() {}

std::string AddExprNode::getSignature() const {}

// MulExprNode
MulExprNode::MulExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                            bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                            UnaryExprNode* _unaryExpr, MulExprNode* _mulExpr, BinaryOp _op)
    : ExprNode(AST_mulExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), unaryExpr(_unaryExpr), mulExpr(_mulExpr), op(op)
{
    SET_IT_PARENT(unaryExpr);
    SET_IT_PARENT(mulExpr);
}

MulExprNode::MulExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                            bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                            UnaryExprNode* _unaryExpr)
    : ExprNode(AST_mulExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), unaryExpr(_unaryExpr), mulExpr(nullptr), op(BOP_NONE)
{
    SET_IT_PARENT(unaryExpr);
}

MulExprNode::~MulExprNode() {}

std::string MulExprNode::getSignature() const {}

// UnaryExprNode
UnaryExprNode::UnaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                                bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                                PrimaryExprNode* _primaryExpr)
    : ExprNode(AST_unaryExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), primaryExpr(_primaryExpr),
    funcName(), funcParamList(),
    op(UOP_NONE), unaryExpr(nullptr)
{
    SET_IT_PARENT(primaryExpr);
}

UnaryExprNode::UnaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                                bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                                std::string _funcName, std::vector<ExprNode*> _funcParamList)
    : ExprNode(AST_unaryExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), primaryExpr(nullptr),
    funcName(_funcName), funcParamList(std::move(_funcParamList)),
    op(UOP_NONE), unaryExpr(nullptr)
{
    SET_IT_PARENT_VEC(funcParamList);
}

UnaryExprNode::UnaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                                bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                                UnaryOp _op, UnaryExprNode* _unaryExpr)
    : ExprNode(AST_unaryExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), primaryExpr(nullptr),
    funcName(), funcParamList(),
    op(_op), unaryExpr(_unaryExpr)
{
    SET_IT_PARENT(unaryExpr);
}

UnaryExprNode::~UnaryExprNode() {}

std::string UnaryExprNode::getSignature() const {}

// PrimaryExprNode
PrimaryExprNode::PrimaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                                    bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                                    ExprNode* _expr)
    : ExprNode(AST_primaryExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), expr(_expr),
    lval(nullptr)
{
    SET_IT_PARENT(expr);
}
PrimaryExprNode::PrimaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                                    bool _is_var, std::string _variable, std::vector<ExprNode*> _indexExpr,
                                    LvalNode* _lval)
    : ExprNode(AST_primaryExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)), 
    expr(nullptr), lval(_lval)
{
    SET_IT_PARENT(lval);
}

PrimaryExprNode::PrimaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                                    bool _is_var, std::string _variable,  std::vector<ExprNode*> _indexExpr)
    : ExprNode(AST_primaryExp, _loc, _is_const, _immediate, _type, _is_var, _variable, std::move(_indexExpr)),
    expr(nullptr), lval(nullptr) {}

PrimaryExprNode::~PrimaryExprNode() {}

std::string PrimaryExprNode::getSignature() const {}


// LvalNode
LvalNode::LvalNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    std::string _variable,  std::vector<ExprNode*> _indexExpr)
    : ExprNode(AST_lVal, _loc, _is_const, _immediate, _type, true, _variable, std::move(_indexExpr)) {}

LvalNode::~LvalNode() {}

std::string LvalNode::getSignature() const {}

}
}
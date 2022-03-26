#include "sysy/Frontend/Ast.h"

namespace sysy
{
namespace ast
{
// Basic
FuncDefNode* AstNode::getParentFuction() const {}

// CompUnitNode
CompUnitNode::CompUnitNode(const Location& _loc, std::vector<FuncDefNode*> funcDef, 
            std::vector<DeclNode*> decl) {}

CompUnitNode::~CompUnitNode() {}

std::string CompUnitNode::getSignature() const {}

std::vector<PrototypeNode*>& CompUnitNode::getPrototype() {}

// FuncDefNode
FuncDefNode::FuncDefNode(const Location& _loc, AstType funcType, std::string funcName,
                FuncParamListNode* funcParamList, BlockNode* block) {}

FuncDefNode::~FuncDefNode() {}

std::string FuncDefNode::getSignature() const {}

// FuncParamListNode
FuncParamListNode::FuncParamListNode(const Location& _loc, std::vector<FuncParamNode*> _funcParam) {}

FuncParamListNode::~FuncParamListNode() {}

std::string FuncParamListNode::getSignature() const {}

// FuncParamNode
FuncParamNode::FuncParamNode(const Location& _loc, AstType _type, std::string _varName, 
                    int _dimension, std::vector<ExprNode*> _exprList) {}

FuncParamNode::~FuncParamNode() {}

std::string FuncParamNode::getSignature() const {}

// DeclNode
DeclNode::DeclNode(AstKind _kind, const Location& _loc, bool _is_const, AstType _type)
                    : StmtNode(_kind, _loc) {}

DeclNode::~DeclNode() {}

// ConstDeclNode
ConstDeclNode::ConstDeclNode(const Location& _loc, AstType _type, 
    std::vector<ConstDeclNode*> _constDef) : DeclNode(AST_constDecl, _loc, true, _type) {}

ConstDeclNode::~ConstDeclNode() {}

// VarDeclNode
VarDeclNode::VarDeclNode(const Location& _loc, AstType _type, std::vector<VarDefNode*> _varDef) 
                    : DeclNode(AST_varDecl, _loc, false, _type) {}

VarDeclNode::~VarDeclNode() {}

// ConstDefNode
ConstDefNode::ConstDefNode(const Location& _loc, std::vector<ExprNode*> _constExpr, 
            InitValNode* _constInitVal) {}

ConstDefNode::~ConstDefNode() {}

// VarDefNode
VarDefNode::VarDefNode(const Location& _loc, std::vector<ExprNode*> _expr, 
            InitValNode* _varInitVal) {}

VarDefNode::VarDefNode(const Location& _loc, std::vector<ExprNode*> _expr) {}

VarDefNode::~VarDefNode() {}

// InitValNode
InitValNode::InitValNode(const Location& _loc, std::vector<ExprNode*> _initItem) {}

InitValNode::~InitValNode() {}

// AssignStmtNode
AssignStmtNode::AssignStmtNode(const Location& _loc, LvalNode* _lval, ExprNode* _expr) 
                                : StmtNode(AST_assignStmt, _loc) {}
    
AssignStmtNode::~AssignStmtNode() {}

// ExprStmtNode
ExprStmtNode::ExprStmtNode(const Location& _loc, ExprNode* _expr) 
                            : StmtNode(AST_expStmt, _loc) {}

ExprStmtNode::~ExprStmtNode() {}

// IfStmtNode
IfStmtNode::IfStmtNode(const Location& _loc, StmtNode* _thenBlock, StmtNode* _elseBlock) 
                        : StmtNode(AST_ifStmt, _loc){}

IfStmtNode::~IfStmtNode() {}

// ForStmtNode
ForStmtNode::ForStmtNode(const Location& _loc, StmtNode* _initial, CondExprNode* _cond,
                StmtNode* _increment, StmtNode* _stmt) : StmtNode(AST_forStmt, _loc) {}

ForStmtNode::~ForStmtNode() {}

// WhileStmtNode
WhileStmtNode::WhileStmtNode(const Location& _loc, CondExprNode* _cond, StmtNode* _stmt)
                            : StmtNode(AST_whileStmt, _loc) {}
    
WhileStmtNode::~WhileStmtNode() {}

// BreakStmtNode
BreakStmtNode::BreakStmtNode(const Location& _loc, bool _is_break) : StmtNode(AST_breakStmt, _loc) {}
    
BreakStmtNode::~BreakStmtNode() {}

// ContinueStmtNode
ContinueStmtNode::ContinueStmtNode(const Location& _loc, bool _is_contiune) : StmtNode(AST_continueStmt, _loc) {}

ContinueStmtNode::~ContinueStmtNode() {}

// ReturnStmtNode
ReturnStmtNode::ReturnStmtNode(const Location& _loc, ExprNode* expr) : StmtNode(AST_returnStmt, _loc) {}

ReturnStmtNode::~ReturnStmtNode() {}

// PrototypeNode
PrototypeNode::PrototypeNode(const Location& _loc, bool _is_const, AstType _type,
                    std::string _funcName, FuncParamListNode* _funcParamList) : DeclNode(AST_prototype, _loc, _is_const, _type) {}

PrototypeNode::~PrototypeNode() {}

// BlockNode
BlockNode::BlockNode(const Location& _loc, std::vector<StmtNode*> _blockItems) 
                        : StmtNode(AST_block, _loc) {}

BlockNode::~BlockNode() {}

// ExprNode
ExprNode::ExprNode(AstKind _kind, const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type) {}

ExprNode::~ExprNode() {}

void ExprNode::setImmediate(Immediate _immediate)
{
    this->immediate = _immediate;
    this->is_const = true;
}

// CondExprNode
CondExprNode::CondExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    LOrExprNode* _lOrExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

CondExprNode::~CondExprNode() {}

// LOrExprNode
LOrExprNode::LOrExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    LAndExprNode* _lAndExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

LOrExprNode::LOrExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    LAndExprNode* _lAndExpr, LOrExprNode* _lOrExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

LOrExprNode::~LOrExprNode() {}

// LAndExprNode
LAndExprNode::LAndExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    EqExprNode* _eqExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

LAndExprNode::LAndExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    EqExprNode* _eqExpr, LAndExprNode* _lAndExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

LAndExprNode::~LAndExprNode() {}

// EqExprNode
EqExprNode::EqExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    RelExprNode* _relExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

EqExprNode::EqExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    RelExprNode* _relExpr, EqExprNode* _eqExpr, RelationOp _op)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

EqExprNode::~EqExprNode() {}

// RelExprNode
RelExprNode::RelExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    AddExprNode* _addExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

RelExprNode::RelExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    AddExprNode* _addExpr, RelExprNode* _relExpr, RelationOp _op)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

RelExprNode::~RelExprNode() {}
                           
// AddExprNode
AddExprNode::AddExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    MulExprNode* _mulExpr, AddExprNode* _AddExpr, BinaryOp _op)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

AddExprNode::AddExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    MulExprNode* _mulExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

AddExprNode::~AddExprNode() {}

// MulExprNode
MulExprNode::MulExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    UnaryExprNode* _unaryExpr, MulExprNode* _mulExpr, BinaryOp _op)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

MulExprNode::MulExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    UnaryExprNode* _unaryExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

MulExprNode::~MulExprNode() {}

// UnaryExprNode
UnaryExprNode::UnaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    PrimaryExprNode* _primaryExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

UnaryExprNode::UnaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    std::string _funcName, std::vector<ExprNode*> _funcParamList)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

UnaryExprNode::UnaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    UnaryOp _op, UnaryExprNode* _unaryExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

UnaryExprNode::~UnaryExprNode() {}

// PrimaryExprNode
PrimaryExprNode::PrimaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                        ExprNode* _expr)
                        : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}
PrimaryExprNode::PrimaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                        LvalNode* _lval)
                        : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}
PrimaryExprNode::PrimaryExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                        Immediate _number)
                        : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}
PrimaryExprNode::~PrimaryExprNode() {}

}
}
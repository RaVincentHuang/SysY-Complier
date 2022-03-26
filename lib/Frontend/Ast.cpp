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

std::string DeclNode::getSignature() const {}

// ConstDeclNode
ConstDeclNode::ConstDeclNode(const Location& _loc, AstType _type, 
    std::vector<ConstDeclNode*> _constDef) : DeclNode(AST_constDecl, _loc, true, _type) {}

ConstDeclNode::~ConstDeclNode() {}

std::string ConstDeclNode::getSignature() const {}

// VarDeclNode
VarDeclNode::VarDeclNode(const Location& _loc, AstType _type, std::vector<VarDefNode*> _varDef) 
                    : DeclNode(AST_varDecl, _loc, false, _type) {}

VarDeclNode::~VarDeclNode() {}

std::string VarDeclNode::getSignature() const {}

// ConstDefNode
ConstDefNode::ConstDefNode(const Location& _loc, std::vector<ExprNode*> _constExpr, 
            InitValNode* _constInitVal) {}

ConstDefNode::~ConstDefNode() {}

std::string ConstDefNode::getSignature() const {}

// VarDefNode
VarDefNode::VarDefNode(const Location& _loc, std::vector<ExprNode*> _expr, 
            InitValNode* _varInitVal) {}

VarDefNode::VarDefNode(const Location& _loc, std::vector<ExprNode*> _expr) {}

VarDefNode::~VarDefNode() {}

std::string VarDefNode::getSignature() const {}

// InitValNode
InitValNode::InitValNode(const Location& _loc, std::vector<ExprNode*> _initItem) {}

InitValNode::~InitValNode() {}

std::string InitValNode::getSignature() const {}

// AssignStmtNode
AssignStmtNode::AssignStmtNode(const Location& _loc, LvalNode* _lval, ExprNode* _expr) 
                                : StmtNode(AST_assignStmt, _loc) {}
    
AssignStmtNode::~AssignStmtNode() {}

std::string AssignStmtNode::getSignature() const {}

// ExprStmtNode
ExprStmtNode::ExprStmtNode(const Location& _loc, ExprNode* _expr) 
                            : StmtNode(AST_expStmt, _loc) {}

ExprStmtNode::~ExprStmtNode() {}

std::string ExprStmtNode::getSignature() const {}

// IfStmtNode
IfStmtNode::IfStmtNode(const Location& _loc, StmtNode* _thenBlock, StmtNode* _elseBlock) 
                        : StmtNode(AST_ifStmt, _loc){}

IfStmtNode::~IfStmtNode() {}

std::string IfStmtNode::getSignature() const {}

// ForStmtNode
ForStmtNode::ForStmtNode(const Location& _loc, StmtNode* _initial, CondExprNode* _cond,
                StmtNode* _increment, StmtNode* _stmt) : StmtNode(AST_forStmt, _loc) {}

ForStmtNode::~ForStmtNode() {}

std::string ForStmtNode::getSignature() const {}

// WhileStmtNode
WhileStmtNode::WhileStmtNode(const Location& _loc, CondExprNode* _cond, StmtNode* _stmt)
                            : StmtNode(AST_whileStmt, _loc) {}
    
WhileStmtNode::~WhileStmtNode() {}

std::string WhileStmtNode::getSignature() const {}

// BreakStmtNode
BreakStmtNode::BreakStmtNode(const Location& _loc, bool _is_break) : StmtNode(AST_breakStmt, _loc) {}
    
BreakStmtNode::~BreakStmtNode() {}

std::string BreakStmtNode::getSignature() const {}

// ContinueStmtNode
ContinueStmtNode::ContinueStmtNode(const Location& _loc, bool _is_contiune) : StmtNode(AST_continueStmt, _loc) {}

ContinueStmtNode::~ContinueStmtNode() {}

std::string ContinueStmtNode::getSignature() const {}

// ReturnStmtNode
ReturnStmtNode::ReturnStmtNode(const Location& _loc, ExprNode* expr) : StmtNode(AST_returnStmt, _loc) {}

ReturnStmtNode::~ReturnStmtNode() {}

std::string ReturnStmtNode::getSignature() const {}

// PrototypeNode
PrototypeNode::PrototypeNode(const Location& _loc, bool _is_const, AstType _type,
                    std::string _funcName, FuncParamListNode* _funcParamList) : DeclNode(AST_prototype, _loc, _is_const, _type) {}

PrototypeNode::~PrototypeNode() {}

std::string PrototypeNode::getSignature() const {}

// BlockNode
BlockNode::BlockNode(const Location& _loc, std::vector<StmtNode*> _blockItems) 
                        : StmtNode(AST_block, _loc) {}

BlockNode::~BlockNode() {}

std::string BlockNode::getSignature() const {}

// ExprNode
ExprNode::ExprNode(AstKind _kind, const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type) {}

ExprNode::~ExprNode() {}

std::string ExprNode::getSignature() const {}

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

std::string CondExprNode::getSignature() const {}

// LOrExprNode
LOrExprNode::LOrExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    LAndExprNode* _lAndExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

LOrExprNode::LOrExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    LAndExprNode* _lAndExpr, LOrExprNode* _lOrExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

LOrExprNode::~LOrExprNode() {}

std::string LOrExprNode::getSignature() const {}

// LAndExprNode
LAndExprNode::LAndExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    EqExprNode* _eqExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

LAndExprNode::LAndExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    EqExprNode* _eqExpr, LAndExprNode* _lAndExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

LAndExprNode::~LAndExprNode() {}

std::string LAndExprNode::getSignature() const {}

// EqExprNode
EqExprNode::EqExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    RelExprNode* _relExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

EqExprNode::EqExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    RelExprNode* _relExpr, EqExprNode* _eqExpr, RelationOp _op)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

EqExprNode::~EqExprNode() {}

std::string EqExprNode::getSignature() const {}

// RelExprNode
RelExprNode::RelExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    AddExprNode* _addExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

RelExprNode::RelExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    AddExprNode* _addExpr, RelExprNode* _relExpr, RelationOp _op)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

RelExprNode::~RelExprNode() {}

std::string RelExprNode::getSignature() const {}

// AddExprNode
AddExprNode::AddExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    MulExprNode* _mulExpr, AddExprNode* _AddExpr, BinaryOp _op)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

AddExprNode::AddExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    MulExprNode* _mulExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

AddExprNode::~AddExprNode() {}

std::string AddExprNode::getSignature() const {}

// MulExprNode
MulExprNode::MulExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    UnaryExprNode* _unaryExpr, MulExprNode* _mulExpr, BinaryOp _op)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

MulExprNode::MulExprNode(const Location& _loc, bool _is_const,  Immediate _immediate, AstType _type,
                    UnaryExprNode* _unaryExpr)
                    : ExprNode(AST_addExp, _loc, _is_const, _immediate, _type) {}

MulExprNode::~MulExprNode() {}

std::string MulExprNode::getSignature() const {}

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

std::string UnaryExprNode::getSignature() const {}

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

std::string PrimaryExprNode::getSignature() const {}

}
}
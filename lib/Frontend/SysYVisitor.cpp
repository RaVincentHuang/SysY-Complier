#include "sysy/Frontend/SysYVisitor.h"
#include "sysy/Frontend/SysYParser.h"
#include "sysy/Support/common.h"
#include "sysy/Frontend/Ast.h"

namespace sysy
{

using namespace ast;

template<class T>
T unpackAny(antlrcpp::Any&& data)
{
    if (data.isNull())
        return nullptr;
    return data.as<T>();
}

template<class T>
std::vector<T> unpackAnyVec(antlrcpp::Any&& data)
{
    std::vector<T> vec;
    if(data.isNotNull())
        return data.as<std::vector<T>>();
    return vec;
}

void SysYVisitor::printCst(antlr4::ParserRuleContext *ctx, int depth)
{
    for(int i = 1;i < depth; i++)
        if (i == 1)
            std::cout << "\t";
        else
            std::cout << "|\t";
    if(ctx->depth() != depth)
    {
        std::cout <<"├-> " << "\033[32m<\033[m" << ctx->toStringTree() << "\033[32m>\033[m" << std::endl;
        return;
    }

    size_t num = ctx->getRuleIndex();
    if(ctx->getRuleIndex() != SysYParser::RuleCompUnit)
        std::cout << "├--> ";
    
    std::cout << "\033[36m[\033[m" << parser.getRuleNames().at(num) << "\033[36m]\033[m" << std::endl;
    for(auto child : ctx->children)
        printCst((antlr4::ParserRuleContext *)child, depth + 1);
}

void SysYVisitor::printSrc(SysYParser::CompUnitContext* ctx)
{
    auto vec = ctx->children;
    size_t num = ctx->getAltNumber();
    std::cout << parser.getRuleNames().at(num) << std::endl;
    std::cout << vec.size() << std::endl;
    for(auto iter: vec)
        std::cout<< iter->toString() << std::endl << iter->getText() << std::endl;
}

ast::Location SysYVisitor::getContextLoc(antlr4::ParserRuleContext* ctx) 
{
    return ast::Location(memoryBuffer->getBufferIdentifier(), getContextRange(ctx));
}

llvm::SMRange SysYVisitor::getContextRange(antlr4::ParserRuleContext* ctx) 
{
    auto startIndex = ctx->getStart()->getStartIndex();
    auto endIndex = ctx->getStop()->getStopIndex();
    auto startLoc = llvm::SMLoc::getFromPointer(memoryBuffer->getBufferStart() + startIndex);
    auto endLoc = llvm::SMLoc::getFromPointer(memoryBuffer->getBufferStart() + endIndex + 1);
    return llvm::SMRange(startLoc, endLoc);
}

antlrcpp::Any SysYVisitor::visitCompUnit(SysYParser::CompUnitContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    std::vector<ast::DeclNode*> _decl;
    std::vector<ast::FuncDefNode*> _funcDef;
    for(auto item : ctx->element())
    {
        if(auto decl = item->decl())
            _decl.push_back(unpackAny<ast::DeclNode*>(visitDecl(decl)));
        else if(auto funcDef = item->funcDef())
            _funcDef.push_back(unpackAny<ast::FuncDefNode*>(visitFuncDef(funcDef)));
    }

    CompUnitNode* ast = new CompUnitNode(_loc, _funcDef, _decl);

    return ast;
}

antlrcpp::Any SysYVisitor::visitElement(SysYParser::ElementContext *ctx) {}

antlrcpp::Any SysYVisitor::visitDecl(SysYParser::DeclContext *ctx)
{
    if(auto constDecl = ctx->constDecl())
        return (DeclNode*) unpackAny<ConstDeclNode*>(visitConstDecl(constDecl));
    if(auto varDecl = ctx->varDecl())
        return (DeclNode*) unpackAny<VarDeclNode*>(visitVarDecl(varDecl));
}
  
antlrcpp::Any SysYVisitor::visitConstDecl(SysYParser::ConstDeclContext *ctx)
{
    auto _loc = getContextLoc(ctx);
    AstType _type;
    if(ctx->bType()->INT())
        _type = INT;

    std::vector<ConstDefNode*> _constDef;
    for(auto constDef : ctx->constDef())
        _constDef.push_back(unpackAny<ConstDefNode*>(visitConstDef(constDef)));
    
    ConstDeclNode* ret = new ConstDeclNode(_loc, _type, _constDef);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitBType(SysYParser::BTypeContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitConstDef(SysYParser::ConstDefContext *ctx)
{
    auto _loc = getContextLoc(ctx);
    std::vector<ExprNode*> _constExpr;
    for(auto constExp : ctx->constExp())
        _constExpr.push_back(unpackAny<ExprNode*>(visitConstExp(constExp)));
    
    auto constInitVal = ctx->constInitVal();
    InitValNode* _constInitVal = unpackAny<InitValNode*>(visitConstInitVal(constInitVal));

    ConstDefNode* ret = new ConstDefNode(_loc, _constExpr, _constInitVal);
    return ret;
}

std::vector<ExprNode*> SysYVisitor::constInitValDfs(SysYParser::ConstInitValContext *ctx)
{
    std::vector<ExprNode*> res;
    if(auto cosntExp = ctx->constExp())
    {
        res.push_back(unpackAny<ExprNode*>(visitConstExp(cosntExp)));
        return res;
    }
    for(auto constInitVal : ctx->constInitVal())
    {
        auto vec = constInitValDfs(constInitVal);
        res.insert(res.end(), vec.begin(), vec.end());
    }
    return res;
}
  
antlrcpp::Any SysYVisitor::visitConstInitVal(SysYParser::ConstInitValContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    std::vector<ExprNode*> _initItem = constInitValDfs(ctx);

    InitValNode* init = new InitValNode(_loc, _initItem);
    return init;
}
  
antlrcpp::Any SysYVisitor::visitVarDecl(SysYParser::VarDeclContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    AstType _type;
    if(ctx->bType()->INT())
        _type = INT;
    std::vector<VarDefNode*> _varDef;
    for(auto varDef : ctx->varDef())
        _varDef.push_back(unpackAny<VarDefNode*>(visitVarDef(varDef)));
    
    VarDeclNode* ret = new VarDeclNode(_loc, _type, _varDef);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitVarDecl_in(SysYParser::VarDecl_inContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    AstType _type;
    if(ctx->bType()->INT())
        _type = INT;
    std::vector<VarDefNode*> _varDef;
    for(auto varDef : ctx->varDef())
        _varDef.push_back(unpackAny<VarDefNode*>(visitVarDef(varDef)));
    
    VarDeclNode* ret = new VarDeclNode(_loc, _type, _varDef);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitVarDef(SysYParser::VarDefContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    std::vector<ExprNode*> _expr;
    for(auto constExp : ctx->constExp())
        _expr.push_back(unpackAny<ExprNode*>(visitConstExp(constExp)));
    
    if(auto initVal = ctx->initVal())
    {
        InitValNode* _varInitVal = unpackAny<InitValNode*>(visitInitVal(initVal));
        VarDefNode* ret = new VarDefNode(_loc, _expr, _varInitVal);
        return ret;
    }

    VarDefNode* ret = new VarDefNode(_loc, _expr);
    return ret;
}

std::vector<ExprNode*> SysYVisitor::varInitValDfs(SysYParser::InitValContext *ctx)
{
    std::vector<ExprNode*> res;
    if(auto exp = ctx->exp())
    {
        res.push_back(unpackAny<ExprNode*>(visitExp(exp)));
        return res;
    }
    for(auto initVal : ctx->initVal())
    {
        auto vec = varInitValDfs(initVal);
        res.insert(res.end(), vec.begin(), vec.end());
    }
    return res;
}

antlrcpp::Any SysYVisitor::visitInitVal(SysYParser::InitValContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    std::vector<ExprNode*> _initItem = varInitValDfs(ctx);

    InitValNode* init = new InitValNode(_loc, _initItem);
    return init;
}
  
antlrcpp::Any SysYVisitor::visitFuncDef(SysYParser::FuncDefContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    AstType _funcType;
    if(ctx->funcType()->INT())
        _funcType = INT;
    else if(ctx->funcType()->VOID())
        _funcType = VOID;
    
    std::string _funcName = ctx->Ident()->toString();

    FuncParamListNode* _funcParamList;
    if(auto funcFParams = ctx->funcFParams())
        _funcParamList = unpackAny<FuncParamListNode*>(visitFuncFParams(funcFParams));
    else
        _funcParamList = nullptr;
    auto block  = ctx->block(); 
    BlockNode* _block = unpackAny<BlockNode*>(visitBlock(block));

    FuncDefNode* ret = new FuncDefNode(_loc, _funcType, _funcName, _funcParamList, _block);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitFuncType(SysYParser::FuncTypeContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitFuncFParams(SysYParser::FuncFParamsContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    std::vector<FuncParamNode*> _funcParam;
    for(auto funcFParam : ctx->funcFParam())
        _funcParam.push_back(unpackAny<FuncParamNode*>(visitFuncFParam(funcFParam)));
    
    FuncParamListNode* ret = new FuncParamListNode(_loc, _funcParam);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitFuncFParam(SysYParser::FuncFParamContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    AstType _type;
    if(ctx->bType()->INT())
        _type = INT;

    std::string _varName = ctx->Ident()->toString();

    std::vector<ExprNode*> _exprList;
    for(auto exp : ctx->exp())
        _exprList.push_back(unpackAny<ExprNode*>(visitExp(exp)));
    
    int _dimension = _exprList.size() + 1;

    FuncParamNode* ret = new FuncParamNode(_loc, _type, _varName, _dimension, _exprList);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitBlock(SysYParser::BlockContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    std::vector<StmtNode*> _blockItems;
    for(auto blockItem : ctx->blockItem())
        _blockItems.push_back(unpackAny<StmtNode*>(visitBlockItem(blockItem)));
    
    BlockNode* ret = new BlockNode(_loc, _blockItems);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitBlockItem(SysYParser::BlockItemContext *ctx)
{
    if(auto decl = ctx->decl())
        return (StmtNode*) unpackAny<DeclNode*>(visitDecl(decl));
    else if(auto stmt = ctx->stmt())
        return unpackAny<StmtNode*>(visitStmt(stmt));
    else
        return nullptr;
}
  
antlrcpp::Any SysYVisitor::visitStmt_in(SysYParser::Stmt_inContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    if(auto lval = ctx->lVal())
    {
        LvalNode* _lval = unpackAny<LvalNode*>(visitLVal(lval));

        auto expr = ctx->exp();
        ExprNode* _expr = unpackAny<ExprNode*>(visitExp(expr));

        AssignStmtNode* ret = new AssignStmtNode(_loc, _lval, _expr);
        return (StmtNode*) ret;
    }
    else if(auto exp = ctx->exp())
    {
        ExprNode* _expr = unpackAny<ExprNode*>(visitExp(exp));

        ExprStmtNode* ret = new ExprStmtNode(_loc, _expr);
        return (StmtNode*) ret;
    }
    return nullptr;
}
  
antlrcpp::Any SysYVisitor::visitStmt(SysYParser::StmtContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    if(ctx->lVal() && ctx->AGN() && ctx->exp())
    {
        auto lval = ctx->lVal();
        LvalNode* _lval = unpackAny<LvalNode*>(visitLVal(lval));

        auto expr = ctx->exp();
        ExprNode* _expr = unpackAny<ExprNode*>(visitExp(expr));

        AssignStmtNode* ret = new AssignStmtNode(_loc, _lval, _expr);
        return (StmtNode*) ret;
    }
    else if(ctx->RETURN())
    {
        if(auto exp = ctx->exp())
        {
            ExprNode* _expr = unpackAny<ExprNode*>(visitExp(exp));

            ReturnStmtNode* ret = new ReturnStmtNode(_loc, _expr);
            return (StmtNode*) ret;
        }
        ReturnStmtNode* ret = new ReturnStmtNode(_loc);
    }
    else if(auto exp = ctx->exp())
    {
        ExprNode* _expr = unpackAny<ExprNode*>(visitExp(exp));

        ExprStmtNode* ret = new ExprStmtNode(_loc, _expr);
        return (StmtNode*) ret;
    }
    else if(auto block = ctx->block())
        return (StmtNode*) unpackAny<BlockNode*>(visitBlock(block));
    else if(ctx->IF())
    {
        auto cond = ctx->cond();
        CondExprNode* _cond = unpackAny<CondExprNode*>(visitCond(cond));

        auto thenBlock = ctx->stmt().at(0);
        StmtNode* _thenBlock = unpackAny<StmtNode*>(visitStmt(thenBlock));

        StmtNode* _elseBlock;
        if(ctx->stmt().size() == 2)
        {
            auto elseBlock = ctx->stmt().at(1);
            _elseBlock = unpackAny<StmtNode*>(visitStmt(elseBlock));
        }
        else
            _elseBlock = nullptr;

        IfStmtNode* ret = new IfStmtNode(_loc, _cond, _thenBlock, _elseBlock);
        return (StmtNode*) ret;
    }
    else if(ctx->FOR())
    {

        auto cond = ctx->cond();
        CondExprNode* _cond = unpackAny<CondExprNode*>(visitCond(cond));

        auto stmt = ctx->stmt().at(0);
        StmtNode* _stmt = unpackAny<StmtNode*>(visitStmt(stmt));

        StmtNode* _initial;
        StmtNode* _increment;
        if(auto initial = ctx->varDecl_in())
        {
            _initial = (StmtNode*) unpackAny<VarDeclNode*>(visitVarDecl_in(initial));
            
            auto increment = ctx->stmt_in().at(0);
            _increment = unpackAny<StmtNode*>(visitStmt_in(increment));
        }
        else
        {
            auto initial_ = ctx->stmt_in().at(0);
            _initial = unpackAny<StmtNode*>(visitStmt_in(initial_));

            auto increment = ctx->stmt_in().at(2);
            _increment = unpackAny<StmtNode*>(visitStmt_in(increment));
        }

        ForStmtNode* ret = new ForStmtNode(_loc, _initial, _cond, _increment, _stmt);
        return (StmtNode*) ret;
    }
    else if(ctx->WHILE())
    {
        auto cond = ctx->cond();
        CondExprNode* _cond = unpackAny<CondExprNode*>(visitCond(cond));

        auto stmt = ctx->stmt().at(0);
        StmtNode* _stmt = unpackAny<StmtNode*>(visitStmt(stmt));

        WhileStmtNode* ret = new WhileStmtNode(_loc, _cond, _stmt);
        return (StmtNode*) ret;
    }
    else if(ctx->CONTINUE())
    {
        ContinueStmtNode* ret = new ContinueStmtNode(_loc, true);
        return (StmtNode*) ret;
    }
    else if(ctx->BREAK())
    {
        BreakStmtNode* ret = new BreakStmtNode(_loc, true);
        return (StmtNode*) ret;
    }
    else
        return nullptr;
}
  
antlrcpp::Any SysYVisitor::visitExp(SysYParser::ExpContext *ctx)
{
    auto addExp = ctx->addExp();
    auto ptr = unpackAny<AddExprNode*>(visitAddExp(addExp));
    return (ExprNode*) ptr;
}
  
antlrcpp::Any SysYVisitor::visitCond(SysYParser::CondContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    auto lOrExp = ctx->lOrExp();
    LOrExprNode* _lOrExpr = unpackAny<LOrExprNode*>(visitLOrExp(lOrExp));
    if(_lOrExpr->ready())
    {
        Immediate _immediate = _lOrExpr->immediate;
        AstType _type = _lOrExpr->type;

        CondExprNode* ret = new CondExprNode(_loc, true, _immediate, _type, false, "", {}, nullptr);
        return ret;
    }

    CondExprNode* ret = new CondExprNode(_loc, true, 0, UNKNOW, false, "", {}, _lOrExpr);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitLVal(SysYParser::LValContext *ctx)
{
    auto _loc = getContextLoc(ctx);
    std::string _variable = ctx->Ident()->toString();
    std::vector<ExprNode*> _expr;
    for(auto exp : ctx->exp())
        _expr.push_back(unpackAny<ExprNode*>(visitExp(exp)));
    
    LvalNode* ret = new LvalNode(_loc, false, 0, UNKNOW, _variable, _expr);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitPrimaryExp(SysYParser::PrimaryExpContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    if(auto exp = ctx->exp())
    {
        ExprNode* _expr = unpackAny<ExprNode*>(visitExp(exp));

        if(_expr->ready())
        {
            Immediate _immediate = _expr->immediate;
            AstType _type = _expr->type;

            PrimaryExprNode* ret = new PrimaryExprNode(_loc, true, _immediate, _type, false, "", {}, (ExprNode*) nullptr);
            return ret;
        }

        PrimaryExprNode* ret = new PrimaryExprNode(_loc, true, 0, UNKNOW, false, "", {}, _expr);
        return ret;
    }
    else if(auto lval = ctx->lVal())
    {
        LvalNode* _lval = unpackAny<LvalNode*>(visitLVal(lval));

        PrimaryExprNode* ret = new PrimaryExprNode(_loc, false, 0, UNKNOW, false, "", {}, _lval);
        return ret;
    }
    else
    {
        Immediate _immediate;
        if(ctx->number()->intConst()->DEC())
            _immediate.Integer = atoi(ctx->number()->intConst()->DEC()->toString().c_str());
        else if(ctx->number()->intConst()->HEX())
            _immediate.Integer = atoi(ctx->number()->intConst()->HEX()->toString().c_str());
        else
            _immediate.Integer = atoi(ctx->number()->intConst()->OCT()->toString().c_str());
        
        AstType _type = INT;

        PrimaryExprNode* ret = new PrimaryExprNode(_loc, true, _immediate, _type, false, "", {});
        return ret;
    }
}
  
antlrcpp::Any SysYVisitor::visitNumber(SysYParser::NumberContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitUnaryExp(SysYParser::UnaryExpContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    if(auto primaryExp = ctx->primaryExp())
    {
        PrimaryExprNode* _primaryExpr = unpackAny<PrimaryExprNode*>(visitPrimaryExp(primaryExp));

        if(_primaryExpr->ready())
        {
            Immediate _immediate = _primaryExpr->immediate;
            AstType _type = _primaryExpr->type;

            UnaryExprNode* ret = new UnaryExprNode(_loc, true, _immediate, _type, false, "", {}, nullptr);
            return ret;
        }

        UnaryExprNode* ret = new UnaryExprNode(_loc, false, 0, UNKNOW, false, "", {}, _primaryExpr);
        return ret;
    }
    else if(ctx->Ident())
    {
        std::string _funcName = ctx->Ident()->toString();
        std::vector<ExprNode*> _funcParamList;
        if(auto funcRParams = ctx->funcRParams())
            for(auto exp : funcRParams->exp())
                _funcParamList.push_back(unpackAny<ExprNode*>(visitExp(exp)));
        
        UnaryExprNode* ret = new UnaryExprNode(_loc, false, 0, UNKNOW, false, "", {}, _funcName, _funcParamList);
        return ret;
    }
    else
    {
        auto unaryExp = ctx->unaryExp();
        UnaryExprNode* _unaryExpr = unpackAny<UnaryExprNode*>(visitUnaryExp(unaryExp));

        if(_unaryExpr->ready())
        {
            // TODO Add the other type    
            Immediate _immediate;
            if(ctx->unaryOp()->ADD())
                _immediate.Integer = + _unaryExpr->immediate.Integer;
            else if(ctx->unaryOp()->SUB())
                _immediate.Integer = - _unaryExpr->immediate.Integer;
            else
                _immediate.Integer = ! _unaryExpr->immediate.Integer;
            
            AstType _type = _unaryExpr->type;

            UnaryExprNode* ret = new UnaryExprNode(_loc, true, _immediate, _type, false, "", {}, UOP_NONE, nullptr);
            return ret;
        }
        UnaryOp _op;
        if(ctx->unaryOp()->ADD())
            _op = UOP_ADD;
        else if(ctx->unaryOp()->SUB())
            _op = UOP_SUB;
        else
            _op = UOP_NOT;

        UnaryExprNode* ret = new UnaryExprNode(_loc, false, 0, UNKNOW, false, "", {}, _op, _unaryExpr);
        return ret;
    }
}
  
antlrcpp::Any SysYVisitor::visitUnaryOp(SysYParser::UnaryOpContext *ctx) {}
  
antlrcpp::Any SysYVisitor::visitFuncRParams(SysYParser::FuncRParamsContext *ctx) {}
  
antlrcpp::Any SysYVisitor::visitMulExp(SysYParser::MulExpContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    if(auto mulExp = ctx->mulExp())
    {
        auto unaryExp = ctx->unaryExp();
        UnaryExprNode* _unaryExpr = unpackAny<UnaryExprNode*>(visitUnaryExp(unaryExp));

        MulExprNode* _mulExpr = unpackAny<MulExprNode*>(visitMulExp(mulExp));

        if(_unaryExpr->ready() && _mulExpr->ready())
        {
            // TODO Add the other type    
            Immediate _immediate;
            if(ctx->MUL())
                _immediate.Integer = _unaryExpr->immediate.Integer * _mulExpr->immediate.Integer;
            else if(ctx->DIV())
                _immediate.Integer = _unaryExpr->immediate.Integer / _mulExpr->immediate.Integer;
            else
                _immediate.Integer = _unaryExpr->immediate.Integer % _mulExpr->immediate.Integer;
            
            AstType _type = _unaryExpr->type;

            MulExprNode* ret = new MulExprNode(_loc, true, _immediate, _type, false, "", {}, nullptr, nullptr, BOP_NONE);
            return ret;
        }

        MulExprNode* ret;
        if(ctx->MUL())
            ret = new MulExprNode(_loc, false, 0, UNKNOW, false, "", {}, _unaryExpr, _mulExpr, BOP_MUL);
        else if(ctx->DIV())
            ret = new MulExprNode(_loc, false, 0, UNKNOW, false, "", {}, _unaryExpr, _mulExpr, BOP_DIV);
        else
            ret = new MulExprNode(_loc, false, 0, UNKNOW, false, "", {}, _unaryExpr, _mulExpr, BOP_MOD);
        
        return ret;
    }

    auto unaryExp = ctx->unaryExp();
    UnaryExprNode* _unaryExpr = unpackAny<UnaryExprNode*>(visitUnaryExp(unaryExp));

    if(_unaryExpr->ready())
    {
        Immediate _immediate = _unaryExpr->immediate;
        AstType _type = _unaryExpr->type;

        MulExprNode* ret = new MulExprNode(_loc, true, _immediate, _type, false, "", {}, nullptr);
        return ret;
    }

    MulExprNode* ret = new MulExprNode(_loc, false, 0, UNKNOW, false, "", {}, _unaryExpr);
    return ret;

}
  
antlrcpp::Any SysYVisitor::visitAddExp(SysYParser::AddExpContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    if(auto addExp = ctx->addExp())
    {
        auto mulExp = ctx->mulExp();
        MulExprNode* _mulExpr = unpackAny<MulExprNode*>(visitMulExp(mulExp));

        AddExprNode* _addExpr = unpackAny<AddExprNode*>(visitAddExp(addExp));

        if(_mulExpr->ready() && _addExpr->ready())
        {
            // TODO Add the other type    
            Immediate _immediate;
            if(ctx->ADD())
                _immediate.Integer = _mulExpr->immediate.Integer + _addExpr->immediate.Integer;
            else
                _immediate.Integer = _mulExpr->immediate.Integer - _addExpr->immediate.Integer;
            
            AstType _type = _mulExpr->type;

            AddExprNode* ret = new AddExprNode(_loc, true, _immediate, _type, false, "", {}, nullptr, nullptr, BOP_NONE);
            return ret;
        }
        AddExprNode* ret;
        if(ctx->ADD())
            ret = new AddExprNode(_loc, false, 0, UNKNOW, false, "", {}, _mulExpr, _addExpr, BOP_ADD);
        else
            ret = new AddExprNode(_loc, false, 0, UNKNOW, false, "", {}, _mulExpr, _addExpr, BOP_SUB);
        return ret;
    }
    auto mulExp = ctx->mulExp();
    MulExprNode* _mulExpr = unpackAny<MulExprNode*>(visitMulExp(mulExp));

    if(_mulExpr->ready())
    {
        Immediate _immediate = _mulExpr->immediate;
        AstType _type = _mulExpr->type;

        AddExprNode* ret = new AddExprNode(_loc, true, _immediate, _type, false, "", {}, nullptr);
        return ret;
    }

    AddExprNode* ret = new AddExprNode(_loc, false, 0, UNKNOW, false, "", {}, _mulExpr);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitRelExp(SysYParser::RelExpContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    if(auto relExp = ctx->relExp())
    {
        auto addExp = ctx->addExp();
        AddExprNode* _addExpr = unpackAny<AddExprNode*>(visitAddExp(addExp));
        
        RelExprNode* _relExpr = unpackAny<RelExprNode*>(visitRelExp(relExp));
        
        if(_relExpr->ready() && _addExpr->ready())
        {
            // TODO Add the other type    
            Immediate _immdiate;
            if(ctx->LES())
                _immdiate.Integer = _relExpr->immediate.Integer < _addExpr->immediate.Integer;
            else if(ctx->GRT())
                _immdiate.Integer = _relExpr->immediate.Integer > _addExpr->immediate.Integer;
            else if(ctx->LEQ())
                _immdiate.Integer = _relExpr->immediate.Integer <= _addExpr->immediate.Integer;
            else
                _immdiate.Integer = _relExpr->immediate.Integer >= _addExpr->immediate.Integer;
            
            AstType _type = _addExpr->type;

            RelExprNode* ret = new RelExprNode(_loc, true, _immdiate, _type, false, "", {}, nullptr, nullptr, ROP_NONE);
            return ret;
        }

        RelExprNode* ret;
        if(ctx->LES())
            ret = new RelExprNode(_loc, false, 0, UNKNOW, false, "", {}, _addExpr, _relExpr, ROP_LES);
        else if(ctx->GRT())
            ret = new RelExprNode(_loc, false, 0, UNKNOW, false, "", {}, _addExpr, _relExpr, ROP_GRT);
        else if(ctx->LEQ())
            ret = new RelExprNode(_loc, false, 0, UNKNOW, false, "", {}, _addExpr, _relExpr, ROP_LEQ);
        else
            ret = new RelExprNode(_loc, false, 0, UNKNOW, false, "", {}, _addExpr, _relExpr, ROP_GEQ);
        
        return ret;
    }
    auto addExp = ctx->addExp();
    AddExprNode* _addExpr = unpackAny<AddExprNode*>(visitAddExp(addExp));

    if(_addExpr->ready())
    {
        Immediate _immediate = _addExpr->immediate;
        AstType _type = _addExpr->type;

        RelExprNode* ret = new RelExprNode(_loc, true, _immediate, _type, false, "", {}, nullptr);
        return ret;
    }
    
    RelExprNode* ret = new RelExprNode(_loc, false, 0, UNKNOW, false, "", {}, _addExpr);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitEqExp(SysYParser::EqExpContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    if(auto eqExp = ctx->eqExp())
    {
        auto relExp = ctx->relExp();
        RelExprNode* _relExpr = unpackAny<RelExprNode*>(visitRelExp(relExp));

        EqExprNode* _eqExpr = unpackAny<EqExprNode*>(visitEqExp(eqExp));

        if(_relExpr->ready() && _eqExpr->ready())
        {
            // TODO Add the other type    
            Immediate _immdiate;
            AstType _type = _eqExpr->type;

            if(ctx->EQL())
                _immdiate.Integer = _relExpr->immediate.Integer == _eqExpr->immediate.Integer;
            else
                _immdiate.Integer = _relExpr->immediate.Integer != _eqExpr->immediate.Integer;

            EqExprNode* ret = new EqExprNode(_loc, true, _immdiate, _type, false, "", {}, nullptr, nullptr, ROP_NONE);
            return ret;
        }

        EqExprNode* ret;
        if(ctx->EQL())
            ret = new EqExprNode(_loc, false, 0, UNKNOW, false, "", {}, _relExpr, _eqExpr, ROP_EQL);
        else
            ret = new EqExprNode(_loc, false, 0, UNKNOW, false, "", {}, _relExpr, _eqExpr, ROP_NEQ);
        return ret;
    }

    auto relExp = ctx->relExp();
    RelExprNode* _relExpr = unpackAny<RelExprNode*>(visitRelExp(relExp));

    if(_relExpr->ready())
    {
        Immediate _immediate = _relExpr->immediate;
        AstType _type = _relExpr->type;

        EqExprNode* ret = new EqExprNode(_loc, true, _immediate, _type, false, "", {}, nullptr);
        return ret;
    }
    EqExprNode* ret = new EqExprNode(_loc, false, 0, UNKNOW, false, "", {}, _relExpr);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitLAndExp(SysYParser::LAndExpContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    if(auto lAndExp = ctx->lAndExp())
    {
        auto eqExp = ctx->eqExp();
        EqExprNode* _eqExpr = unpackAny<EqExprNode*>(visitEqExp(eqExp));

        LAndExprNode* _lAndExpr = unpackAny<LAndExprNode*>(visitLAndExp(lAndExp));

        if(_eqExpr->ready() && _lAndExpr->ready())
        {
            // TODO Add the other type    
            Immediate _immdiate;
            _immdiate.Integer = _eqExpr->immediate.Integer && _lAndExpr->immediate.Integer;

            AstType _type = _eqExpr->type;
            LAndExprNode* ret = new LAndExprNode(_loc, true, _immdiate, _type, false, "", {}, nullptr, nullptr);
            return ret;
        }

        LAndExprNode* ret = new LAndExprNode(_loc, false, 0, UNKNOW, false, "", {}, _eqExpr, _lAndExpr);
        return ret;
    }

    auto eqExp = ctx->eqExp();
    EqExprNode* _eqExpr = unpackAny<EqExprNode*>(visitEqExp(eqExp));

    if(_eqExpr->ready())
    {
        Immediate _immediate = _eqExpr->immediate;
        AstType _type = _eqExpr->type;

        LAndExprNode* ret = new LAndExprNode(_loc, true, _immediate, _type, false, "", {}, nullptr);
        return ret;
    }

    LAndExprNode* ret = new LAndExprNode(_loc, false, 0, UNKNOW, false, "", {}, _eqExpr);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitLOrExp(SysYParser::LOrExpContext *ctx)
{
    auto _loc = getContextLoc(ctx);

    if(auto lOrExp = ctx->lOrExp())
    {
        auto lAndExp = ctx->lAndExp();
        LAndExprNode* _lAndExpr = unpackAny<LAndExprNode*>(visitLAndExp(lAndExp));

        LOrExprNode* _lOrExpr = unpackAny<LOrExprNode*>(visitLOrExp(lOrExp));

        if(_lOrExpr->ready() && _lAndExpr->ready())
        {
            // TODO Add the other type    
            Immediate _immdiate;
            _immdiate.Integer = _lAndExpr->immediate.Integer || _lOrExpr->immediate.Integer;

            AstType _type = _lAndExpr->type;
            LOrExprNode* ret = new LOrExprNode(_loc, true, _immdiate, _type, false, "", {}, nullptr, nullptr);
            return ret;
        }
        LOrExprNode* ret = new LOrExprNode(_loc, false, 0, UNKNOW, false, "", {}, _lAndExpr, _lOrExpr);
        return ret;
    }
    auto lAndExp = ctx->lAndExp();
    LAndExprNode* _lAndExpr = unpackAny<LAndExprNode*>(visitLAndExp(lAndExp));

    if(_lAndExpr->ready())
    {
        Immediate _immdiate = _lAndExpr->immediate;
        AstType _type = _lAndExpr->type;

        LOrExprNode* ret = new LOrExprNode(_loc, true, _immdiate, _type, false, "", {}, nullptr);
        return ret;
    }
    LOrExprNode* ret = new LOrExprNode(_loc, false, 0, UNKNOW, false, "", {}, _lAndExpr);
    return ret;
}
  
antlrcpp::Any SysYVisitor::visitConstExp(SysYParser::ConstExpContext *ctx)
{
    auto addExp = ctx->addExp();
    auto ptr = unpackAny<AddExprNode*>(visitAddExp(addExp));
    return (ExprNode*) ptr;
}
  
antlrcpp::Any SysYVisitor::visitIntConst(SysYParser::IntConstContext *ctx){}

} // namespace sysy
#include "sysy/Frontend/SysYVisitor.h"
#include "sysy/Support/common.h"

namespace sysy
{
void SysYVisitor::printCst(antlr4::ParserRuleContext *ctx, int depth)
{
    for(int i = 1;i < depth; i++)
        std::cout << "|\t";
    if(ctx->depth() != depth)
    {
        std::cout <<"|--> " << "\033[32m<\033[m" << ctx->toStringTree() << "\033[32m>\033[m" << std::endl;
        return;
    }
    size_t num = ctx->getRuleIndex();
    std::cout << "|--> " << "\033[36m[\033[m" << parser.getRuleNames().at(num) << "\033[36m]\033[m" << std::endl;
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

antlrcpp::Any SysYVisitor::visitCompUnit(SysYParser::CompUnitContext *ctx){}

antlrcpp::Any SysYVisitor::visitDecl(SysYParser::DeclContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitConstDecl(SysYParser::ConstDeclContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitBType(SysYParser::BTypeContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitConstDef(SysYParser::ConstDefContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitConstInitVal(SysYParser::ConstInitValContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitVarDecl(SysYParser::VarDeclContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitVarDecl_in(SysYParser::VarDecl_inContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitVarDef(SysYParser::VarDefContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitInitVal(SysYParser::InitValContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitFuncDef(SysYParser::FuncDefContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitFuncType(SysYParser::FuncTypeContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitFuncFParams(SysYParser::FuncFParamsContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitFuncFParam(SysYParser::FuncFParamContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitBlock(SysYParser::BlockContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitBlockItem(SysYParser::BlockItemContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitStmt_in(SysYParser::Stmt_inContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitStmt(SysYParser::StmtContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitExp(SysYParser::ExpContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitCond(SysYParser::CondContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitLVal(SysYParser::LValContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitPrimaryExp(SysYParser::PrimaryExpContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitNumber(SysYParser::NumberContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitUnaryExp(SysYParser::UnaryExpContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitUnaryOp(SysYParser::UnaryOpContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitFuncRParams(SysYParser::FuncRParamsContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitMulExp(SysYParser::MulExpContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitAddExp(SysYParser::AddExpContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitRelExp(SysYParser::RelExpContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitEqExp(SysYParser::EqExpContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitLAndExp(SysYParser::LAndExpContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitLOrExp(SysYParser::LOrExpContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitConstExp(SysYParser::ConstExpContext *ctx){}
  
antlrcpp::Any SysYVisitor::visitIntConst(SysYParser::IntConstContext *ctx){}

} // namespace sysy
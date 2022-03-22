#ifndef SYSY_SYSYVISITOR_H
#define SYSY_SYSYVISITOR_H

#include "sysy/Frontend/SysYParserBaseVisitor.h"

namespace sysy
{
class SysYVisitor : public SysYParserBaseVisitor
{
protected:
    SysYParser& parser;
public:
    SysYVisitor(SysYParser& _parser) : parser(_parser) {}

    antlrcpp::Any visitCompUnit(SysYParser::CompUnitContext *ctx) override;

    virtual antlrcpp::Any visitCompUnit(SysYParser::CompUnitContext *ctx) override;

    virtual antlrcpp::Any visitDecl(SysYParser::DeclContext *ctx) override;
  
    virtual antlrcpp::Any visitConstDecl(SysYParser::ConstDeclContext *ctx) override;
  
    virtual antlrcpp::Any visitBType(SysYParser::BTypeContext *ctx) override;
  
    virtual antlrcpp::Any visitConstDef(SysYParser::ConstDefContext *ctx) override;
  
    virtual antlrcpp::Any visitConstInitVal(SysYParser::ConstInitValContext *ctx) override;
  
    virtual antlrcpp::Any visitVarDecl(SysYParser::VarDeclContext *ctx) override;
  
    virtual antlrcpp::Any visitVarDecl_in(SysYParser::VarDecl_inContext *ctx) override;
  
    virtual antlrcpp::Any visitVarDef(SysYParser::VarDefContext *ctx) override;
  
    virtual antlrcpp::Any visitInitVal(SysYParser::InitValContext *ctx) override;
  
    virtual antlrcpp::Any visitFuncDef(SysYParser::FuncDefContext *ctx) override;
  
    virtual antlrcpp::Any visitFuncType(SysYParser::FuncTypeContext *ctx) override;
  
    virtual antlrcpp::Any visitFuncFParams(SysYParser::FuncFParamsContext *ctx) override;
  
    virtual antlrcpp::Any visitFuncFParam(SysYParser::FuncFParamContext *ctx) override;
  
    virtual antlrcpp::Any visitBlock(SysYParser::BlockContext *ctx) override;
  
    virtual antlrcpp::Any visitBlockItem(SysYParser::BlockItemContext *ctx) override;
  
    virtual antlrcpp::Any visitStmt_in(SysYParser::Stmt_inContext *ctx) override;
  
    virtual antlrcpp::Any visitStmt(SysYParser::StmtContext *ctx) override;
  
    virtual antlrcpp::Any visitExp(SysYParser::ExpContext *ctx) override;
  
    virtual antlrcpp::Any visitCond(SysYParser::CondContext *ctx) override;
  
    virtual antlrcpp::Any visitLVal(SysYParser::LValContext *ctx) override;
  
    virtual antlrcpp::Any visitPrimaryExp(SysYParser::PrimaryExpContext *ctx) override;
  
    virtual antlrcpp::Any visitNumber(SysYParser::NumberContext *ctx) override;
  
    virtual antlrcpp::Any visitUnaryExp(SysYParser::UnaryExpContext *ctx) override;
  
    virtual antlrcpp::Any visitUnaryOp(SysYParser::UnaryOpContext *ctx) override;
  
    virtual antlrcpp::Any visitFuncRParams(SysYParser::FuncRParamsContext *ctx) override;
  
    virtual antlrcpp::Any visitMulExp(SysYParser::MulExpContext *ctx) override;
  
    virtual antlrcpp::Any visitAddExp(SysYParser::AddExpContext *ctx) override;
  
    virtual antlrcpp::Any visitRelExp(SysYParser::RelExpContext *ctx) override;
  
    virtual antlrcpp::Any visitEqExp(SysYParser::EqExpContext *ctx) override;
  
    virtual antlrcpp::Any visitLAndExp(SysYParser::LAndExpContext *ctx) override;
  
    virtual antlrcpp::Any visitLOrExp(SysYParser::LOrExpContext *ctx) override;
  
    virtual antlrcpp::Any visitConstExp(SysYParser::ConstExpContext *ctx) override;
  
    virtual antlrcpp::Any visitIntConst(SysYParser::IntConstContext *ctx) override ;

}; // class SysYVisitor



} // sysy

#endif
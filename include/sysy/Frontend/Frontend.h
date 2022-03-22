#ifndef SYSY_FRONTENDMAIN_H
#define SYSY_FRONTENDMAIN_H

#include <string>
#include "sysy/Frontend/SysYLexer.h"
#include "sysy/Frontend/SysYParser.h"
#include "sysy/Frontend/SysYParserBaseVisitor.h"
namespace sysy
{

class MyVisitor : public SysYParserBaseVisitor 
{
 public:
    void printOpt(SysYParser::CompUnitContext* ctx);
};

int FrontendMain(const std::string& filename);


}
#endif
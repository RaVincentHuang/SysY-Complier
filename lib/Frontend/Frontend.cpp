#include "antlr4-runtime/ANTLRInputStream.h"
#include "antlr4-runtime/ANTLRInputStream.h"
#include "antlr4-runtime/tree/ParseTreeWalker.h"
#include "sysy/Frontend/Frontend.h"
#include "sysy/Frontend/SysYVisitor.h"
#include "sysy/Support/debug.h"
#include "sysy/Support/common.h"
#include <iostream>
#include <fstream>
#include <sstream>

namespace sysy
{

int FrontendMain(const std::string& filename, const std::string& Gen) 
{
    std::ifstream infile(filename);
    std::stringstream buf;
    buf << infile.rdbuf();
    std::string str(buf.str());
    antlr4::ANTLRInputStream inputStream(str);
    SysYLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    SysYParser parser(&tokens);
    SysYVisitor visitor(parser);
    if(Gen == "cst")
        visitor.printCst(parser.compUnit(), 1);
    else if(Gen == "src")
        visitor.printSrc(parser.compUnit());
    else
        TODO();
    return 0;
}

} // namespace sysy


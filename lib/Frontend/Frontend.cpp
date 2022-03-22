#include "antlr4-runtime/ANTLRInputStream.h"
#include "antlr4-runtime/ANTLRInputStream.h"
#include "antlr4-runtime/tree/ParseTreeWalker.h"
#include "sysy/Frontend/Frontend.h"
#include <iostream>
#include <fstream>
#include <sstream>

namespace sysy
{

void MyVisitor::printOpt(SysYParser::CompUnitContext* ctx)
{
    auto vec = ctx->children;
        std::cout << vec.size() << std::endl;
        for(auto iter: vec)
            std::cout<< iter->toString() << std::endl << iter->getText() << std::endl;
}

int FrontendMain(const std::string& filename) 
{
    std::ifstream infile(filename);
    std::stringstream buf;
    buf << infile.rdbuf();
    std::string str(buf.str());
    antlr4::ANTLRInputStream inputStream(str);
    SysYLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    SysYParser parser(&tokens);
    MyVisitor visitor;
    visitor.printOpt(parser.compUnit());
    return 0;
}

} // namespace sysy


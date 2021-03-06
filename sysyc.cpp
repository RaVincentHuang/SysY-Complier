/*
 * @Author: Zixiao Huang
 * @Description: 
 * @Date: 2022-03-11 08:46:57
 * @LastEditTime: 2022-03-11 09:48:58
 * @FilePath: /sys-y-compiler/sysyc.cpp
 * @github-homepage: https://github.com/RaVincentHuang
 * @gitee-homepage: https://gitee.com/huang-zixiao
 * @e-mail: huangzixiaopaz@nudt.edu.cn
 */
#include <string>
#include <iostream>

#include "sysy/Support/CommandLine.h"
#include "sysy/Frontend/Frontend.h"

using namespace llvm;
using namespace sysy;

cl::opt<std::string> InputFilename(cl::Positional, cl::desc("<input-sysy-filename>"),
                                cl::Required);

cl::opt<std::string> OutputFilename("o", cl::desc("Specify output filename"), 
                                cl::value_desc("filename"), cl::init("a"));

cl::opt<std::string> Gen("gen", cl::Optional,
                                  cl::desc("dump intermediate result after specified phase."),
                                  cl::value_desc("src|ast|cst"));

cl::opt<bool> Src("src", cl::desc("print the source code."));
cl::opt<bool> Ast("ast", cl::desc("show the ast of the sysy file"));
cl::opt<bool> Mlir("mlir", cl::desc("show the mlir file of the sysy file"));

int main(int argc, const char* argv[])
{
    cl::ParseCommandLineOptions(argc, argv);
    std::cout << InputFilename << std::endl;
    FrontendMain(InputFilename, Gen);
    return 0;
}
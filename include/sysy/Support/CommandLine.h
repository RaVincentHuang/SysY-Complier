/*
 * @Author: Zixiao Huang
 * @Description: 
 * @Date: 2022-03-11 09:07:21
 * @LastEditTime: 2022-03-11 09:12:20
 * @FilePath: /sys-y-compiler/include/sysy/Support/CommandLine.h
 * @github-homepage: https://github.com/RaVincentHuang
 * @gitee-homepage: https://gitee.com/huang-zixiao
 * @e-mail: huangzixiaopaz@nudt.edu.cn
 */
#ifndef SYSY_COMMANDLINE_H
#define SYSY_COMMANDLINE_H

#include "llvm/Support/CommandLine.h"

namespace sysy {
    extern llvm::cl::OptionCategory SysyOptCategory;
}

#endif
#ifndef SYSYCONTEXT_H
#define SYSYCONTEXT_H

#include "llvm/Support/SourceMgr.h"

namespace sysy
{
namespace ast
{
class SysyContext  final
{
private:
    llvm::SourceMgr sourceMgr;

public:
    llvm::SourceMgr* getSourceMgr() { return &sourceMgr; }

    SysyContext(const SysyContext&) = delete;
    SysyContext& operator=(const SysyContext&) = delete;

    static SysyContext& getInstance() 
    {
        static SysyContext soleInstance;
        return soleInstance;
    }

private: // Use for our default obj
    SysyContext();
    ~SysyContext();
};

}
}

#endif
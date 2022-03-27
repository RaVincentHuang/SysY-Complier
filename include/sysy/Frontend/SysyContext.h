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

    // /// A map of AST modules to the corresponding interfaces and symbol tables.
    // InterfaceCenter interfaces;

    // // maybe it is not a good idea to put the symbol table here since it is always
    // // dynamically constructed and destroyed when walking throught the AST.
    // SymbolTableCenter symbolTables;

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
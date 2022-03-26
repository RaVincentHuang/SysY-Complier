#include "sysy/Frontend/Location.h"
#include "sysy/Frontend/SysyContext.h"

namespace sysy
{
namespace ast
{

int Location::getLine() const
{
    auto sourceMgr = SysyContext::getInstance().getSourceMgr();
    return sourceMgr->getLineAndColumn(range.Start).first;
}

int Location::getCol() const
{
    auto sourceMgr = SysyContext::getInstance().getSourceMgr();
    return sourceMgr->getLineAndColumn(range.Start).second;
}

llvm::StringRef Location::getText() const
{
    if(range.Start.getPointer() < range.End.getPointer())
        return llvm::StringRef();
    return llvm::StringRef(range.Start.getPointer(), // The C-Type ptr
                        range.End.getPointer() - range.Start.getPointer());
}

std::string Location::getShortSignature() const
{
    return std::to_string(this->getLine()) + ", " + std::to_string(this->getCol());
}

std::string Location::getSignature() const
{
    return file.str() + ":" + std::to_string(this->getLine()) + ":" + std::to_string(this->getCol());
}

}
}

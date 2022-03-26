#ifndef _LOCATION_H_
#define _LOCATION_H_

#include "llvm/ADT/StringRef.h"
#include "llvm/Support/SMLoc.h"

namespace sysy {
namespace ast {

class Location {
  private:
    llvm::StringRef file;
    llvm::SMRange range;

  public:
    Location(llvm::SMRange _range = llvm::None)
        : range(_range) {}

    Location(llvm::StringRef _file, llvm::SMRange _range = llvm::None)
        : file(_file)
        , range(_range) {}

    Location(const Location& _loc) = default;

    llvm::StringRef getfile() const { return file; } 

    llvm::SMLoc getStartLoc() const { return range.Start; }

    llvm::SMRange getRange() const { return range; }

    int getLine() const;
    int getCol() const;

    llvm::StringRef getText() const;

    std::string getShortSignature() const;

    std::string getSignature() const;
};

}  // namespace ast
}  // namespace sysy
#endif
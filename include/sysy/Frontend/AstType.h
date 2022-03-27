#ifndef SYSY_ASTTYPE_H
#define SYSY_ASTTYPE_H

#include "sysy/Frontend/Location.h"

namespace sysy
{
namespace ast
{

enum AstType
{
    VOID = 0,
    INT,
    DOUBLE,
    STRING,
    UNKNOW
};

union Immediate
{  
    int Integer;
    double DoubleFloat;
    Immediate() {}
    Immediate(int x) : Integer(x) {}
    Immediate(double x) : DoubleFloat(x) {}
};

// class AstType
// {
// public:
//     enum BasicType
//     {
//         SYSY_int = 0,
//         SYSY_void
//     };

// protected:
//     BasicType basicType;

// public:
//     Location loc;
//     AstType(BasicType _basicType, Location _loc)
//         : basicType(_basicType),
//         loc(_loc) {}
//     virtual ~AstType() {}

//     const BasicType& getBasicType() const { return basicType; }

//     virtual bool sameType(AstType* type) { return type->basicType == basicType; }

//     virtual bool operator==(const AstType& type) { return type.basicType == basicType; }
// };

// class FuncType : AstType
// {

// };
    
} // namespace ast

} // namespace sysy



#endif
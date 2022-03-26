#ifndef SYSY_SYSYOP_H
#define SYSY_SYSYOP_H

namespace sysy
{
namespace ast
{
enum BinaryOp {ADD = 0, SUB, MUL, DIV, MOD, NONE};

enum UnaryOp {ADD = 0, SUB, NOT, NONE};

enum RelationOp {EQL = 0, NEQ, LES, GRT, LEQ, GEQ, NONE};
} // namespace ast

} // namespace sysy

#endif
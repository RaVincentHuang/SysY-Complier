#ifndef SYSY_SYSYOP_H
#define SYSY_SYSYOP_H

namespace sysy
{
namespace ast
{
enum BinaryOp {BOP_ADD = 0, BOP_SUB, BOP_MUL, BOP_DIV, BOP_MOD, BOP_NONE};

enum UnaryOp {UOP_ADD = 0, UOP_SUB, UOP_NOT, UOP_NONE};

enum RelationOp {ROP_EQL = 0, ROP_NEQ, ROP_LES, ROP_GRT, ROP_LEQ, ROP_GEQ, ROP_NONE};
} // namespace ast

} // namespace sysy

#endif
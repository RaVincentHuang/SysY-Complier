#include "sysy/Frontend/AstTramsform.h"

namespace sysy  
{
namespace ast
{

void variableDelivery(ExprNode* expr)
{
    if(expr->children.size() != 1)
        return;
    
    if(((ExprNode*)expr->children[0])->cut())
    {
        expr->is_var = true;
        expr->variable = ((ExprNode*)expr->children[0])->variable;
        expr->children.pop_back();
    }
    variableDelivery((ExprNode*)expr->children[0]);
}   

void removeDeadStmts(BlockNode* block)
{
    bool dead = false;
    for(auto item : block->blockItems)
    {
        if(item->getKind() == AstNode::AST_breakStmt || item->getKind() == AstNode::AST_continueStmt || item->getKind() == AstNode::AST_returnStmt)
            dead = true;
        else if(dead)
        {
              
        }
    }
    
}

void optimizeAst(CompUnitNode* ast)
{

}
} // namespace ast

} // namespace sysy

parser grammar SysYParser;

options { tokenVocab=SysYLexer;}

compUnit:   decl compUnit_
        |   funcDef compUnit_
        ;

compUnit_:  ((decl compUnit_) 
        | (funcDef compUnit_))
        ?
        ;

decl    :   constDecl
        |   varDecl
        ;

constDecl:  CONST bType constDef (COMMA constDef)* SEMI;

bType   :   INT;

constDef:   Ident (LSBRA constExp RSBRA)* AGN constInitVal
        ;

constInitVal:   constExp
        |       LCBRA (constInitVal (COMMA constInitVal)*)? RCBRA
        ;

varDecl :   bType varDef (COMMA varDef)* SEMI;

varDef  :   Ident (LSBRA constExp RSBRA)*
        |   Ident (LSBRA constExp RSBRA)* AGN initVal
        ;

initVal :   exp 
        |   LCBRA (initVal LCBRA COMMA initVal RCBRA)? RCBRA
        ;

funcDef :   funcType Ident LBRA funcFParams? RBRA block;

funcType:   VOID
        |   INT
        ;

funcFParams:funcFParam (COMMA funcFParam)*;

funcFParam: bType Ident (LSBRA RSBRA (LSBRA exp RSBRA)*)?;

block   :   LCBRA blockItem* RCBRA;

blockItem:  decl 
        |   stmt
        ;

stmt    :   lVal AGN exp SEMI 
        |   exp? SEMI 
        |   block
        |   IF LBRA cond RBRA stmt (ELSE stmt)?
        |   WHILE LBRA cond RBRA stmt
        |   BREAK SEMI 
        |   CONTINUE SEMI
        |   RETURN exp? SEMI
        ;

exp     :   addExp;

cond    :   lOrExp;

lVal    :   Ident (LSBRA exp RSBRA)*;

primaryExp: LBRA exp RBRA 
        | lVal 
        | number
        ;

number  :   intConst;

unaryExp:   primaryExp 
        |   Ident LBRA funcRParams? RBRA
        |   unaryOp unaryExp
        ;

unaryOp :   ADD 
        |   SUB 
        |   NOT
        ;

funcRParams:exp (COMMA exp)*;

mulExp  :   unaryExp 
        |   mulExp (MUL|DIV|MOD) unaryExp
        ;

addExp  :   mulExp 
        |   addExp (ADD|SUB) mulExp
        ;

relExp  :   addExp 
        |   relExp (LES|GRT|LEQ|GEQ) addExp
        ;

eqExp   :   relExp 
        |   eqExp (EQL|NEQ) relExp
        ;

lAndExp :   eqExp 
        |   lAndExp AND eqExp
        ;

lOrExp  :   lAndExp 
        |   lOrExp OR lAndExp
        ;

constExp:   addExp;

intConst:   DEC
        |   OCT
        |   HEX
        ;

lexer grammar SysYLexer;

// options { language = cpp; }

// type
INT :   'int';
CONST:  'const';
VOID:   'void';
// stat
IF  :   'if';
ELSE:   'else';
WHILE:  'while';
FOR:    'for';
BREAK:  'break';
CONTINUE:   'continue';
RETURN: 'return';
//
AGN :   '=';
// arithmetic
ADD :   '+';
SUB :   '-';
MUL :   '*';
DIV :   '/';
MOD :   '%';
// relation
EQL :   '==';
NEQ :   '!=';
LES :   '<';
GRT :   '>';
LEQ :   '<=';
GEQ :   '>=';
// logic
NOT :   '!';
AND :   '&&';
OR  :   '||';

Ident:  [a-zA-Z_][a-zA-Z0-9_]*;

DEC:    [1-9][0-9]*;
OCT :   '0'[0-7]*;
HEX :   ('0x'|'0X')[0-9a-fA-F]+;

COMMA:  ',';
SEMI:   ';';
LBRA:   '(';
RBRA:   ')';
LSBRA:  '[';
RSBRA:  ']';
LCBRA:  '{';
RCBRA:  '}';

WS  :   [ \t\n\r]+ ->  skip;
SL_COMMENT  :   '//' .*? '\n' -> skip;
COMMENT     :   '/*' .*? '*/' -> skip;

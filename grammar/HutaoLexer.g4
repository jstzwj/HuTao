lexer grammar HutaoLexer;


KW_AS: 'as';
KW_BREAK: 'break';
KW_CONST: 'const';
KW_CONTINUE: 'continue';
KW_ELSE: 'else';
KW_ENUM: 'enum';
KW_EXTERN: 'extern';
KW_FALSE: 'false';
KW_FN: 'fn';
KW_FOR: 'for';
KW_IF: 'if';
KW_IN: 'in';
KW_LET: 'let';
KW_LOOP: 'loop';
KW_MATCH: 'match';
KW_MOD: 'mod';
KW_MOVE: 'move';
KW_MUT: 'mut';
KW_PUB: 'pub';
KW_REF: 'ref';
KW_RETURN: 'return';
KW_SELFVALUE: 'self';
KW_SELFTYPE: 'Self';
KW_STATIC: 'static';
KW_STRUCT: 'struct';
KW_SUPER: 'super';
KW_TRAIT: 'trait';
KW_TRUE: 'true';
KW_TYPE: 'type';
KW_UNSAFE: 'unsafe';
KW_USE: 'use';
KW_WHERE: 'where';
KW_WHILE: 'while';

PASS: 'pass';
DOT : '.';
ELLIPSIS : '...';
STAR : '*';
OPEN_PAREN : '(';
CLOSE_PAREN : ')';
COMMA : ',';
COLON : ':';
SEMI_COLON : ';';
POWER : '**';
ASSIGN : '=';
OPEN_BRACK : '[';
CLOSE_BRACK : ']';
OR_OP : '|';
XOR : '^';
AND_OP : '&';
LEFT_SHIFT : '<<';
RIGHT_SHIFT : '>>';
ADD : '+';
MINUS : '-';
DIV : '/';
MOD : '%';
IDIV : '//';
NOT_OP : '~';
OPEN_BRACE : '{';
CLOSE_BRACE : '}';
LESS_THAN : '<';
GREATER_THAN : '>';
EQUALS : '==';
GT_EQ : '>=';
LT_EQ : '<=';
NOT_EQ_1 : '<>';
NOT_EQ_2 : '!=';
AT : '@';
ARROW : '->';
ADD_ASSIGN : '+=';
SUB_ASSIGN : '-=';
MULT_ASSIGN : '*=';
AT_ASSIGN : '@=';
DIV_ASSIGN : '/=';
MOD_ASSIGN : '%=';
AND_ASSIGN : '&=';
OR_ASSIGN : '|=';
XOR_ASSIGN : '^=';
LEFT_SHIFT_ASSIGN : '<<=';
RIGHT_SHIFT_ASSIGN : '>>=';
POWER_ASSIGN : '**=';
IDIV_ASSIGN : '//=';


NEWLINE
 : ( '\r'? '\n' | '\r' | '\f' ) SPACES?
 ;

fragment SPACES
 : [ \t]+
 ;

LINE_COMMENT: ('//' (~[/!] | '//') ~[\r\n]* | '//') -> channel (HIDDEN);

BLOCK_COMMENT
   :
   (
      '/*' *? '*/'
      | '/**/'
      | '/***/'
   ) -> channel (HIDDEN)
   ;

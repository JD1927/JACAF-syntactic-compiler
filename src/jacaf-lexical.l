%option noyywrap
%option yylineno
/* JACAF */

%{
#include "jacaf-syntactical.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
%}

DIGIT         [0-9]
UNDERSCORE    [_]
CHARACTER     [a-zA-Z]
ID            ([_]|[a-zA-Z])+([_]|[a-zA-Z]|[0-9])*
STRING1       \"[^\"\n]*\"
STRING2       \`((\$\{)([_]|[a-zA-Z])*([_]|[a-zA-Z]|[0-9])*(\})|[^\`]+)[^\`]*\`
COMMENT       (\/\*)([^\n])*(\*\/)

%%

"class" { return (tk_class); }
"abstract" { return (tk_abstract); }
"var" { return (tk_var); }
"method" { return (tk_method); }
"private" { return (tk_private); }
"public" { return (tk_public); }
"return" { return (tk_return); }
"static" { return (tk_static); }
"void" { return (tk_void); }
"break" { return (tk_break); }
"default" { return (tk_default); }
"print" { return (tk_print); }
"read" { return (tk_read); }
"if" { return (tk_if); }
"else" { return (tk_else); }
"switch" { return (tk_switch); }
"case" { return (tk_case); }
"for" { return (tk_for); }
"do" { return (tk_do); }
"while" { return (tk_while); }

"integer" { return (tk_integer); }
"double" { return (tk_double); }
"string" { return (tk_string); }
"boolean" { return (tk_boolean); }

"+"|"-"|"*"|"/"|"=" { return (yytext[0]); }
"\""|"`" { return (yytext[0]); }
"<"|">"|">="|"<="|"=="|"!=" { return (tk_logic_op); }
"and"|"or"|"not" { return (tk_logic_op); }
"+=" { return (tk_plus_op); }
"-=" { return (tk_rest_op); }
"{"|"}"|";"|"("|")" { return (yytext[0]); }
"["|"]"|":"|"," { return (yytext[0]); }
"true" { return (tk_true); }
"false" { return (tk_false); }

-?{DIGIT}+ { return (tk_int_val); }
-?{DIGIT}+"."{DIGIT}+ { return (tk_real_val); }

{STRING1} { return (tk_str_1); }
{STRING2} { return (tk_str_2); }

{ID} { return (id); }

{COMMENT} { return (tk_comment); }

[ \t\n]+  /* Clean whitespace, tabs and breakpoints */

. { 
  printf("[Lexical error: '%s', in line (%d)]\n", yytext, yylineno);
}

%%
%{
#include <stdlib.h>
#include <stdio.h>
extern int yylex(void);
extern char *yytext;
yyerror (char *s);
%}

/* Declaraciones de BISON %token tipo*/
%token id
%token tk_class
%token tk_abstract
%token tk_var
%token tk_method
%token tk_private
%token tk_public
%token tk_return
%token tk_static
%token tk_void
%token tk_break
%token tk_default
%token tk_print
%token tk_read
%token tk_if
%token tk_else
%token tk_switch
%token tk_case
%token tk_for
%token tk_do
%token tk_while
%token tk_integer
%token tk_double
%token tk_string
%token tk_boolean
%token tk_greater_than
%token tk_minor_than
%token tk_compare
%token tk_different
%token tk_and
%token tk_or
%token tk_not
%token tk_plus_op
%token tk_rest_op
%token tk_true
%token tk_false
%token tk_int_val
%token tk_real_val
%token tk_str_1
%token tk_str_2
%token tk_comment


%%
/* Grammar */

GROUP: /*  Empty string  */
| DECLARE GROUP
;

/* Variable declaration */
DECLARE : tk_var V_LIST ';' {printf("=> Correct variable declaration\n");}
        | error ';' { yyerrok;}
        ;
V_LIST    : id ':' V_TYPE
        | V_LIST ',' id ':' V_TYPE
V_TYPE    : tk_integer
        | tk_double
        | tk_string
        | tk_boolean
        ;

/* Method declaration */
DECLARE : ACCESS tk_method id '(' M_LIST ')' ':' M_TYPE '{' '}' {printf("=> Correct method declaration\n");}
        | error '}' { yyerrok;}
        ;
ACCESS  : tk_public
        | tk_private
        | 
        ;
M_LIST  : id ':' M_TYPE
        | M_LIST ',' id ':' M_TYPE
        |
        ;
M_TYPE  : tk_integer
        | tk_double
        | tk_string
        | tk_boolean
        | tk_void
        ;


%%
/* Funciones que necesitan el analizador sintáctico*/
int main() {
  printf("Enter declarations \n");
  yyparse();
  printf("Type a keyword to end the process...");
  getchar();
}

yyerror (char *s) {
  printf("%s, in: %s \n", s, yytext);
}

int yywrap() {
  return 1;
}
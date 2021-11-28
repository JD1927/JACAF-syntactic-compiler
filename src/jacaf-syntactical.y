%{
#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
extern int yylex(void);
extern char *yytext;
extern FILE *yyin;
void yyerror(char *s);
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
%token tk_logic_op
%token tk_plus_op
%token tk_rest_op
%token tk_true
%token tk_false
%token tk_int_val
%token tk_real_val
%token tk_str_1
%token tk_str_2
%token tk_comment
%start program

/* TODO: Add SWITCH CASE */
%%

program : class '{' declaration_group instruction_group '}' { printf("=> Correct program syntax\n"); }
        ;
class   : access tk_class id 
        ;
declaration_group : /* Empty */
        | declaration declaration_group
        | declaration error ';' {yyerrok;}
        ;
declaration : var_declaration
        | method_declaration
        ;
var_declaration : tk_var id_list ';'
        | tk_var id_type '=' expression ';'
        ;
method_declaration : access tk_method id '(' param_list ')' ':' method_type '{' declaration_group instruction_group '}'
        ;
access  : /* Empty */
        | tk_public
        | tk_private
        ;
param_list : 
        | id_list
        ;
id_list : id_type 
        | id_list ',' id_type
        ;
id_type : id ':' var_type 
        ;
instruction_group : /* Empty */
        | instruction instruction_group
        | instruction error ';' {yyerrok;}
        ;
instruction : assignment_instruction
        | comparison_instruction
        | loop_instruction
        | output_instruction
        | return_instruction
        | plus_rest_instruction
        ;
assignment_instruction : id '=' expression ';'
        ;
comparison_instruction : if_statement
        | if_statement tk_else '{' instruction_group '}'
        ;
if_statement : tk_if '(' expression ')' '{' instruction_group '}'
        ;
loop_instruction : while_statement '{' instruction_group '}'
        | tk_do '{' instruction_group '}' while_statement ';'
        | tk_for '(' for_var_declaration ';' expression ';' plus_rest_instruction ')' '{' instruction_group '}'
        ;
while_statement : tk_while '(' expression ')'
        ;
for_var_declaration : tk_var id ':' tk_integer '=' tk_int_val
        ;
output_instruction : tk_print '(' expression ')' ';'
        ;
return_instruction : tk_return expression ';'
        ;
plus_rest_instruction : id pr_assignment tk_int_val
        ;
pr_assignment : tk_plus_op
        | tk_rest_op
        ;
var_type : tk_string
        | tk_integer
        | tk_double
        | tk_boolean
        ;
method_type : var_type
        | tk_void
        ;
expression : factor
        | '-' expression
        | factor '+' expression
        | factor '-' expression
        ;    
factor  : term
        | factor '*' term
        | factor '/' term
        ;
term    : id
        | id '(' arg_list ')'
        | tk_true
        | tk_false
        | tk_int_val
        | tk_real_val
        | tk_str_1
        | tk_str_2
        | '(' expression ')'
        | compare
        ;
arg_list : 
        | id
        | arg_list ',' id
        ;
compare : expression tk_logic_op expression
        ;

%%

int main() {
  printf("[START]: JACAF Syntax code analysis \n\n");
  yyin = fopen("../test/example.jacaf", "r");
  if (!yyin) { printf("Something went wrong reading the file."); }
  yyparse();
  printf("[Analyzed lines (%d)]\n\n", yylineno);
  printf("[END]: JACAF Syntax code analysis \n");
  return 0;
}

void yyerror(char *s) {
  printf("[Syntactical error: '%s', in line: (%d) ]\n",yytext, yylineno);
}

int yywrap() {
  return 1;
}
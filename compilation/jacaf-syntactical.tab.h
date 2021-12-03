/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_COMPILATION_JACAF_SYNTACTICAL_TAB_H_INCLUDED
# define YY_YY_COMPILATION_JACAF_SYNTACTICAL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    id = 258,                      /* id  */
    tk_class = 259,                /* tk_class  */
    tk_abstract = 260,             /* tk_abstract  */
    tk_var = 261,                  /* tk_var  */
    tk_method = 262,               /* tk_method  */
    tk_private = 263,              /* tk_private  */
    tk_public = 264,               /* tk_public  */
    tk_return = 265,               /* tk_return  */
    tk_static = 266,               /* tk_static  */
    tk_void = 267,                 /* tk_void  */
    tk_break = 268,                /* tk_break  */
    tk_default = 269,              /* tk_default  */
    tk_print = 270,                /* tk_print  */
    tk_read = 271,                 /* tk_read  */
    tk_if = 272,                   /* tk_if  */
    tk_else = 273,                 /* tk_else  */
    tk_switch = 274,               /* tk_switch  */
    tk_case = 275,                 /* tk_case  */
    tk_for = 276,                  /* tk_for  */
    tk_do = 277,                   /* tk_do  */
    tk_while = 278,                /* tk_while  */
    tk_integer = 279,              /* tk_integer  */
    tk_double = 280,               /* tk_double  */
    tk_string = 281,               /* tk_string  */
    tk_boolean = 282,              /* tk_boolean  */
    tk_logic_op = 283,             /* tk_logic_op  */
    tk_plus_op = 284,              /* tk_plus_op  */
    tk_rest_op = 285,              /* tk_rest_op  */
    tk_true = 286,                 /* tk_true  */
    tk_false = 287,                /* tk_false  */
    tk_int_val = 288,              /* tk_int_val  */
    tk_real_val = 289,             /* tk_real_val  */
    tk_str_1 = 290,                /* tk_str_1  */
    tk_str_2 = 291                 /* tk_str_2  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILATION_JACAF_SYNTACTICAL_TAB_H_INCLUDED  */

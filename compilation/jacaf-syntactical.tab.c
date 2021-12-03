/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "jacaf-syntactical.y"

#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
extern int yylex(void);
extern char *yytext;
extern FILE *yyin;
void yyerror(char *s);

#line 81 "../compilation/jacaf-syntactical.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "jacaf-syntactical.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_id = 3,                         /* id  */
  YYSYMBOL_tk_class = 4,                   /* tk_class  */
  YYSYMBOL_tk_abstract = 5,                /* tk_abstract  */
  YYSYMBOL_tk_var = 6,                     /* tk_var  */
  YYSYMBOL_tk_method = 7,                  /* tk_method  */
  YYSYMBOL_tk_private = 8,                 /* tk_private  */
  YYSYMBOL_tk_public = 9,                  /* tk_public  */
  YYSYMBOL_tk_return = 10,                 /* tk_return  */
  YYSYMBOL_tk_static = 11,                 /* tk_static  */
  YYSYMBOL_tk_void = 12,                   /* tk_void  */
  YYSYMBOL_tk_break = 13,                  /* tk_break  */
  YYSYMBOL_tk_default = 14,                /* tk_default  */
  YYSYMBOL_tk_print = 15,                  /* tk_print  */
  YYSYMBOL_tk_read = 16,                   /* tk_read  */
  YYSYMBOL_tk_if = 17,                     /* tk_if  */
  YYSYMBOL_tk_else = 18,                   /* tk_else  */
  YYSYMBOL_tk_switch = 19,                 /* tk_switch  */
  YYSYMBOL_tk_case = 20,                   /* tk_case  */
  YYSYMBOL_tk_for = 21,                    /* tk_for  */
  YYSYMBOL_tk_do = 22,                     /* tk_do  */
  YYSYMBOL_tk_while = 23,                  /* tk_while  */
  YYSYMBOL_tk_integer = 24,                /* tk_integer  */
  YYSYMBOL_tk_double = 25,                 /* tk_double  */
  YYSYMBOL_tk_string = 26,                 /* tk_string  */
  YYSYMBOL_tk_boolean = 27,                /* tk_boolean  */
  YYSYMBOL_tk_logic_op = 28,               /* tk_logic_op  */
  YYSYMBOL_tk_plus_op = 29,                /* tk_plus_op  */
  YYSYMBOL_tk_rest_op = 30,                /* tk_rest_op  */
  YYSYMBOL_tk_true = 31,                   /* tk_true  */
  YYSYMBOL_tk_false = 32,                  /* tk_false  */
  YYSYMBOL_tk_int_val = 33,                /* tk_int_val  */
  YYSYMBOL_tk_real_val = 34,               /* tk_real_val  */
  YYSYMBOL_tk_str_1 = 35,                  /* tk_str_1  */
  YYSYMBOL_tk_str_2 = 36,                  /* tk_str_2  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* '='  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* ':'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* '-'  */
  YYSYMBOL_46_ = 46,                       /* '+'  */
  YYSYMBOL_47_ = 47,                       /* '*'  */
  YYSYMBOL_48_ = 48,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_program = 50,                   /* program  */
  YYSYMBOL_class = 51,                     /* class  */
  YYSYMBOL_declaration_group = 52,         /* declaration_group  */
  YYSYMBOL_declaration = 53,               /* declaration  */
  YYSYMBOL_var_declaration = 54,           /* var_declaration  */
  YYSYMBOL_method_declaration = 55,        /* method_declaration  */
  YYSYMBOL_access = 56,                    /* access  */
  YYSYMBOL_instance = 57,                  /* instance  */
  YYSYMBOL_param_list = 58,                /* param_list  */
  YYSYMBOL_id_list = 59,                   /* id_list  */
  YYSYMBOL_id_type = 60,                   /* id_type  */
  YYSYMBOL_instruction_group = 61,         /* instruction_group  */
  YYSYMBOL_instruction = 62,               /* instruction  */
  YYSYMBOL_assignment_instruction = 63,    /* assignment_instruction  */
  YYSYMBOL_comparison_instruction = 64,    /* comparison_instruction  */
  YYSYMBOL_if_statement = 65,              /* if_statement  */
  YYSYMBOL_switch_statement = 66,          /* switch_statement  */
  YYSYMBOL_cases = 67,                     /* cases  */
  YYSYMBOL_case = 68,                      /* case  */
  YYSYMBOL_case_default = 69,              /* case_default  */
  YYSYMBOL_case_expression = 70,           /* case_expression  */
  YYSYMBOL_loop_instruction = 71,          /* loop_instruction  */
  YYSYMBOL_while_statement = 72,           /* while_statement  */
  YYSYMBOL_for_var_declaration = 73,       /* for_var_declaration  */
  YYSYMBOL_output_instruction = 74,        /* output_instruction  */
  YYSYMBOL_return_instruction = 75,        /* return_instruction  */
  YYSYMBOL_plus_rest_instruction = 76,     /* plus_rest_instruction  */
  YYSYMBOL_pr_assignment = 77,             /* pr_assignment  */
  YYSYMBOL_var_type = 78,                  /* var_type  */
  YYSYMBOL_method_type = 79,               /* method_type  */
  YYSYMBOL_expression = 80,                /* expression  */
  YYSYMBOL_factor = 81,                    /* factor  */
  YYSYMBOL_term = 82,                      /* term  */
  YYSYMBOL_arg_list = 83,                  /* arg_list  */
  YYSYMBOL_read_params = 84,               /* read_params  */
  YYSYMBOL_compare = 85                    /* compare  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  212

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,    47,    46,    44,    45,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    39,
       2,    40,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    50,    50,    51,    53,    54,    55,    57,    58,    60,
      61,    63,    65,    66,    67,    69,    70,    71,    73,    74,
      76,    77,    79,    81,    82,    83,    85,    86,    87,    88,
      89,    90,    92,    93,    94,    95,    97,    98,    99,   100,
     102,   104,   106,   107,   108,   109,   110,   112,   114,   116,
     117,   118,   119,   121,   122,   123,   124,   126,   128,   130,
     132,   134,   136,   137,   139,   140,   141,   142,   144,   145,
     147,   148,   149,   150,   152,   153,   154,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   169,
     170,   171,   173,   174,   175,   177
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "id", "tk_class",
  "tk_abstract", "tk_var", "tk_method", "tk_private", "tk_public",
  "tk_return", "tk_static", "tk_void", "tk_break", "tk_default",
  "tk_print", "tk_read", "tk_if", "tk_else", "tk_switch", "tk_case",
  "tk_for", "tk_do", "tk_while", "tk_integer", "tk_double", "tk_string",
  "tk_boolean", "tk_logic_op", "tk_plus_op", "tk_rest_op", "tk_true",
  "tk_false", "tk_int_val", "tk_real_val", "tk_str_1", "tk_str_2", "'{'",
  "'}'", "';'", "'='", "'('", "')'", "':'", "','", "'-'", "'+'", "'*'",
  "'/'", "$accept", "program", "class", "declaration_group", "declaration",
  "var_declaration", "method_declaration", "access", "instance",
  "param_list", "id_list", "id_type", "instruction_group", "instruction",
  "assignment_instruction", "comparison_instruction", "if_statement",
  "switch_statement", "cases", "case", "case_default", "case_expression",
  "loop_instruction", "while_statement", "for_var_declaration",
  "output_instruction", "return_instruction", "plus_rest_instruction",
  "pr_assignment", "var_type", "method_type", "expression", "factor",
  "term", "arg_list", "read_params", "compare", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   123,   125,    59,
      61,    40,    41,    58,    44,    45,    43,    42,    47
};
#endif

#define YYPACT_NINF (-119)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-77)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      57,  -119,  -119,    33,     0,    65,  -119,   131,  -119,  -119,
      19,   105,   144,    83,  -119,  -119,    65,   116,     3,    39,
      82,    85,    10,    22,    87,    93,   100,   112,   109,   114,
     118,   110,  -119,   176,   108,  -119,   200,   123,  -119,  -119,
    -119,   129,  -119,   155,  -119,   125,  -119,   105,    22,  -119,
     145,   147,    22,   148,   142,  -119,   143,  -119,  -119,  -119,
    -119,  -119,  -119,    22,    22,   -12,   159,  -119,  -119,    22,
      22,    22,   158,   131,    22,  -119,   146,  -119,   152,   157,
     154,   131,  -119,   193,  -119,  -119,  -119,  -119,  -119,  -119,
      -7,   161,   163,    23,  -119,   205,    79,   -23,   181,    22,
    -119,    22,    22,    22,    22,   -14,   -11,    -8,   208,   173,
     144,    -6,    -9,  -119,   131,  -119,   144,   175,  -119,  -119,
    -119,  -119,  -119,    53,  -119,  -119,   178,  -119,   181,   181,
     181,   181,    43,    68,   179,   187,   189,   185,    22,   191,
    -119,   144,   192,   105,  -119,   228,  -119,  -119,   131,    89,
     209,    36,   212,   194,  -119,   198,   204,  -119,  -119,   144,
     199,   137,     5,   197,  -119,   210,   241,   213,  -119,   206,
     215,   131,  -119,  -119,  -119,  -119,   211,   216,  -119,    89,
     218,    88,   214,  -119,    47,  -119,   224,     4,  -119,     6,
    -119,  -119,  -119,   220,  -119,  -119,   221,   246,   224,     7,
     131,   131,   222,   247,   144,   144,  -119,  -119,   225,   226,
    -119,  -119
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      12,    14,    13,     0,     0,    15,     1,     4,    17,    16,
       0,     0,     0,     0,     7,     8,    15,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    36,    38,     0,     0,    29,    30,
      31,     0,     5,     0,     3,     0,     9,     0,     0,    35,
       0,     0,     0,     0,    77,    85,     0,    79,    80,    81,
      82,    83,    84,     0,     0,     0,    70,    74,    88,     0,
       0,     0,     0,     4,     0,     2,     0,    24,     0,     0,
       0,     4,     6,     0,    65,    66,    64,    67,    22,    21,
       0,     0,     0,     0,    61,    89,    92,     0,    71,     0,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    39,     4,    56,     0,     0,    10,    33,
      34,    32,    90,     0,    93,    94,     0,    86,    95,    73,
      72,     0,    74,    74,     0,     0,     0,     0,     0,     0,
      57,     0,     0,    18,    78,     0,    87,    59,     4,     0,
       0,     0,     0,     0,    53,     0,    19,    20,    91,     0,
       0,     0,     0,    42,    44,     0,     0,     0,    37,     0,
       0,     4,    49,    50,    51,    52,     0,     0,    41,     0,
       0,     0,     0,    54,     0,    40,     0,     4,    46,     0,
      58,    62,    63,     0,    69,    68,     0,     0,     0,     0,
       4,     4,     0,     0,     0,     0,    48,    47,     0,     0,
      55,    11
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,   -13,  -119,  -119,  -119,   262,   249,  -119,
     124,   -44,   -29,  -119,  -119,  -119,  -119,  -119,  -118,  -119,
    -119,  -119,  -119,   117,  -119,  -119,  -119,   102,  -119,    86,
    -119,   -22,  -119,    40,  -119,  -119,  -119
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    12,    13,    14,    15,    16,    10,   155,
      19,    20,    30,    31,    32,    33,    34,    35,   162,   163,
     164,   176,    36,    37,   109,    38,    39,    40,    53,    88,
     196,   131,    66,    67,   123,   126,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    65,    77,    89,   -25,    99,   177,   177,   177,   -12,
      11,   -12,     1,     2,    99,   -12,    99,    99,   160,   127,
      99,    99,    99,    17,   161,    54,    90,   100,   134,   -25,
      93,   135,   118,     6,   136,    55,   140,     7,    56,    50,
      51,    97,    98,   178,   -45,   -43,    45,   105,   106,   107,
      52,    99,   111,    57,    58,    59,    60,    61,    62,   194,
     110,   189,   121,    63,    99,     1,     2,    64,   116,   199,
       8,    84,    85,    86,    87,   166,     9,   128,    46,   129,
     130,   139,   -75,    47,    41,   -75,    -4,   142,   -12,    11,
     -12,     1,     2,    -4,   -12,   144,    -4,   145,    -4,   157,
      -4,   141,    -4,   160,    -4,    -4,    -4,   -76,    18,   161,
     -76,    76,   153,    22,   124,   125,   151,   191,   192,    44,
      23,    -4,    48,   -23,    49,    24,    79,    25,    69,    26,
     170,    27,    28,    29,    70,   159,   -12,    11,   -12,     1,
       2,    71,   -12,   132,   133,    21,    73,    22,   -23,    84,
      85,    86,    87,    72,    23,    74,    75,   197,   186,    24,
      81,    25,    83,    26,   108,    27,    28,    29,    82,   203,
     172,   173,   174,   175,   198,   208,   209,    78,    91,   -27,
      92,    94,   -23,    95,    96,   112,   -27,   204,   205,   -27,
     113,   -27,   115,   -27,   114,   -27,   117,   -27,   -27,   -27,
     119,    80,   120,   -28,   101,   102,   103,   104,   122,    99,
     -28,   137,   138,   -28,   -27,   -28,   143,   -28,   147,   -28,
     146,   -28,   -28,   -28,   148,    21,   149,    22,   150,   152,
     154,   158,   168,   165,    23,    29,   179,   -23,   -28,    24,
     169,    25,   171,    26,   181,    27,    28,    29,    47,   184,
     180,   190,   183,   185,   187,   188,   193,   200,   201,   202,
     207,   206,     5,   210,   211,    43,     0,   156,   182,   167,
     195
};

static const yytype_int16 yycheck[] =
{
      13,    23,    31,    47,    13,    28,     1,     1,     1,     5,
       6,     7,     8,     9,    28,    11,    28,    28,    14,    42,
      28,    28,    28,     4,    20,     3,    48,    39,    42,    38,
      52,    42,    39,     0,    42,    13,    42,    37,    16,    29,
      30,    63,    64,    38,    38,    38,    43,    69,    70,    71,
      40,    28,    74,    31,    32,    33,    34,    35,    36,    12,
      73,   179,    39,    41,    28,     8,     9,    45,    81,   187,
       5,    24,    25,    26,    27,    39,    11,    99,    39,   101,
     102,   110,    39,    44,     1,    42,     3,   116,     5,     6,
       7,     8,     9,    10,    11,    42,    13,    44,    15,   143,
      17,   114,    19,    14,    21,    22,    23,    39,     3,    20,
      42,     1,   141,     3,    35,    36,   138,    29,    30,     3,
      10,    38,    40,    13,    39,    15,    18,    17,    41,    19,
     159,    21,    22,    23,    41,   148,     5,     6,     7,     8,
       9,    41,    11,   103,   104,     1,    37,     3,    38,    24,
      25,    26,    27,    41,    10,    41,    38,   186,   171,    15,
      37,    17,     7,    19,     6,    21,    22,    23,    39,   198,
      33,    34,    35,    36,   187,   204,   205,     1,    33,     3,
      33,    33,    38,    41,    41,    39,    10,   200,   201,    13,
      38,    15,    38,    17,    37,    19,     3,    21,    22,    23,
      39,     1,    39,     3,    45,    46,    47,    48,     3,    28,
      10,     3,    39,    13,    38,    15,    41,    17,    39,    19,
      42,    21,    22,    23,    37,     1,    37,     3,    43,    38,
      38,     3,    38,    24,    10,    23,    39,    13,    38,    15,
      42,    17,    43,    19,     3,    21,    22,    23,    44,    43,
      40,    33,    39,    38,    43,    39,    42,    37,    37,    13,
      13,    39,     0,    38,    38,    16,    -1,   143,   166,   152,
     184
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,     9,    50,    51,    56,     0,    37,     5,    11,
      57,     6,    52,    53,    54,    55,    56,     4,     3,    59,
      60,     1,     3,    10,    15,    17,    19,    21,    22,    23,
      61,    62,    63,    64,    65,    66,    71,    72,    74,    75,
      76,     1,    52,    57,     3,    43,    39,    44,    40,    39,
      29,    30,    40,    77,     3,    13,    16,    31,    32,    33,
      34,    35,    36,    41,    45,    80,    81,    82,    85,    41,
      41,    41,    41,    37,    41,    38,     1,    61,     1,    18,
       1,    37,    39,     7,    24,    25,    26,    27,    78,    60,
      80,    33,    33,    80,    33,    41,    41,    80,    80,    28,
      39,    45,    46,    47,    48,    80,    80,    80,     6,    73,
      52,    80,    39,    38,    37,    38,    52,     3,    39,    39,
      39,    39,     3,    83,    35,    36,    84,    42,    80,    80,
      80,    80,    82,    82,    42,    42,    42,     3,    39,    61,
      42,    52,    61,    41,    42,    44,    42,    39,    37,    37,
      43,    80,    38,    61,    38,    58,    59,    60,     3,    52,
      14,    20,    67,    68,    69,    24,    39,    72,    38,    42,
      61,    43,    33,    34,    35,    36,    70,     1,    38,    39,
      40,     3,    76,    39,    43,    38,    52,    43,    39,    67,
      33,    29,    30,    42,    12,    78,    79,    61,    52,    67,
      37,    37,    13,    61,    52,    52,    39,    13,    61,    61,
      38,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    52,    53,    53,    54,
      54,    55,    56,    56,    56,    57,    57,    57,    58,    58,
      59,    59,    60,    61,    61,    61,    62,    62,    62,    62,
      62,    62,    63,    63,    63,    63,    64,    64,    64,    64,
      65,    66,    67,    67,    67,    67,    67,    68,    69,    70,
      70,    70,    70,    71,    71,    71,    71,    72,    73,    74,
      75,    76,    77,    77,    78,    78,    78,    78,    79,    79,
      80,    80,    80,    80,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    83,    84,    84,    84,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     0,     2,     3,     1,     1,     3,
       5,    13,     0,     1,     1,     0,     1,     1,     0,     1,
       1,     3,     3,     0,     2,     3,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     2,     1,     6,     1,     3,
       8,     7,     1,     4,     1,     3,     3,     6,     6,     1,
       1,     1,     1,     5,     7,    12,     3,     4,     6,     5,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     1,     3,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     1,     0,
       1,     3,     0,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 6: /* declaration_group: declaration error ';'  */
#line 55 "jacaf-syntactical.y"
                                {yyerrok;}
#line 1319 "../compilation/jacaf-syntactical.tab.c"
    break;

  case 25: /* instruction_group: instruction error ';'  */
#line 83 "jacaf-syntactical.y"
                                {yyerrok;}
#line 1325 "../compilation/jacaf-syntactical.tab.c"
    break;

  case 35: /* assignment_instruction: error ';'  */
#line 95 "jacaf-syntactical.y"
                    {yyerrok;}
#line 1331 "../compilation/jacaf-syntactical.tab.c"
    break;

  case 39: /* comparison_instruction: comparison_instruction error '}'  */
#line 100 "jacaf-syntactical.y"
                                           {yyerrok;}
#line 1337 "../compilation/jacaf-syntactical.tab.c"
    break;

  case 46: /* cases: cases error ';'  */
#line 110 "jacaf-syntactical.y"
                          {yyerrok;}
#line 1343 "../compilation/jacaf-syntactical.tab.c"
    break;

  case 56: /* loop_instruction: loop_instruction error '}'  */
#line 124 "jacaf-syntactical.y"
                                     {yyerrok;}
#line 1349 "../compilation/jacaf-syntactical.tab.c"
    break;


#line 1353 "../compilation/jacaf-syntactical.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 180 "jacaf-syntactical.y"


int main(int argc, char **argv) {
  printf("[START]: JACAF Syntax code analysis \n\n");
  ++argv, --argc;
  if (argc > 0) {
    yyin = fopen(argv[0], "r");
  } else {
    yyin = stdin;
  }
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

/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "gramatica.y"

#include <iostream>
#include <string>
#include "main.h"     /* EntradaTS, tabla_simbolos, LINEA_ACTUAL */

int yylex();
void yyerror(const char *s);

#line 80 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    ID = 258,                      /* ID  */
    CTE_INT = 259,                 /* CTE_INT  */
    CTE_FLOAT = 260,               /* CTE_FLOAT  */
    CTE_STR = 261,                 /* CTE_STR  */
    PR_IF = 262,                   /* PR_IF  */
    PR_ELSE = 263,                 /* PR_ELSE  */
    PR_END_IF = 264,               /* PR_END_IF  */
    PR_BEGIN = 265,                /* PR_BEGIN  */
    PR_END = 266,                  /* PR_END  */
    PR_POUT = 267,                 /* PR_POUT  */
    PR_RET = 268,                  /* PR_RET  */
    PR_CLASS = 269,                /* PR_CLASS  */
    PR_FUNCTION = 270,             /* PR_FUNCTION  */
    PR_USHORTINT = 271,            /* PR_USHORTINT  */
    PR_DOUBLEF = 272,              /* PR_DOUBLEF  */
    PR_EXTENDS = 273,              /* PR_EXTENDS  */
    PR_TYPEDEF = 274,              /* PR_TYPEDEF  */
    PR_REPEAT = 275,               /* PR_REPEAT  */
    PR_WHILE = 276,                /* PR_WHILE  */
    OP_ASIGNACION = 277,           /* OP_ASIGNACION  */
    OP_IGUAL_IGUAL = 278,          /* OP_IGUAL_IGUAL  */
    OP_MENOR_IGUAL = 279,          /* OP_MENOR_IGUAL  */
    OP_MAYOR_IGUAL = 280,          /* OP_MAYOR_IGUAL  */
    OP_DISTINTO = 281              /* OP_DISTINTO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define CTE_INT 259
#define CTE_FLOAT 260
#define CTE_STR 261
#define PR_IF 262
#define PR_ELSE 263
#define PR_END_IF 264
#define PR_BEGIN 265
#define PR_END 266
#define PR_POUT 267
#define PR_RET 268
#define PR_CLASS 269
#define PR_FUNCTION 270
#define PR_USHORTINT 271
#define PR_DOUBLEF 272
#define PR_EXTENDS 273
#define PR_TYPEDEF 274
#define PR_REPEAT 275
#define PR_WHILE 276
#define OP_ASIGNACION 277
#define OP_IGUAL_IGUAL 278
#define OP_MENOR_IGUAL 279
#define OP_MAYOR_IGUAL 280
#define OP_DISTINTO 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "gramatica.y"

    EntradaTS *ts_ref;

#line 189 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_CTE_INT = 4,                    /* CTE_INT  */
  YYSYMBOL_CTE_FLOAT = 5,                  /* CTE_FLOAT  */
  YYSYMBOL_CTE_STR = 6,                    /* CTE_STR  */
  YYSYMBOL_PR_IF = 7,                      /* PR_IF  */
  YYSYMBOL_PR_ELSE = 8,                    /* PR_ELSE  */
  YYSYMBOL_PR_END_IF = 9,                  /* PR_END_IF  */
  YYSYMBOL_PR_BEGIN = 10,                  /* PR_BEGIN  */
  YYSYMBOL_PR_END = 11,                    /* PR_END  */
  YYSYMBOL_PR_POUT = 12,                   /* PR_POUT  */
  YYSYMBOL_PR_RET = 13,                    /* PR_RET  */
  YYSYMBOL_PR_CLASS = 14,                  /* PR_CLASS  */
  YYSYMBOL_PR_FUNCTION = 15,               /* PR_FUNCTION  */
  YYSYMBOL_PR_USHORTINT = 16,              /* PR_USHORTINT  */
  YYSYMBOL_PR_DOUBLEF = 17,                /* PR_DOUBLEF  */
  YYSYMBOL_PR_EXTENDS = 18,                /* PR_EXTENDS  */
  YYSYMBOL_PR_TYPEDEF = 19,                /* PR_TYPEDEF  */
  YYSYMBOL_PR_REPEAT = 20,                 /* PR_REPEAT  */
  YYSYMBOL_PR_WHILE = 21,                  /* PR_WHILE  */
  YYSYMBOL_OP_ASIGNACION = 22,             /* OP_ASIGNACION  */
  YYSYMBOL_OP_IGUAL_IGUAL = 23,            /* OP_IGUAL_IGUAL  */
  YYSYMBOL_OP_MENOR_IGUAL = 24,            /* OP_MENOR_IGUAL  */
  YYSYMBOL_OP_MAYOR_IGUAL = 25,            /* OP_MAYOR_IGUAL  */
  YYSYMBOL_OP_DISTINTO = 26,               /* OP_DISTINTO  */
  YYSYMBOL_27_ = 27,                       /* '+'  */
  YYSYMBOL_28_ = 28,                       /* '-'  */
  YYSYMBOL_29_ = 29,                       /* '*'  */
  YYSYMBOL_30_ = 30,                       /* '/'  */
  YYSYMBOL_31_ = 31,                       /* ';'  */
  YYSYMBOL_32_ = 32,                       /* ','  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* '='  */
  YYSYMBOL_36_ = 36,                       /* '['  */
  YYSYMBOL_37_ = 37,                       /* ']'  */
  YYSYMBOL_38_ = 38,                       /* '.'  */
  YYSYMBOL_39_ = 39,                       /* '<'  */
  YYSYMBOL_40_ = 40,                       /* '>'  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_prog = 42,                      /* prog  */
  YYSYMBOL_sent_decl_lista = 43,           /* sent_decl_lista  */
  YYSYMBOL_sent_decl = 44,                 /* sent_decl  */
  YYSYMBOL_tipo = 45,                      /* tipo  */
  YYSYMBOL_lista_ids = 46,                 /* lista_ids  */
  YYSYMBOL_decl_variables = 47,            /* decl_variables  */
  YYSYMBOL_lista_params_formales = 48,     /* lista_params_formales  */
  YYSYMBOL_decl_funcion = 49,              /* decl_funcion  */
  YYSYMBOL_decl_clase = 50,                /* decl_clase  */
  YYSYMBOL_clase_item_lista = 51,          /* clase_item_lista  */
  YYSYMBOL_clase_item = 52,                /* clase_item  */
  YYSYMBOL_extends_clause = 53,            /* extends_clause  */
  YYSYMBOL_decl_typedef = 54,              /* decl_typedef  */
  YYSYMBOL_lista_valores = 55,             /* lista_valores  */
  YYSYMBOL_sent_ejec_lista = 56,           /* sent_ejec_lista  */
  YYSYMBOL_sent_ejec = 57,                 /* sent_ejec  */
  YYSYMBOL_asignacion = 58,                /* asignacion  */
  YYSYMBOL_asignacion_atributo = 59,       /* asignacion_atributo  */
  YYSYMBOL_indice = 60,                    /* indice  */
  YYSYMBOL_retorno = 61,                   /* retorno  */
  YYSYMBOL_pout = 62,                      /* pout  */
  YYSYMBOL_bloque_sent_ejec = 63,          /* bloque_sent_ejec  */
  YYSYMBOL_condicion = 64,                 /* condicion  */
  YYSYMBOL_comparador = 65,                /* comparador  */
  YYSYMBOL_seleccion = 66,                 /* seleccion  */
  YYSYMBOL_repeat_while = 67,              /* repeat_while  */
  YYSYMBOL_expresion = 68,                 /* expresion  */
  YYSYMBOL_termino = 69,                   /* termino  */
  YYSYMBOL_factor = 70,                    /* factor  */
  YYSYMBOL_expresion_restr = 71,           /* expresion_restr  */
  YYSYMBOL_termino_restr = 72,             /* termino_restr  */
  YYSYMBOL_factor_restr = 73,              /* factor_restr  */
  YYSYMBOL_cte = 74,                       /* cte  */
  YYSYMBOL_invocacion = 75,                /* invocacion  */
  YYSYMBOL_lista_params_reales = 76,       /* lista_params_reales  */
  YYSYMBOL_lista_ctes_opcional = 77,       /* lista_ctes_opcional  */
  YYSYMBOL_lista_constantes = 78,          /* lista_constantes  */
  YYSYMBOL_acceso_objeto = 79,             /* acceso_objeto  */
  YYSYMBOL_llamada_opcional = 80           /* llamada_opcional  */
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
typedef yytype_int16 yy_state_t;

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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   484

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  320

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   281


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
      33,    34,    29,    27,    32,    28,    38,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      39,    35,    40,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    27,    27,    29,    36,    48,    49,    57,    60,    61,
      62,    63,    66,    67,    68,    71,    72,    76,    77,    86,
      87,    91,    92,    97,   102,   110,   111,   116,   123,   124,
     128,   129,   130,   131,   136,   141,   149,   150,   160,   161,
     166,   171,   178,   179,   185,   186,   194,   197,   198,   199,
     200,   201,   202,   203,   206,   208,   215,   224,   225,   226,
     234,   242,   251,   252,   256,   257,   265,   266,   267,   272,
     279,   280,   283,   286,   287,   288,   289,   290,   291,   295,
     296,   297,   304,   311,   318,   325,   335,   336,   341,   350,
     351,   352,   355,   356,   357,   360,   361,   362,   369,   381,
     382,   383,   386,   387,   388,   391,   392,   393,   396,   397,
     398,   405,   417,   418,   421,   422,   425,   426,   435,   436,
     439,   440,   447,   450,   451,   454,   455,   458,   459
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "CTE_INT",
  "CTE_FLOAT", "CTE_STR", "PR_IF", "PR_ELSE", "PR_END_IF", "PR_BEGIN",
  "PR_END", "PR_POUT", "PR_RET", "PR_CLASS", "PR_FUNCTION", "PR_USHORTINT",
  "PR_DOUBLEF", "PR_EXTENDS", "PR_TYPEDEF", "PR_REPEAT", "PR_WHILE",
  "OP_ASIGNACION", "OP_IGUAL_IGUAL", "OP_MENOR_IGUAL", "OP_MAYOR_IGUAL",
  "OP_DISTINTO", "'+'", "'-'", "'*'", "'/'", "';'", "','", "'('", "')'",
  "'='", "'['", "']'", "'.'", "'<'", "'>'", "$accept", "prog",
  "sent_decl_lista", "sent_decl", "tipo", "lista_ids", "decl_variables",
  "lista_params_formales", "decl_funcion", "decl_clase",
  "clase_item_lista", "clase_item", "extends_clause", "decl_typedef",
  "lista_valores", "sent_ejec_lista", "sent_ejec", "asignacion",
  "asignacion_atributo", "indice", "retorno", "pout", "bloque_sent_ejec",
  "condicion", "comparador", "seleccion", "repeat_while", "expresion",
  "termino", "factor", "expresion_restr", "termino_restr", "factor_restr",
  "cte", "invocacion", "lista_params_reales", "lista_ctes_opcional",
  "lista_constantes", "acceso_objeto", "llamada_opcional", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-150)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,  -150,    85,   329,  -150,    80,  -150,  -150,    87,  -150,
    -150,   117,  -150,    88,  -150,  -150,  -150,  -150,  -150,   160,
     178,    31,    24,    93,  -150,   148,    63,   129,    12,    86,
     139,   153,   167,   417,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,   173,   129,   181,   399,   399,   184,    13,  -150,   103,
    -150,   213,  -150,   134,    79,   134,   232,   228,   134,   140,
    -150,   150,   134,  -150,  -150,    77,  -150,  -150,   105,   128,
     433,  -150,  -150,   430,   142,   142,   142,    20,    20,  -150,
     362,  -150,  -150,   161,   156,   145,  -150,  -150,  -150,  -150,
     206,   175,   199,    38,   217,  -150,  -150,   219,    29,   224,
     386,   241,    27,    37,    39,    41,   198,   230,   244,   250,
     237,   266,    99,   269,  -150,   300,   306,    -8,  -150,    49,
      25,   257,   189,    42,   311,   281,   346,  -150,  -150,   134,
     134,  -150,   134,   134,  -150,  -150,   319,   134,   319,   322,
      30,   134,   134,   417,  -150,  -150,  -150,  -150,  -150,  -150,
     134,   417,   417,   212,   333,   338,   344,   353,   358,   370,
     373,   134,   134,  -150,  -150,  -150,    20,  -150,    20,  -150,
    -150,  -150,   142,   376,   390,   392,   397,  -150,    20,  -150,
    -150,  -150,   154,   340,   409,   145,   145,  -150,  -150,   428,
    -150,   199,  -150,   134,   134,   134,   252,   391,   436,   199,
     445,   446,   448,   168,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,   424,    59,   209,    45,  -150,  -150,  -150,  -150,  -150,
     456,   337,   349,   357,   226,   299,   180,   283,  -150,  -150,
    -150,  -150,  -150,   134,  -150,  -150,    26,   407,   412,   425,
    -150,  -150,   429,   431,   432,   434,   435,   417,   437,   438,
     439,   440,  -150,  -150,  -150,  -150,    80,  -150,  -150,    80,
    -150,  -150,  -150,   154,   154,  -150,   154,   154,   210,  -150,
     457,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
     455,  -150,  -150,  -150,  -150,   369,   377,   389,   227,   254,
     275,   295,   283,   283,  -150,  -150,  -150,  -150,   441,  -150,
    -150,  -150,   442,   443,   444,   447,  -150,   298,   313,   316,
    -150,  -150,  -150,  -150,   449,   450,   451,  -150,  -150,  -150
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     7,     0,     0,     1,    46,    14,    46,     0,    12,
      13,     0,     5,     0,     8,     9,    10,    11,     6,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    47,    48,    52,    51,    50,
      53,     0,     4,     0,     0,     0,     0,     0,    18,     0,
      17,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,    46,    70,     0,    49,     2,     0,     0,
       0,    29,    32,     0,     0,     0,     0,     0,     0,    15,
      95,   114,   115,     0,     0,    91,    94,    96,    99,   100,
       0,     0,   119,     0,     0,    63,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,    97,    98,     0,
       0,    55,     0,     0,    56,    54,   122,     0,   122,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    36,    35,     0,    30,     0,    26,
      27,    25,     0,     0,     0,     0,     0,    20,     0,     7,
       7,     7,     0,     0,   128,    89,    90,    92,    93,     0,
     117,   118,   116,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,    68,    66,    69,    67,    65,    64,
      71,     0,     0,     0,     0,    42,    39,    40,    41,    38,
       0,     0,     0,     0,   108,     0,     0,   104,   107,   109,
     112,   113,   126,     0,   125,   124,     0,     0,     0,     0,
      59,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     7,     7,    19,     0,    46,    46,    46,
      46,   110,   111,     0,     0,   101,     0,     0,     0,   121,
       0,   120,    61,    60,    58,    83,    82,    81,    85,    84,
       0,    79,    87,    88,    86,     0,     0,     0,     0,     0,
       0,     0,   102,   103,   105,   106,   127,   123,     0,    46,
      46,    46,     0,     0,     0,     0,    80,     0,     0,     0,
      22,    23,    24,    21,     0,     0,     0,    33,    34,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -126,  -150,   -26,   408,  -150,   -67,  -150,  -150,
     422,   122,  -150,  -150,   246,    -7,   -30,  -150,  -150,   352,
    -150,  -150,  -131,   -52,  -150,  -150,  -150,   -45,   205,   229,
    -150,    78,   115,   -70,   -18,   251,   341,  -150,  -149,  -150
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    12,    13,    26,    14,   122,    15,    16,
      70,    71,    72,    17,   117,    19,    34,    35,    36,    97,
      37,    38,    65,    99,   150,    39,    40,   100,    85,    86,
     226,   227,   228,    87,    88,    93,   190,   236,    89,   234
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    41,    41,    64,   118,   118,   118,   102,    84,    91,
      92,   123,   198,    53,    75,    41,   104,   105,    69,    69,
     200,   201,   203,     6,   172,    46,   175,   269,   152,   173,
     141,   194,    44,   231,    54,     1,     9,    10,   154,   136,
     156,    45,   158,   180,    69,    55,   253,    69,    56,    76,
      57,   121,   121,   221,   222,   223,   106,   172,   270,    47,
     250,   153,   176,   271,   142,   195,   129,   130,   129,   130,
     137,   155,   138,   157,   178,   159,   181,   178,   107,   254,
      90,   172,    80,    81,    82,     4,   174,    58,    41,    23,
      21,    24,   191,   251,    50,    51,   196,   197,   108,   213,
     166,   214,   215,    25,    77,   199,   109,    83,    24,   211,
     212,    18,   229,    64,   231,   231,   280,   231,   231,    59,
      22,    64,    64,    64,    48,    41,   285,   286,   287,   111,
     167,   112,   168,    41,    41,    41,    78,    80,    81,    82,
     121,   101,   121,    80,    81,    82,    81,    82,   237,   238,
     239,    49,   220,    80,    81,    82,   103,   224,    81,    82,
      52,    27,    83,    28,   230,   127,   128,    29,    83,   246,
      60,    30,    31,    32,   132,   133,   247,   248,    83,    42,
      33,    28,   225,   129,   130,    29,    61,   131,    92,    43,
      31,    32,   114,   229,   229,   114,   229,   229,    33,    27,
      62,    28,   129,   130,    66,    29,   135,   263,   264,   160,
      31,    32,    67,   202,   265,    28,    79,    64,    33,    29,
      74,   178,    63,   179,    31,    32,   129,   130,    27,    41,
      28,    98,    33,    94,    29,    95,    96,   134,   302,    31,
      32,   178,   137,   252,   296,   230,   230,    33,   230,   230,
     288,   289,   290,   291,   139,    27,   140,    28,   143,    55,
     177,    29,   125,   161,   126,   303,    31,    32,   164,    51,
      41,    41,    41,    41,    33,   151,    27,   162,    28,   129,
     130,   163,    29,   240,    95,    96,   304,    31,    32,    41,
      41,    41,   307,   308,   309,    33,    27,   165,    28,    27,
     169,    28,    29,   261,   262,    29,   305,    31,    32,   314,
      31,    32,   266,   267,    27,    33,    28,    27,    33,    28,
      29,   119,   120,    29,   315,    31,    32,   316,    31,    32,
       5,   170,     6,    33,   185,   186,    33,   171,   256,     7,
       6,   292,   293,     8,   182,     9,    10,   257,    11,   184,
     256,     8,     6,     9,    10,   189,    11,   193,   259,   258,
       6,   187,   188,     8,   204,     9,    10,   260,    11,   205,
     256,     8,     6,     9,    10,   206,    11,   232,   256,   299,
       6,   294,   295,     8,   207,     9,    10,   300,    11,   208,
     256,     8,     6,     9,    10,    55,    11,   124,   125,   301,
     126,   209,     6,     8,   210,     9,    10,   216,    11,   144,
     145,   146,   147,   129,   130,     9,    10,    68,   129,   130,
      28,   217,   241,   218,    29,   148,   149,    63,   219,    31,
      32,   115,   235,     6,   129,   130,     6,    33,   272,   129,
     130,   116,   233,   273,   113,   242,     9,    10,    68,     9,
      10,    68,   129,   130,   243,   244,   274,   245,   249,   255,
     275,   297,   276,   277,   298,   278,   279,    73,   281,   282,
     283,   284,   306,   310,   311,   312,   110,   183,   313,   192,
     317,   318,   319,     0,   268
};

static const yytype_int16 yycheck[] =
{
       7,    19,    20,    33,    74,    75,    76,    59,    53,    54,
      55,    78,   143,     1,     1,    33,    61,    62,    44,    45,
     151,   152,   153,     3,    32,     1,     1,     1,     1,    37,
       1,     1,     1,   182,    22,     3,    16,    17,     1,     1,
       1,    10,     1,     1,    70,    33,     1,    73,    36,    36,
      38,    77,    78,   179,   180,   181,    63,    32,    32,    35,
       1,    34,    37,    37,    35,    35,    27,    28,    27,    28,
      32,    34,    34,    34,    32,    34,    34,    32,     1,    34,
       1,    32,     3,     4,     5,     0,    37,     1,   106,     1,
       3,     3,   137,    34,    31,    32,   141,   142,    21,   166,
       1,   168,   172,    15,     1,   150,     1,    28,     3,   161,
     162,    31,   182,   143,   263,   264,   247,   266,   267,    33,
       3,   151,   152,   153,    31,   143,   252,   253,   254,     1,
      31,     3,    33,   151,   152,   153,    33,     3,     4,     5,
     166,     1,   168,     3,     4,     5,     4,     5,   193,   194,
     195,     3,   178,     3,     4,     5,     6,     3,     4,     5,
      31,     1,    28,     3,   182,     4,     5,     7,    28,     1,
      31,    11,    12,    13,    29,    30,     8,     9,    28,     1,
      20,     3,    28,    27,    28,     7,    33,    31,   233,    11,
      12,    13,    70,   263,   264,    73,   266,   267,    20,     1,
      33,     3,    27,    28,    31,     7,    31,    27,    28,    11,
      12,    13,    31,     1,    34,     3,     3,   247,    20,     7,
      36,    32,    10,    34,    12,    13,    27,    28,     1,   247,
       3,     3,    20,     1,     7,     3,     4,    31,    11,    12,
      13,    32,    32,    34,    34,   263,   264,    20,   266,   267,
     257,   258,   259,   260,    37,     1,    37,     3,    34,    33,
       3,     7,    36,    33,    38,    11,    12,    13,    31,    32,
     288,   289,   290,   291,    20,    34,     1,    33,     3,    27,
      28,    31,     7,    31,     3,     4,    11,    12,    13,   307,
     308,   309,   299,   300,   301,    20,     1,    31,     3,     1,
      31,     3,     7,     4,     5,     7,    11,    12,    13,    11,
      12,    13,    29,    30,     1,    20,     3,     1,    20,     3,
       7,    75,    76,     7,    11,    12,    13,    11,    12,    13,
       1,    31,     3,    20,   129,   130,    20,    31,     1,    10,
       3,   263,   264,    14,    33,    16,    17,    10,    19,     3,
       1,    14,     3,    16,    17,    36,    19,    35,     1,    10,
       3,   132,   133,    14,    31,    16,    17,    10,    19,    31,
       1,    14,     3,    16,    17,    31,    19,    37,     1,    10,
       3,   266,   267,    14,    31,    16,    17,    10,    19,    31,
       1,    14,     3,    16,    17,    33,    19,    35,    36,    10,
      38,    31,     3,    14,    31,    16,    17,    31,    19,    23,
      24,    25,    26,    27,    28,    16,    17,    18,    27,    28,
       3,    31,    31,    31,     7,    39,    40,    10,    31,    12,
      13,     1,     4,     3,    27,    28,     3,    20,    31,    27,
      28,    11,    33,    31,    11,     9,    16,    17,    18,    16,
      17,    18,    27,    28,     9,     9,    31,     9,    34,     3,
      31,     4,    31,    31,     9,    31,    31,    45,    31,    31,
      31,    31,    31,    31,    31,    31,    68,   125,    31,   138,
      31,    31,    31,    -1,   233
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    42,    43,     0,     1,     3,    10,    14,    16,
      17,    19,    44,    45,    47,    49,    50,    54,    31,    56,
      56,     3,     3,     1,     3,    15,    46,     1,     3,     7,
      11,    12,    13,    20,    57,    58,    59,    61,    62,    66,
      67,    75,     1,    11,     1,    10,     1,    35,    31,     3,
      31,    32,    31,     1,    22,    33,    36,    38,     1,    33,
      31,    33,    33,    10,    57,    63,    31,    31,    18,    45,
      51,    52,    53,    51,    36,     1,    36,     1,    33,     3,
       3,     4,     5,    28,    68,    69,    70,    74,    75,    79,
       1,    68,    68,    76,     1,     3,     4,    60,     3,    64,
      68,     1,    64,     6,    68,    68,    56,     1,    21,     1,
      46,     1,     3,    11,    52,     1,    11,    55,    74,    55,
      55,    45,    48,    48,    35,    36,    38,     4,     5,    27,
      28,    31,    29,    30,    31,    31,     1,    32,    34,    37,
      37,     1,    35,    34,    23,    24,    25,    26,    39,    40,
      65,    34,     1,    34,     1,    34,     1,    34,     1,    34,
      11,    33,    33,    31,    31,    31,     1,    31,    33,    31,
      31,    31,    32,    37,    37,     1,    37,     3,    32,    34,
       1,    34,    33,    60,     3,    69,    69,    70,    70,    36,
      77,    68,    77,    35,     1,    35,    68,    68,    63,    68,
      63,    63,     1,    63,    31,    31,    31,    31,    31,    31,
      31,    64,    64,    48,    48,    74,    31,    31,    31,    31,
      45,    43,    43,    43,     3,    28,    71,    72,    73,    74,
      75,    79,    37,    33,    80,     4,    78,    68,    68,    68,
      31,    31,     9,     9,     9,     9,     1,     8,     9,    34,
       1,    34,    34,     1,    34,     3,     1,    10,    10,     1,
      10,     4,     5,    27,    28,    34,    29,    30,    76,     1,
      32,    37,    31,    31,    31,    31,    31,    31,    31,    31,
      63,    31,    31,    31,    31,    43,    43,    43,    56,    56,
      56,    56,    72,    72,    73,    73,    34,     4,     9,    10,
      10,    10,    11,    11,    11,    11,    31,    56,    56,    56,
      31,    31,    31,    31,    11,    11,    11,    31,    31,    31
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    42,    43,    43,    43,    44,    44,
      44,    44,    45,    45,    45,    46,    46,    47,    47,    48,
      48,    49,    49,    49,    49,    50,    50,    50,    51,    51,
      52,    52,    52,    52,    52,    52,    53,    53,    54,    54,
      54,    54,    55,    55,    56,    56,    56,    57,    57,    57,
      57,    57,    57,    57,    58,    58,    58,    59,    59,    59,
      59,    59,    60,    60,    61,    61,    62,    62,    62,    62,
      63,    63,    64,    65,    65,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    67,    68,
      68,    68,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    77,    78,    78,    79,    79,    80,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     6,     5,     2,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     3,     4,
       2,    11,    11,    11,    11,     6,     6,     6,     2,     1,
       3,    10,     1,    10,    10,     3,     3,     3,     7,     7,
       7,     7,     3,     1,     2,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     4,     4,     4,     6,     7,     6,
       7,     7,     1,     1,     5,     5,     5,     5,     5,     5,
       1,     4,     3,     1,     1,     1,     1,     1,     1,     7,
       9,     7,     7,     7,     7,     7,     7,     7,     7,     3,
       3,     1,     3,     3,     1,     1,     1,     2,     2,     1,
       1,     5,     3,     3,     1,     3,     3,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     5,     5,     3,     1,
       3,     3,     0,     3,     1,     4,     4,     3,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* prog: ID sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'  */
#line 28 "gramatica.y"
       { std::cout << "Se reconocio un programa" << std::endl; }
#line 1482 "y.tab.c"
    break;

  case 3: /* prog: ID sent_decl_lista error sent_ejec_lista PR_END ';'  */
#line 30 "gramatica.y"
      {
           std::cerr << "Linea " << LINEA_ACTUAL
                     << ": Error sintactico falta begin principal. "
                     << std::endl;
           yyerrok;
      }
#line 1493 "y.tab.c"
    break;

  case 4: /* prog: ID sent_decl_lista PR_BEGIN sent_ejec_lista error  */
#line 37 "gramatica.y"
      {
           std::cerr << "Linea " << LINEA_ACTUAL
                     << ": Error sintactico falta end final. "
                     << std::endl;
           yyerrok;
      }
#line 1504 "y.tab.c"
    break;

  case 6: /* sent_decl_lista: sent_decl_lista error ';'  */
#line 50 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error sintactico en declaracion. "
                    << "Se descartan tokens hasta ';'."
                    << std::endl;
          yyerrok;
      }
#line 1516 "y.tab.c"
    break;

  case 18: /* decl_variables: tipo error ';'  */
#line 78 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL 
                    << ": Error en la lista de variables. Revise las comas y los identificadores." 
                    << std::endl;
          yyerrok;
      }
#line 1527 "y.tab.c"
    break;

  case 22: /* decl_funcion: tipo PR_FUNCTION ID error lista_params_formales ')' sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'  */
#line 93 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '(' antes de los parametros formales." << std::endl; 
          yyerrok; 
      }
#line 1536 "y.tab.c"
    break;

  case 23: /* decl_funcion: tipo PR_FUNCTION ID '(' lista_params_formales error sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'  */
#line 98 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' despues de los parametros formales." << std::endl; 
          yyerrok; 
      }
#line 1545 "y.tab.c"
    break;

  case 24: /* decl_funcion: tipo PR_FUNCTION ID '(' lista_params_formales ')' sent_decl_lista error sent_ejec_lista PR_END ';'  */
#line 103 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'begin' para iniciar el cuerpo de la funcion." << std::endl; 
          yyerrok; 
      }
#line 1554 "y.tab.c"
    break;

  case 26: /* decl_clase: PR_CLASS ID error clase_item_lista PR_END ';'  */
#line 112 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'begin' en la declaracion de la clase." << std::endl; 
          yyerrok; 
      }
#line 1563 "y.tab.c"
    break;

  case 27: /* decl_clase: PR_CLASS ID PR_BEGIN clase_item_lista error ';'  */
#line 117 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'end' en la declaracion de la clase." << std::endl; 
          yyerrok; 
      }
#line 1572 "y.tab.c"
    break;

  case 33: /* clase_item: tipo ID error lista_params_formales ')' sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'  */
#line 132 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '(' en la declaracion del metodo." << std::endl;
          yyerrok;
      }
#line 1581 "y.tab.c"
    break;

  case 34: /* clase_item: tipo ID '(' lista_params_formales error sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'  */
#line 137 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' despues de los parametros del metodo." << std::endl;
          yyerrok;
      }
#line 1590 "y.tab.c"
    break;

  case 35: /* clase_item: tipo error ';'  */
#line 142 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error en la declaracion del atributo de la clase." << std::endl;
          yyerrok;
      }
#line 1599 "y.tab.c"
    break;

  case 37: /* extends_clause: PR_EXTENDS error ';'  */
#line 151 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL 
                    << ": Error: Lista de clases invalida despues de la palabra 'extends'." 
                    << std::endl;
          yyerrok;
      }
#line 1610 "y.tab.c"
    break;

  case 39: /* decl_typedef: PR_TYPEDEF ID error '[' lista_valores ']' ';'  */
#line 162 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '=' en la declaracion de typedef." << std::endl;
          yyerrok;
      }
#line 1619 "y.tab.c"
    break;

  case 40: /* decl_typedef: PR_TYPEDEF ID '=' error lista_valores ']' ';'  */
#line 167 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '[' para iniciar los valores del typedef." << std::endl;
          yyerrok;
      }
#line 1628 "y.tab.c"
    break;

  case 41: /* decl_typedef: PR_TYPEDEF ID '=' '[' lista_valores error ';'  */
#line 172 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ']' al final de la lista de valores del typedef." << std::endl;
          yyerrok;
      }
#line 1637 "y.tab.c"
    break;

  case 45: /* sent_ejec_lista: sent_ejec_lista error ';'  */
#line 187 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error sintactico en sentencia. "
                    << "Se descartan tokens hasta ';'."
                    << std::endl;
          yyerrok;
      }
#line 1649 "y.tab.c"
    break;

  case 54: /* asignacion: ID OP_ASIGNACION expresion ';'  */
#line 207 "gramatica.y"
             { std::cout << "Asignacion (linea " << LINEA_ACTUAL << ")" << std::endl; }
#line 1655 "y.tab.c"
    break;

  case 55: /* asignacion: ID error expresion ';'  */
#line 209 "gramatica.y"
                 { 
                     std::cerr << "Linea " << LINEA_ACTUAL 
                               << ": Error: Falta el operador ':=' en la asignacion o esta mal formado." 
                               << std::endl; 
                     yyerrok; 
                 }
#line 1666 "y.tab.c"
    break;

  case 56: /* asignacion: ID OP_ASIGNACION error ';'  */
#line 216 "gramatica.y"
                            { 
                                std::cerr << "Linea " << LINEA_ACTUAL 
                                          << ": Error: Falta una expresion válida." 
                                          << std::endl; 
                                yyerrok; 
                            }
#line 1677 "y.tab.c"
    break;

  case 59: /* asignacion_atributo: ID '.' ID error expresion ';'  */
#line 227 "gramatica.y"
                    {
    		      std::cerr << "Linea " << LINEA_ACTUAL 
		                    << ": Error: Falta el operador '=' en la asignacion de atributo." 
    		                << std::endl;
     		      yyerrok;
    		}
#line 1688 "y.tab.c"
    break;

  case 60: /* asignacion_atributo: ID '[' indice ']' error expresion ';'  */
#line 235 "gramatica.y"
                    {
  		        std::cerr << "Linea " << LINEA_ACTUAL 
  		                  << ": Error: Falta el operador '=' en la asignacion posicional." 
		                    << std::endl;
         		 yyerrok;
    		  }
#line 1699 "y.tab.c"
    break;

  case 61: /* asignacion_atributo: ID '[' error ']' '=' expresion ';'  */
#line 243 "gramatica.y"
                      {
         		 std::cerr << "Linea " << LINEA_ACTUAL 
               		     << ": Error: Indice invalido o faltante dentro de los corchetes '[]'." 
                   		 << std::endl;
         		 yyerrok;
     		  }
#line 1710 "y.tab.c"
    break;

  case 65: /* retorno: PR_RET '(' expresion error ';'  */
#line 258 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' en la sentencia ret." << std::endl; 
          yyerrok; 
      }
#line 1719 "y.tab.c"
    break;

  case 68: /* pout: PR_POUT '(' CTE_STR error ';'  */
#line 268 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' en el pout." << std::endl; 
          yyerrok; 
      }
#line 1728 "y.tab.c"
    break;

  case 69: /* pout: PR_POUT '(' expresion error ';'  */
#line 273 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' despues de la expresion en el pout." << std::endl; 
          yyerrok; 
      }
#line 1737 "y.tab.c"
    break;

  case 81: /* seleccion: PR_IF '(' condicion error bloque_sent_ejec PR_END_IF ';'  */
#line 298 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error: se esperaba ')' después de la condición del IF."
                    << std::endl;
          yyerrok;
      }
#line 1748 "y.tab.c"
    break;

  case 82: /* seleccion: PR_IF '(' error ')' bloque_sent_ejec PR_END_IF ';'  */
#line 305 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error: se esperaba una condición dentro del IF."
                    << std::endl;
          yyerrok;
      }
#line 1759 "y.tab.c"
    break;

  case 83: /* seleccion: PR_IF error condicion ')' bloque_sent_ejec PR_END_IF ';'  */
#line 312 "gramatica.y"
           {
               std::cerr << "Linea " << LINEA_ACTUAL
                         << ": Error: se esperaba '()' después del IF."
                         << std::endl;
               yyerrok;
           }
#line 1770 "y.tab.c"
    break;

  case 84: /* seleccion: PR_IF '(' condicion ')' bloque_sent_ejec error ';'  */
#line 319 "gramatica.y"
           {
               std::cerr << "Linea " << LINEA_ACTUAL
                         << ": Error: se esperaba End_if después del bloque de sentencias ejecutable."
                         << std::endl;
               yyerrok;
           }
#line 1781 "y.tab.c"
    break;

  case 85: /* seleccion: PR_IF '(' condicion ')' error PR_END_IF ';'  */
#line 326 "gramatica.y"
           {
               std::cerr << "Linea " << LINEA_ACTUAL
                         << ": Error: se esperaba bloque de sentencia ejecutables despues del ')'."
                         << std::endl;
               yyerrok;
           }
#line 1792 "y.tab.c"
    break;

  case 87: /* repeat_while: PR_REPEAT bloque_sent_ejec error '(' condicion ')' ';'  */
#line 337 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'while' despues del bloque repeat." << std::endl; 
          yyerrok; 
      }
#line 1801 "y.tab.c"
    break;

  case 88: /* repeat_while: PR_REPEAT bloque_sent_ejec PR_WHILE '(' condicion error ';'  */
#line 342 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' al final de la condicion del while." << std::endl; 
          yyerrok; 
      }
#line 1810 "y.tab.c"
    break;

  case 97: /* factor: '-' CTE_INT  */
#line 363 "gramatica.y"
         {
             std::cerr << "Linea " << LINEA_ACTUAL << ": Error semantico: la constante '"
                       << (yyvsp[0].ts_ref)->lexema << "' es de tipo USHORTINT (sin signo), "
                       << "no admite el signo '-'." << std::endl;
             (yyval.ts_ref) = (yyvsp[0].ts_ref); //Se guarda la cte como positiva, para futuras operaciones. Guarda un 12 por ej en vez de -12 invalido.
         }
#line 1821 "y.tab.c"
    break;

  case 98: /* factor: '-' CTE_FLOAT  */
#line 370 "gramatica.y"
         {
             std::string lexema_neg = "-" + (yyvsp[0].ts_ref)->lexema;

             auto it = tabla_simbolos.find(lexema_neg);
             if (it == tabla_simbolos.end()) {
                 EntradaTS nueva_entrada;
                 nueva_entrada.lexema = lexema_neg;
                 it = tabla_simbolos.insert({lexema_neg, nueva_entrada}).first;
             }
             (yyval.ts_ref) = &(it->second);
         }
#line 1837 "y.tab.c"
    break;

  case 110: /* factor_restr: '-' CTE_INT  */
#line 399 "gramatica.y"
               {
                   std::cerr << "Linea " << LINEA_ACTUAL << ": Error semantico: la constante '"
                             << (yyvsp[0].ts_ref)->lexema << "' es de tipo USHORTINT (sin signo), "
                             << "no admite el signo '-'." << std::endl;
                   (yyval.ts_ref) = (yyvsp[0].ts_ref);
               }
#line 1848 "y.tab.c"
    break;

  case 111: /* factor_restr: '-' CTE_FLOAT  */
#line 406 "gramatica.y"
               {
                   std::string lexema_neg = "-" + (yyvsp[0].ts_ref)->lexema;

                   auto it = tabla_simbolos.find(lexema_neg);
                   if (it == tabla_simbolos.end()) {
                       EntradaTS nueva_entrada;
                       nueva_entrada.lexema = lexema_neg;
                       it = tabla_simbolos.insert({lexema_neg, nueva_entrada}).first;
                   }
                   (yyval.ts_ref) = &(it->second);
               }
#line 1864 "y.tab.c"
    break;

  case 117: /* invocacion: ID '(' lista_params_reales error lista_ctes_opcional  */
#line 427 "gramatica.y"
             {
                 std::cerr << "Linea " << LINEA_ACTUAL 
                           << ": Error: Falta ')' en la invocacion a la funcion." 
                           << std::endl;
                 yyerrok;
             }
#line 1875 "y.tab.c"
    break;

  case 121: /* lista_ctes_opcional: '[' lista_constantes error  */
#line 441 "gramatica.y"
                       {
                           std::cerr << "Linea " << LINEA_ACTUAL
                                     << ": Error: Falta ']' en la lista de orden de evaluacion."
                                     << std::endl;
                           yyerrok;
                       }
#line 1886 "y.tab.c"
    break;


#line 1890 "y.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 462 "gramatica.y"


void yyerror(const char *s) {
    std::cerr << "Linea " << LINEA_ACTUAL << ": Error: " << s << std::endl;
}

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
#include "main.h"     /* EntradaTS, tabla_simbolos, LINEA_ACTUAL */

int yylex();
void yyerror(const char *s);

#line 79 "y.tab.c"

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
#line 9 "gramatica.y"

    EntradaTS *ts_ref;

#line 188 "y.tab.c"

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
#define YYLAST   479

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  315

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
       0,    24,    24,    26,    33,    45,    46,    54,    57,    58,
      59,    60,    63,    64,    65,    68,    69,    73,    74,    83,
      84,    88,    89,    94,    99,   107,   108,   113,   120,   121,
     125,   126,   127,   128,   133,   138,   146,   147,   157,   158,
     163,   168,   175,   176,   182,   183,   191,   194,   195,   196,
     197,   198,   199,   200,   203,   205,   212,   221,   222,   223,
     231,   239,   248,   249,   253,   254,   262,   263,   264,   269,
     276,   277,   280,   283,   284,   285,   286,   287,   288,   292,
     293,   294,   301,   308,   315,   322,   332,   333,   338,   347,
     348,   349,   352,   353,   354,   357,   358,   359,   360,   361,
     362,   365,   366,   367,   370,   371,   372,   375,   376,   377,
     378,   379,   382,   383,   386,   387,   396,   397,   400,   401,
     408,   411,   412,   415,   416,   419,   420
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

#define YYPACT_NINF (-153)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      38,  -153,    63,   219,  -153,    54,  -153,  -153,   160,  -153,
    -153,   211,  -153,   120,  -153,  -153,  -153,  -153,  -153,   164,
     185,    27,    18,   113,  -153,   213,   232,   187,    26,    35,
    -153,   190,   204,   407,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,   201,   187,  -153,   389,   389,   203,    22,  -153,    55,
    -153,   239,  -153,    88,   138,    88,   227,   242,    88,   151,
     154,    88,  -153,  -153,    31,  -153,   101,   126,   423,  -153,
    -153,   420,   275,   275,   275,   192,   192,  -153,   145,  -153,
    -153,   275,    81,   269,  -153,  -153,  -153,  -153,   220,   141,
     280,    42,   216,  -153,  -153,   218,    32,   224,   376,   236,
      41,    48,    43,    45,   199,   243,   259,   241,   285,   264,
      56,   299,  -153,   320,   328,     8,  -153,   108,    28,   354,
     130,    46,   333,   322,   368,  -153,    88,    88,  -153,    88,
      88,  -153,  -153,   341,    88,   341,   344,    34,    88,    88,
     407,  -153,  -153,  -153,  -153,  -153,  -153,    88,   407,   407,
     214,   355,   360,   363,   366,   380,   382,  -153,    88,    88,
    -153,  -153,  -153,   192,  -153,   192,  -153,  -153,  -153,   275,
     387,   391,   401,   404,  -153,   192,  -153,  -153,  -153,   146,
     409,   414,   269,   269,  -153,  -153,   444,  -153,   280,  -153,
      88,    88,    88,   176,   247,   440,   280,   441,   442,   443,
     116,  -153,  -153,  -153,  -153,  -153,  -153,   419,    50,   155,
      49,  -153,  -153,  -153,  -153,  -153,   451,   331,   339,   351,
     221,   275,    72,   306,  -153,  -153,  -153,  -153,  -153,    88,
    -153,  -153,    29,   381,   397,   402,  -153,  -153,   424,   425,
     426,   427,   428,   407,   429,   430,   431,   432,  -153,  -153,
    -153,  -153,    54,  -153,  -153,    54,  -153,  -153,   146,   146,
    -153,   146,   146,   167,  -153,   460,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,   456,  -153,  -153,  -153,  -153,
     359,   371,   379,   249,   270,   290,   293,   306,   306,  -153,
    -153,  -153,  -153,   435,  -153,  -153,  -153,   436,   437,   438,
     439,  -153,   308,   311,   326,  -153,  -153,  -153,  -153,   445,
     446,   447,  -153,  -153,  -153
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     7,     0,     0,     1,    46,    14,    46,     0,    12,
      13,     0,     5,     0,     8,     9,    10,    11,     6,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       3,     0,     0,     0,    44,    47,    48,    52,    51,    50,
      53,     0,     4,     2,     0,     0,     0,     0,    18,     0,
      17,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    70,     0,    49,     0,     0,     0,    29,
      32,     0,     0,     0,     0,     0,     0,    15,    95,   112,
     113,     0,     0,    91,    94,    96,    98,    99,     0,     0,
     117,     0,     0,    63,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,    55,     0,
       0,    56,    54,   120,     0,   120,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
      37,    36,    35,     0,    30,     0,    26,    27,    25,     0,
       0,     0,     0,     0,    20,     0,     7,     7,     7,     0,
       0,   126,    89,    90,    92,    93,     0,   115,   116,   114,
       0,     0,     0,     0,     0,     0,    72,     0,     0,     0,
       0,    68,    66,    69,    67,    65,    64,     0,     0,     0,
       0,    42,    39,    40,    41,    38,     0,     0,     0,     0,
     107,     0,     0,   103,   106,   108,   110,   111,   124,     0,
     123,   122,     0,     0,     0,     0,    59,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     7,
       7,    19,     0,    46,    46,    46,    46,   109,     0,     0,
     100,     0,     0,     0,   119,     0,   118,    61,    60,    58,
      83,    82,    81,    85,    84,     0,    79,    87,    88,    86,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   104,
     105,   125,   121,     0,    46,    46,    46,     0,     0,     0,
       0,    80,     0,     0,     0,    22,    23,    24,    21,     0,
       0,     0,    33,    34,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,  -152,  -153,   -37,   405,  -153,   -58,  -153,  -153,
     434,   102,  -153,  -153,   310,    -7,   -30,  -153,  -153,   349,
    -153,  -153,  -128,   -45,  -153,  -153,  -153,   -44,   217,   234,
    -153,   184,   183,   -68,   -18,   244,   340,  -153,  -125,  -153
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    12,    13,    26,    14,   120,    15,    16,
      68,    69,    70,    17,   115,    19,    34,    35,    36,    95,
      37,    38,    64,    97,   147,    39,    40,    98,    83,    84,
     222,   223,   224,    85,    86,    91,   187,   232,    87,   230
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    41,    41,    63,   116,   116,   116,    67,    67,    82,
      89,    90,   195,   125,   100,    41,   102,   103,   121,    46,
     197,   198,   200,    73,   217,   218,   219,    53,    44,   172,
     264,    67,   105,   138,    67,   191,    58,    45,   119,   119,
     169,     1,   149,   133,   153,   170,   155,   177,    54,   151,
     249,   246,   106,    47,   227,   104,    75,   163,    74,    55,
     169,   265,    56,     4,    57,   173,   266,   139,    59,   192,
     126,   127,   126,   127,   134,   150,   135,   154,   175,   156,
     178,   175,   152,   250,   247,    18,    41,   164,    76,   165,
     188,    78,    79,    80,   193,   194,   280,   281,   282,   258,
     259,   211,   107,   196,    24,   209,   260,   210,   126,   127,
      63,   225,   128,   207,   208,   275,    81,   242,    63,    63,
      63,    23,    41,    24,   243,   244,   119,   109,   119,   110,
      41,    41,    41,   227,   227,    25,   227,   227,   216,    88,
     169,    78,    79,    80,    48,   171,   233,   234,   235,   220,
      79,    80,    99,   257,    78,    79,    80,    78,    79,    80,
     101,   226,   175,    21,   176,    27,    81,    28,   126,   127,
     112,    29,   132,   112,   221,    30,    31,    32,    55,    81,
     122,   123,    81,   124,    33,    90,    42,   175,    28,   248,
     225,   225,    29,   225,   225,     6,    43,    31,    32,   134,
      27,   291,    28,   126,   127,    33,    29,   236,     9,    10,
     157,    31,    32,    63,    22,   199,    49,    28,    52,    33,
       5,    29,     6,    60,    62,    41,    31,    32,    92,     7,
      93,    94,    65,     8,    33,     9,    10,    61,    11,    72,
     226,   226,    77,   226,   226,    96,   283,   284,   285,   286,
      27,   131,    28,   136,    55,   137,    29,   123,   140,   124,
     297,    31,    32,    50,    51,    41,    41,    41,    41,    33,
     148,    27,   160,    28,   126,   127,   158,    29,   237,    79,
      80,   298,    31,    32,    41,    41,    41,   302,   303,   304,
      33,    27,   159,    28,    27,   162,    28,    29,   129,   130,
      29,   299,    31,    32,   300,    31,    32,   126,   127,    27,
      33,    28,    27,    33,    28,    29,   161,    51,    29,   309,
      31,    32,   310,    31,    32,    93,    94,    27,    33,    28,
     166,    33,   252,    29,     6,   261,   262,   311,    31,    32,
     252,   253,     6,   182,   183,     8,    33,     9,    10,   254,
      11,   167,   255,     8,     6,     9,    10,   174,    11,   168,
     252,   256,     6,   184,   185,     8,   179,     9,    10,   294,
      11,   181,   252,     8,     6,     9,    10,   186,    11,   190,
     252,   295,     6,   117,   118,     8,   201,     9,    10,   296,
      11,   202,     6,     8,   203,     9,    10,   204,    11,   141,
     142,   143,   144,   126,   127,     9,    10,    66,   126,   127,
      28,   205,   267,   206,    29,   145,   146,    62,   212,    31,
      32,   113,   213,     6,   126,   127,     6,    33,   268,   126,
     127,   114,   214,   269,   111,   215,     9,    10,    66,     9,
      10,    66,   287,   288,   289,   290,   228,   229,   231,   238,
     239,   240,   241,   245,   251,   270,   271,   272,   273,   274,
     276,   277,   278,   279,   292,   293,   301,   305,   306,   307,
     308,   108,   180,   263,     0,   189,   312,   313,   314,    71
};

static const yytype_int16 yycheck[] =
{
       7,    19,    20,    33,    72,    73,    74,    44,    45,    53,
      54,    55,   140,    81,    59,    33,    60,    61,    76,     1,
     148,   149,   150,     1,   176,   177,   178,     1,     1,     1,
       1,    68,     1,     1,    71,     1,     1,    10,    75,    76,
      32,     3,     1,     1,     1,    37,     1,     1,    22,     1,
       1,     1,    21,    35,   179,    62,     1,     1,    36,    33,
      32,    32,    36,     0,    38,    37,    37,    35,    33,    35,
      27,    28,    27,    28,    32,    34,    34,    34,    32,    34,
      34,    32,    34,    34,    34,    31,   104,    31,    33,    33,
     134,     3,     4,     5,   138,   139,   248,   249,   250,    27,
      28,   169,     1,   147,     3,   163,    34,   165,    27,    28,
     140,   179,    31,   158,   159,   243,    28,     1,   148,   149,
     150,     1,   140,     3,     8,     9,   163,     1,   165,     3,
     148,   149,   150,   258,   259,    15,   261,   262,   175,     1,
      32,     3,     4,     5,    31,    37,   190,   191,   192,     3,
       4,     5,     1,   221,     3,     4,     5,     3,     4,     5,
       6,   179,    32,     3,    34,     1,    28,     3,    27,    28,
      68,     7,    31,    71,    28,    11,    12,    13,    33,    28,
      35,    36,    28,    38,    20,   229,     1,    32,     3,    34,
     258,   259,     7,   261,   262,     3,    11,    12,    13,    32,
       1,    34,     3,    27,    28,    20,     7,    31,    16,    17,
      11,    12,    13,   243,     3,     1,     3,     3,    31,    20,
       1,     7,     3,    33,    10,   243,    12,    13,     1,    10,
       3,     4,    31,    14,    20,    16,    17,    33,    19,    36,
     258,   259,     3,   261,   262,     3,   253,   254,   255,   256,
       1,    31,     3,    37,    33,    37,     7,    36,    34,    38,
      11,    12,    13,    31,    32,   283,   284,   285,   286,    20,
      34,     1,    31,     3,    27,    28,    33,     7,    31,     4,
       5,    11,    12,    13,   302,   303,   304,   294,   295,   296,
      20,     1,    33,     3,     1,    31,     3,     7,    29,    30,
       7,    11,    12,    13,    11,    12,    13,    27,    28,     1,
      20,     3,     1,    20,     3,     7,    31,    32,     7,    11,
      12,    13,    11,    12,    13,     3,     4,     1,    20,     3,
      31,    20,     1,     7,     3,    29,    30,    11,    12,    13,
       1,    10,     3,   126,   127,    14,    20,    16,    17,    10,
      19,    31,     1,    14,     3,    16,    17,     3,    19,    31,
       1,    10,     3,   129,   130,    14,    33,    16,    17,    10,
      19,     3,     1,    14,     3,    16,    17,    36,    19,    35,
       1,    10,     3,    73,    74,    14,    31,    16,    17,    10,
      19,    31,     3,    14,    31,    16,    17,    31,    19,    23,
      24,    25,    26,    27,    28,    16,    17,    18,    27,    28,
       3,    31,    31,    31,     7,    39,    40,    10,    31,    12,
      13,     1,    31,     3,    27,    28,     3,    20,    31,    27,
      28,    11,    31,    31,    11,    31,    16,    17,    18,    16,
      17,    18,   258,   259,   261,   262,    37,    33,     4,     9,
       9,     9,     9,    34,     3,    31,    31,    31,    31,    31,
      31,    31,    31,    31,     4,     9,    31,    31,    31,    31,
      31,    66,   123,   229,    -1,   135,    31,    31,    31,    45
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
      33,    33,    10,    57,    63,    31,    18,    45,    51,    52,
      53,    51,    36,     1,    36,     1,    33,     3,     3,     4,
       5,    28,    68,    69,    70,    74,    75,    79,     1,    68,
      68,    76,     1,     3,     4,    60,     3,    64,    68,     1,
      64,     6,    68,    68,    56,     1,    21,     1,    46,     1,
       3,    11,    52,     1,    11,    55,    74,    55,    55,    45,
      48,    48,    35,    36,    38,    74,    27,    28,    31,    29,
      30,    31,    31,     1,    32,    34,    37,    37,     1,    35,
      34,    23,    24,    25,    26,    39,    40,    65,    34,     1,
      34,     1,    34,     1,    34,     1,    34,    11,    33,    33,
      31,    31,    31,     1,    31,    33,    31,    31,    31,    32,
      37,    37,     1,    37,     3,    32,    34,     1,    34,    33,
      60,     3,    69,    69,    70,    70,    36,    77,    68,    77,
      35,     1,    35,    68,    68,    63,    68,    63,    63,     1,
      63,    31,    31,    31,    31,    31,    31,    64,    64,    48,
      48,    74,    31,    31,    31,    31,    45,    43,    43,    43,
       3,    28,    71,    72,    73,    74,    75,    79,    37,    33,
      80,     4,    78,    68,    68,    68,    31,    31,     9,     9,
       9,     9,     1,     8,     9,    34,     1,    34,    34,     1,
      34,     3,     1,    10,    10,     1,    10,    74,    27,    28,
      34,    29,    30,    76,     1,    32,    37,    31,    31,    31,
      31,    31,    31,    31,    31,    63,    31,    31,    31,    31,
      43,    43,    43,    56,    56,    56,    56,    72,    72,    73,
      73,    34,     4,     9,    10,    10,    10,    11,    11,    11,
      11,    31,    56,    56,    56,    31,    31,    31,    31,    11,
      11,    11,    31,    31,    31
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
      70,    71,    71,    71,    72,    72,    72,    73,    73,    73,
      73,    73,    74,    74,    75,    75,    76,    76,    77,    77,
      77,    78,    78,    79,    79,    80,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     5,     5,     2,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     3,     4,
       2,    11,    11,    11,    11,     6,     6,     6,     2,     1,
       3,    10,     1,    10,    10,     3,     3,     3,     7,     7,
       7,     7,     3,     1,     2,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     4,     4,     4,     6,     7,     6,
       7,     7,     1,     1,     5,     5,     5,     5,     5,     5,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     7,
       9,     7,     7,     7,     7,     7,     7,     7,     7,     3,
       3,     1,     3,     3,     1,     1,     1,     2,     1,     1,
       5,     3,     3,     1,     3,     3,     1,     1,     1,     2,
       1,     1,     1,     1,     5,     5,     3,     1,     3,     3,
       0,     3,     1,     4,     4,     3,     0
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
  case 2: /* prog: ID sent_decl_lista PR_BEGIN sent_ejec_lista PR_END  */
#line 25 "gramatica.y"
       { std::cout << "Se reconocio un programa" << std::endl; }
#line 1479 "y.tab.c"
    break;

  case 3: /* prog: ID sent_decl_lista error sent_ejec_lista PR_END  */
#line 27 "gramatica.y"
      {
           std::cerr << "Linea " << LINEA_ACTUAL
                     << ": Error sintactico falta begin principal. "
                     << std::endl;
           yyerrok;
      }
#line 1490 "y.tab.c"
    break;

  case 4: /* prog: ID sent_decl_lista PR_BEGIN sent_ejec_lista error  */
#line 34 "gramatica.y"
      {
           std::cerr << "Linea " << LINEA_ACTUAL
                     << ": Error sintactico falta end final. "
                     << std::endl;
           yyerrok;
      }
#line 1501 "y.tab.c"
    break;

  case 6: /* sent_decl_lista: sent_decl_lista error ';'  */
#line 47 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error sintactico en declaracion. "
                    << "Se descartan tokens hasta ';'."
                    << std::endl;
          yyerrok;
      }
#line 1513 "y.tab.c"
    break;

  case 18: /* decl_variables: tipo error ';'  */
#line 75 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL 
                    << ": Error en la lista de variables. Revise las comas y los identificadores." 
                    << std::endl;
          yyerrok;
      }
#line 1524 "y.tab.c"
    break;

  case 22: /* decl_funcion: tipo PR_FUNCTION ID error lista_params_formales ')' sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'  */
#line 90 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '(' antes de los parametros formales." << std::endl; 
          yyerrok; 
      }
#line 1533 "y.tab.c"
    break;

  case 23: /* decl_funcion: tipo PR_FUNCTION ID '(' lista_params_formales error sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'  */
#line 95 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' despues de los parametros formales." << std::endl; 
          yyerrok; 
      }
#line 1542 "y.tab.c"
    break;

  case 24: /* decl_funcion: tipo PR_FUNCTION ID '(' lista_params_formales ')' sent_decl_lista error sent_ejec_lista PR_END ';'  */
#line 100 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'begin' para iniciar el cuerpo de la funcion." << std::endl; 
          yyerrok; 
      }
#line 1551 "y.tab.c"
    break;

  case 26: /* decl_clase: PR_CLASS ID error clase_item_lista PR_END ';'  */
#line 109 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'begin' en la declaracion de la clase." << std::endl; 
          yyerrok; 
      }
#line 1560 "y.tab.c"
    break;

  case 27: /* decl_clase: PR_CLASS ID PR_BEGIN clase_item_lista error ';'  */
#line 114 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'end' en la declaracion de la clase." << std::endl; 
          yyerrok; 
      }
#line 1569 "y.tab.c"
    break;

  case 33: /* clase_item: tipo ID error lista_params_formales ')' sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'  */
#line 129 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '(' en la declaracion del metodo." << std::endl;
          yyerrok;
      }
#line 1578 "y.tab.c"
    break;

  case 34: /* clase_item: tipo ID '(' lista_params_formales error sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'  */
#line 134 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' despues de los parametros del metodo." << std::endl;
          yyerrok;
      }
#line 1587 "y.tab.c"
    break;

  case 35: /* clase_item: tipo error ';'  */
#line 139 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error en la declaracion del atributo de la clase." << std::endl;
          yyerrok;
      }
#line 1596 "y.tab.c"
    break;

  case 37: /* extends_clause: PR_EXTENDS error ';'  */
#line 148 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL 
                    << ": Error: Lista de clases invalida despues de la palabra 'extends'." 
                    << std::endl;
          yyerrok;
      }
#line 1607 "y.tab.c"
    break;

  case 39: /* decl_typedef: PR_TYPEDEF ID error '[' lista_valores ']' ';'  */
#line 159 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '=' en la declaracion de typedef." << std::endl;
          yyerrok;
      }
#line 1616 "y.tab.c"
    break;

  case 40: /* decl_typedef: PR_TYPEDEF ID '=' error lista_valores ']' ';'  */
#line 164 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '[' para iniciar los valores del typedef." << std::endl;
          yyerrok;
      }
#line 1625 "y.tab.c"
    break;

  case 41: /* decl_typedef: PR_TYPEDEF ID '=' '[' lista_valores error ';'  */
#line 169 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ']' al final de la lista de valores del typedef." << std::endl;
          yyerrok;
      }
#line 1634 "y.tab.c"
    break;

  case 45: /* sent_ejec_lista: sent_ejec_lista error ';'  */
#line 184 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error sintactico en sentencia. "
                    << "Se descartan tokens hasta ';'."
                    << std::endl;
          yyerrok;
      }
#line 1646 "y.tab.c"
    break;

  case 54: /* asignacion: ID OP_ASIGNACION expresion ';'  */
#line 204 "gramatica.y"
             { std::cout << "Asignacion (linea " << LINEA_ACTUAL << ")" << std::endl; }
#line 1652 "y.tab.c"
    break;

  case 55: /* asignacion: ID error expresion ';'  */
#line 206 "gramatica.y"
                 { 
                     std::cerr << "Linea " << LINEA_ACTUAL 
                               << ": Error: Falta el operador ':=' en la asignacion o esta mal formado." 
                               << std::endl; 
                     yyerrok; 
                 }
#line 1663 "y.tab.c"
    break;

  case 56: /* asignacion: ID OP_ASIGNACION error ';'  */
#line 213 "gramatica.y"
                            { 
                                std::cerr << "Linea " << LINEA_ACTUAL 
                                          << ": Error: Falta una expresion válida." 
                                          << std::endl; 
                                yyerrok; 
                            }
#line 1674 "y.tab.c"
    break;

  case 59: /* asignacion_atributo: ID '.' ID error expresion ';'  */
#line 224 "gramatica.y"
                    {
    		      std::cerr << "Linea " << LINEA_ACTUAL 
		                    << ": Error: Falta el operador '=' en la asignacion de atributo." 
    		                << std::endl;
     		      yyerrok;
    		}
#line 1685 "y.tab.c"
    break;

  case 60: /* asignacion_atributo: ID '[' indice ']' error expresion ';'  */
#line 232 "gramatica.y"
                    {
  		        std::cerr << "Linea " << LINEA_ACTUAL 
  		                  << ": Error: Falta el operador '=' en la asignacion posicional." 
		                    << std::endl;
         		 yyerrok;
    		  }
#line 1696 "y.tab.c"
    break;

  case 61: /* asignacion_atributo: ID '[' error ']' '=' expresion ';'  */
#line 240 "gramatica.y"
                      {
         		 std::cerr << "Linea " << LINEA_ACTUAL 
               		     << ": Error: Indice invalido o faltante dentro de los corchetes '[]'." 
                   		 << std::endl;
         		 yyerrok;
     		  }
#line 1707 "y.tab.c"
    break;

  case 65: /* retorno: PR_RET '(' expresion error ';'  */
#line 255 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' en la sentencia ret." << std::endl; 
          yyerrok; 
      }
#line 1716 "y.tab.c"
    break;

  case 68: /* pout: PR_POUT '(' CTE_STR error ';'  */
#line 265 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' en el pout." << std::endl; 
          yyerrok; 
      }
#line 1725 "y.tab.c"
    break;

  case 69: /* pout: PR_POUT '(' expresion error ';'  */
#line 270 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' despues de la expresion en el pout." << std::endl; 
          yyerrok; 
      }
#line 1734 "y.tab.c"
    break;

  case 81: /* seleccion: PR_IF '(' condicion error bloque_sent_ejec PR_END_IF ';'  */
#line 295 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error: se esperaba ')' después de la condición del IF."
                    << std::endl;
          yyerrok;
      }
#line 1745 "y.tab.c"
    break;

  case 82: /* seleccion: PR_IF '(' error ')' bloque_sent_ejec PR_END_IF ';'  */
#line 302 "gramatica.y"
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error: se esperaba una condición dentro del IF."
                    << std::endl;
          yyerrok;
      }
#line 1756 "y.tab.c"
    break;

  case 83: /* seleccion: PR_IF error condicion ')' bloque_sent_ejec PR_END_IF ';'  */
#line 309 "gramatica.y"
           {
               std::cerr << "Linea " << LINEA_ACTUAL
                         << ": Error: se esperaba '()' después del IF."
                         << std::endl;
               yyerrok;
           }
#line 1767 "y.tab.c"
    break;

  case 84: /* seleccion: PR_IF '(' condicion ')' bloque_sent_ejec error ';'  */
#line 316 "gramatica.y"
           {
               std::cerr << "Linea " << LINEA_ACTUAL
                         << ": Error: se esperaba End_if después del bloque de sentencias ejecutable."
                         << std::endl;
               yyerrok;
           }
#line 1778 "y.tab.c"
    break;

  case 85: /* seleccion: PR_IF '(' condicion ')' error PR_END_IF ';'  */
#line 323 "gramatica.y"
           {
               std::cerr << "Linea " << LINEA_ACTUAL
                         << ": Error: se esperaba bloque de sentencia ejecutables despues del ')'."
                         << std::endl;
               yyerrok;
           }
#line 1789 "y.tab.c"
    break;

  case 87: /* repeat_while: PR_REPEAT bloque_sent_ejec error '(' condicion ')' ';'  */
#line 334 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'while' despues del bloque repeat." << std::endl; 
          yyerrok; 
      }
#line 1798 "y.tab.c"
    break;

  case 88: /* repeat_while: PR_REPEAT bloque_sent_ejec PR_WHILE '(' condicion error ';'  */
#line 339 "gramatica.y"
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' al final de la condicion del while." << std::endl; 
          yyerrok; 
      }
#line 1807 "y.tab.c"
    break;

  case 115: /* invocacion: ID '(' lista_params_reales error lista_ctes_opcional  */
#line 388 "gramatica.y"
             {
                 std::cerr << "Linea " << LINEA_ACTUAL 
                           << ": Error: Falta ')' en la invocacion a la funcion." 
                           << std::endl;
                 yyerrok;
             }
#line 1818 "y.tab.c"
    break;

  case 119: /* lista_ctes_opcional: '[' lista_constantes error  */
#line 402 "gramatica.y"
                       {
                           std::cerr << "Linea " << LINEA_ACTUAL
                                     << ": Error: Falta ']' en la lista de orden de evaluacion."
                                     << std::endl;
                           yyerrok;
                       }
#line 1829 "y.tab.c"
    break;


#line 1833 "y.tab.c"

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

#line 423 "gramatica.y"


void yyerror(const char *s) {
    errores_sintacticos++;
    std::cerr << "Linea " << LINEA_ACTUAL << ": Error: " << s << std::endl;
}

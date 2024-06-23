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
#line 1 "analisador.y"

#define YYSTYPE struct Tipagem
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

int yyerror(const char *);
int yylex(void);


#line 83 "analisador.tab.c"

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

#include "analisador.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TINT = 3,                       /* TINT  */
  YYSYMBOL_TSTRING = 4,                    /* TSTRING  */
  YYSYMBOL_TFLOAT = 5,                     /* TFLOAT  */
  YYSYMBOL_TVOID = 6,                      /* TVOID  */
  YYSYMBOL_TID = 7,                        /* TID  */
  YYSYMBOL_TLIT = 8,                       /* TLIT  */
  YYSYMBOL_CINT = 9,                       /* CINT  */
  YYSYMBOL_CFLOAT = 10,                    /* CFLOAT  */
  YYSYMBOL_TADD = 11,                      /* TADD  */
  YYSYMBOL_TMUL = 12,                      /* TMUL  */
  YYSYMBOL_TSUB = 13,                      /* TSUB  */
  YYSYMBOL_TDIV = 14,                      /* TDIV  */
  YYSYMBOL_TEPAR = 15,                     /* TEPAR  */
  YYSYMBOL_TDPAR = 16,                     /* TDPAR  */
  YYSYMBOL_TECHAVE = 17,                   /* TECHAVE  */
  YYSYMBOL_TDCHAVE = 18,                   /* TDCHAVE  */
  YYSYMBOL_TVIRGULA = 19,                  /* TVIRGULA  */
  YYSYMBOL_TPVIRGULA = 20,                 /* TPVIRGULA  */
  YYSYMBOL_TMEI = 21,                      /* TMEI  */
  YYSYMBOL_TME = 22,                       /* TME  */
  YYSYMBOL_TMAI = 23,                      /* TMAI  */
  YYSYMBOL_TMA = 24,                       /* TMA  */
  YYSYMBOL_TDIF = 25,                      /* TDIF  */
  YYSYMBOL_TIGUAL = 26,                    /* TIGUAL  */
  YYSYMBOL_TAND = 27,                      /* TAND  */
  YYSYMBOL_TOR = 28,                       /* TOR  */
  YYSYMBOL_TNOT = 29,                      /* TNOT  */
  YYSYMBOL_TIF = 30,                       /* TIF  */
  YYSYMBOL_TELSE = 31,                     /* TELSE  */
  YYSYMBOL_TWHILE = 32,                    /* TWHILE  */
  YYSYMBOL_TATRIB = 33,                    /* TATRIB  */
  YYSYMBOL_TPRINT = 34,                    /* TPRINT  */
  YYSYMBOL_TREAD = 35,                     /* TREAD  */
  YYSYMBOL_TRETURN = 36,                   /* TRETURN  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_Linha = 38,                     /* Linha  */
  YYSYMBOL_Programa = 39,                  /* Programa  */
  YYSYMBOL_ListaFuncoes = 40,              /* ListaFuncoes  */
  YYSYMBOL_Funcao = 41,                    /* Funcao  */
  YYSYMBOL_TipoRetorno = 42,               /* TipoRetorno  */
  YYSYMBOL_DeclParametros = 43,            /* DeclParametros  */
  YYSYMBOL_Parametro = 44,                 /* Parametro  */
  YYSYMBOL_BlocoPrincipal = 45,            /* BlocoPrincipal  */
  YYSYMBOL_Declaracoes = 46,               /* Declaracoes  */
  YYSYMBOL_Declaracao = 47,                /* Declaracao  */
  YYSYMBOL_Tipo = 48,                      /* Tipo  */
  YYSYMBOL_ListaID = 49,                   /* ListaID  */
  YYSYMBOL_Bloco = 50,                     /* Bloco  */
  YYSYMBOL_ListaCmd = 51,                  /* ListaCmd  */
  YYSYMBOL_Comando = 52,                   /* Comando  */
  YYSYMBOL_Retorno = 53,                   /* Retorno  */
  YYSYMBOL_CmdSe = 54,                     /* CmdSe  */
  YYSYMBOL_CmdEnquanto = 55,               /* CmdEnquanto  */
  YYSYMBOL_CmdAtrib = 56,                  /* CmdAtrib  */
  YYSYMBOL_CmdEscrita = 57,                /* CmdEscrita  */
  YYSYMBOL_CmdLeitura = 58,                /* CmdLeitura  */
  YYSYMBOL_ChamadaProc = 59,               /* ChamadaProc  */
  YYSYMBOL_ChamaFuncao = 60,               /* ChamaFuncao  */
  YYSYMBOL_ListaParametros = 61,           /* ListaParametros  */
  YYSYMBOL_Log = 62,                       /* Log  */
  YYSYMBOL_OperaLog = 63,                  /* OperaLog  */
  YYSYMBOL_Rel = 64,                       /* Rel  */
  YYSYMBOL_Expr = 65,                      /* Expr  */
  YYSYMBOL_Termo = 66,                     /* Termo  */
  YYSYMBOL_Fator = 67                      /* Fator  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   199

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

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
       0,    22,    22,    25,    26,    29,    36,    39,    40,    43,
      44,    47,    49,    52,    55,    56,    59,    61,    64,    67,
      68,    69,    72,    80,    83,    86,    93,    96,    97,    98,
      99,   100,   101,   102,   105,   106,   107,   110,   111,   114,
     117,   118,   121,   122,   125,   128,   131,   132,   135,   137,
     140,   141,   144,   145,   146,   149,   150,   151,   154,   155,
     156,   157,   158,   159,   162,   163,   164,   167,   168,   169,
     172,   173,   174,   175,   176
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TINT", "TSTRING",
  "TFLOAT", "TVOID", "TID", "TLIT", "CINT", "CFLOAT", "TADD", "TMUL",
  "TSUB", "TDIV", "TEPAR", "TDPAR", "TECHAVE", "TDCHAVE", "TVIRGULA",
  "TPVIRGULA", "TMEI", "TME", "TMAI", "TMA", "TDIF", "TIGUAL", "TAND",
  "TOR", "TNOT", "TIF", "TELSE", "TWHILE", "TATRIB", "TPRINT", "TREAD",
  "TRETURN", "$accept", "Linha", "Programa", "ListaFuncoes", "Funcao",
  "TipoRetorno", "DeclParametros", "Parametro", "BlocoPrincipal",
  "Declaracoes", "Declaracao", "Tipo", "ListaID", "Bloco", "ListaCmd",
  "Comando", "Retorno", "CmdSe", "CmdEnquanto", "CmdAtrib", "CmdEscrita",
  "CmdLeitura", "ChamadaProc", "ChamaFuncao", "ListaParametros", "Log",
  "OperaLog", "Rel", "Expr", "Termo", "Fator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-101)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     145,  -101,  -101,  -101,  -101,     4,    25,  -101,   145,  -101,
       8,  -101,  -101,    -2,    14,    46,    50,    52,   146,     4,
    -101,    62,    28,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,    39,  -101,  -101,  -101,    80,   160,   150,    96,    96,
     164,    86,    84,   100,  -101,  -101,    11,  -101,  -101,    -1,
      30,  -101,  -101,    36,  -101,    56,  -101,  -101,  -101,   105,
    -101,  -101,    58,    44,   107,    17,    96,    96,    69,  -101,
     102,   121,    88,   117,    70,   136,  -101,   101,    11,    11,
    -101,    11,    11,  -101,   109,  -101,   169,    78,  -101,   180,
    -101,   173,  -101,  -101,   175,   115,  -101,   176,    96,    96,
      11,    11,    11,    11,    11,    11,   176,   172,   174,   177,
    -101,    30,    30,  -101,  -101,  -101,  -101,   169,   119,  -101,
    -101,    44,  -101,    15,   165,  -101,  -101,  -101,    44,    44,
      44,    44,    44,    44,  -101,  -101,  -101,  -101,  -101,  -101,
      66,   176,  -101,  -101
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    19,    20,    21,    10,     0,     0,     2,     0,     6,
       0,     4,     9,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,    26,    33,    27,    28,    29,    30,    31,
      32,     0,     1,     5,     3,     0,     0,     0,     0,     0,
       0,     0,    73,     0,    72,    71,     0,    36,    74,     0,
      66,    69,    16,     0,    23,     0,    15,    25,    45,     0,
      51,    47,     0,    50,     0,     0,     0,     0,     0,    54,
      55,     0,     0,     0,     0,     0,    35,     0,     0,     0,
      34,     0,     0,    14,     0,    18,     0,     0,    12,     0,
      46,     0,    41,    40,     0,     0,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    64,    65,    67,    68,    22,     8,     0,     0,    13,
      49,    48,    57,     0,    37,    52,    55,    53,    58,    59,
      60,    61,    62,    63,    39,    43,    42,    44,     7,    11,
       0,     0,    24,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,  -101,   187,  -101,  -101,    81,    -4,  -101,
     179,    -3,  -101,  -100,   -16,   -21,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,    -5,  -101,    13,    65,    79,   -13,   106,
     108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,     9,    10,    87,    88,    11,    19,
      20,    12,    55,   124,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    48,    62,    68,    69,    70,    71,    50,
      51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      31,    57,    21,    53,    34,    49,   134,     1,     2,     3,
      78,    13,    79,    36,    31,    35,    21,    31,    42,    80,
      44,    45,    13,    63,    65,    32,    46,    74,    78,    38,
      79,    37,    57,    77,    14,    13,    15,    93,    16,    17,
      18,   143,    81,    13,    82,    14,    56,    15,    31,    16,
      17,    18,    72,    95,    83,    78,    89,    79,    14,    58,
      15,    39,    16,    17,    18,    40,    14,    41,    15,    54,
      16,    17,    18,    13,    90,    84,    85,    91,   121,    94,
      96,    78,   116,    79,   142,    97,   108,   128,   129,   130,
     131,   132,   133,    75,   117,    59,    14,   118,    15,    36,
      16,    17,    18,    42,   106,    44,    45,   140,     1,     2,
       3,    66,    78,   138,    79,    89,   115,   110,    31,    57,
      76,    86,     1,     2,     3,    67,    78,    92,    79,    98,
      99,   110,    78,   107,    79,    31,   100,   101,   102,   103,
     104,   105,   100,   101,   102,   103,   104,   105,     1,     2,
       3,     4,   109,    42,    43,    44,    45,    42,    64,    44,
      45,    46,     5,   125,   127,    46,    47,    42,    60,    44,
      45,    42,    73,    44,    45,    46,    61,   126,   126,    46,
      42,   120,    44,    45,   111,   112,     5,   119,    46,   113,
     114,   122,   135,   123,   136,    33,   141,   137,    52,   139
};

static const yytype_uint8 yycheck[] =
{
       5,    22,     5,    19,     8,    18,   106,     3,     4,     5,
      11,     7,    13,    15,    19,     7,    19,    22,     7,    20,
       9,    10,     7,    36,    37,     0,    15,    40,    11,    15,
      13,    33,    53,    46,    30,     7,    32,    20,    34,    35,
      36,   141,    12,     7,    14,    30,    18,    32,    53,    34,
      35,    36,    39,    66,    18,    11,    59,    13,    30,    20,
      32,    15,    34,    35,    36,    15,    30,    15,    32,     7,
      34,    35,    36,     7,    16,    19,    20,    19,    91,    66,
      67,    11,    86,    13,    18,    16,    16,   100,   101,   102,
     103,   104,   105,     7,    16,    15,    30,    19,    32,    15,
      34,    35,    36,     7,    16,     9,    10,   123,     3,     4,
       5,    15,    11,   117,    13,   118,     7,    16,   123,   140,
      20,    16,     3,     4,     5,    29,    11,    20,    13,    27,
      28,    16,    11,    16,    13,   140,    21,    22,    23,    24,
      25,    26,    21,    22,    23,    24,    25,    26,     3,     4,
       5,     6,    16,     7,     8,     9,    10,     7,     8,     9,
      10,    15,    17,    98,    99,    15,    20,     7,     8,     9,
      10,     7,     8,     9,    10,    15,    16,    98,    99,    15,
       7,     8,     9,    10,    78,    79,    17,     7,    15,    81,
      82,    16,    20,    17,    20,     8,    31,    20,    19,   118
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    17,    38,    39,    40,    41,
      42,    45,    48,     7,    30,    32,    34,    35,    36,    46,
      47,    48,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,     0,    41,    45,     7,    15,    33,    15,    15,
      15,    15,     7,     8,     9,    10,    15,    20,    60,    65,
      66,    67,    47,    51,     7,    49,    18,    52,    20,    15,
       8,    16,    61,    65,     8,    65,    15,    29,    62,    63,
      64,    65,    62,     8,    65,     7,    20,    65,    11,    13,
      20,    12,    14,    18,    19,    20,    16,    43,    44,    48,
      16,    19,    20,    20,    62,    65,    62,    16,    27,    28,
      21,    22,    23,    24,    25,    26,    16,    16,    16,    16,
      16,    66,    66,    67,    67,     7,    45,    16,    19,     7,
       8,    65,    16,    17,    50,    63,    64,    63,    65,    65,
      65,    65,    65,    65,    50,    20,    20,    20,    45,    44,
      51,    31,    18,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    41,    41,    42,
      42,    43,    43,    44,    45,    45,    46,    46,    47,    48,
      48,    48,    49,    49,    50,    51,    51,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    53,    54,    54,    55,
      56,    56,    57,    57,    58,    59,    60,    60,    61,    61,
      61,    61,    62,    62,    62,    63,    63,    63,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    66,    66,    66,
      67,    67,    67,    67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     6,     5,     1,
       1,     3,     1,     2,     4,     3,     2,     1,     3,     1,
       1,     1,     3,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     5,     7,     5,
       4,     4,     5,     5,     5,     2,     4,     3,     3,     3,
       1,     1,     3,     3,     1,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     1,     1,     1
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* Linha: Programa  */
#line 22 "analisador.y"
                {printar_codigo(yyvsp[0].programa);}
#line 1513 "analisador.tab.c"
    break;

  case 3: /* Programa: ListaFuncoes BlocoPrincipal  */
#line 25 "analisador.y"
                                      {yyval.programa = iniciar_programa(yyvsp[-1].funcao, yyvsp[0].bloco);}
#line 1519 "analisador.tab.c"
    break;

  case 4: /* Programa: BlocoPrincipal  */
#line 26 "analisador.y"
                                 {yyval.programa = iniciar_programa(NULL, yyvsp[0].bloco);}
#line 1525 "analisador.tab.c"
    break;

  case 5: /* ListaFuncoes: ListaFuncoes Funcao  */
#line 29 "analisador.y"
                                  {struct Funcao *temp = yyvsp[-1].funcao;
								   while (temp->proximo != NULL) {
								       temp = temp->proximo;
								   }
								   ;temp->proximo = yyvsp[0].funcao;
								   yyvsp[0].funcao->anterior = temp;
								   yyval.funcao = yyvsp[-1].funcao;}
#line 1537 "analisador.tab.c"
    break;

  case 6: /* ListaFuncoes: Funcao  */
#line 36 "analisador.y"
                     {yyval.funcao = yyvsp[0].funcao;}
#line 1543 "analisador.tab.c"
    break;

  case 7: /* Funcao: TipoRetorno TID TEPAR DeclParametros TDPAR BlocoPrincipal  */
#line 39 "analisador.y"
                                                                  {yyval.funcao = comp_funcao(comp_no(ID, yyvsp[-4].StringValue, -1, -1), yyvsp[-5].No, yyvsp[-2].parametro, yyvsp[0].bloco);}
#line 1549 "analisador.tab.c"
    break;

  case 8: /* Funcao: TipoRetorno TID TEPAR TDPAR BlocoPrincipal  */
#line 40 "analisador.y"
                                                   {yyval.funcao = comp_funcao(comp_no(ID, yyvsp[-3].StringValue, -1, -1),yyvsp[-4].No, NULL, yyvsp[0].bloco);}
#line 1555 "analisador.tab.c"
    break;

  case 9: /* TipoRetorno: Tipo  */
#line 43 "analisador.y"
                  {yyval.No = yyvsp[0].No;}
#line 1561 "analisador.tab.c"
    break;

  case 10: /* TipoRetorno: TVOID  */
#line 44 "analisador.y"
                           {yyval.No = comp_no(TIPO, yyvsp[0].StringValue, -1, -1);}
#line 1567 "analisador.tab.c"
    break;

  case 11: /* DeclParametros: DeclParametros TVIRGULA Parametro  */
#line 47 "analisador.y"
                                                  {yyval.parametro->proximo = yyvsp[0].parametro;
												   yyvsp[0].parametro->anterior = yyval.parametro;}
#line 1574 "analisador.tab.c"
    break;

  case 12: /* DeclParametros: Parametro  */
#line 49 "analisador.y"
                                      {yyval.parametro = yyvsp[0].parametro;}
#line 1580 "analisador.tab.c"
    break;

  case 13: /* Parametro: Tipo TID  */
#line 52 "analisador.y"
                    {yyval.parametro = comp_parametro(comp_no(ID, yyvsp[0].StringValue, -1, -1), yyvsp[-1].No, NULL);}
#line 1586 "analisador.tab.c"
    break;

  case 14: /* BlocoPrincipal: TECHAVE Declaracoes ListaCmd TDCHAVE  */
#line 55 "analisador.y"
                                                     {yyval.bloco = comp_bloco(yyvsp[-2].tabela_de_simbolos, yyvsp[-1].No);}
#line 1592 "analisador.tab.c"
    break;

  case 15: /* BlocoPrincipal: TECHAVE ListaCmd TDCHAVE  */
#line 56 "analisador.y"
                                                 {yyval.bloco = comp_bloco(NULL, yyvsp[-1].No);}
#line 1598 "analisador.tab.c"
    break;

  case 16: /* Declaracoes: Declaracoes Declaracao  */
#line 59 "analisador.y"
                                    {yyvsp[-1].tabela_de_simbolos->proximo = yyvsp[0].tabela_de_simbolos;
									 yyvsp[0].tabela_de_simbolos->anterior = yyvsp[-1].tabela_de_simbolos;}
#line 1605 "analisador.tab.c"
    break;

  case 17: /* Declaracoes: Declaracao  */
#line 61 "analisador.y"
                                {yyval.tabela_de_simbolos = yyvsp[0].tabela_de_simbolos;}
#line 1611 "analisador.tab.c"
    break;

  case 18: /* Declaracao: Tipo ListaID TPVIRGULA  */
#line 64 "analisador.y"
                                   {yyval.tabela_de_simbolos = comp_tabela(yyvsp[-1].No, yyvsp[-2].No, NULL);}
#line 1617 "analisador.tab.c"
    break;

  case 19: /* Tipo: TINT  */
#line 67 "analisador.y"
           {yyval.No = comp_no(TIPO, yyvsp[0].StringValue, -1, -1);}
#line 1623 "analisador.tab.c"
    break;

  case 20: /* Tipo: TSTRING  */
#line 68 "analisador.y"
                  {yyval.No = comp_no(TIPO, yyvsp[0].StringValue, -1, -1);}
#line 1629 "analisador.tab.c"
    break;

  case 21: /* Tipo: TFLOAT  */
#line 69 "analisador.y"
                 {yyval.No = comp_no(TIPO, yyvsp[0].StringValue, -1, -1);}
#line 1635 "analisador.tab.c"
    break;

  case 22: /* ListaID: ListaID TVIRGULA TID  */
#line 72 "analisador.y"
                              {struct No* newNode = comp_no(ID, yyvsp[0].StringValue, -1, -1);
							   struct No* current = yyvsp[-2].No;
							   while (current->proximo != NULL) {
								   current = current->proximo;
							   }
							   current->proximo = newNode;
							   newNode->anterior = current;
							   yyval.No = yyvsp[-2].No;}
#line 1648 "analisador.tab.c"
    break;

  case 23: /* ListaID: TID  */
#line 80 "analisador.y"
             {yyval.No = comp_no(ID, yyvsp[0].StringValue, -1, -1);}
#line 1654 "analisador.tab.c"
    break;

  case 24: /* Bloco: TECHAVE ListaCmd TDCHAVE  */
#line 83 "analisador.y"
                                {yyval.bloco = comp_bloco(NULL, yyvsp[-1].No);}
#line 1660 "analisador.tab.c"
    break;

  case 25: /* ListaCmd: ListaCmd Comando  */
#line 86 "analisador.y"
                           {struct No *current = yyvsp[-1].No;
							while (current->proximo != NULL) {
								current = current->proximo;
							}
							current->proximo = yyvsp[0].No;
							yyvsp[0].No->anterior = current;
							yyval.No = yyvsp[-1].No;}
#line 1672 "analisador.tab.c"
    break;

  case 26: /* ListaCmd: Comando  */
#line 93 "analisador.y"
                  {yyval.No = yyvsp[0].No;}
#line 1678 "analisador.tab.c"
    break;

  case 27: /* Comando: CmdSe  */
#line 96 "analisador.y"
               {yyval.No = yyvsp[0].No;}
#line 1684 "analisador.tab.c"
    break;

  case 28: /* Comando: CmdEnquanto  */
#line 97 "analisador.y"
                         {yyval.No = yyvsp[0].No;}
#line 1690 "analisador.tab.c"
    break;

  case 29: /* Comando: CmdAtrib  */
#line 98 "analisador.y"
                      {yyval.No = yyvsp[0].No;}
#line 1696 "analisador.tab.c"
    break;

  case 30: /* Comando: CmdEscrita  */
#line 99 "analisador.y"
                        {yyval.No = yyvsp[0].No;}
#line 1702 "analisador.tab.c"
    break;

  case 31: /* Comando: CmdLeitura  */
#line 100 "analisador.y"
                        {yyval.No = yyvsp[0].No;}
#line 1708 "analisador.tab.c"
    break;

  case 32: /* Comando: ChamadaProc  */
#line 101 "analisador.y"
                         {yyval.No = yyvsp[0].No;}
#line 1714 "analisador.tab.c"
    break;

  case 33: /* Comando: Retorno  */
#line 102 "analisador.y"
                     {yyval.No = yyvsp[0].No;}
#line 1720 "analisador.tab.c"
    break;

  case 34: /* Retorno: TRETURN Expr TPVIRGULA  */
#line 105 "analisador.y"
                                {yyval.No = comp_operacao_binaria(RETURN, yyvsp[-1].No, NULL);}
#line 1726 "analisador.tab.c"
    break;

  case 35: /* Retorno: TRETURN TLIT TPVIRGULA  */
#line 106 "analisador.y"
                                    {yyval.No = comp_operacao_binaria(RETURN, comp_no(LITERAL, yyvsp[-1].StringValue, -1, -1), NULL);}
#line 1732 "analisador.tab.c"
    break;

  case 36: /* Retorno: TRETURN TPVIRGULA  */
#line 107 "analisador.y"
                               {yyval.No = comp_operacao_binaria(RETURN, NULL, NULL);}
#line 1738 "analisador.tab.c"
    break;

  case 37: /* CmdSe: TIF TEPAR Log TDPAR Bloco  */
#line 110 "analisador.y"
                                 {yyval.No = comp_if_else(IF, yyvsp[-2].No, yyvsp[0].bloco,NULL);}
#line 1744 "analisador.tab.c"
    break;

  case 38: /* CmdSe: TIF TEPAR Log TDPAR Bloco TELSE Bloco  */
#line 111 "analisador.y"
                                                 {yyval.No = comp_if_else(IF, yyvsp[-4].No, yyvsp[-2].bloco, yyvsp[0].bloco);}
#line 1750 "analisador.tab.c"
    break;

  case 39: /* CmdEnquanto: TWHILE TEPAR Log TDPAR Bloco  */
#line 114 "analisador.y"
                                          {yyval.No = comp_while(WHILE, yyvsp[-2].No, yyvsp[0].bloco);}
#line 1756 "analisador.tab.c"
    break;

  case 40: /* CmdAtrib: TID TATRIB Expr TPVIRGULA  */
#line 117 "analisador.y"
                                    {yyval.No = comp_operacao_binaria(ATRIB, comp_no(ID, yyvsp[-3].StringValue, -1, -1), yyvsp[-1].No);}
#line 1762 "analisador.tab.c"
    break;

  case 41: /* CmdAtrib: TID TATRIB TLIT TPVIRGULA  */
#line 118 "analisador.y"
                                            {yyval.No = comp_operacao_binaria(ATRIB, comp_no(ID, yyvsp[-3].StringValue, -1, -1), comp_no(LITERAL, yyvsp[-1].StringValue, -1, -1));}
#line 1768 "analisador.tab.c"
    break;

  case 42: /* CmdEscrita: TPRINT TEPAR Expr TDPAR TPVIRGULA  */
#line 121 "analisador.y"
                                              {yyval.No = comp_escrita(WRITE, NULL, yyvsp[-2].No);}
#line 1774 "analisador.tab.c"
    break;

  case 43: /* CmdEscrita: TPRINT TEPAR TLIT TDPAR TPVIRGULA  */
#line 122 "analisador.y"
                                                      {yyval.No = comp_escrita(WRITE, comp_no(LITERAL, yyvsp[-2].StringValue, -1, -1), NULL);}
#line 1780 "analisador.tab.c"
    break;

  case 44: /* CmdLeitura: TREAD TEPAR TID TDPAR TPVIRGULA  */
#line 125 "analisador.y"
                                            {yyval.No = comp_chamada_funcao(READ, comp_no(ID, yyvsp[-2].StringValue, -1, -1), NULL);}
#line 1786 "analisador.tab.c"
    break;

  case 45: /* ChamadaProc: ChamaFuncao TPVIRGULA  */
#line 128 "analisador.y"
                                   {yyval.No = yyvsp[-1].No;}
#line 1792 "analisador.tab.c"
    break;

  case 46: /* ChamaFuncao: TID TEPAR ListaParametros TDPAR  */
#line 131 "analisador.y"
                                             {yyval.No = comp_chamada_funcao(FUNC, comp_no(ID, yyvsp[-3].StringValue, -1,-1), yyvsp[-1].parametro);}
#line 1798 "analisador.tab.c"
    break;

  case 47: /* ChamaFuncao: TID TEPAR TDPAR  */
#line 132 "analisador.y"
                                     {yyval.No = comp_chamada_funcao(FUNC, comp_no(ID, yyvsp[-2].StringValue, -1, -1), NULL);}
#line 1804 "analisador.tab.c"
    break;

  case 48: /* ListaParametros: ListaParametros TVIRGULA Expr  */
#line 135 "analisador.y"
                                               {struct Parametro *aux = comp_parametro(NULL, NULL, yyvsp[0].No); 
															   yyval.parametro->proximo = aux; aux->anterior = yyval.parametro;}
#line 1811 "analisador.tab.c"
    break;

  case 49: /* ListaParametros: ListaParametros TVIRGULA TLIT  */
#line 137 "analisador.y"
                                        {struct Parametro *aux = comp_parametro(comp_no(LITERAL, yyvsp[0].StringValue, -1, -1), comp_no(TIPO, "string", -1, -1), NULL); 
									 yyval.parametro->proximo = aux;
									 aux->anterior = yyval.parametro;}
#line 1819 "analisador.tab.c"
    break;

  case 50: /* ListaParametros: Expr  */
#line 140 "analisador.y"
               {yyval.parametro = comp_parametro(NULL, NULL, yyvsp[0].No);}
#line 1825 "analisador.tab.c"
    break;

  case 51: /* ListaParametros: TLIT  */
#line 141 "analisador.y"
               {yyval.parametro = comp_parametro(comp_no(LITERAL, yyvsp[0].StringValue, -1, -1), comp_no(TIPO, "string", -1, -1), NULL);}
#line 1831 "analisador.tab.c"
    break;

  case 52: /* Log: Rel TAND OperaLog  */
#line 144 "analisador.y"
                       {yyval.No = comp_operacao_binaria(AND, yyvsp[-2].No, yyvsp[0].No);}
#line 1837 "analisador.tab.c"
    break;

  case 53: /* Log: Rel TOR OperaLog  */
#line 145 "analisador.y"
                      {yyval.No = comp_operacao_binaria(OR, yyvsp[-2].No, yyvsp[0].No);}
#line 1843 "analisador.tab.c"
    break;

  case 54: /* Log: OperaLog  */
#line 146 "analisador.y"
              {yyval.No = yyvsp[0].No;}
#line 1849 "analisador.tab.c"
    break;

  case 55: /* OperaLog: Rel  */
#line 149 "analisador.y"
              {yyval.No = yyvsp[0].No;}
#line 1855 "analisador.tab.c"
    break;

  case 56: /* OperaLog: TNOT Log  */
#line 150 "analisador.y"
                           {yyval.No = comp_operacao_binaria(NOT, yyvsp[0].No, NULL);}
#line 1861 "analisador.tab.c"
    break;

  case 57: /* OperaLog: TEPAR Log TDPAR  */
#line 151 "analisador.y"
                                  {yyval.No = yyvsp[-2].No; yyval.No->parenteses = 1;}
#line 1867 "analisador.tab.c"
    break;

  case 58: /* Rel: Expr TMEI Expr  */
#line 154 "analisador.y"
                    {yyval.No = comp_operacao_binaria(MEI, yyvsp[-2].No, yyvsp[0].No);}
#line 1873 "analisador.tab.c"
    break;

  case 59: /* Rel: Expr TME Expr  */
#line 155 "analisador.y"
                   {yyval.No = comp_operacao_binaria(ME, yyvsp[-2].No, yyvsp[0].No);}
#line 1879 "analisador.tab.c"
    break;

  case 60: /* Rel: Expr TMAI Expr  */
#line 156 "analisador.y"
                    {yyval.No = comp_operacao_binaria(MAI, yyvsp[-2].No, yyvsp[0].No);}
#line 1885 "analisador.tab.c"
    break;

  case 61: /* Rel: Expr TMA Expr  */
#line 157 "analisador.y"
                   {yyval.No = comp_operacao_binaria(MA, yyvsp[-2].No, yyvsp[0].No);}
#line 1891 "analisador.tab.c"
    break;

  case 62: /* Rel: Expr TDIF Expr  */
#line 158 "analisador.y"
                    {yyval.No = comp_operacao_binaria(DIF, yyvsp[-2].No, yyvsp[0].No);}
#line 1897 "analisador.tab.c"
    break;

  case 63: /* Rel: Expr TIGUAL Expr  */
#line 159 "analisador.y"
                      {yyval.No = comp_operacao_binaria(IGUAL, yyvsp[-2].No, yyvsp[0].No);}
#line 1903 "analisador.tab.c"
    break;

  case 64: /* Expr: Expr TADD Termo  */
#line 162 "analisador.y"
                      {yyval.No = comp_operacao_binaria(ADD, yyvsp[-2].No, yyvsp[0].No);}
#line 1909 "analisador.tab.c"
    break;

  case 65: /* Expr: Expr TSUB Termo  */
#line 163 "analisador.y"
                          {yyval.No = comp_operacao_binaria(SUB, yyvsp[-2].No, yyvsp[0].No);}
#line 1915 "analisador.tab.c"
    break;

  case 66: /* Expr: Termo  */
#line 164 "analisador.y"
                {yyval.No = yyvsp[0].No;}
#line 1921 "analisador.tab.c"
    break;

  case 67: /* Termo: Termo TMUL Fator  */
#line 167 "analisador.y"
                        {yyval.No = comp_operacao_binaria(MUL, yyvsp[-2].No, yyvsp[0].No);}
#line 1927 "analisador.tab.c"
    break;

  case 68: /* Termo: Termo TDIV Fator  */
#line 168 "analisador.y"
                            {yyval.No = comp_operacao_binaria(DIV, yyvsp[-2].No, yyvsp[0].No);}
#line 1933 "analisador.tab.c"
    break;

  case 69: /* Termo: Fator  */
#line 169 "analisador.y"
                 {yyval.No = yyvsp[0].No;}
#line 1939 "analisador.tab.c"
    break;

  case 70: /* Fator: TEPAR Expr TDPAR  */
#line 172 "analisador.y"
                        {yyval.No = yyvsp[-2].No; yyval.No->parenteses = 1;}
#line 1945 "analisador.tab.c"
    break;

  case 71: /* Fator: CFLOAT  */
#line 173 "analisador.y"
                  {yyval.No = comp_no(FLOAT, "", -1, yyvsp[0].DoubleValue);}
#line 1951 "analisador.tab.c"
    break;

  case 72: /* Fator: CINT  */
#line 174 "analisador.y"
                {yyval.No = comp_no(INT, "", yyvsp[0].IntValue, -1);}
#line 1957 "analisador.tab.c"
    break;

  case 73: /* Fator: TID  */
#line 175 "analisador.y"
               {yyval.No = comp_no(ID, yyvsp[0].StringValue, -1, -1);}
#line 1963 "analisador.tab.c"
    break;

  case 74: /* Fator: ChamaFuncao  */
#line 176 "analisador.y"
                       {yyval.No = yyvsp[0].No;}
#line 1969 "analisador.tab.c"
    break;


#line 1973 "analisador.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 178 "analisador.y"


int yyerror (const char *str) {
	fprintf(stderr, "%s\n", str);
}

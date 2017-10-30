/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sintatica.y" /* yacc.c:339  */

#include <iostream>
#include <string>
#include <algorithm> 
#include <sstream>
#include <map>
#include <vector>

#include "MapaTipos.h"

#include "controleDeVariaveis.h"

#include "MensagensDeErro.h"

#include "TratamentoString.h"
#define YYSTYPE ATRIBUTOS

#define YYSTYPE ATRIBUTOS

#define MSG_ERRO_OPERADOR_LOGICO_COM_OPERANDOS_NAO_BOOLEAN "Os operandos de expressões lógicas precisam ser do tipo booelan"
#define MSG_ERRO_OPERADOR_LOGICO_COM_OPERANDOS_TIPOS_DIFERENTES "Os operandos de expressões relacionais precisam ser do mesmo tipo"

using namespace std;
using namespace MapaTiposLib;
using namespace ControleDeVariaveis;
using namespace MensagensDeErro;
using namespace TratamentoString;

struct ATRIBUTOS
{
	string label;
	string traducaoDeclaracaoDeVariaveis;
	string traducao;
	string tipo;
	int tamanho;
};

int yylex(void);
void yyerror(string);
bool verificarPossibilidadeDeConversaoExplicita(string, string);
string verificarTipoResultanteDeCoercao(string, string, string);
string constroiPrint(string, string);
ATRIBUTOS tratarExpressaoAritmetica(string, ATRIBUTOS, ATRIBUTOS);
ATRIBUTOS tratarExpressaoRelacional(string, ATRIBUTOS, ATRIBUTOS);


#line 113 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_NUM = 258,
    TK_BOOL = 259,
    TK_CHAR = 260,
    TK_STRING = 261,
    TK_OP_LOGICO_BIN = 262,
    TK_OP_LOGICO_UNA = 263,
    TK_OP_RELACIONAL = 264,
    TK_MAIN = 265,
    TK_ID = 266,
    TK_TIPO_INT = 267,
    TK_PALAVRA_VAR = 268,
    TK_FIM = 269,
    TK_ERROR = 270,
    TK_CONVERSAO_EXPLICITA = 271
  };
#endif
/* Tokens.  */
#define TK_NUM 258
#define TK_BOOL 259
#define TK_CHAR 260
#define TK_STRING 261
#define TK_OP_LOGICO_BIN 262
#define TK_OP_LOGICO_UNA 263
#define TK_OP_RELACIONAL 264
#define TK_MAIN 265
#define TK_ID 266
#define TK_TIPO_INT 267
#define TK_PALAVRA_VAR 268
#define TK_FIM 269
#define TK_ERROR 270
#define TK_CONVERSAO_EXPLICITA 271

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 196 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   149

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  91

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,    29,    26,    24,     2,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
      20,    17,    21,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
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
      15,    16,    18,    19,    22,    23
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    82,    87,    95,   103,   106,   108,   110,
     112,   114,   116,   123,   139,   171,   215,   219,   236,   244,
     246,   255,   269,   271,   273,   290,   295,   300,   303,   308,
     313,   318,   325,   334,   336,   352,   369,   377,   385,   394,
     411,   427,   429,   438,   443,   446,   449,   454
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_NUM", "TK_BOOL", "TK_CHAR",
  "TK_STRING", "TK_OP_LOGICO_BIN", "TK_OP_LOGICO_UNA", "TK_OP_RELACIONAL",
  "TK_MAIN", "TK_ID", "TK_TIPO_INT", "TK_PALAVRA_VAR", "TK_FIM",
  "TK_ERROR", "TK_CONVERSAO_EXPLICITA", "'='", "\"==\"", "\"!=\"", "'<'",
  "'>'", "\"<=\"", "\">=\"", "'+'", "'-'", "'*'", "'/'", "'('", "')'",
  "'{'", "'}'", "';'", "$accept", "S", "UP_S", "BLOCO", "COMANDOS",
  "COMANDO", "DECLARACOES", "ID", "TERMO", "VALOR_ATRIBUICAO", "E", "E1",
  "E_UNARIA", "E_LOGICA", "TERMO_REL", "E_REL", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    61,   272,   273,
      60,    62,   274,   275,    43,    45,    42,    47,    40,    41,
     123,   125,    59
};
# endif

#define YYPACT_NINF -23

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-23)))

#define YYTABLE_NINF -46

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      70,   -23,     5,    39,    33,    34,    16,   -23,    36,    90,
      90,   -23,    32,   -23,   -23,   -23,   -23,   105,    90,    46,
      29,    19,    66,   -23,    44,    75,    64,   -23,    81,    73,
     -23,    65,    83,   121,    80,    81,   -23,   -12,    52,    52,
     -23,   -23,    52,    78,   109,    21,    94,   -23,   121,   121,
     121,   121,   105,   121,   -23,   -23,   114,    80,   -23,   -23,
      99,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   101,   -23,    78,   -23,    61,   -23,    98,    61,   -23,
      12,    55,   111,    -1,   113,   -23,   -23,   -23,   -23,   -23,
     -23
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      16,    17,     0,     0,     0,     0,     0,     1,     0,     0,
       0,    13,     0,    18,    42,    20,    35,     0,     0,     0,
       0,     0,    19,    33,     0,    21,    27,    22,    23,     0,
      44,     0,     0,     0,    45,    40,    24,    34,     0,     0,
      19,    36,     0,    45,    27,     0,    44,    15,     0,     0,
       0,     0,     0,     0,    14,     3,     0,    34,    37,    38,
       0,    30,    31,    43,    47,    25,    26,    28,    29,    39,
      46,     0,     2,     0,    32,     3,    12,     0,     3,    11,
      19,    45,     0,     0,    44,     4,     5,     7,     8,    10,
       9
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -23,   -23,   -23,    79,    68,   -23,   147,     0,   102,    -3,
      -7,   -13,   -22,   -16,    95,   -17
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    71,    76,    77,    78,    79,    40,    23,    24,
      34,    26,    27,    28,    29,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       5,    35,    25,    25,    46,    45,    52,    31,    44,    22,
      22,    37,    48,    49,    43,    36,     6,    22,    22,   -41,
     -21,    22,    13,    14,    15,    16,    57,    17,    52,     9,
       1,    89,    13,    10,    15,    33,    69,    67,    68,     7,
       1,    65,    66,    44,    42,     8,    12,    21,    11,    73,
      63,     9,    22,    82,    39,    13,    82,    15,    84,    83,
      32,    84,    83,     1,    13,    14,    15,    16,    81,    17,
      38,    81,     1,   -41,     2,    80,    47,    33,    80,    48,
      49,     1,    53,     2,   -45,    19,    20,    87,    52,    21,
      50,    51,    -6,    13,    14,    15,    16,    54,    17,    48,
      49,     1,    48,    49,    48,    49,    18,    61,    13,    14,
      15,    16,    55,    17,    19,    20,     1,    13,    21,    15,
      16,    33,    41,    64,    13,     1,    15,    16,    74,    85,
      33,    75,     1,    21,    72,    50,    51,    33,    62,    42,
      58,    59,    56,    88,    60,    90,    86,     4,    70,    56
};

static const yytype_uint8 yycheck[] =
{
       0,    17,     9,    10,    21,    21,     7,    10,    21,     9,
      10,    18,    24,    25,    21,    18,    11,    17,    18,     7,
      32,    21,     3,     4,     5,     6,    33,     8,     7,    17,
      11,    32,     3,    17,     5,    16,    52,    50,    51,     0,
      11,    48,    49,    56,    25,    12,    10,    28,    32,    56,
      29,    17,    52,    75,    25,     3,    78,     5,    75,    75,
      28,    78,    78,    11,     3,     4,     5,     6,    75,     8,
      24,    78,    11,     7,    13,    75,    32,    16,    78,    24,
      25,    11,     9,    13,     9,    24,    25,    32,     7,    28,
      26,    27,    31,     3,     4,     5,     6,    32,     8,    24,
      25,    11,    24,    25,    24,    25,    16,    29,     3,     4,
       5,     6,    29,     8,    24,    25,    11,     3,    28,     5,
       6,    16,    20,    29,     3,    11,     5,     6,    29,    31,
      16,    30,    11,    28,    55,    26,    27,    16,    29,    25,
      38,    39,    28,    32,    42,    32,    78,     0,    53,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    13,    34,    39,    40,    11,     0,    12,    17,
      17,    32,    10,     3,     4,     5,     6,     8,    16,    24,
      25,    28,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    42,    28,    16,    43,    46,    42,    43,    24,    25,
      40,    41,    25,    43,    44,    46,    48,    32,    24,    25,
      26,    27,     7,     9,    32,    29,    28,    43,    41,    41,
      41,    29,    29,    29,    29,    43,    43,    44,    44,    46,
      47,    35,    36,    43,    29,    30,    36,    37,    38,    39,
      40,    43,    45,    46,    48,    31,    37,    32,    32,    32,
      32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    35,    36,    37,    37,    38,    38,    38,
      38,    38,    38,    39,    39,    39,    39,    40,    41,    41,
      41,    42,    42,    42,    42,    43,    43,    43,    44,    44,
      44,    44,    44,    44,    44,    44,    45,    45,    45,    46,
      46,    46,    46,    46,    46,    47,    48,    48
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     4,     2,     0,     2,     2,     2,
       2,     1,     1,     3,     5,     4,     0,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     3,     1,     3,     3,
       3,     3,     4,     1,     2,     1,     2,     3,     3,     3,
       2,     1,     1,     3,     1,     1,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 76 "sintatica.y" /* yacc.c:1646  */
    {
				cout << "/*Compilador FOCA*/\n" << "#include<string.h>\n#include<stdio.h>\n\n#define TRUE 1\n#define FALSE 0\n\n" << substituirTodasAsDeclaracoesProvisorias((yyvsp[-5]).traducaoDeclaracaoDeVariaveis) << "\nint main(void)\n{\n" << (yyvsp[-5]).traducao << endl << (yyvsp[0]).traducao << "\treturn 0;\n}" << endl;
			}
#line 1343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 82 "sintatica.y" /* yacc.c:1646  */
    {
				aumentarEscopo();
			}
#line 1351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 88 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao =  substituirTodasAsDeclaracoesProvisorias((yyvsp[-1]).traducaoDeclaracaoDeVariaveis);
				(yyval).traducao =  (yyval).traducao + "\n" + (yyvsp[-1]).traducao;
				diminuirEscopo();
			}
#line 1361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 96 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducaoDeclaracaoDeVariaveis = (yyvsp[-1]).traducaoDeclaracaoDeVariaveis + (yyvsp[0]).traducaoDeclaracaoDeVariaveis;
				if((yyvsp[-1]).traducao != "" && (yyvsp[-1]).tipo != constante_tipo_bloco){
					(yyval).traducao = (yyvsp[-1]).traducao + "\n" + constroiPrint((yyvsp[-1]).tipo, (yyvsp[-1]).label);
				}
				(yyval).traducao = (yyval).traducao + (yyvsp[0]).traducao;
			}
#line 1373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 117 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "\t{\n" + (yyvsp[0]).traducao + "\t}\n";
				(yyval).tipo = constante_tipo_bloco;
			}
#line 1382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 124 "sintatica.y" /* yacc.c:1646  */
    {
				if(variavelJaDeclarada((yyvsp[-1]).label, false))
				{
					//mensagem de erro dupla declaração
					string params[1] = {(yyvsp[-1]).label};
					yyerror(montarMensagemDeErro(MSG_ERRO_DUPLA_DECLARACAO_DE_VARIAVEL, params, 1));
				}
				
				else
				{
					(yyval).traducaoDeclaracaoDeVariaveis = "\t" + construirDeclaracaoProvisoriaDeInferenciaDeTipo((yyvsp[-1]).label);
					incluirNoMapa((yyvsp[-1]).label);
				}
			}
#line 1401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 140 "sintatica.y" /* yacc.c:1646  */
    {	
				if(variavelJaDeclarada((yyvsp[-3]).label, false))
				{
					//mensagem de erro dupla declaração
					string params[1] = {(yyvsp[-3]).label};
					yyerror(montarMensagemDeErro(MSG_ERRO_DUPLA_DECLARACAO_DE_VARIAVEL, params, 1));
				}
				else
				{
					string tipo = (yyvsp[-1]).tipo;
					if(tipo == constante_tipo_booleano)
					{
						tipo = constante_tipo_inteiro;
						tipo = "\t" + tipo;
					}
					
					if(tipo == constante_tipo_string)
					{
						tipo = constante_tipo_caracter;
						tipo = "\t" + tipo + " [" + to_string((yyvsp[-1]).tamanho) + "] ";
					}
					(yyvsp[-3]).label = prefixo_variavel_usuario + (yyvsp[-3]).label;
					(yyval).traducaoDeclaracaoDeVariaveis = (yyvsp[-1]).traducaoDeclaracaoDeVariaveis + "\t" + tipo + " " + (yyvsp[-3]).label + ";\n";
					(yyval).traducao = (yyvsp[-1]).traducao + "\t" + (yyvsp[-3]).label + " = " + (yyvsp[-1]).label + ";\n";
					incluirNoMapa((yyvsp[-3]).label, (yyvsp[-1]).tipo);
					(yyval).label = (yyvsp[-3]).label;
					(yyval).tipo = (yyvsp[-1]).tipo;
				}
				
			}
#line 1436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 172 "sintatica.y" /* yacc.c:1646  */
    {				
				if((yyvsp[-3]).label != (yyvsp[-1]).label)
				{
					DADOS_VARIAVEL metaData = recuperarDadosVariavel((yyvsp[-3]).label);
					if(metaData.tipo == "")
					{
						//isso aqui também pode causar problema no futuro devido as lacunas
						metaData.tipo = (yyvsp[-1]).tipo;
						atualizarNoMapa(metaData);
						string tipo = metaData.tipo;
						if(tipo == constante_tipo_booleano)
						{
							tipo = constante_tipo_inteiro;
							tipo = "\t" + tipo;
						}
						if(tipo == constante_tipo_string)
						{
							tipo = constante_tipo_caracter;
							tipo = "\t" + tipo + " [" + to_string((yyvsp[0]).tamanho) + "] ";
						}
						adicionarDefinicaoDeTipo((yyvsp[-3]).label, tipo);
					}
					(yyvsp[-3]).tipo = metaData.tipo;
					//provavelmente ainda há lacunas, mas vamos ignorar por enquanto
					if(metaData.tipo == (yyvsp[-1]).tipo)
					{
						(yyval).traducaoDeclaracaoDeVariaveis = (yyval).traducaoDeclaracaoDeVariaveis + (yyvsp[-1]).traducaoDeclaracaoDeVariaveis;
						(yyval).traducao = (yyval).traducao + (yyvsp[-1]).traducao + "\t" + (yyvsp[-3]).label + " = " + (yyvsp[-1]).label + ";\n";
					}
					else
					{
						string strPrefixoVarUsuario = prefixo_variavel_usuario;
						string params[3] = {(yyvsp[-3]).label.replace(0, strPrefixoVarUsuario.length(), ""), (yyvsp[-3]).tipo, (yyvsp[-1]).tipo};
						yyerror(montarMensagemDeErro(MSG_ERRO_ATRIBUICAO_DE_TIPOS_DIFERENTES, params, 3));
					}
					(yyval).label = (yyvsp[-3]).label;
					(yyval).tipo = (yyvsp[-3]).tipo;
				}
				else
				{
					(yyval) = (yyvsp[-1]);
				}
			}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 220 "sintatica.y" /* yacc.c:1646  */
    {
				if(variavelJaDeclarada((yyvsp[0]).label))
				{
					DADOS_VARIAVEL metaData = recuperarDadosVariavel((yyvsp[0]).label);
					(yyval).label = metaData.nome;
					(yyval).tipo = metaData.tipo;
				}
				else
				{
					string params[1] = {(yyvsp[0]).label};
					yyerror(montarMensagemDeErro(MSG_ERRO_VARIAVEL_NAO_DECLARADA ,params, 1));
				}
			}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 237 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).label = gerarNovaVariavel();
				(yyval).traducaoDeclaracaoDeVariaveis = "\t"  + (yyvsp[0]).tipo + " " + (yyval).label + ";\n";
				(yyval).traducao = "\t" + (yyval).label + " = " + (yyvsp[0]).label + ";\n";
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 247 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).label = gerarNovaVariavel();
				(yyval).traducaoDeclaracaoDeVariaveis = "\t" + (yyvsp[0]).tipo + " " + (yyval).label + ";\n";
				(yyval).traducao = "\t" + (yyval).label + " = " + (yyvsp[0]).label + ";\n";
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 256 "sintatica.y" /* yacc.c:1646  */
    {
				//se for variavel aqui sempre vai existir, pq vai ter que ter passado pela verificação da regra TERMO: TK_ID
				//e por passar nessa regra terá o tipo já buscado
				if((yyvsp[0]).label.find(prefixo_variavel_usuario) == 0 && (yyvsp[0]).tipo == ""){
					string strPrefixoVarUsuario = prefixo_variavel_usuario;
					string params[1] = {(yyvsp[0]).label.replace(0, strPrefixoVarUsuario.length(), "")};
					//mensagem variavel precisa ter recebido um valor para ter seu tipo definido e atribuido o valor
					yyerror(montarMensagemDeErro(MSG_ERRO_VARIAVEL_UTILIZADA_PRECISA_TER_RECEBIDO_UM_VALOR, params, 1));
				}
				(yyval) = (yyvsp[0]);
			}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 274 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducaoDeclaracaoDeVariaveis = (yyvsp[0]).traducaoDeclaracaoDeVariaveis;
				(yyval).traducao = (yyvsp[0]).traducao;
				if(verificarPossibilidadeDeConversaoExplicita((yyvsp[0]).tipo, (yyvsp[-1]).tipo)){
					(yyval).label = gerarNovaVariavel();
					(yyval).tipo = (yyvsp[-1]).tipo;
					(yyval).traducaoDeclaracaoDeVariaveis = (yyval).traducaoDeclaracaoDeVariaveis + "\t" + (yyval).tipo + " " + (yyval).label + ";\n";
					(yyval).traducao = (yyval).traducao + "\t" + (yyval).label + " = " + (yyvsp[-1]).label + (yyvsp[0]).label + ";\n";
				}else{
					string params[2] = {(yyvsp[0]).tipo, (yyvsp[-1]).tipo};
					yyerror(montarMensagemDeErro(MSG_ERRO_CONVERSAO_EXPLICITA_INDEVIDA, params, 2));
				}
			}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 291 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval) = tratarExpressaoAritmetica("+", (yyvsp[-2]), (yyvsp[0]));							
			}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 296 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval) = tratarExpressaoAritmetica("-", (yyvsp[-2]), (yyvsp[0]));
			}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 304 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval) = tratarExpressaoAritmetica("*", (yyvsp[-2]), (yyvsp[0]));
			}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 309 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval) = tratarExpressaoAritmetica("/", (yyvsp[-2]), (yyvsp[0]));
			}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 314 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval) = (yyvsp[-1]);
			}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 319 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval) = (yyvsp[-1]);
			}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 326 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).label = (yyvsp[-1]).label;
				(yyval).traducaoDeclaracaoDeVariaveis = (yyvsp[-1]).traducaoDeclaracaoDeVariaveis;
				(yyval).traducao = (yyval).traducao + (yyvsp[-1]).traducao;
				(yyval).traducao = (yyval).traducao + "\t" + (yyval).label + " = " + (yyval).label + " * (-1);\n";
				(yyval).tipo = (yyvsp[-1]).tipo; 
			}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 337 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducaoDeclaracaoDeVariaveis = (yyvsp[0]).traducaoDeclaracaoDeVariaveis;
				(yyval).traducao = (yyvsp[0]).traducao;
				if(verificarPossibilidadeDeConversaoExplicita((yyvsp[0]).tipo, (yyvsp[-1]).tipo)){
					(yyval).label = gerarNovaVariavel();
					(yyval).tipo = (yyvsp[-1]).tipo;
					(yyval).traducaoDeclaracaoDeVariaveis = (yyval).traducaoDeclaracaoDeVariaveis + "\t" + (yyval).tipo + " " + (yyval).label + ";\n";
					(yyval).traducao = (yyval).traducao + "\t" + (yyval).label + " = " + (yyvsp[-1]).label + (yyvsp[0]).label + ";\n";
				}else{
					string params[2] = {(yyvsp[0]).tipo, (yyvsp[-1]).tipo};
					yyerror(montarMensagemDeErro(MSG_ERRO_CONVERSAO_EXPLICITA_INDEVIDA, params, 2));
				}	
			}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 353 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).label = gerarNovaVariavel();
				//$$.tamanho = $1.label.length() +1 -2; //-2 exclui o tamanho das aspas
				string codigoTraduzido = geraDeclaracaoString((yyval).label, (yyvsp[0]).label);
				(yyval).tamanho = (yyvsp[0]).label.length() +1 -2 - global_numCaracteresEspeciais; //-2 exclui o tamanho das aspas a global vem do namespace TratamentoString
				(yyval).traducaoDeclaracaoDeVariaveis = "\tchar " + (yyval).label + "[" + to_string((yyval).tamanho) + "];\n";
				(yyval).traducao = codigoTraduzido;
				
				
				(yyval).tipo = (yyvsp[0]).tipo;
				
				global_numCaracteresEspeciais = 0;
				
				
			}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 370 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).label = (yyvsp[0]).label;
				(yyval).traducaoDeclaracaoDeVariaveis = (yyvsp[0]).traducaoDeclaracaoDeVariaveis;
				(yyval).traducao = (yyvsp[0]).traducao + "\t" + (yyval).label + " = " + (yyval).label + " * (-1);\n";
				(yyval).tipo = (yyvsp[0]).tipo; 
			}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 378 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).label = (yyvsp[0]).label;
				(yyval).traducaoDeclaracaoDeVariaveis = (yyvsp[0]).traducaoDeclaracaoDeVariaveis;
				(yyval).traducao = (yyvsp[0]).traducao + "\t" + (yyval).label + " = " + (yyval).label + " + 1;\n";
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 386 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).label = (yyvsp[0]).label;
				(yyval).traducaoDeclaracaoDeVariaveis = (yyvsp[0]).traducaoDeclaracaoDeVariaveis;
				(yyval).traducao = (yyvsp[0]).traducao + "\t" + (yyval).label + " = " + (yyval).label + " - 1;\n";
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 395 "sintatica.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2]).tipo == constante_tipo_booleano && (yyvsp[0]).tipo == constante_tipo_booleano){
					(yyval).label = gerarNovaVariavel();
					(yyval).traducaoDeclaracaoDeVariaveis = (yyvsp[-2]).traducaoDeclaracaoDeVariaveis + (yyvsp[0]).traducaoDeclaracaoDeVariaveis;
					string tipo = constante_tipo_inteiro;
					(yyval).traducaoDeclaracaoDeVariaveis = (yyval).traducaoDeclaracaoDeVariaveis + "\t\t" + tipo + " " + (yyval).label + ";\n";
					(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao;
					(yyval).traducao = (yyval).traducao + "\t\t" + (yyval).label + " = " + (yyvsp[-2]).label + " " + (yyvsp[-1]).label + " " + (yyvsp[0]).label + ";\n";
					(yyval).tipo = constante_tipo_booleano;
				}
				else{
					yyerror(MSG_ERRO_OPERADOR_LOGICO_COM_OPERANDOS_NAO_BOOLEAN);
				}
			}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 412 "sintatica.y" /* yacc.c:1646  */
    {
				if((yyvsp[0]).tipo == constante_tipo_booleano){
					(yyval).label = gerarNovaVariavel();
					(yyval).traducaoDeclaracaoDeVariaveis = (yyval).traducaoDeclaracaoDeVariaveis + (yyvsp[0]).traducaoDeclaracaoDeVariaveis;
					string tipo = constante_tipo_inteiro;
					(yyval).traducaoDeclaracaoDeVariaveis = (yyval).traducaoDeclaracaoDeVariaveis + "\t\t" + tipo + " " + (yyval).label + ";\n";
					(yyval).traducao = (yyvsp[0]).traducao;
					(yyval).traducao = (yyval).traducao + "\t\t" + (yyval).label + " = " + (yyvsp[-1]).label + (yyvsp[0]).label + ";\n";
					(yyval).tipo = constante_tipo_booleano;
				}
				else{
					yyerror(MSG_ERRO_OPERADOR_LOGICO_COM_OPERANDOS_NAO_BOOLEAN);
				}
			}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 430 "sintatica.y" /* yacc.c:1646  */
    {
				string nomeUpperCase = (yyvsp[0]).label;
				transform(nomeUpperCase.begin(), nomeUpperCase.end(), nomeUpperCase.begin(), ::toupper);
				(yyval).label = nomeUpperCase;
				incluirNoMapa((yyval).label, (yyvsp[0]).tipo);
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 439 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval) = (yyvsp[-1]);
			}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 450 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval) = tratarExpressaoRelacional((yyvsp[-1]).label,(yyvsp[-2]),(yyvsp[0]));	
			}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 455 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval) = (yyvsp[-1]);
			}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1767 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 460 "sintatica.y" /* yacc.c:1906  */


#include "lex.yy.c"

DADOS_VARIAVEL d;

std::map<string, DADOS_VARIAVEL > tabelaDeVariaveis;
extern int yylineno; //Define a linha atual do arquivo fonte.

int yyparse();

int main( int argc, char* argv[] )
{
	
	mapaTipos = criarMapa();
	inicializarMapaDeContexto();
	yyparse();
	
	

	return 0;
}

ATRIBUTOS tratarExpressaoAritmetica(string op, ATRIBUTOS dolar1, ATRIBUTOS dolar3)
{
	ATRIBUTOS dolarDolar;
	
	dolarDolar.label = gerarNovaVariavel();
	dolarDolar.traducaoDeclaracaoDeVariaveis = dolar1.traducaoDeclaracaoDeVariaveis + dolar3.traducaoDeclaracaoDeVariaveis;
	dolarDolar.traducao = dolar1.traducao + dolar3.traducao;				
	
	string resultado = getTipoResultante(dolar1.tipo, dolar3.tipo, op);
	dolarDolar.traducaoDeclaracaoDeVariaveis = dolarDolar.traducaoDeclaracaoDeVariaveis + "\t" + resultado + " " + dolarDolar.label + ";\n";
	
	string label_old = dolarDolar.label;
	
	if(resultado == constante_erro)
	{
		string params[3] = {dolar1.tipo, dolar3.tipo, op};
		yyerror(montarMensagemDeErro(MSG_ERRO_OPERACAO_PROIBIDA_ENTRE_TIPOS	, params, 3));
	}
		
	else if(dolar1.tipo == dolar3.tipo && (dolar1.tipo == resultado)) //se não houver necessidade de conversão
	{
				
		dolarDolar.traducao = dolarDolar.traducao + "\t" + dolarDolar.label + " = " + dolar1.label + " " + op + " " + dolar3.label + ";\n";
	}
	
	
	else if(dolar3.tipo == resultado) 
	{
		
		dolarDolar.traducao = dolarDolar.traducao + "\t" + dolarDolar.label + " = " +"(" + resultado + ")" + dolar1.label + ";\n";
		
		dolarDolar.label = gerarNovaVariavel();
		dolarDolar.traducaoDeclaracaoDeVariaveis = dolarDolar.traducaoDeclaracaoDeVariaveis + "\t" + resultado + " " + dolarDolar.label + ";\n";
		
		dolarDolar.traducao = dolarDolar.traducao + "\t" + dolarDolar.label + " = " + label_old + " " + op + " " + dolar3.label + ";\n";
	}
	else if(dolar1.tipo == resultado)
	{
			
		dolarDolar.traducao = dolarDolar.traducao + "\t" + dolarDolar.label + " = " +"(" + resultado + ")" + dolar3.label + ";\n";							
		dolarDolar.label = gerarNovaVariavel();
		dolarDolar.traducaoDeclaracaoDeVariaveis = dolarDolar.traducaoDeclaracaoDeVariaveis + "\t" + resultado + " " + dolarDolar.label + ";\n";
		dolarDolar.traducao = dolarDolar.traducao + "\t" + dolarDolar.label + " = " + dolar1.label + " " + op + " " + label_old + ";\n";
		
	}
	
	dolarDolar.tipo = resultado;
	return dolarDolar;	
}



ATRIBUTOS tratarExpressaoRelacional(string op, ATRIBUTOS dolar1, ATRIBUTOS dolar3)
{
	ATRIBUTOS dolarDolar;
	dolarDolar.label = gerarNovaVariavel();
	dolarDolar.traducaoDeclaracaoDeVariaveis = dolar1.traducaoDeclaracaoDeVariaveis + dolar3.traducaoDeclaracaoDeVariaveis;
	dolarDolar.traducaoDeclaracaoDeVariaveis = dolarDolar.traducaoDeclaracaoDeVariaveis + "\t\t" + constante_tipo_inteiro + " " + dolarDolar.label + ";\n";
	
	dolarDolar.traducao = dolar1.traducao + dolar3.traducao;
	
	string resultado = getTipoResultante(dolar1.tipo, dolar3.tipo,op);
	
	string label_old = dolarDolar.label;
	string operador = op;
	
	string varConvert = gerarNovaVariavel();
	dolarDolar.traducaoDeclaracaoDeVariaveis = dolarDolar.traducaoDeclaracaoDeVariaveis + "\t" + resultado + " " + varConvert + ";\n";
	
	if(resultado == constante_erro)
	{
		string params[3] = {dolar1.tipo, dolar3.tipo, op};
		yyerror(montarMensagemDeErro(MSG_ERRO_OPERACAO_PROIBIDA_ENTRE_TIPOS, params, 3));
	}
		
	else if(dolar1.tipo == dolar3.tipo)
	{	
		if(dolar1.tipo == constante_tipo_caracter) //se char,ambos são convertidos pra int
		{
			dolarDolar.traducao = dolarDolar.traducao + "\t" + varConvert + " = " +"(" + resultado + ")" + dolar1.label + ";\n";
	
			dolar1.label = varConvert;
			varConvert = gerarNovaVariavel();
	
			dolarDolar.traducaoDeclaracaoDeVariaveis = dolarDolar.traducaoDeclaracaoDeVariaveis + "\t" + resultado + " " + varConvert + ";\n";
			dolarDolar.traducao = dolarDolar.traducao + "\t" + varConvert + " = " +"(" + resultado + ")" + dolar3.label + ";\n";							
			dolar3.label = varConvert;
		}
							
	}
	
	
	else if(dolar3.tipo == resultado)
	{
		dolarDolar.traducao = dolarDolar.traducao + "\t" + varConvert + " = " +"(" + resultado + ")" + dolar1.label + ";\n";
		
		dolar1.label = varConvert;
	}
	
	else if(dolar1.tipo == resultado)
	{
		dolarDolar.traducao = dolarDolar.traducao + "\t" + varConvert + " = " +"(" + resultado + ")" + dolar3.label + ";\n";							
		dolar3.label = varConvert;
		
	}
	
	dolarDolar.traducao = dolarDolar.traducao + "\t\t" + dolarDolar.label + " = " + dolar1.label +" "+ op +" "+ dolar3.label + ";\n";
	
	dolarDolar.tipo = constante_tipo_booleano;
	
	
	return dolarDolar;
	
}


string constroiPrint(string tipo, string label){
	string print = "printf(\"\%";
	if(tipo == constante_tipo_flutuante){
		print = print + "f\\n\\n\", ";
	} else if( tipo == constante_tipo_inteiro || tipo == constante_tipo_booleano){
		print = print + "d\\n\\n\", ";	
	}else if(tipo == constante_tipo_caracter){
		print = print + "c\\n\\n\", ";
	}else if(tipo == constante_tipo_string){
		print = print + "s\\n\\n\", ";
	}
	
	print = print + label + ");\n\n";
	return print;
}

bool verificarPossibilidadeDeConversaoExplicita(string tipoOrigem, string tipoDestino){
	
	return tipoOrigem != constante_tipo_booleano;
}


void yyerror( string MSG )
{
	cout << "Linha " << yylineno << ": " << MSG << endl;
	exit (0);
}				
/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ENT_TYPEDEF_STRUCT = 258,
     ENT_STRUCT = 259,
     ENT_EXTERNSTATIC = 260,
     ENT_YACCUNION = 261,
     GTY_TOKEN = 262,
     UNION = 263,
     STRUCT = 264,
     ENUM = 265,
     ALIAS = 266,
     PARAM_IS = 267,
     NUM = 268,
     PERCENTPERCENT = 269,
     SCALAR = 270,
     ID = 271,
     STRING = 272,
     ARRAY = 273,
     PERCENT_ID = 274,
     CHAR = 275
   };
#endif
/* Tokens.  */
#define ENT_TYPEDEF_STRUCT 258
#define ENT_STRUCT 259
#define ENT_EXTERNSTATIC 260
#define ENT_YACCUNION 261
#define GTY_TOKEN 262
#define UNION 263
#define STRUCT 264
#define ENUM 265
#define ALIAS 266
#define PARAM_IS 267
#define NUM 268
#define PERCENTPERCENT 269
#define SCALAR 270
#define ID 271
#define STRING 272
#define ARRAY 273
#define PERCENT_ID 274
#define CHAR 275




/* Copy the first part of user declarations.  */
#line 22 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"

#include "bconfig.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "gengtype.h"
#define YYERROR_VERBOSE


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 31 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
{
  type_p t;
  pair_p p;
  options_p o;
  const char *s;
}
/* Line 187 of yacc.c.  */
#line 152 "gengtype-yacc.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 165 "gengtype-yacc.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   103

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNRULES -- Number of states.  */
#define YYNSTATES  112

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,    31,    28,     2,    29,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,    23,
      25,    24,    26,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    21,     2,    22,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    14,    23,    24,
      32,    38,    45,    53,    55,    57,    59,    66,    67,    71,
      78,    79,    82,    85,    86,    93,   100,   108,   109,   112,
     115,   117,   119,   122,   128,   131,   137,   140,   143,   149,
     150,   156,   160,   163,   164,   166,   173,   175,   177,   182,
     187,   189,   193,   194
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      33,     0,    -1,    -1,    34,    33,    -1,    37,    33,    -1,
      40,    33,    -1,    -1,     3,    48,    21,    43,    22,    16,
      35,    23,    -1,    -1,     4,    48,    21,    43,    22,    36,
      23,    -1,     5,    48,    38,    16,    39,    -1,     5,    48,
      38,    16,    18,    39,    -1,     5,    48,    38,    16,    18,
      18,    39,    -1,    45,    -1,    23,    -1,    24,    -1,     6,
      48,    43,    22,    41,    14,    -1,    -1,    41,    19,    42,
      -1,    41,    19,    25,    16,    26,    42,    -1,    -1,    42,
      16,    -1,    42,    20,    -1,    -1,    45,    47,    16,    44,
      23,    43,    -1,    45,    47,    16,    18,    23,    43,    -1,
      45,    47,    16,    18,    18,    23,    43,    -1,    -1,    27,
      13,    -1,    27,    16,    -1,    15,    -1,    16,    -1,    45,
      28,    -1,     9,    16,    21,    43,    22,    -1,     9,    16,
      -1,     8,    16,    21,    43,    22,    -1,     8,    16,    -1,
      10,    16,    -1,    10,    16,    21,    46,    22,    -1,    -1,
      16,    24,    13,    29,    46,    -1,    16,    29,    46,    -1,
      16,    46,    -1,    -1,    48,    -1,     7,    30,    30,    52,
      31,    31,    -1,    11,    -1,    12,    -1,    49,    30,    45,
      31,    -1,    16,    30,    17,    31,    -1,    50,    -1,    51,
      29,    50,    -1,    -1,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    65,    66,    67,    71,    70,    80,    79,
      89,    94,    99,   107,   114,   115,   118,   126,   127,   140,
     159,   160,   171,   184,   185,   195,   205,   217,   218,   219,
     222,   224,   226,   228,   233,   235,   240,   242,   244,   248,
     249,   251,   253,   257,   258,   261,   265,   267,   271,   278,
     287,   292,   299,   300
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENT_TYPEDEF_STRUCT", "ENT_STRUCT",
  "ENT_EXTERNSTATIC", "ENT_YACCUNION", "GTY_TOKEN", "UNION", "STRUCT",
  "ENUM", "ALIAS", "PARAM_IS", "NUM", "\"%%\"", "SCALAR", "ID", "STRING",
  "ARRAY", "PERCENT_ID", "CHAR", "'{'", "'}'", "';'", "'='", "'<'", "'>'",
  "':'", "'*'", "','", "'('", "')'", "$accept", "start", "typedef_struct",
  "@1", "@2", "externstatic", "lasttype", "semiequal", "yacc_union",
  "yacc_typematch", "yacc_ids", "struct_fields", "bitfieldopt", "type",
  "enum_items", "optionsopt", "options", "type_option", "option",
  "optionseq", "optionseqopt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   123,   125,    59,    61,    60,    62,    58,    42,    44,
      40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    33,    33,    33,    35,    34,    36,    34,
      37,    37,    37,    38,    39,    39,    40,    41,    41,    41,
      42,    42,    42,    43,    43,    43,    43,    44,    44,    44,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    46,
      46,    46,    46,    47,    47,    48,    49,    49,    50,    50,
      51,    51,    52,    52
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     0,     8,     0,     7,
       5,     6,     7,     1,     1,     1,     6,     0,     3,     6,
       0,     2,     2,     0,     6,     6,     7,     0,     2,     2,
       1,     1,     2,     5,     2,     5,     2,     2,     5,     0,
       5,     3,     2,     0,     1,     6,     1,     1,     4,     4,
       1,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     2,     2,     2,     0,
       0,     0,     0,    23,     1,     3,     4,     5,     0,    23,
      23,     0,     0,     0,    30,    31,     0,    13,     0,    43,
      52,     0,     0,    36,    34,    37,     0,    32,    17,     0,
      44,    46,    47,     0,     0,    50,    53,     0,     0,     8,
      23,    23,    39,     0,    14,    15,    10,     0,    27,     0,
       0,     0,     0,     6,     0,     0,     0,    39,     0,     0,
      11,    16,    20,     0,     0,     0,     0,     0,    51,    45,
       0,     9,    35,    33,     0,    39,    42,    38,    12,     0,
      18,     0,    23,    28,    29,    23,    49,    48,     7,     0,
      41,     0,    21,    22,    23,    25,    24,    39,    20,    26,
      40,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,    80,    64,     7,    26,    56,     8,    57,
      90,    28,    75,    29,    68,    39,    10,    44,    45,    46,
      47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int8 yypact[] =
{
      48,     5,     5,     5,     5,    19,    48,    48,    48,    -2,
      39,    40,     7,     7,   -65,   -65,   -65,   -65,    15,     7,
       7,    11,    46,    47,   -65,   -65,    50,    36,    43,    -3,
      25,    45,    52,    51,    54,    56,     6,   -65,   -65,    53,
     -65,   -65,   -65,    38,    41,   -65,    55,    57,    62,   -65,
       7,     7,    63,    16,   -65,   -65,   -65,    -5,    -7,    64,
       7,    25,    58,   -65,    59,    61,    65,   -11,    68,    35,
     -65,   -65,    66,    24,    22,    69,    67,    18,   -65,   -65,
      70,   -65,   -65,   -65,    73,    63,   -65,   -65,   -65,    78,
      28,    72,     7,   -65,   -65,     7,   -65,   -65,   -65,    71,
     -65,    44,   -65,   -65,     7,   -65,   -65,    63,   -65,   -65,
     -65,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -65,    49,   -65,   -65,   -65,   -65,   -65,   -43,   -65,   -65,
     -28,   -19,   -65,   -10,   -64,   -65,     4,   -65,    42,   -65,
     -65
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      31,    32,    27,    86,     9,    67,    11,    12,    13,    71,
      70,    73,     9,    84,    72,    21,    22,    23,    85,    14,
      74,   100,    24,    25,    53,    37,    88,    33,    18,    54,
      55,    65,    66,    40,    69,    93,    41,    42,    94,    54,
      55,    43,    91,   110,   102,    30,    37,    92,   103,    97,
      77,     1,     2,     3,     4,    15,    16,    17,    54,    55,
      19,    20,    34,    35,    37,    38,    36,    48,    59,    58,
     108,    60,    50,   105,    49,    51,   106,    52,    63,    67,
     111,    76,    81,    82,    61,   109,    99,    83,    62,    79,
      87,    89,    95,    98,   101,   104,     0,     0,    96,     0,
     107,     0,     0,    78
};

static const yytype_int8 yycheck[] =
{
      19,    20,    12,    67,     7,    16,     2,     3,     4,    14,
      53,    18,     7,    24,    19,     8,     9,    10,    29,     0,
      27,    85,    15,    16,    18,    28,    69,    16,    30,    23,
      24,    50,    51,    29,    18,    13,    11,    12,    16,    23,
      24,    16,    18,   107,    16,    30,    28,    23,    20,    31,
      60,     3,     4,     5,     6,     6,     7,     8,    23,    24,
      21,    21,    16,    16,    28,    22,    16,    22,    30,    16,
      26,    30,    21,    92,    22,    21,    95,    21,    16,    16,
     108,    17,    23,    22,    29,   104,    13,    22,    31,    31,
      22,    25,    23,    23,    16,    23,    -1,    -1,    31,    -1,
      29,    -1,    -1,    61
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    33,    34,    37,    40,     7,
      48,    48,    48,    48,     0,    33,    33,    33,    30,    21,
      21,     8,     9,    10,    15,    16,    38,    45,    43,    45,
      30,    43,    43,    16,    16,    16,    16,    28,    22,    47,
      48,    11,    12,    16,    49,    50,    51,    52,    22,    22,
      21,    21,    21,    18,    23,    24,    39,    41,    16,    30,
      30,    29,    31,    16,    36,    43,    43,    16,    46,    18,
      39,    14,    19,    18,    27,    44,    17,    45,    50,    31,
      35,    23,    22,    22,    24,    29,    46,    22,    39,    25,
      42,    18,    23,    13,    16,    23,    31,    31,    23,    13,
      46,    16,    16,    20,    23,    43,    43,    29,    26,    43,
      46,    42
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 71 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
		     new_structure ((yyvsp[(1) - (6)].t)->u.s.tag, UNION_P ((yyvsp[(1) - (6)].t)), &lexer_line,
				    (yyvsp[(4) - (6)].p), (yyvsp[(2) - (6)].o));
		     do_typedef ((yyvsp[(6) - (6)].s), (yyvsp[(1) - (6)].t), &lexer_line);
		     lexer_toplevel_done = 1;
		   ;}
    break;

  case 7:
#line 78 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {;}
    break;

  case 8:
#line 80 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
		     new_structure ((yyvsp[(1) - (5)].t)->u.s.tag, UNION_P ((yyvsp[(1) - (5)].t)), &lexer_line,
				    (yyvsp[(4) - (5)].p), (yyvsp[(2) - (5)].o));
		     lexer_toplevel_done = 1;
		   ;}
    break;

  case 9:
#line 86 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {;}
    break;

  case 10:
#line 90 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	           note_variable ((yyvsp[(4) - (5)].s), adjust_field_type ((yyvsp[(3) - (5)].t), (yyvsp[(2) - (5)].o)), (yyvsp[(2) - (5)].o),
				  &lexer_line);
	         ;}
    break;

  case 11:
#line 95 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	           note_variable ((yyvsp[(4) - (6)].s), create_array ((yyvsp[(3) - (6)].t), (yyvsp[(5) - (6)].s)),
	      		    (yyvsp[(2) - (6)].o), &lexer_line);
	         ;}
    break;

  case 12:
#line 100 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	           note_variable ((yyvsp[(4) - (7)].s), create_array (create_array ((yyvsp[(3) - (7)].t), (yyvsp[(6) - (7)].s)),
	      				      (yyvsp[(5) - (7)].s)),
	      		    (yyvsp[(2) - (7)].o), &lexer_line);
	         ;}
    break;

  case 13:
#line 108 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	      lexer_toplevel_done = 1;
	      (yyval.t) = (yyvsp[(1) - (1)].t);
	    ;}
    break;

  case 16:
#line 120 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	        note_yacc_type ((yyvsp[(2) - (6)].o), (yyvsp[(3) - (6)].p), (yyvsp[(5) - (6)].p), &lexer_line);
	      ;}
    break;

  case 17:
#line 126 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.p) = NULL; ;}
    break;

  case 18:
#line 128 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
		     pair_p p;
		     for (p = (yyvsp[(3) - (3)].p); p->next != NULL; p = p->next)
		       {
		         p->name = NULL;
			 p->type = NULL;
		       }
		     p->name = NULL;
		     p->type = NULL;
		     p->next = (yyvsp[(1) - (3)].p);
		     (yyval.p) = (yyvsp[(3) - (3)].p);
		   ;}
    break;

  case 19:
#line 141 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
		     pair_p p;
		     type_p newtype = NULL;
		     if (strcmp ((yyvsp[(2) - (6)].s), "type") == 0)
		       newtype = (type_p) 1;
		     for (p = (yyvsp[(6) - (6)].p); p->next != NULL; p = p->next)
		       {
		         p->name = (yyvsp[(4) - (6)].s);
		         p->type = newtype;
		       }
		     p->name = (yyvsp[(4) - (6)].s);
		     p->next = (yyvsp[(1) - (6)].p);
		     p->type = newtype;
		     (yyval.p) = (yyvsp[(6) - (6)].p);
		   ;}
    break;

  case 20:
#line 159 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.p) = NULL; ;}
    break;

  case 21:
#line 161 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	  pair_p p = xcalloc (1, sizeof (*p));
	  p->next = (yyvsp[(1) - (2)].p);
	  p->line = lexer_line;
	  p->opt = xmalloc (sizeof (*(p->opt)));
	  p->opt->name = "tag";
	  p->opt->next = NULL;
	  p->opt->info = (char *)(yyvsp[(2) - (2)].s);
	  (yyval.p) = p;
	;}
    break;

  case 22:
#line 172 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	  pair_p p = xcalloc (1, sizeof (*p));
	  p->next = (yyvsp[(1) - (2)].p);
	  p->line = lexer_line;
	  p->opt = xmalloc (sizeof (*(p->opt)));
	  p->opt->name = "tag";
	  p->opt->next = NULL;
	  p->opt->info = xasprintf ("'%s'", (yyvsp[(2) - (2)].s));
	  (yyval.p) = p;
	;}
    break;

  case 23:
#line 184 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.p) = NULL; ;}
    break;

  case 24:
#line 186 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	            pair_p p = xmalloc (sizeof (*p));
		    p->type = adjust_field_type ((yyvsp[(1) - (6)].t), (yyvsp[(2) - (6)].o));
		    p->opt = (yyvsp[(2) - (6)].o);
		    p->name = (yyvsp[(3) - (6)].s);
		    p->next = (yyvsp[(6) - (6)].p);
		    p->line = lexer_line;
		    (yyval.p) = p;
		  ;}
    break;

  case 25:
#line 196 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	            pair_p p = xmalloc (sizeof (*p));
		    p->type = adjust_field_type (create_array ((yyvsp[(1) - (6)].t), (yyvsp[(4) - (6)].s)), (yyvsp[(2) - (6)].o));
		    p->opt = (yyvsp[(2) - (6)].o);
		    p->name = (yyvsp[(3) - (6)].s);
		    p->next = (yyvsp[(6) - (6)].p);
		    p->line = lexer_line;
		    (yyval.p) = p;
		  ;}
    break;

  case 26:
#line 206 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	            pair_p p = xmalloc (sizeof (*p));
		    p->type = create_array (create_array ((yyvsp[(1) - (7)].t), (yyvsp[(5) - (7)].s)), (yyvsp[(4) - (7)].s));
		    p->opt = (yyvsp[(2) - (7)].o);
		    p->name = (yyvsp[(3) - (7)].s);
		    p->next = (yyvsp[(7) - (7)].p);
		    p->line = lexer_line;
		    (yyval.p) = p;
		  ;}
    break;

  case 30:
#line 223 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.t) = (yyvsp[(1) - (1)].t); ;}
    break;

  case 31:
#line 225 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.t) = resolve_typedef ((yyvsp[(1) - (1)].s), &lexer_line); ;}
    break;

  case 32:
#line 227 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.t) = create_pointer ((yyvsp[(1) - (2)].t)); ;}
    break;

  case 33:
#line 229 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	   new_structure ((yyvsp[(2) - (5)].s), 0, &lexer_line, (yyvsp[(4) - (5)].p), NULL);
           (yyval.t) = find_structure ((yyvsp[(2) - (5)].s), 0);
	 ;}
    break;

  case 34:
#line 234 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.t) = find_structure ((yyvsp[(2) - (2)].s), 0); ;}
    break;

  case 35:
#line 236 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	   new_structure ((yyvsp[(2) - (5)].s), 1, &lexer_line, (yyvsp[(4) - (5)].p), NULL);
           (yyval.t) = find_structure ((yyvsp[(2) - (5)].s), 1);
	 ;}
    break;

  case 36:
#line 241 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.t) = find_structure ((yyvsp[(2) - (2)].s), 1); ;}
    break;

  case 37:
#line 243 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.t) = create_scalar_type ((yyvsp[(2) - (2)].s), strlen ((yyvsp[(2) - (2)].s))); ;}
    break;

  case 38:
#line 245 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.t) = create_scalar_type ((yyvsp[(2) - (5)].s), strlen ((yyvsp[(2) - (5)].s))); ;}
    break;

  case 40:
#line 250 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { ;}
    break;

  case 41:
#line 252 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { ;}
    break;

  case 42:
#line 254 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { ;}
    break;

  case 43:
#line 257 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.o) = NULL; ;}
    break;

  case 44:
#line 258 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.o) = (yyvsp[(1) - (1)].o); ;}
    break;

  case 45:
#line 262 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.o) = (yyvsp[(4) - (6)].o); ;}
    break;

  case 46:
#line 266 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.s) = "ptr_alias"; ;}
    break;

  case 47:
#line 268 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.s) = (yyvsp[(1) - (1)].s); ;}
    break;

  case 48:
#line 272 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	     options_p o = xmalloc (sizeof (*o));
	     o->name = (yyvsp[(1) - (4)].s);
	     o->info = adjust_field_type ((yyvsp[(3) - (4)].t), NULL);
	     (yyval.o) = o;
	   ;}
    break;

  case 49:
#line 279 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	     options_p o = xmalloc (sizeof (*o));
	     o->name = (yyvsp[(1) - (4)].s);
	     o->info = (void *)(yyvsp[(3) - (4)].s);
	     (yyval.o) = o;
	   ;}
    break;

  case 50:
#line 288 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	        (yyvsp[(1) - (1)].o)->next = NULL;
		(yyval.o) = (yyvsp[(1) - (1)].o);
	      ;}
    break;

  case 51:
#line 293 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    {
	        (yyvsp[(3) - (3)].o)->next = (yyvsp[(1) - (3)].o);
		(yyval.o) = (yyvsp[(3) - (3)].o);
	      ;}
    break;

  case 52:
#line 299 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.o) = NULL; ;}
    break;

  case 53:
#line 300 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"
    { (yyval.o) = (yyvsp[(1) - (1)].o); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1775 "gengtype-yacc.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 302 "/toolchain/openrsdk/rsdk-1.3.6/gcc-3.4.6/gcc/gengtype-yacc.y"


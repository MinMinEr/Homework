/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0


/* Substitute the variable and function names.  */
#define yypush_parse    mkp_yypush_parse
#define yypstate_new    mkp_yypstate_new
#define yypstate_delete mkp_yypstate_delete
#define yypstate        mkp_yypstate
#define yylex           mkp_yylex
#define yyerror         mkp_yyerror
#define yylval          mkp_yylval
#define yychar          mkp_yychar
#define yydebug         mkp_yydebug
#define yynerrs         mkp_yynerrs
#define yylloc          mkp_yylloc

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 19 "mk-parser.y"


#include "mk-scanner.h"
#include "mk-parser.h"

#include <stdlib.h>

#define YYDEBUG 1

/* Token location is found directly from token value, there is no need to
 * maintain a separate location variable */
#define YYLLOC_DEFAULT(Current, Rhs, N)	((Current) = YYRHSLOC(Rhs, (N) ? 1 : 0))

/* Line 371 of yacc.c  */
#line 89 "mk-parser.y"


//mkp_yydebug = 1;

static gint
mkp_special_prerequisite (AnjutaToken *token)
{
    switch (anjuta_token_get_type (token))
    {
        case ORDER:
            return MK_TOKEN_ORDER;
        default:
            return ANJUTA_TOKEN_NAME;
    }
}

static void
mkp_special_target (AnjutaToken *list)
{
    AnjutaToken *arg = anjuta_token_first_item (list);
    AnjutaToken *target = arg != NULL ? anjuta_token_first_item (arg) : NULL;

    if ((target != NULL) && (anjuta_token_next_item (target) == NULL))
    {
        gint mk_token = 0;

        switch (anjuta_token_get_type (target))
        {
        case _PHONY:
            mk_token = MK_TOKEN__PHONY;
            break;
        case _SUFFIXES:
            mk_token = MK_TOKEN__SUFFIXES;
            break;
        case _DEFAULT:
            mk_token = MK_TOKEN__DEFAULT;
            break;
        case _PRECIOUS:
            mk_token = MK_TOKEN__PRECIOUS;
            break;
        case _INTERMEDIATE:
            mk_token = MK_TOKEN__INTERMEDIATE;
            break;
        case _SECONDARY:
            mk_token = MK_TOKEN__SECONDARY;
            break;
        case _SECONDEXPANSION:
            mk_token = MK_TOKEN__SECONDEXPANSION;
            break;
        case _DELETE_ON_ERROR:
            mk_token = MK_TOKEN__DELETE_ON_ERROR;
            break;
        case _IGNORE:
            mk_token = MK_TOKEN__IGNORE;
            break;
        case _LOW_RESOLUTION_TIME:
            mk_token = MK_TOKEN__LOW_RESOLUTION_TIME;
            break;
        case _SILENT:
            mk_token = MK_TOKEN__SILENT;
            break;
        case _EXPORT_ALL_VARIABLES:
            mk_token = MK_TOKEN__EXPORT_ALL_VARIABLES;
            break;
        case _NOTPARALLEL:
            mk_token = MK_TOKEN__NOTPARALLEL;
            break;
        case ORDER:
            mk_token = MK_TOKEN_ORDER;
            break;
        default:
            break;
        }
        
        if (mk_token)
        {
            anjuta_token_set_type (arg, mk_token);
        }
    }
}


/* Line 371 of yacc.c  */
#line 177 "mk-parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "mk-parser.h".  */
#ifndef YY_MKP_YY_MK_PARSER_H_INCLUDED
# define YY_MKP_YY_MK_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int mkp_yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EOL = 258,
     SPACE = 259,
     TAB = 260,
     HASH = 261,
     MACRO = 262,
     VARIABLE = 263,
     COMMA = 264,
     COLON = 265,
     DOUBLE_COLON = 266,
     ORDER = 267,
     SEMI_COLON = 268,
     EQUAL = 269,
     IMMEDIATE_EQUAL = 270,
     CONDITIONAL_EQUAL = 271,
     APPEND = 272,
     CHARACTER = 273,
     NAME = 274,
     MK_VARIABLE = 275,
     _PHONY = 276,
     _SUFFIXES = 277,
     _DEFAULT = 278,
     _PRECIOUS = 279,
     _INTERMEDIATE = 280,
     _SECONDARY = 281,
     _SECONDEXPANSION = 282,
     _DELETE_ON_ERROR = 283,
     _IGNORE = 284,
     _LOW_RESOLUTION_TIME = 285,
     _SILENT = 286,
     _EXPORT_ALL_VARIABLES = 287,
     _NOTPARALLEL = 288,
     IFEQ = 289,
     ELSE = 290,
     ENDIF = 291
   };
#endif
/* Tokens.  */
#define EOL 258
#define SPACE 259
#define TAB 260
#define HASH 261
#define MACRO 262
#define VARIABLE 263
#define COMMA 264
#define COLON 265
#define DOUBLE_COLON 266
#define ORDER 267
#define SEMI_COLON 268
#define EQUAL 269
#define IMMEDIATE_EQUAL 270
#define CONDITIONAL_EQUAL 271
#define APPEND 272
#define CHARACTER 273
#define NAME 274
#define MK_VARIABLE 275
#define _PHONY 276
#define _SUFFIXES 277
#define _DEFAULT 278
#define _PRECIOUS 279
#define _INTERMEDIATE 280
#define _SECONDARY 281
#define _SECONDEXPANSION 282
#define _DELETE_ON_ERROR 283
#define _IGNORE 284
#define _LOW_RESOLUTION_TIME 285
#define _SILENT 286
#define _EXPORT_ALL_VARIABLES 287
#define _NOTPARALLEL 288
#define IFEQ 289
#define ELSE 290
#define ENDIF 291



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


#ifndef YYPUSH_MORE_DEFINED
# define YYPUSH_MORE_DEFINED
enum { YYPUSH_MORE = 4 };
#endif

typedef struct mkp_yypstate mkp_yypstate;

#if defined __STDC__ || defined __cplusplus
int mkp_yypush_parse (mkp_yypstate *ps, int pushed_char, YYSTYPE const *pushed_val, YYLTYPE *pushed_loc, void* scanner);
#else
int mkp_yypush_parse ();
#endif

#if defined __STDC__ || defined __cplusplus
mkp_yypstate * mkp_yypstate_new (void);
#else
mkp_yypstate * mkp_yypstate_new ();
#endif
#if defined __STDC__ || defined __cplusplus
void mkp_yypstate_delete (mkp_yypstate *ps);
#else
void mkp_yypstate_delete ();
#endif

#endif /* !YY_MKP_YY_MK_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 337 "mk-parser.c"

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   468

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNRULES -- Number of states.  */
#define YYNSTATES  143

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     8,
       4,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     6,     2,     2,    10,     2,     2,     2,     2,
       2,     2,     2,     2,    14,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,    21,
       2,    23,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    19,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     5,
       7,     9,    11,    12,    13,    15,    17,    18,    20,    22,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    16,    19,    22,
      26,    29,    32,    37,    41,    42,    47,    50,    52,    54,
      56,    58,    62,    63,    66,    67,    69,    73,    75,    79,
      83,    85,    89,    90,    93,    94,    96,    98,   101,   104,
     106,   109,   112,   114,   116,   119,   122,   124,   126,   129,
     132,   134,   136,   138,   140,   142,   144,   146,   148,   150,
     152,   154,   156,   158,   160,   162,   164,   166,   168,   170,
     172,   174,   176,   178,   180,   182,   184,   186,   188,   190,
     192,   194,   196,   198,   200,   202,   204,   206,   208,   210,
     212,   214,   216,   218,   220,   222,   224,   226,   228,   230,
     232,   234,   236,   238,   240,   242,   244,   246,   248,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   286
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    -1,    47,    48,    -1,    54,    -1,
      63,    54,    -1,    49,    54,    -1,    53,    54,    -1,    50,
      52,    -1,    59,    68,    65,    -1,    59,    68,    -1,    51,
      54,    -1,    51,    20,    61,     3,    -1,    59,    76,    57,
      -1,    -1,    52,     7,    61,     3,    -1,    43,    65,    -1,
      44,    -1,    45,    -1,     3,    -1,    55,    -1,     9,    56,
       3,    -1,    -1,    56,    69,    -1,    -1,    63,    -1,    62,
      58,    62,    -1,    66,    -1,    58,    63,    66,    -1,    62,
      60,    62,    -1,    64,    -1,    60,    63,    64,    -1,    -1,
      61,    71,    -1,    -1,    63,    -1,    79,    -1,    63,    79,
      -1,    63,    74,    -1,    73,    -1,    64,    73,    -1,    64,
      74,    -1,    72,    -1,    79,    -1,    65,    72,    -1,    65,
      79,    -1,    67,    -1,    70,    -1,    67,    70,    -1,    67,
      74,    -1,    22,    -1,    24,    -1,    25,    -1,    26,    -1,
      78,    -1,    79,    -1,    75,    -1,    80,    -1,    76,    -1,
      75,    -1,    74,    -1,    80,    -1,    76,    -1,    77,    -1,
      79,    -1,    75,    -1,    74,    -1,    80,    -1,    76,    -1,
      77,    -1,    75,    -1,    77,    -1,    12,    -1,    28,    -1,
      27,    -1,    13,    -1,    18,    -1,    30,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,
      37,    -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,
      42,    -1,    15,    -1,    17,    -1,    20,    -1,    12,    -1,
      28,    -1,    27,    -1,    18,    -1,     9,    -1,    13,    -1,
      15,    -1,    17,    -1,    20,    -1,    22,    -1,    24,    -1,
      25,    -1,    26,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,
      38,    -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,
      43,    -1,    44,    -1,    45,    -1,     5,    -1,     7,    -1,
      22,    -1,    24,    -1,    25,    -1,    26,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   175,   175,   176,   180,   181,   182,   183,   184,   191,
     199,   209,   212,   220,   241,   244,   252,   253,   254,   262,
     265,   271,   274,   276,   280,   283,   286,   296,   300,   308,
     315,   319,   326,   329,   338,   341,   345,   349,   352,   356,
     360,   363,   367,   371,   375,   378,   384,   388,   392,   395,
     399,   403,   407,   411,   422,   423,   427,   428,   429,   433,
     434,   435,   436,   437,   438,   442,   443,   444,   445,   446,
     450,   451,   455,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     481,   482,   486,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   522,   523,   527,   528,   529,   530
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EOL", "'\\n'", "SPACE", "' '", "TAB",
  "'\\t'", "HASH", "'#'", "MACRO", "VARIABLE", "COMMA", "','", "COLON",
  "':'", "\"::\"", "ORDER", "'|'", "SEMI_COLON", "';'", "EQUAL", "'='",
  "\":=\"", "\"?=\"", "\"+=\"", "CHARACTER", "NAME", "MK_VARIABLE",
  "_PHONY", "_SUFFIXES", "_DEFAULT", "_PRECIOUS", "_INTERMEDIATE",
  "_SECONDARY", "_SECONDEXPANSION", "_DELETE_ON_ERROR", "_IGNORE",
  "_LOW_RESOLUTION_TIME", "_SILENT", "_EXPORT_ALL_VARIABLES",
  "_NOTPARALLEL", "IFEQ", "ELSE", "ENDIF", "$accept", "file", "statement",
  "definition", "rule", "depend_list", "command_list", "conditional",
  "end_of_line", "comment", "not_eol_list", "prerequisite_list",
  "prerequisite_list_body", "head_list", "head_list_body", "command_line",
  "optional_space", "space", "head", "value", "prerequisite",
  "name_prerequisite", "equal_group", "not_eol_token",
  "prerequisite_token", "command_token", "value_token", "head_token",
  "variable_token", "name_token", "rule_token", "depend_token",
  "word_token", "space_token", "equal_token", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,    10,   259,    32,   260,     9,   261,
      35,   262,   263,   264,    44,   265,    58,   266,   267,   124,
     268,    59,   269,    61,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    48,    48,    49,
      49,    50,    50,    51,    52,    52,    53,    53,    53,    54,
      54,    55,    56,    56,    57,    57,    57,    58,    58,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    63,    64,
      64,    64,    65,    65,    65,    65,    66,    67,    67,    67,
      68,    68,    68,    68,    69,    69,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      73,    73,    74,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    80,    80,    80,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     3,
       2,     2,     4,     3,     0,     4,     2,     1,     1,     1,
       1,     3,     0,     2,     0,     1,     3,     1,     3,     3,
       1,     3,     0,     2,     0,     1,     1,     2,     2,     1,
       2,     2,     1,     1,     2,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      34,    19,   122,   123,    22,     0,    17,    18,    34,     2,
       0,    14,     0,     0,     4,    20,     0,     0,    35,    36,
       0,    72,    75,    90,    91,    76,    92,   124,   125,   126,
     127,    74,    73,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    16,    42,    66,    65,
      68,    69,    43,    67,     1,     3,     6,     8,    32,    11,
       7,    50,    51,    52,    53,    10,    34,    34,    30,    39,
      70,    71,     5,    38,    37,    21,    97,    93,    98,    99,
     100,    96,   101,   102,   103,   104,   105,    95,    94,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    23,    54,    55,    44,    45,
      32,     0,     9,    13,     0,    35,    29,    35,    40,    41,
       0,    12,    33,    60,    59,    62,    63,    64,    61,    34,
      27,    46,    47,    56,    58,    57,    31,    15,    26,    35,
      48,    49,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,    57,    13,    14,    15,
      20,   113,   129,    16,    67,   111,    17,    18,    68,    46,
     130,   131,    65,   105,   132,   122,    47,    69,    48,    49,
      50,    51,   106,    19,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -109
static const yytype_int16 yypact[] =
{
      29,  -109,  -109,  -109,  -109,   266,  -109,  -109,    18,  -109,
      30,  -109,    73,    30,  -109,  -109,   365,   426,   438,  -109,
     145,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,   266,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,     5,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,   266,   189,    35,   366,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,   188,   266,  -109,   396,    80,  -109,    17,  -109,  -109,
     228,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,    35,
    -109,   335,  -109,  -109,  -109,  -109,   366,  -109,  -109,   304,
    -109,  -109,  -109
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -109,  -109,     1,  -109,  -109,  -109,  -109,  -109,    -2,  -109,
    -109,  -109,  -109,  -109,  -109,   -93,   -62,   -60,   -97,   -39,
    -108,  -109,  -109,  -109,   -88,  -109,   -44,   -65,    10,    -3,
     -15,     2,  -109,    -5,   -30
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -26
static const yytype_int16 yytable[] =
{
      52,    66,   108,   118,   114,   116,   115,   117,    56,    55,
      59,    60,   110,    74,    70,   107,    72,   120,    54,    71,
     136,     1,     2,     2,     3,     3,   112,     4,    73,    21,
      22,   142,     1,     1,     2,    25,     3,    26,     4,     4,
       2,   109,     3,   140,    31,    32,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      52,     5,     6,     7,     0,    70,     0,   138,   108,   139,
      71,   118,     5,     6,     7,     0,     1,     0,   119,     0,
       0,   128,     4,   -25,   135,     2,     0,     3,     0,   -25,
     128,     0,    21,    58,     0,     0,   125,     0,     0,   134,
     -25,   135,     0,     0,     0,   125,   127,   109,   124,   135,
      74,   133,    74,   126,    70,   127,   134,   124,     0,    71,
       0,   123,   126,     0,   134,    73,     0,    73,   133,     0,
     123,     0,     0,    70,    74,     0,   133,     0,    71,     0,
       0,   141,     0,     0,     0,     0,   119,     0,    75,    73,
       2,     0,     3,     0,    76,     0,     0,    77,    78,     0,
      79,     0,    80,    81,     0,    82,     0,    83,     0,    84,
      85,    86,    87,    88,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   121,   -24,     2,     2,     3,     3,     0,   -24,     0,
      21,    22,     0,    23,     0,    24,    25,     0,    26,   -24,
      27,     0,    28,    29,    30,    31,    32,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,   137,     0,     2,     0,     3,     0,     0,     0,     0,
      21,    22,     0,    23,     0,    24,    25,     0,    26,     0,
      27,     0,    28,    29,    30,    31,    32,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     2,     0,     3,     0,     0,     0,     0,    21,    22,
       0,    23,     0,    24,    25,     0,    26,     0,    27,     0,
      28,    29,    30,    31,    32,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     2,
       0,     3,     0,     0,     0,     0,    21,    22,     0,    23,
       0,    24,    25,     0,     0,     0,    27,     0,    28,    29,
      30,    31,    32,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    21,    22,     0,
      23,     0,    24,    25,     0,     0,     0,    27,     0,    28,
      29,    30,    31,    32,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    21,    22,
      23,     0,    24,     0,    25,     0,    26,    61,     0,    62,
      63,    64,     0,    31,    32,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    22,
       0,    23,     0,    24,    25,     0,     0,     0,    27,     0,
      28,    29,    30,    31,    32,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    22,
       0,     1,     0,     2,    25,     3,    26,     4,     0,     0,
      21,     0,     0,    31,    32,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-109)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,    16,    46,    68,    66,    67,    66,    67,    10,     8,
      12,    13,     7,    18,    17,    20,    18,   110,     0,    17,
     117,     3,     5,     5,     7,     7,    65,     9,    18,    12,
      13,   139,     3,     3,     5,    18,     7,    20,     9,     9,
       5,    46,     7,   131,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      65,    43,    44,    45,    -1,    68,    -1,   129,   112,   129,
      68,   136,    43,    44,    45,    -1,     3,    -1,    68,    -1,
      -1,   111,     9,     3,   114,     5,    -1,     7,    -1,     9,
     120,    -1,    12,    20,    -1,    -1,   111,    -1,    -1,   114,
      20,   131,    -1,    -1,    -1,   120,   111,   112,   111,   139,
     115,   114,   117,   111,   117,   120,   131,   120,    -1,   117,
      -1,   111,   120,    -1,   139,   115,    -1,   117,   131,    -1,
     120,    -1,    -1,   136,   139,    -1,   139,    -1,   136,    -1,
      -1,   131,    -1,    -1,    -1,    -1,   136,    -1,     3,   139,
       5,    -1,     7,    -1,     9,    -1,    -1,    12,    13,    -1,
      15,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     3,     3,     5,     5,     7,     7,    -1,     9,    -1,
      12,    13,    -1,    15,    -1,    17,    18,    -1,    20,    20,
      22,    -1,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     3,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     5,
      -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    17,    18,    -1,    -1,    -1,    22,    -1,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    12,    13,    -1,
      15,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    12,    13,
      15,    -1,    17,    -1,    18,    -1,    20,    22,    -1,    24,
      25,    26,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    13,
      -1,    15,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    13,
      -1,     3,    -1,     5,    18,     7,    20,     9,    -1,    -1,
      12,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    43,    44,    45,    47,    48,
      49,    50,    51,    53,    54,    55,    59,    62,    63,    79,
      56,    12,    13,    15,    17,    18,    20,    22,    24,    25,
      26,    27,    28,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    65,    72,    74,    75,
      76,    77,    79,    80,     0,    48,    54,    52,    20,    54,
      54,    22,    24,    25,    26,    68,    76,    60,    64,    73,
      75,    77,    54,    74,    79,     3,     9,    12,    13,    15,
      17,    18,    20,    22,    24,    25,    26,    27,    28,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    69,    78,    79,    72,    79,
       7,    61,    65,    57,    62,    63,    62,    63,    73,    74,
      61,     3,    71,    74,    75,    76,    77,    79,    80,    58,
      66,    67,    70,    75,    76,    80,    64,     3,    62,    63,
      70,    74,    66
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (&yylloc, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, scanner)
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
		  Type, Value, Location, scanner); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void* scanner)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    void* scanner;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void* scanner)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    void* scanner;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, void* scanner)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, scanner)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    void* scanner;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, scanner); \
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void* scanner)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, scanner)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    void* scanner;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}



struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;
    /* Used to determine if this is the first time this instance has
       been used.  */
    int yynew;
  };

/* Initialize the parser data structure.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
yypstate *
yypstate_new (void)
#else
yypstate *
yypstate_new ()

#endif
{
  yypstate *yyps;
  yyps = (yypstate *) malloc (sizeof *yyps);
  if (!yyps)
    return YY_NULL;
  yyps->yynew = 1;
  return yyps;
}

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void
yypstate_delete (yypstate *yyps)
#else
void
yypstate_delete (yyps)
    yypstate *yyps;
#endif
{
#ifndef yyoverflow
  /* If the stack was reallocated but the parse did not complete, then the
     stack still needs to be freed.  */
  if (!yyps->yynew && yyps->yyss != yyps->yyssa)
    YYSTACK_FREE (yyps->yyss);
#endif
  free (yyps);
}

#define mkp_yynerrs yyps->mkp_yynerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yyerror_range yyps->yyerror_range
#define yystacksize yyps->yystacksize


/*---------------.
| yypush_parse.  |
`---------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yypush_parse (yypstate *yyps, int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, void* scanner)
#else
int
yypush_parse (yyps, yypushed_char, yypushed_val, yypushed_loc, scanner)
    yypstate *yyps;
    int yypushed_char;
    YYSTYPE const *yypushed_val;
    YYLTYPE *yypushed_loc;
    void* scanner;
#endif
{
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc = yyloc_default;


  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  if (!yyps->yynew)
    {
      yyn = yypact[yystate];
      goto yyread_pushed_token;
    }

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = *yypushed_loc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
/* Line 1792 of yacc.c  */
#line 184 "mk-parser.y"
    {
        anjuta_token_merge_children ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        mkp_scanner_add_rule (scanner, (yyvsp[(1) - (2)]));
    }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 191 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_DEFINITION, NULL);
        anjuta_token_merge_own_children ((yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyval), (yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyval), (yyvsp[(2) - (3)]));
        anjuta_token_merge ((yyval), (yyvsp[(3) - (3)]));
        mkp_scanner_update_variable (scanner, (yyval));
    }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 199 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_DEFINITION, NULL);
        anjuta_token_merge_own_children ((yyvsp[(1) - (2)]));
        anjuta_token_merge ((yyval), (yyvsp[(1) - (2)]));
        anjuta_token_merge ((yyval), (yyvsp[(2) - (2)]));
        mkp_scanner_update_variable (scanner, (yyval));
    }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 209 "mk-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 212 "mk-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]));
        anjuta_token_merge ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
        anjuta_token_merge ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
    }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 220 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (MK_TOKEN_RULE, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (3)]));
        mkp_special_target ((yyvsp[(1) - (3)]));
        switch (anjuta_token_get_type ((yyvsp[(2) - (3)])))
        {
        case COLON:
            anjuta_token_set_type ((yyvsp[(2) - (3)]), MK_TOKEN_COLON);
            break;
        case DOUBLE_COLON:
            anjuta_token_set_type ((yyvsp[(2) - (3)]), MK_TOKEN_DOUBLE_COLON);
            break;
        default:
            break;
        }
        anjuta_token_merge ((yyval), (yyvsp[(2) - (3)]));
        anjuta_token_merge ((yyval), (yyvsp[(3) - (3)]));
    }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 241 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (MK_TOKEN_COMMANDS, NULL);
    }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 244 "mk-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]));
        anjuta_token_merge ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
        anjuta_token_merge ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
    }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 262 "mk-parser.y"
    {
        (yyval) = NULL;
    }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 265 "mk-parser.y"
    {
        (yyval) = NULL;
    }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 280 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (MK_TOKEN_PREREQUISITE, NULL);
    }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 283 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (MK_TOKEN_PREREQUISITE, NULL);
    }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 286 "mk-parser.y"
    {
        if ((yyvsp[(1) - (3)])) anjuta_token_set_type ((yyvsp[(1) - (3)]), ANJUTA_TOKEN_START);
        if ((yyvsp[(3) - (3)])) anjuta_token_set_type ((yyvsp[(3) - (3)]), ANJUTA_TOKEN_LAST);
        anjuta_token_merge_previous ((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        (yyval) = (yyvsp[(2) - (3)]);
    }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 296 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (MK_TOKEN_PREREQUISITE, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 300 "mk-parser.y"
    {
        anjuta_token_set_type ((yyvsp[(2) - (3)]), ANJUTA_TOKEN_NEXT);
        anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));
        anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 308 "mk-parser.y"
    {
        (yyval) = anjuta_token_merge_previous ((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyval), (yyvsp[(3) - (3)]));
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 315 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 319 "mk-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));
        anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
    }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 326 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (MK_TOKEN_COMMAND, NULL);
    }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 329 "mk-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 338 "mk-parser.y"
    {
		(yyval) = NULL;
	}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 345 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_SPACE, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 349 "mk-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 356 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 360 "mk-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 367 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_VALUE, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 371 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_VALUE, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 375 "mk-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 378 "mk-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 388 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (mkp_special_prerequisite ((yyvsp[(1) - (1)])), NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 392 "mk-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 399 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (MK_TOKEN_EQUAL, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 403 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (MK_TOKEN_IMMEDIATE_EQUAL, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 407 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (MK_TOKEN_CONDITIONAL_EQUAL, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 411 "mk-parser.y"
    {
        (yyval) = anjuta_token_new_static (MK_TOKEN_APPEND, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 455 "mk-parser.y"
    {
        mkp_scanner_parse_variable (scanner, (yyval));
    }
    break;


/* Line 1792 of yacc.c  */
#line 2259 "mk-parser.c"
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
  *++yylsp = yyloc;

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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, scanner, YY_("syntax error"));
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
        yyerror (&yylloc, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc, scanner);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, scanner);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  yyps->yynew = 1;

yypushreturn:
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 533 "mk-parser.y"


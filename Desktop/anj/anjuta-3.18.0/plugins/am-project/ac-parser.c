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
#define yypush_parse    amp_ac_yypush_parse
#define yypstate_new    amp_ac_yypstate_new
#define yypstate_delete amp_ac_yypstate_delete
#define yypstate        amp_ac_yypstate
#define yylex           amp_ac_yylex
#define yyerror         amp_ac_yyerror
#define yylval          amp_ac_yylval
#define yychar          amp_ac_yychar
#define yydebug         amp_ac_yydebug
#define yynerrs         amp_ac_yynerrs
#define yylloc          amp_ac_yylloc

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 19 "ac-parser.y"


#include "ac-scanner.h"
#include "ac-parser.h"

#include <stdlib.h>

#define YYDEBUG 1

#include "libanjuta/anjuta-debug.h"

/* Token location is found directly from token value, there is no need to
 * maintain a separate location variable */
#define YYLLOC_DEFAULT(Current, Rhs, N)	((Current) = YYRHSLOC(Rhs, (N) ? 1 : 0))

/* Line 371 of yacc.c  */
#line 133 "ac-parser.y"


//amp_ac_yydebug = 1;

static gint
amp_ac_autoconf_macro (AnjutaToken *token)
{
    switch (anjuta_token_get_type (token))
    {
	case AC_ARG_ENABLE:			return AC_TOKEN_AC_ARG_ENABLE;
	case AC_C_CONST:			return AC_TOKEN_AC_C_CONST;
	case AC_CHECK_FUNCS:		return AC_TOKEN_AC_CHECK_FUNCS;
	case AC_CHECK_HEADERS:		return AC_TOKEN_AC_CHECK_HEADERS;
	case AC_CHECK_LIB:			return AC_TOKEN_AC_CHECK_LIB;
	case AC_CHECK_PROG:			return AC_TOKEN_AC_CHECK_PROG;
	case AC_CONFIG_FILES:		return AC_TOKEN_AC_CONFIG_FILES;
	case AC_CONFIG_HEADERS:		return AC_TOKEN_AC_CONFIG_HEADERS;
	case AC_CONFIG_MACRO_DIR:	return AC_TOKEN_AC_CONFIG_MACRO_DIR;
	case AC_CONFIG_SRCDIR:		return AC_TOKEN_AC_CONFIG_SRCDIR;
	case AC_EGREP_HEADER:		return AC_TOKEN_AC_EGREP_HEADER;
	case AC_EXEEXT:				return AC_TOKEN_AC_EXEEXT;
	case AC_HEADER_STDC:		return AC_TOKEN_AC_HEADER_STDC;
	case AC_INIT:				return AC_TOKEN_AC_INIT;
	case AC_OBJEXT:				return AC_TOKEN_AC_OBJEXT;
	case AC_OUTPUT:				return AC_TOKEN_AC_OUTPUT;
	case OBSOLETE_AC_OUTPUT:	return AC_TOKEN_OBSOLETE_AC_OUTPUT;
	case AC_PREREQ:				return AC_TOKEN_AC_PREREQ;
	case AC_PROG_CC:			return AC_TOKEN_AC_PROG_CC;
	case AC_PROG_CPP:			return AC_TOKEN_AC_PROG_CPP;
	case AC_PROG_CXX:			return AC_TOKEN_AC_PROG_CXX;
	case IT_PROG_INTLTOOL:		return AC_TOKEN_IT_PROG_INTLTOOL;
	case AC_PROG_LEX:			return AC_TOKEN_AC_PROG_LEX;
	case AC_PROG_RANLIB:		return AC_TOKEN_AC_PROG_RANLIB;
	case AC_PROG_YACC:			return AC_TOKEN_AC_PROG_YACC;
	case AC_TYPE_SIZE_T:		return AC_TOKEN_AC_TYPE_SIZE_T;
	case AC_TYPE_OFF_T:			return AC_TOKEN_AC_TYPE_OFF_T;
	case AM_INIT_AUTOMAKE:		return AC_TOKEN_AM_INIT_AUTOMAKE;
	case AM_GLIB_GNU_GETTEXT:	return AC_TOKEN_AM_GLIB_GNU_GETTEXT;
	case AM_MAINTAINER_MODE:	return AC_TOKEN_AM_MAINTAINER_MODE;
	case AC_PROG_LIBTOOL:		return AC_TOKEN_AC_PROG_LIBTOOL;
	case AM_PROG_LIBTOOL:		return AC_TOKEN_AM_PROG_LIBTOOL;
	case LT_INIT:				return AC_TOKEN_LT_INIT;
	case DEFAULT_LT_INIT:		return AC_TOKEN_LT_INIT;
	case LT_PREREQ:				return AC_TOKEN_LT_PREREQ;
	case PKG_CHECK_MODULES:		return AC_TOKEN_PKG_CHECK_MODULES;
	case PKG_PROG_PKG_CONFIG:	return AC_TOKEN_PKG_PROG_PKG_CONFIG;
    default: return anjuta_token_get_type (token);
    }
}


/* Line 371 of yacc.c  */
#line 148 "ac-parser.c"

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
   by #include "ac-parser.h".  */
#ifndef YY_AMP_AC_YY_AC_PARSER_H_INCLUDED
# define YY_AMP_AC_YY_AC_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int amp_ac_yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END_OF_FILE = 259,
     END_OF_LINE = 260,
     SPACE = 261,
     HASH = 262,
     LEFT_PAREN = 263,
     RIGHT_PAREN = 264,
     LEFT_CURLY = 265,
     RIGHT_CURLY = 266,
     LEFT_BRACE = 267,
     RIGHT_BRACE = 268,
     EQUAL = 269,
     COMMA = 270,
     LOWER = 271,
     GREATER = 272,
     SINGLE_QUOTE = 273,
     DOUBLE_QUOTE = 274,
     COMMENT = 256,
     NAME = 275,
     VARIABLE = 276,
     MACRO = 277,
     OPERATOR = 278,
     WORD = 279,
     JUNK = 280,
     START_SPACE_LIST = 281,
     DNL = 282,
     M4_INCLUDE = 283,
     AC_MACRO_WITH_ARG = 284,
     AC_MACRO_WITHOUT_ARG = 285,
     AC_ARG_ENABLE = 286,
     AC_C_CONST = 287,
     AC_CHECK_FUNCS = 288,
     AC_CHECK_HEADERS = 289,
     AC_CHECK_LIB = 290,
     AC_CHECK_PROG = 291,
     AC_CONFIG_FILES = 292,
     AC_CONFIG_HEADERS = 293,
     AC_CONFIG_MACRO_DIR = 294,
     AC_CONFIG_SRCDIR = 295,
     AC_EGREP_HEADER = 296,
     AC_EXEEXT = 297,
     AC_HEADER_STDC = 298,
     AC_INIT = 299,
     AC_OBJEXT = 300,
     AC_OUTPUT = 301,
     OBSOLETE_AC_OUTPUT = 302,
     AC_PREREQ = 303,
     AC_PROG_CC = 304,
     AC_PROG_CPP = 305,
     AC_PROG_CXX = 306,
     IT_PROG_INTLTOOL = 307,
     AC_PROG_LEX = 308,
     AC_PROG_RANLIB = 309,
     AC_PROG_YACC = 310,
     AC_SUBST = 311,
     AC_TYPE_SIZE_T = 312,
     AC_TYPE_OFF_T = 313,
     AM_INIT_AUTOMAKE = 314,
     AM_GLIB_GNU_GETTEXT = 315,
     AM_MAINTAINER_MODE = 316,
     AM_PROG_LIBTOOL = 317,
     AC_PROG_LIBTOOL = 318,
     LT_INIT = 319,
     DEFAULT_LT_INIT = 320,
     LT_PREREQ = 321,
     PKG_CHECK_MODULES = 322,
     PKG_PROG_PKG_CONFIG = 323,
     EMPTY = 324,
     ARG = 325
   };
#endif
/* Tokens.  */
#define END_OF_FILE 259
#define END_OF_LINE 260
#define SPACE 261
#define HASH 262
#define LEFT_PAREN 263
#define RIGHT_PAREN 264
#define LEFT_CURLY 265
#define RIGHT_CURLY 266
#define LEFT_BRACE 267
#define RIGHT_BRACE 268
#define EQUAL 269
#define COMMA 270
#define LOWER 271
#define GREATER 272
#define SINGLE_QUOTE 273
#define DOUBLE_QUOTE 274
#define COMMENT 256
#define NAME 275
#define VARIABLE 276
#define MACRO 277
#define OPERATOR 278
#define WORD 279
#define JUNK 280
#define START_SPACE_LIST 281
#define DNL 282
#define M4_INCLUDE 283
#define AC_MACRO_WITH_ARG 284
#define AC_MACRO_WITHOUT_ARG 285
#define AC_ARG_ENABLE 286
#define AC_C_CONST 287
#define AC_CHECK_FUNCS 288
#define AC_CHECK_HEADERS 289
#define AC_CHECK_LIB 290
#define AC_CHECK_PROG 291
#define AC_CONFIG_FILES 292
#define AC_CONFIG_HEADERS 293
#define AC_CONFIG_MACRO_DIR 294
#define AC_CONFIG_SRCDIR 295
#define AC_EGREP_HEADER 296
#define AC_EXEEXT 297
#define AC_HEADER_STDC 298
#define AC_INIT 299
#define AC_OBJEXT 300
#define AC_OUTPUT 301
#define OBSOLETE_AC_OUTPUT 302
#define AC_PREREQ 303
#define AC_PROG_CC 304
#define AC_PROG_CPP 305
#define AC_PROG_CXX 306
#define IT_PROG_INTLTOOL 307
#define AC_PROG_LEX 308
#define AC_PROG_RANLIB 309
#define AC_PROG_YACC 310
#define AC_SUBST 311
#define AC_TYPE_SIZE_T 312
#define AC_TYPE_OFF_T 313
#define AM_INIT_AUTOMAKE 314
#define AM_GLIB_GNU_GETTEXT 315
#define AM_MAINTAINER_MODE 316
#define AM_PROG_LIBTOOL 317
#define AC_PROG_LIBTOOL 318
#define LT_INIT 319
#define DEFAULT_LT_INIT 320
#define LT_PREREQ 321
#define PKG_CHECK_MODULES 322
#define PKG_PROG_PKG_CONFIG 323
#define EMPTY 324
#define ARG 325



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

typedef struct amp_ac_yypstate amp_ac_yypstate;

#if defined __STDC__ || defined __cplusplus
int amp_ac_yypush_parse (amp_ac_yypstate *ps, int pushed_char, YYSTYPE const *pushed_val, YYLTYPE *pushed_loc, AmpAcScanner* scanner);
#else
int amp_ac_yypush_parse ();
#endif

#if defined __STDC__ || defined __cplusplus
amp_ac_yypstate * amp_ac_yypstate_new (void);
#else
amp_ac_yypstate * amp_ac_yypstate_new ();
#endif
#if defined __STDC__ || defined __cplusplus
void amp_ac_yypstate_delete (amp_ac_yypstate *ps);
#else
void amp_ac_yypstate_delete ();
#endif

#endif /* !YY_AMP_AC_YY_AC_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 376 "ac-parser.c"

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
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1633

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  307
/* YYNRULES -- Number of states.  */
#define YYNSTATES  329

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       5,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     7,     2,    33,     9,     2,     2,     2,    31,
      11,    13,     2,     2,    25,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      27,    23,    29,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,    21,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    15,     2,    17,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,    34,     1,     2,     3,
       4,     6,     8,    10,    12,    14,    16,    18,    20,    22,
      24,    26,    28,    30,    32,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    15,    19,    24,
      28,    30,    32,    34,    37,    40,    44,    49,    51,    54,
      56,    58,    60,    62,    64,    66,    68,    70,    72,    74,
      76,    78,    80,    82,    84,    86,    88,    90,    92,    94,
      96,    98,   100,   102,   104,   106,   108,   110,   112,   114,
     116,   118,   120,   122,   124,   126,   128,   129,   131,   134,
     136,   139,   143,   145,   147,   149,   151,   154,   156,   158,
     160,   164,   167,   170,   173,   175,   178,   180,   183,   186,
     189,   193,   195,   199,   203,   204,   207,   209,   211,   215,
     216,   219,   221,   223,   225,   227,   229,   231,   233,   235,
     237,   239,   241,   243,   245,   247,   249,   253,   254,   257,
     259,   261,   263,   265,   267,   269,   271,   273,   275,   277,
     279,   281,   283,   285,   289,   290,   293,   296,   300,   301,
     304,   307,   311,   312,   315,   318,   321,   324,   327,   330,
     333,   336,   339,   342,   345,   348,   351,   354,   357,   360,
     363,   364,   367,   368,   371,   373,   375,   377,   379,   381,
     383,   385,   387,   389,   391,   393,   395,   397,   399,   401,
     403,   405,   407,   410,   414,   415,   418,   421,   424,   427,
     430,   433,   436,   439,   442,   445,   448,   451,   454,   457,
     460,   461,   463,   465,   468,   470,   472,   475,   478,   480,
     482,   484,   486,   488,   490,   492,   494,   496,   498,   500,
     502,   504,   506,   508,   510,   512,   514,   516,   518,   520,
     522,   524,   526,   528,   530,   532,   534,   536,   538,   540,
     542,   544,   546,   548,   550,   552,   554,   556,   558,   560,
     562,   564,   566,   568,   570,   572,   574,   576,   578,   580,
     582,   584,   586,   588,   590,   592,   594,   596,   598,   600,
     602,   604,   606,   608,   610,   612,   614,   616,   618,   620,
     622,   624,   626,   628,   630,   632,   634,   636,   638,   640,
     642,   644,   646,   648,   650,   652,   654,   656,   658,   660,
     662,   664,   666,   668,   670,   672,   674,   676,   678,   680,
     682,   684,   686,   688,   690,   692,   694,   696
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      87,     0,    -1,    88,    -1,    41,    98,    -1,    -1,    88,
      89,    -1,   138,   103,    -1,   138,    91,   103,    -1,    35,
     138,    22,    93,    -1,    35,   138,    22,    -1,    90,    -1,
      92,    -1,    95,    -1,    95,    93,    -1,    35,   138,    -1,
      35,   138,    96,    -1,    35,   138,    96,    93,    -1,    94,
      -1,    93,    94,    -1,   124,    -1,   117,    -1,   143,    -1,
      97,    -1,    22,    -1,    26,    -1,    28,    -1,    35,    -1,
      36,    -1,    39,    -1,     6,    -1,   124,    -1,   117,    -1,
     143,    -1,    97,    -1,    22,    -1,    26,    -1,    28,    -1,
      36,    -1,    39,    -1,   124,    -1,   117,    -1,   143,    -1,
      97,    -1,    26,    -1,    28,    -1,    35,    -1,    36,    -1,
      39,    -1,   105,    -1,   107,    -1,   108,    -1,   109,    -1,
     106,    -1,   111,    -1,   110,    -1,   112,    -1,    -1,    99,
      -1,    99,   140,    -1,   100,    -1,   140,   100,    -1,    99,
     140,   100,    -1,   102,    -1,   101,    -1,    38,    -1,   144,
      -1,   102,   145,    -1,   104,    -1,   115,    -1,   149,    -1,
      42,   116,   149,    -1,    43,   113,    -1,    82,   113,    -1,
     148,   113,    -1,   147,    -1,    71,   113,    -1,    61,    -1,
      62,   113,    -1,    52,   113,    -1,   114,    12,    -1,   140,
     114,    12,    -1,   130,    -1,   114,   135,   130,    -1,     8,
     116,   149,    -1,    -1,   116,   141,    -1,   118,    -1,   121,
      -1,    30,   119,    30,    -1,    -1,   119,   120,    -1,   124,
      -1,   143,    -1,    97,    -1,   104,    -1,    22,    -1,    26,
      -1,    28,    -1,    35,    -1,    36,    -1,    39,    -1,     6,
      -1,     8,    -1,     4,    -1,    32,    -1,    20,    -1,    32,
     122,    32,    -1,    -1,   122,   123,    -1,   124,    -1,   143,
      -1,    97,    -1,   104,    -1,    22,    -1,    26,    -1,    28,
      -1,    35,    -1,    36,    -1,    39,    -1,     6,    -1,     8,
      -1,     4,    -1,    30,    -1,    18,   125,    20,    -1,    -1,
     125,   142,    -1,   125,   124,    -1,    18,   127,    20,    -1,
      -1,   127,   142,    -1,   127,   126,    -1,    18,   129,    20,
      -1,    -1,   129,     6,    -1,   129,     4,    -1,   129,     8,
      -1,   129,    10,    -1,   129,    12,    -1,   129,    24,    -1,
     129,    22,    -1,   129,    28,    -1,   129,    26,    -1,   129,
      35,    -1,   129,    36,    -1,   129,    39,    -1,   129,    30,
      -1,   129,    32,    -1,   129,    97,    -1,   129,   104,    -1,
     129,   126,    -1,    -1,   133,   131,    -1,    -1,   131,   132,
      -1,     6,    -1,     4,    -1,   133,    -1,   128,    -1,   136,
      -1,    97,    -1,   104,    -1,   134,    -1,     8,    -1,    22,
      -1,    26,    -1,    28,    -1,    35,    -1,    36,    -1,    39,
      -1,    30,    -1,    32,    -1,    24,    -1,    24,   140,    -1,
      10,   137,    12,    -1,    -1,   137,     6,    -1,   137,     4,
      -1,   137,   115,    -1,   137,    24,    -1,   137,    22,    -1,
     137,    26,    -1,   137,    28,    -1,   137,    35,    -1,   137,
      36,    -1,   137,    39,    -1,   137,    30,    -1,   137,    32,
      -1,   137,    97,    -1,   137,   136,    -1,   137,   128,    -1,
      -1,   139,    -1,     6,    -1,   139,     6,    -1,     6,    -1,
       4,    -1,   140,     6,    -1,   140,     4,    -1,     6,    -1,
     143,    -1,     8,    -1,    38,    -1,    22,    -1,    26,    -1,
      28,    -1,    35,    -1,    36,    -1,    39,    -1,    30,    -1,
      32,    -1,   146,    -1,    43,    -1,    18,    -1,    20,    -1,
       6,    -1,     4,    -1,   143,    -1,     8,    -1,    22,    -1,
      26,    -1,    28,    -1,    38,    -1,    35,    -1,    36,    -1,
      39,    -1,    30,    -1,    32,    -1,   146,    -1,    43,    -1,
      10,    -1,    12,    -1,    24,    -1,     8,    -1,    18,    -1,
      20,    -1,    10,    -1,    12,    -1,    24,    -1,    35,    -1,
      36,    -1,    39,    -1,    30,    -1,    32,    -1,   146,    -1,
     105,    -1,     8,    -1,    18,    -1,    20,    -1,    10,    -1,
      12,    -1,    24,    -1,    38,    -1,    22,    -1,    26,    -1,
      28,    -1,    35,    -1,    36,    -1,    39,    -1,    30,    -1,
      32,    -1,   146,    -1,   105,    -1,    52,    -1,    61,    -1,
      42,    -1,    62,    -1,    82,    -1,    59,    -1,    71,    -1,
     148,    -1,   147,    -1,    45,    -1,    47,    -1,    57,    -1,
      58,    -1,    60,    -1,    64,    -1,    65,    -1,    66,    -1,
      68,    -1,    69,    -1,    70,    -1,    72,    -1,    73,    -1,
      76,    -1,    77,    -1,    78,    -1,    80,    -1,    44,    -1,
      46,    -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,
      53,    -1,    54,    -1,    55,    -1,    56,    -1,    63,    -1,
      59,    -1,    67,    -1,    74,    -1,    75,    -1,    79,    -1,
      81,    -1,    83,    -1,     4,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   188,   188,   189,   192,   194,   198,   199,   204,   213,
     224,   225,   229,   230,   231,   232,   233,   237,   241,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   286,   287,
     288,   289,   290,   291,   292,   293,   299,   301,   302,   308,
     309,   312,   318,   319,   323,   329,   333,   342,   343,   344,
     348,   357,   367,   381,   390,   396,   405,   411,   420,   432,
     438,   450,   456,   471,   480,   483,   489,   490,   494,   503,
     506,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   530,   539,   542,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   565,   574,   577,   580,   586,   595,   598,
     601,   607,   616,   619,   622,   625,   628,   631,   634,   637,
     640,   643,   646,   649,   652,   655,   658,   661,   662,   663,
     672,   675,   689,   692,   698,   699,   700,   704,   705,   706,
     707,   708,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   724,   728,   744,   751,   754,   757,   760,   761,   764,
     767,   770,   773,   776,   779,   782,   785,   788,   789,   792,
     798,   801,   805,   809,   815,   819,   823,   826,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,   850,   851,   855,   856,   857,   858,   859,   860,
     861,   862,   863,   864,   865,   866,   867,   868,   869,   878,
     879,   880,   884,   885,   886,   887,   888,   889,   890,   891,
     892,   893,   894,   895,   896,   900,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   920,   921,   922,   923,   924,   925,   926,   927,
     928,   932,   933,   934,   935,   936,   937,   938,   939,   940,
     941,   942,   943,   944,   945,   946,   947,   948,   952,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   973,   976
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END_OF_FILE", "END_OF_LINE", "'\\n'",
  "SPACE", "' '", "HASH", "'#'", "LEFT_PAREN", "'('", "RIGHT_PAREN", "')'",
  "LEFT_CURLY", "'{'", "RIGHT_CURLY", "'}'", "LEFT_BRACE", "'['",
  "RIGHT_BRACE", "']'", "EQUAL", "'='", "COMMA", "','", "LOWER", "'<'",
  "GREATER", "'>'", "SINGLE_QUOTE", "'\\''", "DOUBLE_QUOTE", "'\"'",
  "COMMENT", "NAME", "VARIABLE", "MACRO", "OPERATOR", "WORD", "JUNK",
  "START_SPACE_LIST", "DNL", "M4_INCLUDE", "AC_MACRO_WITH_ARG",
  "AC_MACRO_WITHOUT_ARG", "AC_ARG_ENABLE", "AC_C_CONST", "AC_CHECK_FUNCS",
  "AC_CHECK_HEADERS", "AC_CHECK_LIB", "AC_CHECK_PROG", "AC_CONFIG_FILES",
  "AC_CONFIG_HEADERS", "AC_CONFIG_MACRO_DIR", "AC_CONFIG_SRCDIR",
  "AC_EGREP_HEADER", "AC_EXEEXT", "AC_HEADER_STDC", "AC_INIT", "AC_OBJEXT",
  "AC_OUTPUT", "OBSOLETE_AC_OUTPUT", "AC_PREREQ", "AC_PROG_CC",
  "AC_PROG_CPP", "AC_PROG_CXX", "IT_PROG_INTLTOOL", "AC_PROG_LEX",
  "AC_PROG_RANLIB", "AC_PROG_YACC", "AC_SUBST", "AC_TYPE_SIZE_T",
  "AC_TYPE_OFF_T", "AM_INIT_AUTOMAKE", "AM_GLIB_GNU_GETTEXT",
  "AM_MAINTAINER_MODE", "AM_PROG_LIBTOOL", "AC_PROG_LIBTOOL", "LT_INIT",
  "DEFAULT_LT_INIT", "LT_PREREQ", "PKG_CHECK_MODULES",
  "PKG_PROG_PKG_CONFIG", "EMPTY", "ARG", "$accept", "input", "file",
  "line", "definition", "statement", "other_statement", "value",
  "value_token", "no_name_token", "no_equal_token", "macro", "space_list",
  "space_list_body", "item", "operator", "name", "end_statement", "dnl",
  "include", "pkg_check_modules", "ac_macro_with_arg",
  "ac_macro_without_arg", "ac_subst", "ac_output", "obsolete_ac_output",
  "ac_config_files", "arg_list", "arg_list_body", "comment",
  "not_eol_list", "shell_string", "single_string", "single_string_body",
  "not_single_token", "double_string", "double_string_body",
  "not_double_token", "m4_string", "m4_string_body", "raw_string",
  "raw_string_body", "arg_string", "arg_string_body", "arg", "arg_body",
  "arg_part_or_space", "arg_part", "arg_token", "separator", "expression",
  "expression_body", "optional_spaces", "spaces", "spaces_with_eol",
  "not_eol_token", "not_brace_token", "args_token", "not_operator_token",
  "word_token", "any_macro", "ac_macro_without_arg_token",
  "ac_macro_with_arg_token", "end_of_line", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   257,   258,   259,   260,    10,   261,    32,   262,    35,
     263,    40,   264,    41,   265,   123,   266,   125,   267,    91,
     268,    93,   269,    61,   270,    44,   271,    60,   272,    62,
     273,    39,   274,    34,   256,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    92,    92,    92,    93,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,    99,   100,   100,   101,   102,   102,   103,   103,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     113,   114,   114,   115,   116,   116,   117,   117,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   121,   122,   122,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   125,   125,   125,   126,   127,   127,
     127,   128,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   133,   133,   133,
     133,   133,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   135,   135,   136,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   139,   139,   140,   140,   140,   140,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   143,
     143,   143,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   149,   149
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     2,     3,     4,     3,
       1,     1,     1,     2,     2,     3,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     1,
       2,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     2,     2,     2,     1,     2,     1,     2,     2,     2,
       3,     1,     3,     3,     0,     2,     1,     1,     3,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     2,     2,     3,     0,     2,
       2,     3,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       0,     1,     1,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
static const yytype_uint16 yydefact[] =
{
       4,    56,     0,   190,   195,   194,   232,   235,   236,   233,
     234,   237,   241,   242,   238,   239,    64,   240,   264,   150,
     288,   271,   289,   272,   290,   291,   292,   293,   262,   294,
     295,   296,   297,   273,   274,   267,   275,   263,   265,   298,
     276,   277,   278,   300,   279,   280,   281,   268,   282,   283,
     301,   302,   284,   285,   286,   303,   287,   304,   266,   305,
       3,    57,    59,    63,    62,   244,     0,    65,   243,   270,
     269,     1,   192,     5,     0,   191,   162,   174,   132,   163,
     164,   165,   169,   170,   166,   167,   168,    84,   150,   299,
      76,   150,   150,   150,   159,   160,    48,    52,    49,    50,
      51,    54,    53,    55,    71,     0,   157,    81,   152,   161,
     158,   150,    74,   150,    58,   245,   248,   249,   246,   247,
     252,   250,   253,   254,   258,   259,   255,   256,   251,   257,
     261,    66,   260,   197,   196,    60,   307,   306,    84,   229,
     230,   124,    34,   231,    35,    36,    89,   107,   190,    37,
      38,    10,     0,    11,    12,    33,     6,    67,    68,    31,
      86,    87,    30,    32,    69,   193,     0,     0,     0,    78,
      77,    75,    72,    79,   171,   150,   151,     0,    73,    61,
       0,     0,     0,     0,    14,     7,    29,    23,    24,    25,
      26,    27,    28,    13,    17,    22,    20,    19,    21,   176,
     175,   173,   179,   178,   180,   181,   185,   186,   182,   183,
     184,   187,   177,   189,   188,   134,   133,   135,   136,   137,
     128,   131,   139,   138,   141,   140,   145,   146,   142,   143,
     144,   147,   148,   149,   198,   200,   212,   213,   202,   203,
     204,   208,   209,   205,   206,   201,   207,   211,    85,   199,
     210,    70,   172,    82,   155,   154,   153,   156,    80,    83,
     215,   214,   217,   123,   218,   219,   220,   225,   226,   222,
     223,   221,   224,   228,   126,   125,   216,   227,   103,   101,
     102,   105,    95,    96,    97,    88,   104,    98,    99,   100,
      93,    94,    90,    91,    92,   121,   119,   120,   113,   114,
     115,   122,   106,   116,   117,   118,   111,   112,   108,   109,
     110,     9,    43,    44,    45,    46,    47,    15,    42,    40,
      39,    41,    18,     0,     8,    16,   127,   130,   129
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    73,   151,   152,   153,   193,   194,   154,
     317,    94,    60,    61,    62,    63,    64,   156,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   158,
     168,   196,   160,   182,   292,   161,   183,   308,   197,   181,
     233,   323,   106,   167,   107,   176,   256,   108,   109,   175,
     110,   166,    74,    75,   111,   248,   275,   198,    67,   131,
      68,   112,   113,   164
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -288
static const yytype_int16 yypact[] =
{
     -34,   846,    32,    23,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  1086,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,    22,  -288,  -288,  1400,  -288,   926,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,   366,    21,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  1086,  -288,
    -288,  1086,  1086,  1086,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,    -3,  -288,  -288,  -288,  -288,
    -288,  1166,  -288,  1086,   926,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,    29,  -288,
    -288,  -288,     8,  -288,  1324,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  1006,   606,   285,  -288,
    -288,  -288,  -288,  -288,    22,  1476,  1246,     1,  -288,  -288,
     285,   446,   686,   766,  1550,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  1324,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,    27,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  1324,  -288,  -288,  -288,  -288,  -288,  1324,  -288,  -288,
    -288,  -288,  -288,   526,  1324,  1324,  -288,  -288,  -288
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -287,  -188,  -288,
    -288,   -72,  -288,  -288,   -58,  -288,  -288,  -116,   -21,     5,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,   -74,   -73,  -129,
     -98,   -64,  -288,  -288,  -288,  -288,  -288,  -288,   -59,  -288,
    -282,  -288,  -124,  -288,  -132,  -288,  -288,  -131,  -288,  -288,
    -122,  -288,  -102,  -288,     3,  -288,  -276,   -54,  -288,  -288,
     -63,    -1,     2,  -146
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      69,   132,   155,    70,    66,   322,    65,     1,   135,   173,
     159,   136,   137,   258,   169,   162,   138,   170,   171,   172,
     163,   174,   251,    -2,   324,   174,     4,   165,     5,    72,
     325,   133,    71,   134,   259,    72,   185,   212,   177,   178,
     180,   327,   213,   253,   214,   257,   184,   328,     0,     0,
      87,     0,     0,   157,     0,     0,   179,     0,     0,     0,
       0,     0,     0,    69,   114,    69,    70,     0,    70,   130,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   195,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,   231,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,     0,     0,     0,     0,
     290,   306,   318,    69,   249,     0,    70,   250,   277,    65,
     319,   195,   274,   293,   309,   320,   249,   276,   294,   310,
     321,   157,     0,     0,     0,     0,   322,   322,     0,     0,
       0,     0,     0,     0,     0,     0,   232,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   291,   307,     0,     0,     0,     0,    69,     0,     0,
      70,     0,     0,     0,     0,     0,     0,   252,     0,    69,
      69,     0,    70,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   195,
       0,     0,     0,     0,     0,   195,     0,     0,     0,     0,
       0,     0,   195,   195,     0,     0,     0,     0,     0,     0,
     277,     0,     0,     0,     0,     0,     0,     0,     0,   276,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   234,     0,   235,     0,   139,     0,   140,     0,     0,
       0,     0,     0,   236,     0,   237,     0,   238,     0,   143,
       0,   239,     0,   240,     0,   241,     0,   242,     0,     0,
     243,   244,    69,   245,   246,    70,     0,    18,   247,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,   136,
     137,     0,     0,     0,   138,     0,   139,     0,   140,     0,
       0,     0,     0,     0,   141,     0,     0,     0,   142,     0,
     143,     0,   144,     0,   145,     0,   146,     0,   147,     0,
       0,   148,   149,     0,     0,   150,     0,     0,    87,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    88,    29,
      30,    31,    32,    33,    34,    89,    36,    90,    91,    39,
      40,    41,    42,    43,    44,    45,    46,    92,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    93,    59,
     260,     0,   261,     0,   262,     0,   139,     0,   140,     0,
       0,     0,     0,     0,   141,     0,   263,     0,   264,     0,
     143,     0,   265,     0,   266,     0,   267,     0,   268,     0,
       0,   269,   270,     0,   271,   272,     0,     0,    18,   273,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
     260,     0,   261,     0,   262,     0,   139,     0,   140,     0,
       0,     0,     0,     0,   220,     0,   326,     0,   264,     0,
     143,     0,   265,     0,   266,     0,   267,     0,   268,     0,
       0,   269,   270,     0,   271,   272,     0,     0,    18,   273,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
     215,     0,   216,     0,   217,     0,   218,     0,   219,     0,
       0,     0,     0,     0,   220,     0,   221,     0,   222,     0,
     223,     0,   224,     0,   225,     0,   226,     0,   227,     0,
       0,   228,   229,     0,     0,   230,     0,     0,    87,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    88,    29,
      30,    31,    32,    33,    34,    89,    36,    90,    91,    39,
      40,    41,    42,    43,    44,    45,    46,    92,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    93,    59,
     278,     0,   279,     0,   280,     0,   139,     0,   140,     0,
       0,     0,     0,     0,   141,     0,   281,     0,   282,     0,
     143,     0,   283,     0,   284,     0,   285,     0,   286,     0,
       0,   287,   288,     0,     0,   289,     0,     0,    87,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    88,    29,
      30,    31,    32,    33,    34,    89,    36,    90,    91,    39,
      40,    41,    42,    43,    44,    45,    46,    92,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    93,    59,
     295,     0,   296,     0,   297,     0,   139,     0,   140,     0,
       0,     0,     0,     0,   141,     0,     0,     0,   298,     0,
     143,     0,   299,     0,   300,     0,   301,     0,   302,     0,
       0,   303,   304,     0,     0,   305,     0,     0,    87,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    88,    29,
      30,    31,    32,    33,    34,    89,    36,    90,    91,    39,
      40,    41,    42,    43,    44,    45,    46,    92,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    93,    59,
       4,     0,     5,     0,     6,     0,     7,     0,     8,     0,
       0,     0,     0,     0,     9,     0,    10,     0,     0,     0,
      11,     0,     0,     0,     0,     0,    12,     0,    13,     0,
       0,    14,    15,     0,    16,    17,     0,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
     133,     0,   134,     0,     6,     0,     7,     0,     8,     0,
       0,     0,     0,     0,     9,     0,    10,     0,     0,     0,
      11,     0,     0,     0,     0,     0,    12,     0,    13,     0,
       0,    14,    15,     0,    16,    17,     0,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
     199,     0,   200,     0,   138,     0,    77,     0,   201,     0,
       0,     0,     0,     0,    78,     0,     0,     0,   202,     0,
     203,     0,   204,     0,   205,     0,   206,     0,   207,     0,
       0,   208,   209,     0,     0,   210,     0,     0,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    88,    29,
      30,    31,    32,    33,    34,    89,    36,    90,    91,    39,
      40,    41,    42,    43,    44,    45,    46,    92,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    93,    59,
       4,     0,     5,     0,    76,     0,    77,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,    79,     0,
       0,     0,    80,     0,    81,     0,    82,     0,    83,     0,
       0,    84,    85,     0,     0,    86,     0,     0,    87,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    88,    29,
      30,    31,    32,    33,    34,    89,    36,    90,    91,    39,
      40,    41,    42,    43,    44,    45,    46,    92,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    93,    59,
     133,     0,   134,     0,    76,     0,    77,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,    79,     0,
       0,     0,    80,     0,    81,     0,    82,     0,    83,     0,
       0,    84,    85,     0,     0,    86,     0,     0,    87,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    88,    29,
      30,    31,    32,    33,    34,    89,    36,    90,    91,    39,
      40,    41,    42,    43,    44,    45,    46,    92,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    93,    59,
     254,     0,   255,     0,    76,     0,    77,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,    79,     0,
       0,     0,    80,     0,    81,     0,    82,     0,    83,     0,
       0,    84,    85,     0,     0,    86,     0,     0,    87,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    88,    29,
      30,    31,    32,    33,    34,    89,    36,    90,    91,    39,
      40,    41,    42,    43,    44,    45,    46,    92,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    93,    59,
     186,     0,     0,     0,   139,     0,   140,     0,     0,     0,
       0,     0,   141,     0,     0,     0,   187,     0,   143,     0,
     188,     0,   189,     0,   146,     0,   147,     0,     0,   190,
     191,     0,     0,   192,     0,     0,     0,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    88,    29,    30,    31,
      32,    33,    34,    89,    36,    90,    91,    39,    40,    41,
      42,    43,    44,    45,    46,    92,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    93,    59,   115,     0,
     116,     0,   117,     0,     0,     0,     0,     0,   118,     0,
     119,     0,   120,     0,   121,     0,   122,     0,   123,     0,
     124,     0,   125,     0,     0,   126,   127,     0,   128,   129,
       0,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    76,     0,    77,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,    79,     0,
       0,     0,    80,     0,    81,     0,    82,     0,    83,     0,
       0,    84,    85,     0,     0,    86,     0,     0,    87,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    88,    29,
      30,    31,    32,    33,    34,    89,    36,    90,    91,    39,
      40,    41,    42,    43,    44,    45,    46,    92,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    93,    59,
     139,     0,   140,     0,     0,     0,     0,     0,   141,     0,
       0,     0,   311,     0,   143,     0,   312,     0,   313,     0,
     146,     0,   147,     0,     0,   314,   315,     0,     0,   316,
       0,     0,     0,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    88,    29,    30,    31,    32,    33,    34,    89,
      36,    90,    91,    39,    40,    41,    42,    43,    44,    45,
      46,    92,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    93,    59
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-288)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,    64,    74,     1,     1,   193,     1,    41,    66,    12,
      74,     3,     4,    12,    88,    74,     8,    91,    92,    93,
      74,    24,   168,     0,   311,    24,     4,     6,     6,     6,
     317,     4,     0,     6,   180,     6,   152,   166,   111,   113,
     138,   323,   166,   175,   166,   176,   148,   323,    -1,    -1,
      42,    -1,    -1,    74,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    61,    66,    64,    -1,    66,    64,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   166,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,
     182,   183,   184,   114,   168,    -1,   114,   180,   181,   114,
     184,   193,   181,   182,   183,   184,   180,   181,   182,   183,
     184,   152,    -1,    -1,    -1,    -1,   324,   325,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,   183,    -1,    -1,    -1,    -1,   168,    -1,    -1,
     168,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,   180,
     181,    -1,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,
      -1,    -1,    -1,    -1,    -1,   317,    -1,    -1,    -1,    -1,
      -1,    -1,   324,   325,    -1,    -1,    -1,    -1,    -1,    -1,
     323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,    -1,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,    -1,    22,    -1,    24,
      -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,    -1,
      35,    36,   323,    38,    39,   323,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,     3,
       4,    -1,    -1,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       4,    -1,     6,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       4,    -1,     6,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       4,    -1,     6,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       4,    -1,     6,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       4,    -1,     6,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       4,    -1,     6,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       4,    -1,     6,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       4,    -1,     6,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       4,    -1,     6,    -1,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       4,    -1,     6,    -1,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       4,    -1,     6,    -1,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       6,    -1,    -1,    -1,    10,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    22,    -1,    24,    -1,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      20,    -1,    22,    -1,    24,    -1,    26,    -1,    28,    -1,
      30,    -1,    32,    -1,    -1,    35,    36,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    22,    -1,    24,    -1,    26,    -1,    28,    -1,
      30,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    87,    88,     4,     6,     8,    10,    12,    18,
      20,    24,    30,    32,    35,    36,    38,    39,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      98,    99,   100,   101,   102,   105,   140,   144,   146,   147,
     148,     0,     6,    89,   138,   139,     8,    10,    18,    22,
      26,    28,    30,    32,    35,    36,    39,    42,    52,    59,
      61,    62,    71,    82,    97,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   128,   130,   133,   134,
     136,   140,   147,   148,   140,     8,    10,    12,    18,    20,
      22,    24,    26,    28,    30,    32,    35,    36,    38,    39,
     105,   145,   146,     4,     6,   100,     3,     4,     8,    10,
      12,    18,    22,    24,    26,    28,    30,    32,    35,    36,
      39,    90,    91,    92,    95,    97,   103,   104,   115,   117,
     118,   121,   124,   143,   149,     6,   137,   129,   116,   113,
     113,   113,   113,    12,    24,   135,   131,   114,   113,   100,
     116,   125,   119,   122,   138,   103,     6,    22,    26,    28,
      35,    36,    39,    93,    94,    97,   117,   124,   143,     4,
       6,    12,    22,    24,    26,    28,    30,    32,    35,    36,
      39,    97,   115,   128,   136,     4,     6,     8,    10,    12,
      18,    20,    22,    24,    26,    28,    30,    32,    35,    36,
      39,    97,   104,   126,     6,     8,    18,    20,    22,    26,
      28,    30,    32,    35,    36,    38,    39,    43,   141,   143,
     146,   149,   140,   130,     4,     6,   132,   133,    12,   149,
       4,     6,     8,    20,    22,    26,    28,    30,    32,    35,
      36,    38,    39,    43,   124,   142,   143,   146,     4,     6,
       8,    20,    22,    26,    28,    30,    32,    35,    36,    39,
      97,   104,   120,   124,   143,     4,     6,     8,    22,    26,
      28,    30,    32,    35,    36,    39,    97,   104,   123,   124,
     143,    22,    26,    28,    35,    36,    39,    96,    97,   117,
     124,   143,    94,   127,    93,    93,    20,   126,   142
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, AmpAcScanner* scanner)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    AmpAcScanner* scanner;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, AmpAcScanner* scanner)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    AmpAcScanner* scanner;
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, AmpAcScanner* scanner)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, scanner)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    AmpAcScanner* scanner;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, AmpAcScanner* scanner)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, scanner)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    AmpAcScanner* scanner;
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

#define amp_ac_yynerrs yyps->amp_ac_yynerrs
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
yypush_parse (yypstate *yyps, int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, AmpAcScanner* scanner)
#else
int
yypush_parse (yyps, yypushed_char, yypushed_val, yypushed_loc, scanner)
    yypstate *yyps;
    int yypushed_char;
    YYSTYPE const *yypushed_val;
    YYLTYPE *yypushed_loc;
    AmpAcScanner* scanner;
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
#line 204 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_DEFINITION, NULL);
		if ((yyvsp[(2) - (4)])) anjuta_token_set_type ((yyvsp[(2) - (4)]), ANJUTA_TOKEN_NEXT);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (4)]));
        anjuta_token_merge ((yyval), (yyvsp[(2) - (4)]));
        anjuta_token_merge ((yyval), (yyvsp[(3) - (4)]));
        anjuta_token_merge ((yyval), (yyvsp[(4) - (4)]));
        amp_ac_scanner_update_variable (scanner, (yyval));
	}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 213 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_DEFINITION, NULL);
		if ((yyvsp[(2) - (3)])) anjuta_token_set_type ((yyvsp[(2) - (3)]), ANJUTA_TOKEN_NEXT);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyval), (yyvsp[(2) - (3)]));
        anjuta_token_merge ((yyval), (yyvsp[(3) - (3)]));
        amp_ac_scanner_update_variable (scanner, (yyval));
	}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 237 "ac-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_LIST, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 241 "ac-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 302 "ac-parser.y"
    {
		anjuta_token_set_type ((yyvsp[(2) - (2)]), ANJUTA_TOKEN_LAST);
	}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 309 "ac-parser.y"
    {
        anjuta_token_set_type ((yyvsp[(1) - (2)]), ANJUTA_TOKEN_NEXT);
    }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 312 "ac-parser.y"
    {
        anjuta_token_set_type ((yyvsp[(2) - (3)]), ANJUTA_TOKEN_NEXT);
    }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 323 "ac-parser.y"
    {
        anjuta_token_set_type ((yyvsp[(1) - (1)]), ANJUTA_TOKEN_OPERATOR);
    }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 329 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 333 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 348 "ac-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_COMMENT, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (3)]));
		anjuta_token_merge ((yyval), (yyvsp[(2) - (3)]));
		anjuta_token_merge ((yyval), (yyvsp[(3) - (3)]));
	}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 357 "ac-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_LIST, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (2)]));
		anjuta_token_merge ((yyval), (yyvsp[(2) - (2)]));
		amp_ac_scanner_include (scanner, (yyval));
	}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 367 "ac-parser.y"
    {
		(yyval) = anjuta_token_new_static (AC_TOKEN_PKG_CHECK_MODULES, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (2)]));
		anjuta_token_merge ((yyval), (yyvsp[(2) - (2)]));
        amp_ac_scanner_load_module (scanner, (yyvsp[(2) - (2)]));
    }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 381 "ac-parser.y"
    {
		(yyval) = anjuta_token_new_static (amp_ac_autoconf_macro ((yyvsp[(1) - (2)])), NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (2)]));
		anjuta_token_merge ((yyval), (yyvsp[(2) - (2)]));
        amp_ac_scanner_load_properties (scanner, (yyval), (yyvsp[(2) - (2)]));
	}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 390 "ac-parser.y"
    {
		anjuta_token_set_type ((yyvsp[(1) - (1)]), amp_ac_autoconf_macro ((yyvsp[(1) - (1)])));
        amp_ac_scanner_load_properties (scanner, (yyval), NULL);
	}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 396 "ac-parser.y"
    {
		(yyval) = anjuta_token_new_static (AC_TOKEN_AC_SUBST, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (2)]));
		anjuta_token_merge ((yyval), (yyvsp[(2) - (2)]));
        amp_ac_scanner_subst_variable (scanner, (yyvsp[(2) - (2)]));
	}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 405 "ac-parser.y"
    {
        anjuta_token_set_type ((yyvsp[(1) - (1)]), AC_TOKEN_AC_OUTPUT);
    }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 411 "ac-parser.y"
    {
		(yyval) = anjuta_token_new_static (AC_TOKEN_OBSOLETE_AC_OUTPUT, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (2)]));
		anjuta_token_merge ((yyval), (yyvsp[(2) - (2)]));
        amp_ac_scanner_load_config (scanner, (yyvsp[(2) - (2)]));
    }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 420 "ac-parser.y"
    {
		(yyval) = anjuta_token_new_static (AC_TOKEN_AC_CONFIG_FILES, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (2)]));
		anjuta_token_merge ((yyval), (yyvsp[(2) - (2)]));
        amp_ac_scanner_load_config (scanner, (yyvsp[(2) - (2)]));
    }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 432 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_LAST, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(2) - (2)]));
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyval));
        (yyval) = (yyvsp[(1) - (2)]);
    }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 438 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_LAST, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(3) - (3)]));
		anjuta_token_merge ((yyvsp[(2) - (3)]), (yyval));
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_LIST, NULL);
        anjuta_token_set_type ((yyvsp[(1) - (3)]), ANJUTA_TOKEN_START);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (3)]));
		anjuta_token_merge_children ((yyval), (yyvsp[(2) - (3)]));
    }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 450 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_LIST, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
        //fprintf(stdout, "arg_list_body arg\n");
        //anjuta_token_dump ($1);
    }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 456 "ac-parser.y"
    {
        //fprintf(stdout, "arg_list_body body\n");
        //anjuta_token_dump ($1);
        //fprintf(stdout, "arg_list_body separator\n");
        //anjuta_token_dump ($2);
        //fprintf(stdout, "arg_list_body arg\n");
        //anjuta_token_dump ($3);
        anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));
        anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
        //fprintf(stdout, "arg_list_body merge\n");
        //anjuta_token_dump ($1);
    }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 471 "ac-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_COMMENT, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (3)]));
		anjuta_token_merge ((yyval), (yyvsp[(2) - (3)]));
		anjuta_token_merge ((yyval), (yyvsp[(3) - (3)]));
	}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 480 "ac-parser.y"
    {
    	(yyval) = NULL;
    }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 483 "ac-parser.y"
    {
    	(yyval) = (yyvsp[(2) - (2)]);
    }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 494 "ac-parser.y"
    {
        anjuta_token_set_type ((yyvsp[(1) - (3)]), ANJUTA_TOKEN_OPEN_QUOTE);
        anjuta_token_set_type ((yyvsp[(3) - (3)]), ANJUTA_TOKEN_CLOSE_QUOTE);
        (yyval) = anjuta_token_merge_previous ((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 503 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_STRING, NULL);
    }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 506 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 530 "ac-parser.y"
    {
        anjuta_token_set_type ((yyvsp[(1) - (3)]), ANJUTA_TOKEN_OPEN_QUOTE);
        anjuta_token_set_type ((yyvsp[(3) - (3)]), ANJUTA_TOKEN_CLOSE_QUOTE);
        (yyval) = anjuta_token_merge_previous ((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 539 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_STRING, NULL);
    }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 542 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 565 "ac-parser.y"
    {
        anjuta_token_set_type ((yyvsp[(1) - (3)]), ANJUTA_TOKEN_OPEN_QUOTE);
        anjuta_token_set_type ((yyvsp[(3) - (3)]), ANJUTA_TOKEN_CLOSE_QUOTE);
        (yyval) = anjuta_token_merge_previous ((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
    }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 574 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_STRING, NULL);
    }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 577 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 580 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 586 "ac-parser.y"
    {
        anjuta_token_set_type ((yyvsp[(1) - (3)]), ANJUTA_TOKEN_OPEN_QUOTE);
        anjuta_token_set_type ((yyvsp[(3) - (3)]), ANJUTA_TOKEN_CLOSE_QUOTE);
        (yyval) = anjuta_token_merge_previous ((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
    }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 595 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_STRING, NULL);
    }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 598 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 601 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 607 "ac-parser.y"
    {
        anjuta_token_set_type ((yyvsp[(1) - (3)]), ANJUTA_TOKEN_OPEN_QUOTE);
        anjuta_token_set_type ((yyvsp[(3) - (3)]), ANJUTA_TOKEN_CLOSE_QUOTE);
        (yyval) = anjuta_token_merge_previous ((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
    }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 616 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_STRING, NULL);
    }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 619 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 622 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 625 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 628 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 631 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 634 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 637 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 640 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 643 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 646 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 649 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 652 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 655 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 658 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 663 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 672 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_ITEM, NULL);
    }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 675 "ac-parser.y"
    {
        //fprintf(stdout, "arg part\n");
        //anjuta_token_dump ($1);
        //fprintf(stdout, "arg body\n");
        //anjuta_token_dump ($2);
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_ITEM, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (2)]));
	anjuta_token_merge_children ((yyval), (yyvsp[(2) - (2)]));
        //fprintf(stdout, "arg merge\n");
        //anjuta_token_dump ($1);
    }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 689 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_ITEM, NULL);
    }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 692 "ac-parser.y"
    {
        (yyval) = anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 724 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NEXT, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 728 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NEXT, NULL);
        //fprintf(stdout, "separator spaces\n");
        //anjuta_token_dump ($2);
        //fprintf(stdout, "separator comma\n");
        //anjuta_token_dump ($1);
        //fprintf(stdout, "separator next\n");
        //anjuta_token_dump ($$);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (2)]));
        anjuta_token_merge_children ((yyval), (yyvsp[(2) - (2)]));
        //fprintf(stdout, "separator merge\n");
        //anjuta_token_dump ($$);
    }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 744 "ac-parser.y"
    {
        (yyval) = anjuta_token_merge_previous ((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
    }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 751 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_STRING, NULL);
    }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 754 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 757 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 761 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 764 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 767 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 770 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 773 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 776 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 779 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 782 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 785 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 789 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 792 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
    }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 798 "ac-parser.y"
    {
		(yyval) = NULL;
	}
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 805 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_SPACE, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 809 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 815 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_SPACE, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 819 "ac-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_SPACE, NULL);
        anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
    }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 823 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 826 "ac-parser.y"
    {
        anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 973 "ac-parser.y"
    {
		anjuta_token_set_type ((yyvsp[(1) - (1)]), ANJUTA_TOKEN_EOL);
	}
    break;


/* Line 1792 of yacc.c  */
#line 3178 "ac-parser.c"
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
#line 979 "ac-parser.y"


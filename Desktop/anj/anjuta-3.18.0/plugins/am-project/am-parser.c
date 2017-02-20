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
#define yypush_parse    amp_am_yypush_parse
#define yypstate_new    amp_am_yypstate_new
#define yypstate_delete amp_am_yypstate_delete
#define yypstate        amp_am_yypstate
#define yylex           amp_am_yylex
#define yyerror         amp_am_yyerror
#define yylval          amp_am_yylval
#define yychar          amp_am_yychar
#define yydebug         amp_am_yydebug
#define yynerrs         amp_am_yynerrs
#define yylloc          amp_am_yylloc

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 19 "am-parser.y"


#include "am-scanner.h"
#include "am-parser.h"

#include <stdlib.h>

#define YYDEBUG 1

/* Token location is found directly from token value, there is no need to
 * maintain a separate location variable */
#define YYLLOC_DEFAULT(Current, Rhs, N)	((Current) = YYRHSLOC(Rhs, (N) ? 1 : 0))
/* Line 371 of yacc.c  */
#line 115 "am-parser.y"


//amp_am_yydebug = 1;

static gint
amp_am_automake_variable (AnjutaToken *token)
{
    switch (anjuta_token_get_type (anjuta_token_last (token)))
    {
    case SUBDIRS:               return AM_TOKEN_SUBDIRS;
    case DIST_SUBDIRS:          return AM_TOKEN_DIST_SUBDIRS;
    case _DATA:                 return AM_TOKEN__DATA;
    case _HEADERS:              return AM_TOKEN__HEADERS;
    case _LIBRARIES:            return AM_TOKEN__LIBRARIES;
    case _LISP:                 return AM_TOKEN__LISP;
    case _LTLIBRARIES:          return AM_TOKEN__LTLIBRARIES;
    case _MANS:                 return AM_TOKEN__MANS;
    case _PROGRAMS:             return AM_TOKEN__PROGRAMS;
    case _PYTHON:               return AM_TOKEN__PYTHON;
    case _JAVA:                 return AM_TOKEN__JAVA;
    case _SCRIPTS:              return AM_TOKEN__SCRIPTS;
    case _SOURCES:              return AM_TOKEN__SOURCES;
    case _TEXINFOS:             return AM_TOKEN__TEXINFOS;
    case _DIR:                  return AM_TOKEN_DIR;
    case _LDFLAGS:              return AM_TOKEN__LDFLAGS;
    case _CPPFLAGS:             return AM_TOKEN__CPPFLAGS;
    case _CFLAGS:               return AM_TOKEN__CFLAGS;
    case _CXXFLAGS:             return AM_TOKEN__CXXFLAGS;
    case _JAVACFLAGS:           return AM_TOKEN__JAVACFLAGS;
    case _VALAFLAGS:           return AM_TOKEN__VALAFLAGS;
    case _FCFLAGS:              return AM_TOKEN__FCFLAGS;
    case _OBJCFLAGS:            return AM_TOKEN__OBJCFLAGS;
    case _LFLAGS:               return AM_TOKEN__LFLAGS;
    case _YFLAGS:               return AM_TOKEN__YFLAGS;
    case TARGET_LDFLAGS:        return AM_TOKEN_TARGET_LDFLAGS;
    case TARGET_CPPFLAGS:       return AM_TOKEN_TARGET_CPPFLAGS;
    case TARGET_CFLAGS:         return AM_TOKEN_TARGET_CFLAGS;
    case TARGET_CXXFLAGS:       return AM_TOKEN_TARGET_CXXFLAGS;
    case TARGET_JAVACFLAGS:     return AM_TOKEN_TARGET_JAVACFLAGS;
    case TARGET_VALAFLAGS:     return AM_TOKEN_TARGET_VALAFLAGS;
    case TARGET_FCFLAGS:        return AM_TOKEN_TARGET_FCFLAGS;
    case TARGET_OBJCFLAGS:      return AM_TOKEN_TARGET_OBJCFLAGS;
    case TARGET_LFLAGS:         return AM_TOKEN_TARGET_LFLAGS;
    case TARGET_YFLAGS:         return AM_TOKEN_TARGET_YFLAGS;
    case TARGET_DEPENDENCIES:   return AM_TOKEN_TARGET_DEPENDENCIES;
    case TARGET_LIBADD:         return AM_TOKEN_TARGET_LIBADD;
    case TARGET_LDADD:  		 return AM_TOKEN_TARGET_LDADD;

    default: return ANJUTA_TOKEN_NAME;
    }
}


/* Line 371 of yacc.c  */
#line 147 "am-parser.c"

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
   by #include "am-parser.h".  */
#ifndef YY_AMP_AM_YY_AM_PARSER_H_INCLUDED
# define YY_AMP_AM_YY_AM_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int amp_am_yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END_OF_FILE = 258,
     END_OF_LINE = 259,
     SPACE = 260,
     TAB = 261,
     COMMENT = 262,
     MACRO = 263,
     VARIABLE = 264,
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
     AM_VARIABLE = 275,
     INCLUDE = 276,
     SUBDIRS = 277,
     DIST_SUBDIRS = 278,
     _DATA = 279,
     _HEADERS = 280,
     _LIBRARIES = 281,
     _LISP = 282,
     _LTLIBRARIES = 283,
     _MANS = 284,
     _PROGRAMS = 285,
     _PYTHON = 286,
     _JAVA = 287,
     _SCRIPTS = 288,
     _SOURCES = 289,
     _TEXINFOS = 290,
     _DIR = 291,
     _LDFLAGS = 292,
     _CPPFLAGS = 293,
     _CFLAGS = 294,
     _CXXFLAGS = 295,
     _JAVACFLAGS = 296,
     _VALAFLAGS = 297,
     _FCFLAGS = 298,
     _OBJCFLAGS = 299,
     _LFLAGS = 300,
     _YFLAGS = 301,
     TARGET_LDFLAGS = 302,
     TARGET_CPPFLAGS = 303,
     TARGET_CFLAGS = 304,
     TARGET_CXXFLAGS = 305,
     TARGET_JAVACFLAGS = 306,
     TARGET_VALAFLAGS = 307,
     TARGET_FCFLAGS = 308,
     TARGET_OBJCFLAGS = 309,
     TARGET_LFLAGS = 310,
     TARGET_YFLAGS = 311,
     TARGET_DEPENDENCIES = 312,
     TARGET_LIBADD = 313,
     TARGET_LDADD = 314
   };
#endif
/* Tokens.  */
#define END_OF_FILE 258
#define END_OF_LINE 259
#define SPACE 260
#define TAB 261
#define COMMENT 262
#define MACRO 263
#define VARIABLE 264
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
#define AM_VARIABLE 275
#define INCLUDE 276
#define SUBDIRS 277
#define DIST_SUBDIRS 278
#define _DATA 279
#define _HEADERS 280
#define _LIBRARIES 281
#define _LISP 282
#define _LTLIBRARIES 283
#define _MANS 284
#define _PROGRAMS 285
#define _PYTHON 286
#define _JAVA 287
#define _SCRIPTS 288
#define _SOURCES 289
#define _TEXINFOS 290
#define _DIR 291
#define _LDFLAGS 292
#define _CPPFLAGS 293
#define _CFLAGS 294
#define _CXXFLAGS 295
#define _JAVACFLAGS 296
#define _VALAFLAGS 297
#define _FCFLAGS 298
#define _OBJCFLAGS 299
#define _LFLAGS 300
#define _YFLAGS 301
#define TARGET_LDFLAGS 302
#define TARGET_CPPFLAGS 303
#define TARGET_CFLAGS 304
#define TARGET_CXXFLAGS 305
#define TARGET_JAVACFLAGS 306
#define TARGET_VALAFLAGS 307
#define TARGET_FCFLAGS 308
#define TARGET_OBJCFLAGS 309
#define TARGET_LFLAGS 310
#define TARGET_YFLAGS 311
#define TARGET_DEPENDENCIES 312
#define TARGET_LIBADD 313
#define TARGET_LDADD 314



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

typedef struct amp_am_yypstate amp_am_yypstate;

#if defined __STDC__ || defined __cplusplus
int amp_am_yypush_parse (amp_am_yypstate *ps, int pushed_char, YYSTYPE const *pushed_val, YYLTYPE *pushed_loc, AmpAmScanner* scanner);
#else
int amp_am_yypush_parse ();
#endif

#if defined __STDC__ || defined __cplusplus
amp_am_yypstate * amp_am_yypstate_new (void);
#else
amp_am_yypstate * amp_am_yypstate_new ();
#endif
#if defined __STDC__ || defined __cplusplus
void amp_am_yypstate_delete (amp_am_yypstate *ps);
#else
void amp_am_yypstate_delete ();
#endif

#endif /* !YY_AMP_AM_YY_AM_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 353 "am-parser.c"

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   769

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNRULES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     8,
       5,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    10,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    14,    19,
       2,    21,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    17,     2,     2,     2,     2,     2,
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
       6,     7,     9,    11,    12,    13,    15,    16,    18,    20,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    16,    19,    22,
      25,    28,    34,    39,    43,    47,    50,    53,    58,    63,
      67,    68,    73,    78,    80,    82,    84,    86,    87,    89,
      93,    95,    99,   103,   105,   109,   113,   115,   119,   121,
     125,   126,   129,   130,   132,   134,   137,   139,   141,   144,
     147,   149,   151,   153,   156,   159,   162,   165,   168,   171,
     174,   177,   180,   183,   185,   187,   189,   191,   193,   195,
     198,   201,   204,   207,   210,   212,   214,   216,   219,   222,
     225,   227,   229,   231,   233,   236,   239,   242,   244,   246,
     248,   250,   252,   254,   256,   258,   260,   262,   264,   266,
     268,   270,   272,   274,   276,   278,   280,   282,   284,   286,
     288,   290,   292,   294,   296,   298,   300,   302,   304,   306,
     308,   310,   312,   314,   316,   318,   320,   322,   324,   326,
     328,   330,   332,   334,   336,   338,   340,   342,   344,   346,
     348,   350,   352,   354,   356,   358,   360,   362,   364,   366,
     368,   370,   372,   374,   376,   378,   380,   382,   384,   386,
     388,   390,   392,   394,   396,   398,   400
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,    69,    -1,    68,    69,    -1,    77,    -1,
      86,    77,    -1,    72,    77,    -1,    70,    77,    -1,    71,
      77,    -1,    76,    77,    -1,    73,    75,    -1,    85,    87,
      85,   101,    82,    -1,    85,    87,    85,   101,    -1,    85,
     108,    82,    -1,    80,   101,    82,    -1,    80,   101,    -1,
      74,    77,    -1,    74,    18,    84,     4,    -1,    74,    18,
      84,     3,    -1,    80,   102,    78,    -1,    -1,    75,     7,
      84,     4,    -1,    75,     7,    84,     3,    -1,    80,    -1,
       4,    -1,     3,    -1,     9,    -1,    -1,    86,    -1,    85,
      79,    85,    -1,    91,    -1,    79,    86,    91,    -1,    85,
      81,    85,    -1,    88,    -1,    81,    86,    89,    -1,    87,
      86,    89,    -1,    86,    -1,    85,    83,    85,    -1,    90,
      -1,    83,    86,    90,    -1,    -1,    84,    96,    -1,    -1,
      86,    -1,    99,    -1,    86,    99,    -1,   106,    -1,   107,
      -1,    88,   107,    -1,    87,   107,    -1,    98,    -1,    94,
      -1,    93,    -1,    88,    98,    -1,    88,   106,    -1,    88,
     108,    -1,    88,    93,    -1,    88,    94,    -1,    87,    98,
      -1,    87,   106,    -1,    87,   108,    -1,    87,    93,    -1,
      87,    94,    -1,    98,    -1,    94,    -1,    93,    -1,   106,
      -1,   107,    -1,   108,    -1,    89,    98,    -1,    89,   106,
      -1,    89,   108,    -1,    89,    93,    -1,    89,    94,    -1,
      97,    -1,    93,    -1,    94,    -1,    90,    97,    -1,    90,
      93,    -1,    90,    94,    -1,    92,    -1,    95,    -1,    93,
      -1,    94,    -1,    92,    95,    -1,    92,    93,    -1,    92,
      94,    -1,    12,    -1,    11,    -1,   104,    -1,   106,    -1,
     107,    -1,   101,    -1,   102,    -1,   104,    -1,   105,    -1,
     106,    -1,   107,    -1,   101,    -1,   102,    -1,   103,    -1,
     108,    -1,    99,    -1,   100,    -1,   104,    -1,   101,    -1,
     102,    -1,   103,    -1,   108,    -1,   106,    -1,   107,    -1,
     104,    -1,   103,    -1,     6,    -1,     7,    -1,     9,    -1,
      20,    -1,    22,    -1,    23,    -1,    24,    -1,    13,    -1,
      15,    -1,    18,    -1,    26,    -1,    25,    -1,    16,    -1,
      12,    -1,    11,    -1,    29,    -1,    30,    -1,    44,    -1,
      45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1,    51,    -1,    52,    -1,    53,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,
      37,    -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,
      42,    -1,    43,    -1,    54,    -1,    55,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
      28,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   173,   173,   174,   178,   179,   180,   181,   182,   183,
     184,   188,   197,   210,   218,   226,   240,   241,   242,   246,
     249,   251,   252,   256,   263,   267,   270,   281,   283,   284,
     288,   289,   293,   300,   304,   308,   315,   320,   329,   333,
     342,   344,   351,   354,   358,   366,   375,   379,   383,   386,
     392,   396,   400,   404,   407,   410,   413,   416,   419,   422,
     425,   428,   431,   437,   441,   445,   449,   453,   457,   461,
     464,   467,   470,   473,   479,   483,   487,   491,   494,   497,
     503,   507,   508,   509,   510,   511,   512,   516,   522,   536,
     537,   538,   539,   540,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   557,   558,   559,   560,   561,   562,
     563,   567,   568,   572,   573,   577,   581,   582,   583,   584,
     588,   589,   593,   605,   606,   607,   611,   612,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   653,   654,   655,   656,   660
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END_OF_FILE", "END_OF_LINE", "'\\n'",
  "SPACE", "TAB", "'\\t'", "COMMENT", "'#'", "MACRO", "VARIABLE", "COLON",
  "':'", "\"::\"", "ORDER", "'|'", "SEMI_COLON", "';'", "EQUAL", "'='",
  "\":=\"", "\"?=\"", "\"+=\"", "CHARACTER", "NAME", "AM_VARIABLE",
  "INCLUDE", "SUBDIRS", "DIST_SUBDIRS", "_DATA", "_HEADERS", "_LIBRARIES",
  "_LISP", "_LTLIBRARIES", "_MANS", "_PROGRAMS", "_PYTHON", "_JAVA",
  "_SCRIPTS", "_SOURCES", "_TEXINFOS", "_DIR", "_LDFLAGS", "_CPPFLAGS",
  "_CFLAGS", "_CXXFLAGS", "_JAVACFLAGS", "_VALAFLAGS", "_FCFLAGS",
  "_OBJCFLAGS", "_LFLAGS", "_YFLAGS", "TARGET_LDFLAGS", "TARGET_CPPFLAGS",
  "TARGET_CFLAGS", "TARGET_CXXFLAGS", "TARGET_JAVACFLAGS",
  "TARGET_VALAFLAGS", "TARGET_FCFLAGS", "TARGET_OBJCFLAGS",
  "TARGET_LFLAGS", "TARGET_YFLAGS", "TARGET_DEPENDENCIES", "TARGET_LIBADD",
  "TARGET_LDADD", "$accept", "file", "statement", "am_variable", "include",
  "definition", "rule", "depend_list", "command_list", "line",
  "end_of_line", "prerequisite_list", "prerequisite_list_body",
  "head_list", "head_list_body", "value_list", "value_list_body",
  "command_line", "optional_space", "space", "automake_head", "head",
  "next_head", "value", "prerequisite", "name_prerequisite", "variable",
  "ac_variable", "prerequisite_token", "command_token", "value_token",
  "head_token", "space_token", "comment_token", "equal_token",
  "rule_token", "depend_token", "name_token", "variable_token",
  "automake_token", "target_automake_token", "include_token", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,    10,   260,   261,     9,   262,
      35,   263,   264,   265,    58,   266,   267,   124,   268,    59,
     269,    61,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    71,    72,    72,    73,    73,    73,    74,
      75,    75,    75,    76,    77,    77,    77,    78,    78,    78,
      79,    79,    80,    81,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    90,    90,
      91,    92,    92,    92,    92,    92,    92,    93,    94,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    98,    98,    99,    99,   100,   101,   101,   101,   101,
     102,   102,   103,   104,   104,   104,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       2,     5,     4,     3,     3,     2,     2,     4,     4,     3,
       0,     4,     4,     1,     1,     1,     1,     0,     1,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       0,     2,     0,     1,     1,     2,     1,     1,     2,     2,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      42,    25,    24,   113,   114,    26,    42,     2,     0,     0,
       0,    20,     0,     0,     4,    23,     0,    43,    44,     1,
       3,     7,     8,     6,    10,    40,    16,     9,   120,   121,
     116,   117,   118,   119,    42,    42,    88,    87,   125,   122,
     124,   123,   166,   128,   129,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,    42,    42,    33,    52,    51,    50,   112,   111,    46,
      47,    42,     5,    45,    40,     0,    14,     0,    43,    19,
       0,    43,    32,    43,     0,    43,    61,    62,    58,    59,
      49,    60,    56,    57,    53,    54,    48,    55,    13,     0,
      18,    17,   115,   127,   126,    41,   102,   103,    98,    99,
     100,    94,    95,    96,    97,   101,    42,    38,    75,    76,
      74,   105,   106,   107,   104,   109,   110,   108,    42,    30,
      80,    82,    83,    81,    92,    93,    89,    90,    91,    34,
      65,    64,    63,    66,    67,    68,    42,    35,    22,    21,
      37,    43,    78,    79,    77,    29,    43,    85,    86,    84,
      72,    73,    69,    70,    71,    11,    39,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    11,    12,    24,    13,
      14,    99,   148,    15,    81,    96,   136,    95,    97,    98,
      82,    83,   159,   137,   149,   150,   138,   139,   153,   125,
     140,   162,    18,   127,   141,   142,    87,    88,   132,   145,
     146,   147
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -158
static const yytype_int16 yypact[] =
{
     204,  -158,  -158,  -158,  -158,  -158,   108,  -158,    19,    19,
      19,  -158,    36,    19,  -158,    37,   703,   204,  -158,  -158,
    -158,  -158,  -158,  -158,    -2,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,   247,     9,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,    18,   535,   703,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,    18,  -158,  -158,  -158,   288,  -158,   591,   267,  -158,
     647,    29,  -158,   535,   192,   535,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,   352,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,    18,   591,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,    18,  -158,
     647,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,   216,
    -158,  -158,  -158,  -158,  -158,  -158,   274,   216,  -158,  -158,
    -158,   413,  -158,  -158,  -158,  -158,   474,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,   591,  -158
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,     1,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
     188,  -158,  -158,  -158,  -158,   -88,  -158,   -85,    20,   157,
    -158,  -158,   -94,  -154,  -157,  -158,   -16,   -12,  -129,  -158,
    -135,    -6,    47,  -158,   -14,    -1,   -89,    72,  -158,    27,
      76,    21
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -37
static const yytype_int16 yytable[] =
{
      84,    34,   174,   118,    85,    94,   130,    20,   143,   119,
      86,   167,   -27,   -27,    35,     3,     4,   186,   -27,   187,
      16,   179,     1,     2,     3,     4,    16,   -27,     5,     0,
     130,     0,   -28,   -28,     0,     3,     4,    91,   -28,     1,
       2,     0,     0,    89,     0,     5,     0,   -28,   143,     0,
      28,   174,    29,     0,    25,   100,     0,    30,     0,    31,
      32,    33,     0,     0,    93,     0,   106,   112,     0,     0,
     107,   113,     0,     0,     0,     0,   108,   114,   185,     0,
       0,   128,   143,     0,   151,     0,   154,   160,   152,   160,
     166,   161,    90,   161,   129,     0,     0,   143,     0,   155,
       0,   102,   104,   111,   117,   128,     0,     0,    19,   109,
     115,     1,     2,     0,     3,     4,   135,     5,   129,     0,
       0,   172,   133,     0,   165,   173,   165,   157,     0,     0,
     163,     0,   163,     0,   177,     0,   154,     0,   178,     0,
     135,     0,   126,   180,     0,    93,   133,   181,    93,   155,
      93,   180,    93,   182,     0,   181,   170,    17,   110,   116,
     151,   182,   154,    17,   152,     0,   126,   131,   175,   144,
     172,   134,   156,     0,   173,   155,   158,   157,     0,   164,
     184,   164,     0,     0,     0,     0,   183,     0,   184,     0,
       0,   131,   101,     0,   183,   134,    21,    22,    23,     0,
      26,    27,     0,   157,     0,    92,     0,     1,     2,   144,
       3,     4,    30,     5,    31,    32,    33,     0,    93,     0,
       0,     0,   156,    93,     0,     0,   158,    36,    37,     0,
       0,     0,    38,     0,    39,     0,     0,     0,   103,   105,
       0,    40,    41,   144,    42,    43,    44,     0,   156,     0,
     -15,   -15,   158,     3,     4,     0,   -15,     0,   144,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
     -36,   -36,     0,     3,     4,     0,   -36,   -12,   -12,     0,
       3,     4,     0,   -12,     0,     0,     0,     0,     0,     0,
       0,   120,   121,   171,     3,     4,     0,   122,     0,   123,
     124,    28,     0,    29,    38,   176,    39,     0,    30,     0,
      31,    32,    33,    40,    41,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   168,   169,     0,     3,     4,
       0,   122,     0,   123,   124,    28,     0,    29,    38,     0,
      39,     0,    30,     0,    31,    32,    33,    40,    41,     0,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     3,
       4,     0,     0,     0,    36,    37,    28,     0,    29,    38,
       0,    39,     0,    30,     0,    31,    32,    33,    40,    41,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       3,     4,     0,     0,     0,    36,    37,    28,     0,    29,
      38,     0,     0,     0,    30,     0,    31,    32,    33,    40,
      41,     0,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,     3,     4,     0,     0,     0,    36,    37,     0,     0,
       0,    38,     0,    39,     0,     0,     0,     0,     0,     0,
      40,    41,     0,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    36,    37,    28,     0,    29,    38,     0,    39,
       0,    30,     0,    31,    32,    33,    40,    41,     0,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    36,    37,
      28,     0,    29,    38,     0,     0,     0,    30,     0,    31,
      32,    33,    40,    41,     0,     0,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    36,    37,     0,     0,     0,    38,
       0,    39,     0,     0,     0,     0,     0,     0,    40,    41,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-158)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      16,    15,   137,    91,    16,     7,    95,     6,    97,    94,
      16,   105,     3,     4,    15,     6,     7,   171,     9,   176,
       0,   150,     3,     4,     6,     7,     6,    18,     9,    -1,
     119,    -1,     3,     4,    -1,     6,     7,    16,     9,     3,
       4,    -1,    -1,    16,    -1,     9,    -1,    18,   137,    -1,
      13,   186,    15,    -1,    18,    35,    -1,    20,    -1,    22,
      23,    24,    -1,    -1,    17,    -1,    82,    83,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    82,    83,   166,    -1,
      -1,    95,   171,    -1,   100,    -1,   100,   103,   100,   105,
     104,   103,    16,   105,    95,    -1,    -1,   186,    -1,   100,
      -1,    81,    82,    82,    83,   119,    -1,    -1,     0,    82,
      83,     3,     4,    -1,     6,     7,    95,     9,   119,    -1,
      -1,   137,    95,    -1,   103,   137,   105,   100,    -1,    -1,
     103,    -1,   105,    -1,   150,    -1,   150,    -1,   150,    -1,
     119,    -1,    95,   159,    -1,    98,   119,   159,   101,   150,
     103,   167,   105,   159,    -1,   167,   136,     0,    82,    83,
     176,   167,   176,     6,   176,    -1,   119,    95,   148,    97,
     186,    95,   100,    -1,   186,   176,   100,   150,    -1,   103,
     159,   105,    -1,    -1,    -1,    -1,   159,    -1,   167,    -1,
      -1,   119,    35,    -1,   167,   119,     8,     9,    10,    -1,
      12,    13,    -1,   176,    -1,    17,    -1,     3,     4,   137,
       6,     7,    20,     9,    22,    23,    24,    -1,   171,    -1,
      -1,    -1,   150,   176,    -1,    -1,   150,    11,    12,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    81,    82,
      -1,    25,    26,   171,    28,    29,    30,    -1,   176,    -1,
       3,     4,   176,     6,     7,    -1,     9,    -1,   186,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       3,     4,    -1,     6,     7,    -1,     9,     3,     4,    -1,
       6,     7,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,   136,     6,     7,    -1,     9,    -1,    11,
      12,    13,    -1,    15,    16,   148,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     3,     4,    -1,     6,     7,
      -1,     9,    -1,    11,    12,    13,    -1,    15,    16,    -1,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     6,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       6,     7,    -1,    -1,    -1,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    11,    12,    13,    -1,    15,    16,    -1,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    22,
      23,    24,    25,    26,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    11,    12,    -1,    -1,    -1,    16,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     9,    68,    69,    70,    71,
      72,    73,    74,    76,    77,    80,    85,    86,    99,     0,
      69,    77,    77,    77,    75,    18,    77,    77,    13,    15,
      20,    22,    23,    24,   101,   102,    11,    12,    16,    18,
      25,    26,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    81,    87,    88,    93,    94,    98,   103,   104,   106,
     107,   108,    77,    99,     7,    84,    82,    85,    86,    78,
      85,    86,    85,    86,    85,    86,    93,    94,    98,   106,
     107,   108,    93,    94,    98,   106,   107,   108,    82,    84,
       3,     4,     9,    11,    12,    96,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    83,    90,    93,    94,
      97,   101,   102,   103,   104,   106,   107,   108,    79,    91,
      92,    93,    94,    95,   101,   102,   104,   106,   107,    89,
      93,    94,    98,   106,   107,   108,   101,    89,     3,     4,
      85,    86,    93,    94,    97,    85,    86,    93,    94,    95,
      93,    94,    98,   106,   108,    82,    90,    91
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, AmpAmScanner* scanner)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    AmpAmScanner* scanner;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, AmpAmScanner* scanner)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    AmpAmScanner* scanner;
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, AmpAmScanner* scanner)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, scanner)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    AmpAmScanner* scanner;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, AmpAmScanner* scanner)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, scanner)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    AmpAmScanner* scanner;
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

#define amp_am_yynerrs yyps->amp_am_yynerrs
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
yypush_parse (yypstate *yyps, int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, AmpAmScanner* scanner)
#else
int
yypush_parse (yyps, yypushed_char, yypushed_val, yypushed_loc, scanner)
    yypstate *yyps;
    int yypushed_char;
    YYSTYPE const *yypushed_val;
    YYLTYPE *yypushed_loc;
    AmpAmScanner* scanner;
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
        case 11:
/* Line 1792 of yacc.c  */
#line 188 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (amp_am_automake_variable ((yyvsp[(2) - (5)])), NULL);
		if ((yyvsp[(1) - (5)]) != NULL) anjuta_token_set_type ((yyvsp[(1) - (5)]), ANJUTA_TOKEN_START);
		anjuta_token_merge ((yyval), (yyvsp[(2) - (5)]));
		if ((yyvsp[(3) - (5)]) != NULL) anjuta_token_set_type ((yyvsp[(3) - (5)]), ANJUTA_TOKEN_NEXT);
		anjuta_token_merge ((yyval), (yyvsp[(4) - (5)]));
		anjuta_token_merge ((yyval), (yyvsp[(5) - (5)]));
		amp_am_scanner_set_am_variable (scanner, (yyval));
	}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 198 "am-parser.y"
    {
		AnjutaToken *list;
		list = anjuta_token_new_static (ANJUTA_TOKEN_LIST, NULL);
		anjuta_token_insert_after ((yyvsp[(4) - (4)]), list);
		(yyval) = anjuta_token_new_static (amp_am_automake_variable ((yyvsp[(2) - (4)])), NULL);
		anjuta_token_merge ((yyval), (yyvsp[(2) - (4)]));
		anjuta_token_merge ((yyval), list);
		amp_am_scanner_set_am_variable (scanner, (yyval));
	}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 210 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_LIST, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(2) - (3)]));
		anjuta_token_merge ((yyval), (yyvsp[(3) - (3)]));
		amp_am_scanner_include (scanner, (yyval));
	}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 218 "am-parser.y"
    {
        (yyval) = anjuta_token_new_static (ANJUTA_TOKEN_DEFINITION, NULL);
        anjuta_token_merge_own_children ((yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyval), (yyvsp[(1) - (3)]));
        anjuta_token_merge ((yyval), (yyvsp[(2) - (3)]));
        anjuta_token_merge ((yyval), (yyvsp[(3) - (3)]));
        amp_am_scanner_update_variable (scanner, (yyval));
	}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 226 "am-parser.y"
    {
		AnjutaToken *list;
		list = anjuta_token_new_static (ANJUTA_TOKEN_LIST, NULL);
		anjuta_token_insert_after ((yyvsp[(2) - (2)]), list);
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_DEFINITION, NULL);
        anjuta_token_merge_own_children ((yyvsp[(1) - (2)]));
        anjuta_token_merge ((yyval), (yyvsp[(1) - (2)]));
        anjuta_token_merge ((yyval), (yyvsp[(2) - (2)]));
		anjuta_token_merge ((yyval), list);
		amp_am_scanner_update_variable (scanner, (yyval));
	}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 263 "am-parser.y"
    {
		anjuta_token_set_type ((yyvsp[(1) - (1)]), ANJUTA_TOKEN_EOL);
		(yyval) = NULL;
	}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 267 "am-parser.y"
    {
		(yyval) = NULL;
	}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 270 "am-parser.y"
    {
		anjuta_token_set_type ((yyvsp[(1) - (1)]), ANJUTA_TOKEN_COMMENT);
		(yyval) = NULL;
	}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 293 "am-parser.y"
    {
		(yyval) = anjuta_token_merge_previous ((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));
		anjuta_token_merge ((yyval), (yyvsp[(3) - (3)]));
	}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 300 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 304 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));
		anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 308 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));
		anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 315 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_LIST, NULL);
		if ((yyvsp[(1) - (1)]) != NULL) anjuta_token_set_type ((yyvsp[(1) - (1)]), ANJUTA_TOKEN_START);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 320 "am-parser.y"
    {
		if ((yyvsp[(1) - (3)]) != NULL) anjuta_token_set_type ((yyvsp[(1) - (3)]), ANJUTA_TOKEN_START);
		if ((yyvsp[(3) - (3)]) != NULL) anjuta_token_set_type ((yyvsp[(3) - (3)]), ANJUTA_TOKEN_LAST);
		anjuta_token_merge_previous ((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));
		anjuta_token_merge ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
		(yyval) = (yyvsp[(2) - (3)]);
	}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 329 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_LIST, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 333 "am-parser.y"
    {
		anjuta_token_set_type ((yyvsp[(2) - (3)]), ANJUTA_TOKEN_NEXT);
		anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));
		anjuta_token_merge ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 351 "am-parser.y"
    {
		(yyval) = NULL;
	}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 358 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_SPACE, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 366 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 375 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 379 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 383 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 386 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 392 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 396 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 400 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 404 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 407 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 410 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 413 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 416 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 419 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 422 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 425 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 428 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 431 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 437 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 441 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 445 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 449 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 453 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 457 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_NAME, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 461 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 464 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 467 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 470 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 473 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 479 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_ARGUMENT, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 483 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_ARGUMENT, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 487 "am-parser.y"
    {
		(yyval) = anjuta_token_new_static (ANJUTA_TOKEN_ARGUMENT, NULL);
		anjuta_token_merge ((yyval), (yyvsp[(1) - (1)]));
	}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 491 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 494 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 497 "am-parser.y"
    {
		anjuta_token_merge ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 516 "am-parser.y"
    {
		amp_am_scanner_parse_variable (scanner, (yyval));
	}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 522 "am-parser.y"
    {
		amp_am_scanner_parse_ac_variable (scanner, (yyval));
	}
    break;


/* Line 1792 of yacc.c  */
#line 2549 "am-parser.c"
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
#line 662 "am-parser.y"


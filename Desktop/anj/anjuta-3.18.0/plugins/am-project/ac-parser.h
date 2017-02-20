/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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

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

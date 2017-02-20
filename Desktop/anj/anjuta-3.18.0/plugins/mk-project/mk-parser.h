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

/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_DAS2_YY_DS2_PARSER_HPP_INCLUDED
# define YY_DAS2_YY_DS2_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef DAS2_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define DAS2_YYDEBUG 1
#  else
#   define DAS2_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define DAS2_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined DAS2_YYDEBUG */
#if DAS2_YYDEBUG
extern int das2_yydebug;
#endif
/* "%code requires" blocks.  */

    #include "daScript/misc/platform.h"
    #include "daScript/ast/ast.h"
    #include "daScript/ast/ast_generate.h"
    #include "daScript/ast/ast_expressions.h"

    #include "parser_state.h"

#if defined(_MSC_VER) && !defined(__clang__)
    #if defined(DAS_RELWITHDEBINFO)
        #pragma optimize( "s", on )
    #endif
#endif

    enum {
        CorM_COPY   = 0,
        CorM_MOVE   = (1<<0),
        CorM_CLONE  = (1<<1)
    };

    using namespace das;

    #include "parser_impl.h"

    LineInfo tokAt ( yyscan_t scanner, const struct DAS2_YYLTYPE & li );
    LineInfo tokRangeAt ( yyscan_t scanner, const struct DAS2_YYLTYPE & li, const struct DAS2_YYLTYPE & lie );

    struct TypePair {
        TypeDecl * firstType;
        TypeDecl * secondType;
    };

    struct EnumPair {
        string name;
        ExpressionPtr expr;
        LineInfo at;
        EnumPair ( string * n, Expression * e, const LineInfo & l )
            : name(*n), expr(e), at(l) {};
        EnumPair ( string * n, const LineInfo & l )
            : name(*n), expr(nullptr), at(l) {};
    };


/* Token type.  */
#ifndef DAS2_YYTOKENTYPE
# define DAS2_YYTOKENTYPE
  enum das2_yytokentype
  {
    LEXER_ERROR = 258,
    DAS_STRUCT = 259,
    DAS_CLASS = 260,
    DAS_LET = 261,
    DAS_DEF = 262,
    DAS_WHILE = 263,
    DAS_IF = 264,
    DAS_STATIC_IF = 265,
    DAS_ELSE = 266,
    DAS_FOR = 267,
    DAS_CATCH = 268,
    DAS_TRUE = 269,
    DAS_FALSE = 270,
    DAS_NEWT = 271,
    DAS_TYPEINFO = 272,
    DAS_TYPE = 273,
    DAS_IN = 274,
    DAS_IS = 275,
    DAS_AS = 276,
    DAS_ELIF = 277,
    DAS_STATIC_ELIF = 278,
    DAS_ARRAY = 279,
    DAS_RETURN = 280,
    DAS_NULL = 281,
    DAS_BREAK = 282,
    DAS_TRY = 283,
    DAS_OPTIONS = 284,
    DAS_TABLE = 285,
    DAS_EXPECT = 286,
    DAS_CONST = 287,
    DAS_REQUIRE = 288,
    DAS_OPERATOR = 289,
    DAS_ENUM = 290,
    DAS_FINALLY = 291,
    DAS_DELETE = 292,
    DAS_DEREF = 293,
    DAS_TYPEDEF = 294,
    DAS_TYPEDECL = 295,
    DAS_WITH = 296,
    DAS_AKA = 297,
    DAS_ASSUME = 298,
    DAS_CAST = 299,
    DAS_OVERRIDE = 300,
    DAS_ABSTRACT = 301,
    DAS_UPCAST = 302,
    DAS_ITERATOR = 303,
    DAS_VAR = 304,
    DAS_ADDR = 305,
    DAS_CONTINUE = 306,
    DAS_WHERE = 307,
    DAS_PASS = 308,
    DAS_REINTERPRET = 309,
    DAS_MODULE = 310,
    DAS_PUBLIC = 311,
    DAS_LABEL = 312,
    DAS_GOTO = 313,
    DAS_IMPLICIT = 314,
    DAS_EXPLICIT = 315,
    DAS_SHARED = 316,
    DAS_PRIVATE = 317,
    DAS_SMART_PTR = 318,
    DAS_UNSAFE = 319,
    DAS_INSCOPE = 320,
    DAS_STATIC = 321,
    DAS_FIXED_ARRAY = 322,
    DAS_DEFAULT = 323,
    DAS_UNINITIALIZED = 324,
    DAS_TBOOL = 325,
    DAS_TVOID = 326,
    DAS_TSTRING = 327,
    DAS_TAUTO = 328,
    DAS_TINT = 329,
    DAS_TINT2 = 330,
    DAS_TINT3 = 331,
    DAS_TINT4 = 332,
    DAS_TUINT = 333,
    DAS_TBITFIELD = 334,
    DAS_TUINT2 = 335,
    DAS_TUINT3 = 336,
    DAS_TUINT4 = 337,
    DAS_TFLOAT = 338,
    DAS_TFLOAT2 = 339,
    DAS_TFLOAT3 = 340,
    DAS_TFLOAT4 = 341,
    DAS_TRANGE = 342,
    DAS_TURANGE = 343,
    DAS_TRANGE64 = 344,
    DAS_TURANGE64 = 345,
    DAS_TBLOCK = 346,
    DAS_TINT64 = 347,
    DAS_TUINT64 = 348,
    DAS_TDOUBLE = 349,
    DAS_TFUNCTION = 350,
    DAS_TLAMBDA = 351,
    DAS_TINT8 = 352,
    DAS_TUINT8 = 353,
    DAS_TINT16 = 354,
    DAS_TUINT16 = 355,
    DAS_TTUPLE = 356,
    DAS_TVARIANT = 357,
    DAS_GENERATOR = 358,
    DAS_YIELD = 359,
    DAS_SEALED = 360,
    ADDEQU = 361,
    SUBEQU = 362,
    DIVEQU = 363,
    MULEQU = 364,
    MODEQU = 365,
    ANDEQU = 366,
    OREQU = 367,
    XOREQU = 368,
    SHL = 369,
    SHR = 370,
    ADDADD = 371,
    SUBSUB = 372,
    LEEQU = 373,
    SHLEQU = 374,
    SHREQU = 375,
    GREQU = 376,
    EQUEQU = 377,
    NOTEQU = 378,
    RARROW = 379,
    LARROW = 380,
    QQ = 381,
    QDOT = 382,
    QBRA = 383,
    LPIPE = 384,
    RPIPE = 385,
    CLONEEQU = 386,
    ROTL = 387,
    ROTR = 388,
    ROTLEQU = 389,
    ROTREQU = 390,
    MAPTO = 391,
    COLCOL = 392,
    ANDAND = 393,
    OROR = 394,
    XORXOR = 395,
    ANDANDEQU = 396,
    OROREQU = 397,
    XORXOREQU = 398,
    DOTDOT = 399,
    MTAG_E = 400,
    MTAG_I = 401,
    MTAG_V = 402,
    MTAG_B = 403,
    MTAG_A = 404,
    MTAG_T = 405,
    MTAG_C = 406,
    MTAG_F = 407,
    MTAG_DOTDOTDOT = 408,
    INTEGER = 409,
    LONG_INTEGER = 410,
    UNSIGNED_INTEGER = 411,
    UNSIGNED_LONG_INTEGER = 412,
    UNSIGNED_INT8 = 413,
    FLOAT = 414,
    DOUBLE = 415,
    NAME = 416,
    BEGIN_STRING = 417,
    STRING_CHARACTER = 418,
    STRING_CHARACTER_ESC = 419,
    END_STRING = 420,
    BEGIN_STRING_EXPR = 421,
    END_STRING_EXPR = 422,
    END_OF_READ = 423,
    SEMICOLON_CUR_CUR = 424,
    SEMICOLON_CUR_SQR = 425,
    SEMICOLON_SQR_SQR = 426,
    COMMA_SQR_SQR = 427,
    COMMA_CUR_SQR = 428,
    UNARY_MINUS = 429,
    UNARY_PLUS = 430,
    PRE_INC = 431,
    PRE_DEC = 432,
    LLPIPE = 433,
    POST_INC = 434,
    POST_DEC = 435,
    DEREF = 436
  };
#endif

/* Value type.  */
#if ! defined DAS2_YYSTYPE && ! defined DAS2_YYSTYPE_IS_DECLARED
union DAS2_YYSTYPE
{

    char                            ch;
    bool                            b;
    int32_t                         i;
    uint32_t                        ui;
    int64_t                         i64;
    uint64_t                        ui64;
    double                          d;
    double                          fd;
    string *                        s;
    vector<string> *                pNameList;
    vector<VariableNameAndPosition> * pNameWithPosList;
    VariableDeclaration *           pVarDecl;
    vector<VariableDeclaration*> *  pVarDeclList;
    TypeDecl *                      pTypeDecl;
    vector<Expression *> *          pTypeDeclList;
    Expression *                    pExpression;
    Type                            type;
    AnnotationArgument *            aa;
    AnnotationArgumentList *        aaList;
    AnnotationDeclaration *         fa;
    AnnotationList *                faList;
    MakeStruct *                    pMakeStruct;
    Enumeration *                   pEnum;
    EnumPair *                      pEnumPair;
    Structure *                     pStructure;
    Function *                      pFuncDecl;
    CaptureEntry *                  pCapt;
    vector<CaptureEntry> *          pCaptList;
    TypePair                        aTypePair;


};
typedef union DAS2_YYSTYPE DAS2_YYSTYPE;
# define DAS2_YYSTYPE_IS_TRIVIAL 1
# define DAS2_YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined DAS2_YYLTYPE && ! defined DAS2_YYLTYPE_IS_DECLARED
typedef struct DAS2_YYLTYPE DAS2_YYLTYPE;
struct DAS2_YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define DAS2_YYLTYPE_IS_DECLARED 1
# define DAS2_YYLTYPE_IS_TRIVIAL 1
#endif



int das2_yyparse (yyscan_t scanner);

#endif /* !YY_DAS2_YY_DS2_PARSER_HPP_INCLUDED  */

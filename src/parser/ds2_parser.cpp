/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         DAS2_YYSTYPE
#define YYLTYPE         DAS2_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         das2_yyparse
#define yylex           das2_yylex
#define yyerror         das2_yyerror
#define yydebug         das2_yydebug
#define yynerrs         das2_yynerrs

/* First part of user prologue.  */

    #include "daScript/misc/platform.h"
    #include "daScript/simulate/debug_info.h"
    #include "daScript/ast/compilation_errors.h"

    #ifdef _MSC_VER
    #pragma warning(disable:4262)
    #pragma warning(disable:4127)
    #pragma warning(disable:4702)
    #endif

    using namespace das;

    union DAS2_YYSTYPE;
    struct DAS2_YYLTYPE;

    #define YY_NO_UNISTD_H
    #include "lex2.yy.h"

    void das2_yyerror ( DAS2_YYLTYPE * lloc, yyscan_t scanner, const string & error );
    void das2_yyfatalerror ( DAS2_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr );
    int yylex ( DAS2_YYSTYPE *lvalp, DAS2_YYLTYPE *llocp, yyscan_t scanner );
    void yybegin ( const char * str );

    void das2_yybegin_reader ( yyscan_t yyscanner );
    void das2_yyend_reader ( yyscan_t yyscanner );
    void das2_accept_sequence ( yyscan_t yyscanner, const char * seq, size_t seqLen, int lineNo, FileInfo * info );

    namespace das { class Module; }
    void das2_collect_keywords ( das::Module * mod, yyscan_t yyscanner );

    #undef yyextra
    #define yyextra (*((das::DasParserState **)(scanner)))


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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
         || (defined DAS2_YYLTYPE_IS_TRIVIAL && DAS2_YYLTYPE_IS_TRIVIAL \
             && defined DAS2_YYSTYPE_IS_TRIVIAL && DAS2_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10589

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  209
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  256
/* YYNRULES -- Number of rules.  */
#define YYNRULES  763
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1390

#define YYUNDEFTOK  2
#define YYMAXUTOK   436


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   194,     2,   208,   206,   190,   183,     2,
     204,   205,   188,   187,   177,   186,   201,   189,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   180,   171,
     184,   178,   185,   179,   207,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   202,     2,   203,   182,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   169,   181,   170,   193,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   172,   173,   174,   175,   176,   191,
     192,   195,   196,   197,   198,   199,   200
};

#if DAS2_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   524,   524,   525,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   546,   552,   553,
     554,   558,   559,   563,   581,   582,   583,   584,   588,   592,
     597,   606,   614,   630,   635,   643,   643,   682,   700,   704,
     707,   711,   717,   726,   729,   735,   736,   740,   744,   745,
     749,   752,   758,   764,   767,   773,   774,   778,   779,   780,
     789,   790,   794,   795,   801,   802,   803,   804,   805,   809,
     815,   821,   827,   835,   845,   854,   861,   862,   863,   864,
     865,   866,   870,   875,   883,   884,   885,   889,   890,   891,
     892,   893,   894,   895,   896,   902,   905,   911,   914,   920,
     921,   922,   926,   939,   957,   960,   968,   979,   990,  1001,
    1004,  1011,  1015,  1022,  1023,  1027,  1028,  1029,  1033,  1036,
    1043,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,
    1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,
    1066,  1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,
    1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,
    1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,
    1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,
    1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,
    1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,
    1126,  1127,  1128,  1129,  1130,  1135,  1153,  1154,  1155,  1159,
    1165,  1165,  1182,  1186,  1197,  1210,  1211,  1212,  1213,  1214,
    1215,  1216,  1217,  1218,  1219,  1220,  1221,  1222,  1223,  1224,
    1225,  1226,  1227,  1231,  1236,  1242,  1248,  1249,  1253,  1257,
    1264,  1265,  1276,  1280,  1283,  1291,  1291,  1291,  1297,  1300,
    1304,  1308,  1315,  1321,  1325,  1329,  1332,  1335,  1343,  1346,
    1354,  1360,  1366,  1367,  1368,  1372,  1373,  1377,  1378,  1382,
    1387,  1395,  1401,  1413,  1416,  1422,  1422,  1422,  1425,  1425,
    1425,  1430,  1430,  1430,  1438,  1438,  1438,  1444,  1454,  1465,
    1480,  1483,  1489,  1490,  1497,  1508,  1509,  1510,  1514,  1515,
    1516,  1517,  1521,  1526,  1534,  1535,  1539,  1546,  1550,  1556,
    1557,  1558,  1559,  1560,  1561,  1562,  1566,  1567,  1568,  1569,
    1570,  1571,  1572,  1573,  1574,  1575,  1576,  1577,  1578,  1579,
    1580,  1581,  1582,  1583,  1584,  1588,  1595,  1607,  1612,  1622,
    1626,  1633,  1636,  1636,  1636,  1641,  1641,  1641,  1654,  1658,
    1662,  1667,  1674,  1674,  1674,  1681,  1685,  1694,  1698,  1701,
    1707,  1708,  1709,  1710,  1711,  1712,  1713,  1714,  1715,  1716,
    1717,  1718,  1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,
    1727,  1728,  1729,  1730,  1731,  1732,  1733,  1734,  1735,  1736,
    1737,  1738,  1739,  1740,  1741,  1742,  1748,  1749,  1750,  1751,
    1752,  1765,  1766,  1767,  1768,  1769,  1770,  1771,  1772,  1773,
    1774,  1775,  1776,  1779,  1782,  1783,  1786,  1786,  1786,  1789,
    1794,  1798,  1802,  1802,  1802,  1807,  1810,  1814,  1814,  1814,
    1819,  1822,  1823,  1824,  1825,  1826,  1827,  1828,  1829,  1830,
    1832,  1836,  1840,  1841,  1842,  1843,  1844,  1845,  1846,  1850,
    1854,  1858,  1862,  1866,  1870,  1874,  1878,  1882,  1889,  1890,
    1894,  1895,  1896,  1900,  1901,  1905,  1906,  1907,  1911,  1912,
    1916,  1927,  1930,  1930,  1949,  1948,  1962,  1961,  1977,  1986,
    1996,  1997,  2001,  2004,  2013,  2014,  2018,  2021,  2024,  2040,
    2049,  2050,  2054,  2057,  2060,  2074,  2075,  2079,  2085,  2091,
    2094,  2098,  2107,  2108,  2109,  2113,  2114,  2118,  2125,  2130,
    2139,  2145,  2156,  2159,  2164,  2175,  2178,  2178,  2198,  2199,
    2203,  2204,  2205,  2209,  2212,  2212,  2230,  2234,  2241,  2244,
    2257,  2274,  2275,  2276,  2281,  2281,  2307,  2311,  2312,  2313,
    2317,  2327,  2330,  2336,  2341,  2336,  2356,  2357,  2361,  2362,
    2366,  2372,  2373,  2377,  2378,  2379,  2383,  2386,  2392,  2397,
    2392,  2411,  2418,  2423,  2432,  2438,  2449,  2450,  2451,  2452,
    2453,  2454,  2455,  2456,  2457,  2458,  2459,  2460,  2461,  2462,
    2463,  2464,  2465,  2466,  2467,  2468,  2469,  2470,  2471,  2472,
    2473,  2474,  2475,  2479,  2480,  2481,  2482,  2483,  2484,  2485,
    2486,  2490,  2501,  2505,  2512,  2524,  2531,  2540,  2545,  2555,
    2568,  2568,  2568,  2581,  2585,  2592,  2596,  2603,  2604,  2605,
    2606,  2607,  2622,  2628,  2628,  2628,  2632,  2637,  2644,  2644,
    2651,  2655,  2659,  2664,  2669,  2674,  2679,  2683,  2687,  2692,
    2696,  2700,  2705,  2705,  2705,  2711,  2718,  2718,  2718,  2723,
    2723,  2723,  2729,  2729,  2729,  2734,  2738,  2738,  2738,  2743,
    2743,  2743,  2752,  2756,  2756,  2756,  2761,  2761,  2761,  2770,
    2774,  2774,  2774,  2779,  2779,  2779,  2788,  2788,  2788,  2794,
    2794,  2794,  2803,  2806,  2817,  2833,  2838,  2843,  2833,  2868,
    2873,  2879,  2868,  2904,  2909,  2914,  2904,  2944,  2945,  2946,
    2947,  2948,  2952,  2959,  2966,  2972,  2978,  2985,  2992,  2998,
    3008,  3016,  3021,  3028,  3029,  3033,  3033,  3033,  3041,  3041,
    3041,  3048,  3048,  3048,  3055,  3055,  3055,  3066,  3072,  3078,
    3084,  3084,  3084,  3094,  3102,  3102,  3102,  3112,  3112,  3112,
    3122,  3122,  3122,  3132,  3140,  3140,  3140,  3148,  3155,  3155,
    3155,  3165,  3168,  3174,  3182,  3190,  3198,  3211,  3212,  3216,
    3217,  3222,  3225,  3228
};
#endif

#if DAS2_YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"lexer error\"", "\"struct\"",
  "\"class\"", "\"let\"", "\"def\"", "\"while\"", "\"if\"",
  "\"static_if\"", "\"else\"", "\"for\"", "\"recover\"", "\"true\"",
  "\"false\"", "\"new\"", "\"typeinfo\"", "\"type\"", "\"in\"", "\"is\"",
  "\"as\"", "\"elif\"", "\"static_elif\"", "\"array\"", "\"return\"",
  "\"null\"", "\"break\"", "\"try\"", "\"options\"", "\"table\"",
  "\"expect\"", "\"const\"", "\"require\"", "\"operator\"", "\"enum\"",
  "\"finally\"", "\"delete\"", "\"deref\"", "\"typedef\"", "\"typedecl\"",
  "\"with\"", "\"aka\"", "\"assume\"", "\"cast\"", "\"override\"",
  "\"abstract\"", "\"upcast\"", "\"iterator\"", "\"var\"", "\"addr\"",
  "\"continue\"", "\"where\"", "\"pass\"", "\"reinterpret\"", "\"module\"",
  "\"public\"", "\"label\"", "\"goto\"", "\"implicit\"", "\"explicit\"",
  "\"shared\"", "\"private\"", "\"smart_ptr\"", "\"unsafe\"",
  "\"inscope\"", "\"static\"", "\"fixed_array\"", "\"default\"",
  "\"uninitialized\"", "\"bool\"", "\"void\"", "\"string\"", "\"auto\"",
  "\"int\"", "\"int2\"", "\"int3\"", "\"int4\"", "\"uint\"",
  "\"bitfield\"", "\"uint2\"", "\"uint3\"", "\"uint4\"", "\"float\"",
  "\"float2\"", "\"float3\"", "\"float4\"", "\"range\"", "\"urange\"",
  "\"range64\"", "\"urange64\"", "\"block\"", "\"int64\"", "\"uint64\"",
  "\"double\"", "\"function\"", "\"lambda\"", "\"int8\"", "\"uint8\"",
  "\"int16\"", "\"uint16\"", "\"tuple\"", "\"variant\"", "\"generator\"",
  "\"yield\"", "\"sealed\"", "\"+=\"", "\"-=\"", "\"/=\"", "\"*=\"",
  "\"%=\"", "\"&=\"", "\"|=\"", "\"^=\"", "\"<<\"", "\">>\"", "\"++\"",
  "\"--\"", "\"<=\"", "\"<<=\"", "\">>=\"", "\">=\"", "\"==\"", "\"!=\"",
  "\"->\"", "\"<-\"", "\"??\"", "\"?.\"", "\"?[\"", "\"<|\"", "\"|>\"",
  "\":=\"", "\"<<<\"", "\">>>\"", "\"<<<=\"", "\">>>=\"", "\"=>\"",
  "\"::\"", "\"&&\"", "\"||\"", "\"^^\"", "\"&&=\"", "\"||=\"", "\"^^=\"",
  "\"..\"", "\"$$\"", "\"$i\"", "\"$v\"", "\"$b\"", "\"$a\"", "\"$t\"",
  "\"$c\"", "\"$f\"", "\"...\"", "\"integer constant\"",
  "\"long integer constant\"", "\"unsigned integer constant\"",
  "\"unsigned long integer constant\"", "\"unsigned int8 constant\"",
  "\"floating point constant\"", "\"double constant\"", "\"name\"",
  "\"start of the string\"", "STRING_CHARACTER", "STRING_CHARACTER_ESC",
  "\"end of the string\"", "\"{\"", "\"}\"",
  "\"end of failed eader macro\"", "\"begin of code block\"",
  "\"end of code block\"", "\"end of expression\"", "\";}}\"", "\";}]\"",
  "\";]]\"", "\",]]\"", "\",}]\"", "','", "'='", "'?'", "':'", "'|'",
  "'^'", "'&'", "'<'", "'>'", "'-'", "'+'", "'*'", "'/'", "'%'",
  "UNARY_MINUS", "UNARY_PLUS", "'~'", "'!'", "PRE_INC", "PRE_DEC",
  "LLPIPE", "POST_INC", "POST_DEC", "DEREF", "'.'", "'['", "']'", "'('",
  "')'", "'$'", "'@'", "'#'", "$accept", "program",
  "top_level_reader_macro", "optional_public_or_private_module",
  "module_name", "module_declaration", "character_sequence",
  "string_constant", "string_builder_body", "string_builder",
  "reader_character_sequence", "expr_reader", "$@1", "options_declaration",
  "require_declaration", "require_module_name", "require_module",
  "is_public_module", "expect_declaration", "expect_list", "expect_error",
  "expression_label", "expression_goto", "elif_or_static_elif",
  "expression_else", "if_or_static_if", "expression_else_one_liner",
  "expression_if_one_liner", "expression_if_then_else",
  "expression_for_loop", "expression_unsafe", "expression_while_loop",
  "expression_with", "expression_with_alias", "annotation_argument_value",
  "annotation_argument_value_list", "annotation_argument_name",
  "annotation_argument", "annotation_argument_list",
  "metadata_argument_list", "annotation_declaration_name",
  "annotation_declaration_basic", "annotation_declaration",
  "annotation_list", "optional_annotation_list",
  "optional_function_argument_list", "optional_function_type",
  "function_name", "global_function_declaration",
  "optional_public_or_private_function", "function_declaration_header",
  "function_declaration", "$@2", "expression_block", "expr_call_pipe",
  "expression_any", "expressions", "optional_expr_list",
  "type_declaration_no_options_list", "name_in_namespace",
  "expression_delete", "new_type_declaration", "$@3", "$@4", "expr_new",
  "expression_break", "expression_continue", "expression_return",
  "expression_yield_no_pipe", "expression_yield", "expression_try_catch",
  "kwd_let_var_or_nothing", "kwd_let", "optional_in_scope",
  "tuple_expansion", "tuple_expansion_variable_declaration",
  "expression_let", "expr_cast", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10",
  "expr_type_decl", "$@11", "$@12", "expr_type_info", "expr_list",
  "block_or_simple_block", "block_or_lambda", "capture_entry",
  "capture_list", "optional_capture_list", "expr_full_block",
  "expr_full_block_assumed_piped", "expr_numeric_const", "expr_assign",
  "expr_named_call", "expr_method_call", "func_addr_name",
  "func_addr_expr", "$@13", "$@14", "$@15", "$@16", "expr_field", "$@17",
  "$@18", "expr_call", "expr", "$@19", "$@20", "$@21", "$@22", "$@23",
  "$@24", "expr_mtag", "optional_field_annotation", "optional_override",
  "optional_constant", "optional_public_or_private_member_variable",
  "optional_static_member_variable", "structure_variable_declaration",
  "struct_variable_declaration_list", "$@25", "$@26", "$@27",
  "function_argument_declaration", "function_argument_list", "tuple_type",
  "tuple_type_list", "tuple_alias_type_list", "variant_type",
  "variant_type_list", "variant_alias_type_list", "copy_or_move",
  "variable_declaration", "copy_or_move_or_clone", "optional_ref",
  "let_variable_name_with_pos_list", "let_variable_declaration",
  "global_variable_declaration_list", "$@28", "optional_shared",
  "optional_public_or_private_variable", "global_let", "$@29",
  "enum_expression", "enum_list", "optional_public_or_private_alias",
  "single_alias", "$@30", "alias_declaration",
  "optional_public_or_private_enum", "enum_name",
  "optional_enum_basic_type_declaration", "enum_declaration", "$@31",
  "$@32", "optional_structure_parent", "optional_sealed", "structure_name",
  "class_or_struct", "optional_public_or_private_structure",
  "optional_struct_variable_declaration_list", "structure_declaration",
  "$@33", "$@34", "variable_name_with_pos_list", "basic_type_declaration",
  "enum_basic_type_declaration", "structure_type_declaration",
  "auto_type_declaration", "bitfield_bits", "bitfield_alias_bits",
  "bitfield_type_declaration", "$@35", "$@36", "table_type_pair",
  "dim_list", "type_declaration_no_options", "$@37", "$@38", "$@39",
  "$@40", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47", "$@48",
  "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56", "$@57",
  "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "type_declaration",
  "tuple_alias_declaration", "$@64", "$@65", "$@66",
  "variant_alias_declaration", "$@67", "$@68", "$@69",
  "bitfield_alias_declaration", "$@70", "$@71", "$@72", "make_decl",
  "make_struct_fields", "make_struct_single", "make_struct_dim",
  "use_initializer", "make_struct_decl", "$@73", "$@74", "$@75", "$@76",
  "$@77", "$@78", "$@79", "$@80", "make_map_tuple", "make_tuple_call",
  "$@81", "$@82", "make_dim_decl", "$@83", "$@84", "$@85", "$@86", "$@87",
  "$@88", "$@89", "$@90", "$@91", "$@92", "expr_map_tuple_list",
  "make_table_decl", "array_comprehension_where", "optional_comma",
  "array_comprehension", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   123,
     125,    59,   424,   425,   426,   427,   428,    44,    61,    63,
      58,   124,    94,    38,    60,    62,    45,    43,    42,    47,
      37,   429,   430,   126,    33,   431,   432,   433,   434,   435,
     436,    46,    91,    93,    40,    41,    36,    64,    35
};
# endif

#define YYPACT_NINF (-1244)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-674)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1244,    27, -1244, -1244,    44,  -116,    96,   430, -1244,   -84,
     430,   430,   430, -1244,    24,   271, -1244, -1244,  -120, -1244,
   -1244, -1244,   338, -1244,    -2, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244,   -89, -1244,    -4,    16,    41,
   -1244, -1244,    96,    46, -1244, -1244, -1244,    80,   103, -1244,
   -1244,    -2,   116,   124,   140,   227,   256, -1244, -1244, -1244,
     271,   271,   271,   240, -1244,   366,  -102, -1244, -1244, -1244,
   -1244,   469,   481,   482, -1244,   484,    15,    44,   257,  -116,
     250,   295, -1244,   329,   380, -1244, -1244, -1244,   494, -1244,
   -1244, -1244, -1244,   408,   386, -1244, -1244,   -45,    44,   271,
     271,   271,   271, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
     411, -1244, -1244, -1244, -1244, -1244,   405, -1244, -1244, -1244,
   -1244, -1244,   305,    97, -1244, -1244, -1244, -1244,   525, -1244,
   -1244,   398, -1244, -1244, -1244,   414,   416,   436, -1244, -1244,
     433, -1244,    55, -1244,   198,   487,   366, 10428, -1244,   448,
     514, -1244,   423, -1244, -1244,   485, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244,    76, -1244,  6261, -1244, -1244, -1244, -1244,
   -1244,  9137, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244, -1244,   599,   610, -1244,
     443,   483,   461,   488, -1244,   492, -1244,   490,    44,   447,
     284, -1244, -1244, -1244,    97, -1244,   474,   478,   479,   462,
     486,   496, -1244, -1244, -1244,   464, -1244, -1244, -1244, -1244,
   -1244,   506, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244,   512, -1244, -1244, -1244,   513,   515, -1244,
   -1244, -1244, -1244,   516,   517,   467,    24, -1244, -1244, -1244,
   -1244, -1244,  3710,   493,   504, -1244, -1244,   546,   550, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,   551,
     472, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244,   651, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244,   553,   473, -1244, -1244,
     -97,   540, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244,   543,   555, -1244,   423, -1244,    44,
     521,   684,   308, -1244, -1244, -1244, -1244, -1244,  5918, -1244,
   -1244,   566, -1244,   154,   222,   225, -1244, -1244,  5918,   -46,
   -1244, -1244, -1244,     7, -1244, -1244,    47, -1244,  3200, -1244,
     530,  1258, -1244,   556,  1397,   176, -1244, -1244, -1244, -1244,
     575,   607, -1244,   535, -1244,    64, -1244,   -19,  6261, -1244,
    1818,   579,    24, -1244, -1244, -1244,   284, -1244,  5918,   581,
     582,  6261, -1244,    50,  6261,  6261,  6261,   560,   561, -1244,
   -1244,    31,   544,   563,    19, -1244,   214,   545,   567,   568,
     549,   570,   238,   572, -1244,   249,   574,   583,  5918,  5918,
     564,   571,   573,   576,   584,   585, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244,  3396,  5918,  5918,  5918,  5918,
    5918,  2812,  5918, -1244,   565, -1244, -1244, -1244,   590, -1244,
   -1244, -1244, -1244,   569, -1244, -1244, -1244, -1244, -1244, -1244,
     -35,  1535, -1244,   591, -1244, -1244, -1244, -1244, -1244, -1244,
    6261,  6261,   578,   609,  6261,   443,  6261,   443,  6261,   443,
    6353,   613,  6347, -1244,  5918, -1244, -1244, -1244, -1244,   594,
   -1244, -1244,  8580,  5918, -1244,  3710,   625, -1244,     8, -1244,
     627,   493,   629,   620, -1244,   630,   632, -1244, -1244,  5918,
   -1244, -1244,   297,  -123, -1244,   493, -1244,  5918, -1244, -1244,
     601,  3590, -1244,   483,  3784,  5918,   645, -1244,   637,   657,
    3978,   483,  4172,   781, -1244,   649,   653,   618,   816, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244,   656,   658,   659,   660,
     662, -1244, -1244,   763, -1244,   663,  9021,   664, -1244,   661,
   -1244,    36, -1244,  6383, -1244,   793,   520, -1244, -1244, -1244,
    5918,   174,   219,   665,   306, -1244, -1244, -1244,   640,   641,
   -1244,    24, -1244,   667,   676,   677, -1244,  5918,  6261,  5918,
    5918, -1244, -1244,  5918, -1244, -1244,  5918, -1244, -1244,  5918,
   -1244,  6261,   311,   311,  5918,  5918,  5918,  5918,  5918,  5918,
     522,   297,  9168, -1244,   669,   311,   311,   -83,   311,   311,
     297,   835,   671,  9793,   671,   235,  3006,   652, -1244,   655,
     569, -1244,  1105, 10308,  5918,  5918, -1244, -1244,  5918,  5918,
    5918,  5918,   703,  5918,   310,  5918,  5918,  5918,  5918,  5918,
    5918,  5918,  5918,  5918,  4366,  5918,  5918,  5918,  5918,  5918,
    5918,  5918,  5918,  5918,  5918,   -37,  5918, -1244,  4560,   390,
     397, -1244, -1244,   -30,   410,   540,   413,   540,   418,   540,
   -1244,   143, -1244,   224, -1244,  6261,   666,   688, -1244, -1244,
    8613, -1244,   696,  6261, -1244, -1244,  6261, -1244, -1244,  6475,
     672,   825, -1244,   -21, -1244,  9267,   297,  5918,  9793,   855,
    5918,  9793,  9267,   691, -1244,   690,   719,  9793, -1244,  5918,
    9793,   705, -1244, -1244,  5918,   673, -1244, -1244, -1244, -1244,
   -1244, -1244,   -65, -1244,  5918,  5918,  5918,  5918,  5918,  5918,
    5918,  5918,  5918,  5918,  5918,  5918,  5918,  5918,  5918,  5918,
    5918,  5918,  5918,   579, -1244, -1244,   868,   423, -1244,   718,
   -1244,  5918,  9356, -1244, -1244, -1244,  6261,  6261,  6261,  6261,
     811,  5918,  4754,  6261, -1244, -1244, -1244,  6261,   671,   533,
     669,  6574,  6261,  6261,  6605,  6261,  6261,   671,  6261,  6261,
     671,  6261,   624,  6704,  6796,  6829,  6921,  7020,  7051, -1244,
    5918,   450,     5,  5918,  5918,   712,    12,   297,  5918,   680,
     681,   683,   686,   251, -1244, -1244,   687,    89,  2616, -1244,
     119,   708,   689,   693,   443,  2022, -1244,   652,   704,   692,
   -1244, -1244,   709,   710, -1244, -1244,   181,   181,   400,   400,
   10167, 10167,   713,    20,   714, -1244,  8705,   -59,   -59,   591,
     181,   181, 10021,   930,  9939,  9825, 10340,  9392, 10053, 10135,
     783,   400,   400,   163,   163,    20,    20,    20,   341,  5918,
     717,   722,   357,  5918,   891,  8797, -1244,   125, -1244, -1244,
     747, -1244, -1244,   737, -1244,   738, -1244,   742,  6353, -1244,
     613, -1244,   288,   493, -1244,  5918, -1244, -1244,   493,   493,
   -1244,  5918,   767, -1244,   768, -1244,  6261, -1244,  5918, -1244,
      34,  9793,   483,  9793, -1244,  5918, -1244, -1244,  9793, -1244,
    7150,  5918,   769, -1244, -1244,  9793,  9793,  9793,  9793,  9793,
    9793,  9793,  9793,  9793,  9793,  9793,  9793,  9793,  9793,  9793,
    9793,  9793,  9793,  9793, -1244,   761,   495,   866,   762, -1244,
    9481, -1244, -1244, -1244, -1244,   493,   670,   893,   425, -1244,
     -78,   729,   774,  7242,   426,  6261,  6261,  6261,  1196,   739,
    6261,   741,   744, -1244,  1240,  1329, -1244,  1398,  1570,   749,
    2346,  2417,   750,  2552,   652, -1244, -1244, -1244, -1244, -1244,
     743,  9563,  5918,  9793, -1244, -1244,  5918,    35,  9793, -1244,
   -1244,  5918,  5918,  6261,   443,  5918,  5918,  5918,   -23,  6112,
   -1244,   358, -1244,   -53,   540, -1244,   443, -1244,  5918, -1244,
    5918,  4948,  5918, -1244,   758,   752, -1244, -1244,  5918,   753,
   -1244,  8830,  5918,  5142,   754, -1244,  8922, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244,  6261,   755,  7275, -1244,   901,   -11,
    9793,  5918, -1244,  9793,  2226,   483,  7367, -1244,   149, -1244,
   -1244, -1244,   388, -1244,     4, -1244, -1244, -1244, -1244, -1244,
     100, -1244,   759, -1244,   293, -1244, -1244,  2748,  2932,  3189,
   -1244, -1244,  3197,  5918, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244,   756,  5336, -1244,   391,   393,  5918,
    7466,  7497,  3385,   540,  7596,  9793,  9793,   760,  2616,   770,
     121,   785,   814,   815,   818, -1244,   118,    30,   540,  6261,
    7688,  6261,  7721, -1244,   158,  7813, -1244,  5918,  9907,  5918,
   -1244,  7912, -1244,   184,  5918, -1244, -1244, -1244, -1244, -1244,
     493,  5918, -1244,   820,  5918,   207, -1244,   438,   966,   821,
      56,   951,     4, -1244, -1244,   495,   782,   784, -1244, -1244,
     826,  5918, -1244, -1244, -1244, -1244,   786,   787,   669,  5918,
    5918,  5918,   788,   811,   789,   791,  5530, -1244,   208,  5918,
    5918,   396, -1244, -1244, -1244,   804,   137, -1244,   203,  5918,
    5918,  5918, -1244, -1244, -1244, -1244,   -53,   794,  5724, -1244,
   -1244,   483,  3516, -1244,   427, -1244, -1244, -1244,  6261,  7943,
    8042, -1244, -1244,  8134,   795, -1244,  9793,   483,   483, -1244,
   -1244,   792, -1244,  2420,   827, -1244,  6261,    50, -1244, -1244,
     951,   297,   811,   811,   817,  8167,   799,   800,   801,  5918,
    5918,   802,   400,   400,   400,  5918, -1244,   811,   359, -1244,
    8259, -1244,   837,  9595,  5918,   157, -1244,  5918,  5918,   806,
    8358,  9793,  9793, -1244, -1244,  5918,  9825, -1244, -1244, -1244,
     439, -1244, -1244, -1244, -1244, -1244, -1244,  5918, -1244, -1244,
   -1244, -1244, -1244,  9793, -1244,   635,  5918, 10428, -1244, -1244,
     359,   359,  5918, -1244,   811,   811,   359,   671,   669, -1244,
     671,   359,   708,    -8, -1244,   954,   839,   809,  9595, -1244,
     157,  9793,  9793, -1244,   144,  9907, -1244, -1244, -1244,  8389,
    5918,  9677,   842, 10428,    45,    66,  8488,   359,   359,    83,
     812,   819,   822,   101,   359, -1244,  5918, -1244, -1244,   813,
   -1244,  5918,  5918, -1244,   483,  9711, -1244, -1244,   483, -1244,
   -1244, -1244,   111,   112, -1244, -1244, -1244, -1244, -1244,   708,
    9793, -1244,  9793,  9793,   438, -1244, -1244, -1244, -1244, -1244
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,   113,     1,   265,     0,     0,     0,   531,   266,     0,
     531,   531,   531,    16,     0,     0,    15,     3,     0,    10,
       9,     8,     0,     7,   518,     6,    11,     5,     4,    13,
      12,    14,    85,    86,    84,    93,    95,    37,    50,    47,
      48,    39,     0,    45,    38,   533,   532,     0,     0,    22,
      21,   518,     0,     0,     0,     0,   240,    35,   100,   101,
       0,     0,     0,   102,   104,   111,     0,    99,    17,   552,
     551,   206,   537,   553,   519,   520,     0,     0,     0,     0,
      40,     0,    46,     0,     0,    43,   534,   536,    18,   693,
     685,   689,   242,     0,     0,   110,   105,     0,     0,     0,
       0,     0,     0,   114,   208,   207,   210,   205,   539,   538,
       0,   555,   554,   558,   522,   521,   524,    91,    92,    89,
      90,    88,     0,     0,    87,    96,    51,    49,    45,    42,
      41,     0,    19,    20,    23,     0,     0,     0,   241,    33,
      36,   109,     0,   106,   107,   108,   112,     0,   540,   541,
     548,   515,   458,    24,    25,     0,    80,    81,    78,    79,
      77,    76,    82,     0,    44,     0,   694,   686,   690,    34,
     103,     0,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,     0,     0,   120,
     115,     0,     0,     0,   549,     0,   559,   516,     0,   459,
       0,    26,    27,    28,     0,    94,     0,     0,     0,     0,
       0,     0,   566,   586,   567,   602,   568,   572,   573,   574,
     575,   592,   579,   580,   581,   582,   583,   584,   585,   587,
     588,   589,   590,   655,   571,   578,   591,   662,   669,   569,
     576,   570,   577,     0,     0,     0,     0,   601,   617,   620,
     618,   619,   682,   535,   607,   486,   492,   174,   175,   172,
     123,   124,   126,   125,   127,   128,   129,   130,   156,   157,
     154,   155,   147,   158,   159,   148,   145,   146,   173,   167,
       0,   171,   160,   161,   162,   163,   134,   135,   136,   131,
     132,   133,   144,     0,   150,   151,   149,   142,   143,   138,
     137,   139,   140,   141,   122,   121,   166,     0,   152,   153,
     458,   118,   233,   211,   593,   596,   599,   600,   594,   597,
     595,   598,   542,   543,   546,   556,   523,   458,    97,     0,
       0,   507,   505,   525,    83,   623,   646,   649,     0,   652,
     642,     0,   610,   656,   663,   670,   676,   679,     0,     0,
     632,   637,   631,     0,   645,   634,     0,   641,     0,   636,
     621,     0,   608,   759,   687,   691,   176,   177,   170,   165,
     178,   168,   164,     0,   116,   264,   480,     0,     0,   209,
       0,   528,     0,   550,   471,   560,     0,    98,     0,     0,
       0,     0,   506,     0,     0,     0,     0,     0,     0,   366,
     367,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,   592,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   309,   311,   310,
     312,   313,   314,   315,    29,     0,     0,     0,     0,     0,
       0,     0,     0,   295,   296,   364,   363,   441,   361,   434,
     433,   432,   431,   113,   437,   362,   436,   435,   407,   368,
     408,     0,   369,     0,   365,   697,   701,   698,   699,   700,
       0,     0,     0,     0,     0,   115,     0,   115,     0,   115,
       0,     0,     0,   628,   236,   639,   640,   633,   635,     0,
     638,   622,     0,     0,   684,   683,   760,   695,   240,   487,
       0,   482,     0,     0,   493,     0,     0,   179,   169,     0,
     262,   263,     0,   458,   117,   119,   235,     0,    60,    61,
       0,   255,   253,     0,     0,     0,     0,   254,     0,     0,
       0,     0,     0,   212,   215,     0,     0,     0,     0,   228,
     223,   220,   219,   221,   222,   234,     0,    67,    68,    65,
      66,   227,   229,   268,   218,     0,    64,   526,   529,   759,
     547,   472,   517,     0,   509,   510,     0,   503,   504,   502,
       0,     0,     0,     0,   613,   715,   718,   245,     0,   248,
     252,     0,   284,     0,     0,     0,   744,     0,     0,     0,
       0,   275,   278,     0,   281,   748,     0,   724,   730,     0,
     721,     0,   396,   397,     0,     0,     0,     0,     0,     0,
       0,     0,   728,   751,   759,   373,   372,   409,   371,   370,
       0,     0,   759,   290,   759,   297,     0,   304,   233,   296,
     113,   214,     0,     0,     0,     0,   398,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   352,     0,   626,     0,     0,
       0,   603,   605,     0,     0,   118,     0,   118,     0,   118,
     484,     0,   490,     0,   604,     0,     0,   237,   630,   615,
       0,   609,     0,     0,   488,   688,     0,   494,   692,     0,
       0,   561,   478,   497,   481,     0,     0,     0,   256,     0,
       0,   243,     0,     0,   232,     0,     0,    54,    72,     0,
     258,     0,   230,   231,     0,     0,   217,   224,   225,   226,
     260,   267,     0,   216,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   760,   544,   557,     0,   458,   508,     0,
     512,     0,     0,   624,   647,   650,     0,     0,     0,     0,
     713,   236,     0,     0,   734,   737,   740,     0,   759,     0,
     759,     0,     0,     0,     0,     0,     0,   759,     0,     0,
     759,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,    30,     0,     0,   760,     0,     0,     0,   760,     0,
       0,     0,     0,   342,   339,   341,     0,   240,     0,   355,
       0,   710,     0,     0,   115,     0,   297,   304,     0,     0,
     420,   419,     0,     0,   421,   425,   374,   375,   387,   388,
     385,   386,     0,   414,     0,   405,     0,   438,   439,   440,
     376,   377,   392,   393,   394,   395,     0,     0,   390,   391,
     389,   383,   384,   379,   378,   380,   381,   382,     0,     0,
       0,   348,     0,     0,     0,     0,   358,     0,   653,   643,
       0,   611,   657,     0,   664,     0,   671,     0,     0,   677,
       0,   680,     0,   238,   627,     0,   616,   696,   483,   489,
     479,     0,     0,   496,     0,   495,     0,   498,     0,    73,
       0,   257,     0,   244,    74,     0,    52,    53,   259,   233,
       0,     0,     0,   274,   273,   326,   327,   329,   328,   330,
     320,   321,   322,   331,   332,   318,   319,   333,   334,   323,
     324,   325,   317,   527,   530,     0,   465,   468,     0,   511,
       0,   514,   625,   648,   651,   614,     0,     0,     0,   714,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   410,     0,     0,   411,     0,     0,     0,
       0,     0,     0,     0,   304,   442,   443,   444,   445,   446,
       0,     0,     0,   727,   752,   753,     0,     0,   291,   733,
     400,     0,     0,     0,   115,     0,     0,     0,     0,     0,
     357,     0,   356,     0,   118,   308,   115,   416,     0,   422,
       0,     0,     0,   403,     0,     0,   426,   430,     0,     0,
     406,     0,     0,     0,     0,   349,     0,   353,   401,   359,
     654,   644,   606,   612,   658,   660,   665,   667,   672,   674,
     485,   678,   491,   681,     0,     0,     0,   563,   564,   499,
     501,     0,   261,    75,     0,     0,     0,   269,     0,   545,
     466,   467,   468,   469,   460,   473,   513,   716,   719,   246,
       0,   250,     0,   249,     0,   287,   285,     0,     0,     0,
     745,   743,     0,     0,   754,   276,   279,   282,   749,   747,
     725,   731,   729,   722,     0,     0,    31,     0,     0,     0,
       0,     0,     0,   118,     0,   703,   702,     0,     0,     0,
       0,     0,     0,     0,     0,   302,     0,     0,   118,     0,
       0,     0,     0,   337,     0,     0,   427,     0,   415,     0,
     404,     0,   350,     0,     0,   402,   354,   661,   668,   675,
     239,   236,   562,     0,     0,     0,   213,    57,    62,     0,
     505,   463,   460,   461,   462,   465,     0,     0,   247,   251,
       0,     0,   286,   735,   738,   741,     0,     0,   759,     0,
       0,     0,     0,   713,     0,     0,     0,   448,     0,     0,
       0,     0,   340,   457,   343,     0,     0,   335,     0,     0,
       0,     0,   300,   301,   299,   298,     0,     0,     0,   292,
     306,     0,     0,   456,     0,   454,   338,   451,     0,     0,
       0,   450,   351,     0,     0,   565,   500,     0,     0,    55,
      56,     0,    69,     0,     0,   270,     0,     0,   464,   474,
     463,     0,   713,   713,     0,     0,     0,     0,     0,     0,
       0,     0,   277,   280,   283,     0,   726,   713,     0,   412,
       0,   449,   757,   757,     0,     0,   346,     0,     0,     0,
       0,   705,   704,   303,   305,     0,   293,   307,   417,   423,
       0,   455,   453,   452,   629,    71,    58,     0,    63,    67,
      68,    65,    66,    64,    70,     0,     0,     0,   476,   470,
       0,     0,     0,   288,   713,   713,     0,   759,   759,   755,
     759,     0,   711,     0,   413,     0,     0,     0,   757,   344,
       0,   707,   706,   336,     0,   294,   418,   424,   428,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   723,     0,   763,   761,     0,
     347,     0,     0,   429,     0,     0,   272,   475,     0,   717,
     720,   289,     0,     0,   742,   746,   756,   750,   732,   712,
     758,   762,   709,   708,    57,   271,   477,   736,   739,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1244, -1244, -1244, -1244, -1244, -1244,   394,   944, -1244, -1244,
   -1244,  1020, -1244, -1244, -1244,   981, -1244,   900, -1244, -1244,
     950, -1244, -1244, -1244,  -354, -1244, -1244,  -211, -1244, -1244,
   -1244, -1244, -1244, -1244,   823, -1244, -1244,   -55,   936, -1244,
   -1244, -1244,   315, -1244,  -431,  -478,  -675, -1244, -1244, -1244,
   -1243, -1244, -1244,  -528, -1244, -1244,  -617,  -762, -1244,   -14,
   -1244, -1244, -1244, -1244, -1244,  -208,  -207,  -205,  -204, -1244,
   -1244, -1244,  1039, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,  -402, -1244,
     595,  -175, -1244,  -803, -1244, -1244, -1244, -1244, -1244, -1244,
   -1204, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
     491, -1244, -1244, -1244, -1244, -1244, -1244, -1244,  -144,  -130,
    -201,  -132,   -27, -1244, -1244, -1244, -1244, -1244,   538, -1244,
    -473, -1244, -1244,  -476, -1244, -1244,  -707,  -187,  -574,  -104,
   -1244,  -376, -1244, -1244,  1018, -1244, -1244, -1244,   309, -1244,
     511, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,  -593,
    -161, -1244,   675, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244,  -298, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,  -140,
   -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244, -1244,   678,  -620,   104,  -864, -1136, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244,  -796, -1244, -1244, -1244,
   -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244, -1244,
   -1244,  -596, -1244, -1193,  -527, -1244
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    16,   134,    51,    17,   155,   161,   620,   455,
     140,   456,    94,    19,    20,    43,    44,    85,    21,    39,
      40,   545,   546,  1241,  1242,   547,  1244,   548,   549,   550,
     551,   552,   553,   554,   162,   163,    35,    36,    37,   209,
      63,    64,    65,    66,    22,   321,   389,   200,    23,   106,
     201,   107,   147,   323,   457,   555,   390,   696,   902,   458,
     556,   588,   779,  1178,   459,   557,   558,   559,   560,   561,
     562,   522,   563,   742,  1078,   933,   564,   460,   792,  1189,
     793,  1190,   795,  1191,   461,   783,  1182,   462,   632,  1220,
     463,  1135,  1136,   834,   464,   641,   465,   565,   466,   467,
     825,   468,  1013,  1275,  1014,  1330,   469,   884,  1156,   470,
     633,  1139,  1336,  1141,  1337,  1228,  1363,   472,   385,  1175,
    1249,  1082,  1084,   958,   571,   767,  1307,  1343,   386,   387,
     510,   691,   374,   515,   693,   375,  1017,   712,   580,   403,
     342,   343,   207,   337,    75,   116,    25,   152,   568,   569,
      47,    48,   131,    26,   110,   149,   203,    27,   391,   955,
     393,   205,   206,    73,   113,   395,    28,   150,   335,   713,
     473,   332,   259,   260,   683,   373,   261,   483,  1053,   583,
     370,   262,   404,   962,   695,   481,  1051,   405,   963,   406,
     964,   480,  1050,   484,  1054,   485,  1157,   486,  1056,   487,
    1158,   488,  1058,   489,  1159,   490,  1061,   491,  1063,   511,
      29,   136,   265,   512,    30,   137,   266,   516,    31,   135,
     264,   702,   474,  1322,   832,  1323,   970,   475,   777,  1176,
     778,  1177,   801,  1195,   798,  1193,   623,   476,   799,  1194,
     477,   975,  1256,   976,  1257,   977,  1258,   787,  1186,   796,
    1192,   624,   478,  1326,   507,   479
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    67,   771,   790,   258,   719,   918,   685,   210,   687,
     893,   689,   895,   728,   897,   692,   831,   690,  1004,   971,
     572,   835,   125,   593,  1002,   263,   383,     2,   812,   117,
     118,  1006,   637,     3,  1026,   407,   408,   816,    38,   495,
     642,   643,   764,  -113,   654,   655,    67,    67,    67,  1173,
     634,    68,   383,  1071,  1119,   414,     4,  1266,     5,    74,
       6,   416,    32,    33,  1342,   652,     7,    81,   654,   655,
     520,  1329,  1131,   505,   826,   102,     8,    49,  1132,   497,
    1327,   340,     9,  1090,   208,    67,    67,    67,    67,    76,
     878,   879,   697,    99,   100,   101,   341,   815,   422,   423,
    1368,   103,    82,   576,   913,   819,    10,   820,   384,  1174,
     208,   156,   157,   521,   913,   880,  1310,  1311,   675,   676,
     594,   595,    50,   920,   881,  1133,  1360,  1091,    11,    12,
    1134,  1321,   425,   426,   638,  1359,   646,   647,   493,   932,
     766,   890,   675,   676,   652,    93,   653,   654,   655,   656,
     657,   257,   523,   338,  1021,   891,   914,   915,   494,   916,
     141,    55,   917,  1354,   882,   883,  1218,   915,    55,   119,
     371,   453,   639,    77,   120,   577,   121,   122,  1347,  1348,
    1127,   578,   914,   642,   643,    56,   524,   919,   703,   914,
     496,  1114,    56,   396,   924,   788,    78,  1355,    13,   322,
     445,   642,   643,   596,   797,    34,   765,   800,  1018,   837,
     258,   914,   914,   258,   913,   587,  1354,    14,    79,   123,
    1016,   675,   676,   597,  1007,   913,    93,   258,   579,    15,
     498,  1016,    77,   451,   830,    83,  1246,  1354,    15,   402,
     258,    86,   359,   258,   258,   258,   913,    84,   525,   499,
    1369,   158,  1210,   214,  1354,   500,   159,    41,   160,   122,
     170,   979,   913,   982,   581,   582,   584,   915,  1277,   913,
     989,  1370,  1354,   992,    87,  1361,   887,    89,   915,   646,
     647,   215,  1354,  1354,   397,    90,    42,   652,  1374,   653,
     654,   655,   656,   657,    55,  1216,  1019,   646,   647,   915,
     789,    91,   905,   821,    58,   652,  1378,   653,   654,   655,
     656,   657,  1074,   802,   898,   915,  1387,  1388,    56,   258,
     258,  1217,   915,   258,  1020,   258,  1169,   258,   899,   258,
    1049,   642,   643,    59,  -659,   905,    99,   513,   101,  -659,
     679,   680,    69,    70,   684,    71,   686,   514,   688,  1137,
     831,   672,   673,   674,  1170,   371,  1024,   257,  -659,   773,
     257,   905,  1164,  1226,   675,   676,   934,   670,   671,   672,
     673,   674,    55,    72,   257,    95,    96,    97,   570,   697,
    1021,   821,   675,   676,   905,   905,   822,   257,    92,  1232,
     257,   257,   257,    93,  1072,   900,    56,   257,   598,  1234,
     371,    60,  -666,  1272,   774,  -673,  1279,  -666,    55,   901,
    -673,   126,  1237,  1271,   143,   144,   145,   146,   599,   823,
     642,   643,   605,  1211,  1062,  1060,  -666,   646,   647,  -673,
     340,  -345,    56,   608,  1171,   652,  -345,   258,   654,   655,
     656,   657,   606,   710,    98,   341,  1344,  1345,  1205,  1238,
     258,    84,  1349,   609,  1083,  -345,   128,  1353,   711,  1064,
    1239,  1240,   854,  1221,  1180,    61,   257,   257,   153,   154,
     257,   855,   257,  1065,   257,    62,   257,   776,  1181,   966,
     967,   841,   845,  1372,  1373,   400,    45,   371,   401,   978,
     129,   402,    46,  1039,   984,   985,   859,   987,   988,  1278,
     990,   991,  1040,   993,    99,   100,   101,  1188,  1208,  1044,
    1129,   826,   675,   676,   644,   645,   646,   647,  1045,  1130,
    1090,    52,    53,    54,   652,   104,   653,   654,   655,   656,
     657,   105,   658,   659,   258,   324,  1123,   108,   111,   325,
     114,   130,   258,   109,   112,   258,   115,  1167,  1138,   139,
     132,  1080,   360,   326,   327,   903,   133,  1081,   328,   329,
     330,   331,  1199,   908,  1200,   360,   909,  1274,   905,   138,
     905,   371,   148,   905,   151,   888,   165,   782,   371,   361,
     362,    82,   889,   166,   257,   167,   670,   671,   672,   673,
     674,   371,   361,   362,   371,   892,   169,   257,   894,   371,
    1117,   675,   676,   896,  1118,   168,   371,   371,   371,  1219,
    1089,  1096,  1289,   211,   212,   258,   258,   258,   258,   204,
     371,   824,   258,   957,  1338,    99,   258,  1362,   202,  1144,
     208,   258,   258,   318,   258,   258,   965,   258,   258,   968,
     258,  1153,   363,   974,   319,   577,   364,   320,   211,   212,
     213,   578,   322,   334,   339,   363,   360,   333,   345,   364,
     336,  1261,   346,   347,  1318,   372,   348,   360,   351,  1165,
     349,   358,   380,  1306,   371,   379,   382,  1097,  1098,  1099,
     350,   257,  1102,   361,   362,   153,   154,   809,   810,   257,
     352,   770,   257,  1287,   361,   362,   353,   354,   579,   355,
     356,   357,   360,   365,   980,  1037,   366,   376,   367,  1295,
    1296,   377,   378,  1198,   381,  1122,   365,  1201,   981,   366,
     388,   367,   368,   392,   394,   398,   399,   482,   369,   361,
     362,  1340,   503,   506,  1379,   368,   517,   258,   518,   519,
     567,   369,   574,   575,   585,   586,   363,   592,   591,   600,
     364,   601,   602,   603,   604,   258,   607,   363,   610,   697,
     577,   364,   257,   257,   257,   257,   578,   611,   614,   257,
     682,    15,   635,   257,   513,   615,  1069,   616,   257,   257,
     617,   257,   257,   681,   257,   257,   701,   257,   618,   619,
    1350,  1351,   363,  1352,   636,   678,   364,   698,   704,   705,
     706,   707,   708,   642,   643,   716,   723,   365,   724,   994,
     366,   725,   367,   579,   258,   258,   258,   731,   365,   258,
     732,   366,   734,   367,   733,   735,   368,   736,   741,   737,
     738,   739,   369,   740,   743,   769,  1384,   368,   763,   471,
    1386,  1222,   762,   369,   780,   781,   814,   817,   818,   492,
     775,   784,   258,   365,   833,  1087,   366,  1317,   367,   502,
     785,   786,   836,  1320,   852,   905,   907,   912,   922,   925,
     926,   904,   368,   927,   929,   956,   911,   931,   369,   959,
     969,   566,  1005,  1009,   257,  1021,  1010,  1011,  1027,   573,
    1012,  1015,  1047,  1029,  1022,  1023,  1028,   644,   645,   646,
     647,   648,   257,   258,   649,   650,   651,   652,  1052,   653,
     654,   655,   656,   657,  1030,   658,   659,  1031,  1032,   612,
     613,  1042,  1055,  1057,  1160,   360,  1043,  1059,  1067,  1068,
    1077,  1079,  1083,  1085,  1093,  1094,   622,   625,   626,   627,
     628,   629,  1146,  1163,  1101,  1103,  1212,  1115,  1305,  1104,
     642,   643,   361,   362,  1109,  1112,  1147,  1149,  1154,  1161,
    1196,   257,   257,   257,  1179,  1207,   257,   668,   669,   670,
     671,   672,   673,   674,  1209,  1213,  1214,  1243,   258,  1215,
     258,  1235,  1245,  1248,   675,   676,  1252,  1254,  1253,  1276,
    1259,  1260,  1265,  1267,   700,  1268,  1297,  1284,  1304,   257,
    1294,  1224,  1312,  1314,  1315,  1316,  1356,  1319,  1325,  1357,
     709,  1333,  1358,  1367,   811,   363,  1381,  1375,   715,   364,
     124,    18,   718,    80,  1376,   721,   722,  1377,   164,   127,
    1389,   727,  1298,   730,   142,  1299,  1300,   344,  1301,  1302,
      24,  1283,  1250,  1251,   644,   645,   646,   647,   648,  1308,
     257,   649,   650,   651,   652,  1172,   653,   654,   655,   656,
     657,   714,   658,   659,  1309,   640,  1247,   258,   660,    88,
     662,   772,   954,     0,  1092,     0,   365,     0,  1088,   366,
       0,   367,     0,     0,     0,   258,   589,     0,  1290,   590,
     622,   791,     0,     0,   794,   368,     0,     0,     0,     0,
       0,   369,     0,     0,     0,   803,   804,   805,   806,   807,
     808,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,     0,     0,   838,     0,   257,     0,   257,     0,     0,
       0,   675,   676,     0,     0,   846,   847,     0,     0,   848,
     849,   850,   851,     0,   853,     0,   856,   857,   858,   860,
     861,   862,   863,   864,   865,   867,   868,   869,   870,   871,
     872,   873,   874,   875,   876,   877,     0,   885,     0,     0,
       0,     0,     0,     0,     0,   222,   223,   224,     0,   226,
     227,   228,   229,   230,   424,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,     0,   244,   245,   246,
       0,     0,   249,   250,   251,   252,     0,     0,   921,     0,
       0,   923,     0,     0,   257,     0,     0,     0,     0,     0,
     928,     0,     0,     0,     0,   930,     0,     0,   360,     0,
       0,     0,   257,     0,     0,   935,   936,   937,   938,   939,
     940,   941,   942,   943,   944,   945,   946,   947,   948,   949,
     950,   951,   952,   953,     0,   361,   362,   839,     0,     0,
       0,   824,   960,     0,     0,     0,   840,     0,     0,     0,
       0,     0,   360,   973,     0,     0,   216,     0,     0,     0,
       0,     0,   217,     0,     0,     0,     0,     0,   218,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   219,   361,
     362,  1001,     0,     0,  1003,   622,   220,     0,     0,  1008,
       0,     0,     0,     0,     0,     0,   824,     0,   363,     0,
       0,   221,   364,     0,     0,     0,   566,     0,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   360,   363,     0,     0,     0,   364,     0,     0,     0,
    1041,     0,     0,     0,  1046,     0,     0,     0,     0,   365,
       0,  1100,   366,     0,   367,     0,     0,     0,   361,   362,
       0,     0,     0,     0,     0,    55,  1008,     0,   368,     0,
       0,     0,  1066,     0,   369,     0,     0,     0,   255,  1070,
       0,     0,     0,     0,     0,   216,  1073,     0,     0,    56,
       0,   217,  1076,   365,     0,  1105,   366,   218,   367,     0,
     360,     0,     0,     0,     0,     0,     0,   219,     0,     0,
       0,     0,   368,     0,     0,   220,     0,     0,   369,     0,
       0,   363,     0,     0,     0,   364,     0,   361,   362,     0,
     221,     0,     0,     0,   256,     0,   504,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
       0,     0,  1120,  1121,     0,     0,  1124,  1125,  1126,     0,
    1008,     0,   365,     0,  1106,   366,     0,   367,     0,  1140,
     363,  1142,     0,  1145,   364,     0,     0,     0,     0,  1148,
       0,   368,     0,  1151,    55,     0,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,   642,   643,     0,   508,     0,
       0,     0,     0,     0,     0,   566,     0,     0,   509,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   365,     0,  1107,   366,     0,   367,     0,     0,     0,
       0,     0,     0,     0,   622,     0,     0,     0,     0,     0,
     368,     0,   360,   256,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   361,
     362,     0,     0,     0,     0,     0,     0,     0,  1229,     0,
    1230,     0,     0,     0,     0,  1233,     0,     0,     0,   644,
     645,   646,   647,   648,     0,  1236,   649,   650,   651,   652,
       0,   653,   654,   655,   656,   657,     0,   658,   659,     0,
       0,     0,  1255,   660,   661,   662,     0,     0,     0,   663,
    1262,  1263,  1264,     0,     0,     0,     0,  1270,     0,     0,
     622,  1273,   363,     0,     0,     0,   364,     0,     0,     0,
    1280,  1281,  1282,     0,     0,     0,     0,     0,     0,  1286,
       0,     0,     0,     0,   664,     0,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,     0,     0,     0,     0,
       0,     0,     0,     0,  1303,     0,   675,   676,     0,     0,
     677,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   622,     0,   365,     0,  1108,   366,     0,   367,     0,
       0,     0,     0,     0,     0,  1328,     0,     0,  1331,  1332,
       0,     0,   368,     0,     0,     0,  1335,     0,   369,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1339,     0,
       0,     0,     0,     0,     0,     0,     0,  1341,     0,     0,
       0,     0,     0,  1346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   526,
       0,     0,   407,   408,     3,     0,   527,   528,   529,     0,
     530,  1365,   409,   410,   411,   412,   413,     0,     0,     0,
       0,     0,   414,   531,   415,   532,   533,  1380,   416,     0,
       0,     0,  1382,  1383,     0,   534,   417,     0,     0,   535,
       0,   536,   418,     0,     0,   419,     0,     8,   420,   537,
       0,   538,   421,     0,     0,   539,   540,     0,     0,     0,
       0,     0,   541,     0,     0,   422,   423,     0,   222,   223,
     224,     0,   226,   227,   228,   229,   230,   424,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     0,
     244,   245,   246,     0,     0,   249,   250,   251,   252,   425,
     426,   427,   542,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   428,   429,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,   430,   431,   432,   433,   434,     0,   435,
       0,   436,   437,   438,   439,   440,   441,   442,   443,    56,
     444,     0,     0,     0,     0,     0,     0,   445,   543,   544,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,   447,   448,     0,    14,     0,
       0,   449,   450,     0,     0,     0,     0,     0,     0,     0,
     451,     0,   452,   526,   453,   454,   407,   408,     3,     0,
     527,   528,   529,     0,   530,     0,   409,   410,   411,   412,
     413,     0,     0,     0,     0,     0,   414,   531,   415,   532,
     533,     0,   416,     0,     0,     0,     0,     0,     0,   534,
     417,     0,     0,   535,     0,   536,   418,     0,     0,   419,
       0,     8,   420,   537,     0,   538,   421,     0,     0,   539,
     540,     0,     0,     0,     0,     0,   541,     0,     0,   422,
     423,     0,   222,   223,   224,     0,   226,   227,   228,   229,
     230,   424,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     0,   244,   245,   246,     0,     0,   249,
     250,   251,   252,   425,   426,   427,   542,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   428,   429,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,   430,   431,   432,
     433,   434,     0,   435,     0,   436,   437,   438,   439,   440,
     441,   442,   443,    56,   444,     0,     0,     0,     0,     0,
       0,   445,  1025,   544,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,   447,
     448,     0,    14,     0,     0,   449,   450,     0,     0,     0,
       0,     0,     0,     0,   451,     0,   452,   526,   453,   454,
     407,   408,     3,     0,   527,   528,   529,     0,   530,     0,
     409,   410,   411,   412,   413,     0,     0,     0,     0,     0,
     414,   531,   415,   532,   533,     0,   416,     0,     0,     0,
       0,     0,     0,   534,   417,     0,     0,   535,     0,   536,
     418,     0,     0,   419,     0,     8,   420,   537,     0,   538,
     421,     0,     0,   539,   540,     0,     0,     0,     0,     0,
     541,     0,     0,   422,   423,     0,   222,   223,   224,     0,
     226,   227,   228,   229,   230,   424,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,   244,   245,
     246,     0,     0,   249,   250,   251,   252,   425,   426,   427,
     542,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   428,   429,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,   430,   431,   432,   433,   434,     0,   435,   360,   436,
     437,   438,   439,   440,   441,   442,   443,    56,   444,     0,
       0,     0,     0,     0,     0,   445,  1166,   544,     0,     0,
       0,     0,     0,     0,     0,   361,   362,     0,     0,     0,
       0,     0,   446,   447,   448,     0,    14,     0,     0,   449,
     450,     0,     0,     0,   407,   408,     0,     0,   451,     0,
     452,     0,   453,   454,   409,   410,   411,   412,   413,     0,
       0,     0,     0,     0,   414,   531,   415,   532,     0,   360,
     416,     0,     0,     0,     0,     0,     0,     0,   417,     0,
       0,     0,     0,     0,   418,     0,     0,   419,   363,     0,
     420,   537,   364,     0,   421,     0,   361,   362,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   422,   423,     0,
     222,   223,   224,     0,   226,   227,   228,   229,   230,   424,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,   244,   245,   246,     0,     0,   249,   250,   251,
     252,   425,   426,   427,   542,     0,     0,     0,     0,   365,
       0,  1110,   366,     0,   367,     0,   428,   429,     0,   363,
       0,     0,     0,   364,     0,     0,     0,     0,   368,     0,
       0,     0,     0,     0,   369,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,   430,   431,   432,   433,   434,
       0,   435,     0,   436,   437,   438,   439,   440,   441,   442,
     443,    56,   444,     0,   360,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     365,     0,  1111,   366,     0,   367,   446,   447,   448,     0,
      14,   361,   362,   449,   450,     0,     0,     0,     0,   368,
     407,   408,   451,     0,   452,   369,   453,   454,   630,     0,
     409,   410,   411,   412,   413,     0,     0,     0,     0,     0,
     414,     0,   415,     0,     0,     0,   416,     0,     0,     0,
       0,     0,     0,     0,   417,     0,     0,     0,     0,     0,
     418,     0,     0,   419,   631,     0,   420,     0,     0,     0,
     421,     0,     0,     0,   363,     0,     0,     0,   364,     0,
       0,     0,     0,   422,   423,     0,   222,   223,   224,     0,
     226,   227,   228,   229,   230,   424,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,   244,   245,
     246,     0,     0,   249,   250,   251,   252,   425,   426,   427,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   428,   429,     0,   365,     0,  1113,   366,     0,
     367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,   368,     0,     0,     0,     0,     0,
     369,   430,   431,   432,   433,   434,     0,   435,   826,   436,
     437,   438,   439,   440,   441,   442,   443,   827,   444,     0,
     360,     0,     0,     0,     0,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,   447,   448,     0,    14,   361,   362,   449,
     450,     0,     0,     0,     0,     0,   407,   408,   451,     0,
     452,     0,   453,   454,   630,     0,   409,   410,   411,   412,
     413,     0,     0,     0,     0,     0,   414,     0,   415,     0,
       0,     0,   416,     0,     0,     0,     0,     0,     0,     0,
     417,     0,     0,     0,     0,     0,   418,     0,     0,   419,
     631,     0,   420,     0,     0,     0,   421,     0,     0,     0,
     363,     0,     0,     0,   364,     0,     0,     0,     0,   422,
     423,     0,   222,   223,   224,     0,   226,   227,   228,   229,
     230,   424,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     0,   244,   245,   246,     0,     0,   249,
     250,   251,   252,   425,   426,   427,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   428,   429,
       0,   365,     0,  1183,   366,     0,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
     368,     0,     0,     0,     0,     0,   369,   430,   431,   432,
     433,   434,     0,   435,   360,   436,   437,   438,   439,   440,
     441,   442,   443,    56,   444,     0,     0,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   361,   362,     0,     0,     0,     0,     0,   446,   447,
     448,     0,    14,     0,     0,   449,   450,     0,     0,     0,
     407,   408,     0,     0,   451,     0,   452,     0,   453,   454,
     409,   410,   411,   412,   413,     0,     0,     0,     0,     0,
     414,     0,   415,     0,     0,     0,   416,     0,     0,     0,
       0,     0,     0,     0,   417,     0,     0,     0,     0,     0,
     418,     0,     0,   419,   363,     0,   420,     0,   364,     0,
     421,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   422,   423,     0,   222,   223,   224,     0,
     226,   227,   228,   229,   230,   424,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,   244,   245,
     246,     0,     0,   249,   250,   251,   252,   425,   426,   427,
       0,     0,     0,     0,     0,   365,     0,  1184,   366,     0,
     367,     0,   428,   429,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
     369,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,   430,   431,   432,   433,   434,     0,   435,   826,   436,
     437,   438,   439,   440,   441,   442,   443,   827,   444,     0,
       0,     0,     0,     0,     0,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,   447,   448,     0,    14,     0,     0,   449,
     450,     0,     0,     0,   407,   408,     0,     0,   828,     0,
     452,   829,   453,   454,   409,   410,   411,   412,   413,     0,
       0,   360,     0,     0,   414,     0,   415,     0,     0,   360,
     416,     0,     0,     0,     0,     0,     0,     0,   417,     0,
       0,     0,     0,     0,   418,     0,     0,   419,   361,   362,
     420,     0,     0,     0,   421,     0,   361,   362,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   422,   423,     0,
     222,   223,   224,     0,   226,   227,   228,   229,   230,   424,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,   244,   245,   246,     0,     0,   249,   250,   251,
     252,   425,   426,   427,     0,     0,     0,     0,     0,     0,
       0,   363,     0,     0,     0,   364,   428,   429,     0,   363,
       0,     0,     0,   364,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,   430,   431,   432,   433,   434,
       0,   435,     0,   436,   437,   438,   439,   440,   441,   442,
     443,    56,   444,     0,     0,     0,     0,     0,     0,   445,
       0,     0,   365,     0,  1185,   366,     0,   367,     0,     0,
     365,     0,  1187,   366,     0,   367,   446,   447,   448,     0,
      14,   368,     0,   449,   450,     0,     0,   369,     0,   368,
     407,   408,   451,   501,   452,   369,   453,   454,   621,     0,
     409,   410,   411,   412,   413,     0,     0,   360,     0,     0,
     414,     0,   415,     0,     0,     0,   416,     0,     0,     0,
       0,     0,     0,     0,   417,     0,     0,     0,     0,     0,
     418,     0,     0,   419,   361,   362,   420,     0,     0,     0,
     421,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   422,   423,     0,   222,   223,   224,     0,
     226,   227,   228,   229,   230,   424,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,   244,   245,
     246,     0,     0,   249,   250,   251,   252,   425,   426,   427,
       0,     0,     0,     0,     0,     0,     0,   363,     0,     0,
       0,   364,   428,   429,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,   430,   431,   432,   433,   434,     0,   435,   360,   436,
     437,   438,   439,   440,   441,   442,   443,    56,   444,     0,
       0,     0,     0,     0,     0,   445,     0,     0,   365,     0,
    1204,   366,     0,   367,     0,   361,   362,     0,     0,     0,
       0,     0,   446,   447,   448,     0,    14,   368,     0,   449,
     450,     0,     0,   369,   407,   408,     0,     0,   451,     0,
     452,     0,   453,   454,   409,   410,   411,   412,   413,     0,
       0,     0,     0,     0,   414,     0,   415,     0,     0,     0,
     416,     0,     0,     0,     0,     0,     0,     0,   417,     0,
       0,     0,     0,     0,   418,     0,     0,   419,   363,     0,
     420,     0,   364,     0,   421,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   422,   423,     0,
     222,   223,   224,     0,   226,   227,   228,   229,   230,   424,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,   244,   245,   246,     0,     0,   249,   250,   251,
     252,   425,   426,   427,     0,     0,     0,     0,     0,   365,
       0,  1288,   366,     0,   367,     0,   428,   429,     0,     0,
       0,     0,     0,     0,     0,   717,     0,     0,   368,     0,
       0,     0,     0,     0,   369,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,   430,   431,   432,   433,   434,
       0,   435,   360,   436,   437,   438,   439,   440,   441,   442,
     443,    56,   444,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   361,
     362,     0,     0,     0,     0,     0,   446,   447,   448,     0,
      14,     0,     0,   449,   450,     0,     0,     0,   407,   408,
       0,     0,   451,     0,   452,     0,   453,   454,   409,   410,
     411,   412,   413,     0,     0,     0,     0,     0,   414,     0,
     415,     0,     0,     0,   416,     0,     0,     0,     0,     0,
       0,     0,   417,     0,     0,     0,     0,     0,   418,     0,
       0,   419,   363,     0,   420,     0,   364,     0,   421,     0,
       0,     0,     0,     0,   720,     0,     0,     0,     0,     0,
       0,   422,   423,     0,   222,   223,   224,     0,   226,   227,
     228,   229,   230,   424,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,     0,   244,   245,   246,     0,
       0,   249,   250,   251,   252,   425,   426,   427,     0,     0,
       0,     0,     0,   365,     0,     0,   366,     0,   367,     0,
     428,   429,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,     0,     0,     0,     0,     0,   369,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,   430,
     431,   432,   433,   434,     0,   435,     0,   436,   437,   438,
     439,   440,   441,   442,   443,    56,   444,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,   447,   448,     0,    14,     0,     0,   449,   450,     0,
       0,     0,   407,   408,     0,     0,   451,     0,   452,     0,
     453,   454,   409,   410,   411,   412,   413,     0,     0,     0,
       0,     0,   414,     0,   415,     0,     0,     0,   416,     0,
       0,     0,     0,     0,     0,     0,   417,     0,     0,     0,
       0,     0,   418,     0,     0,   419,     0,     0,   420,     0,
       0,     0,   421,     0,     0,   726,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   422,   423,     0,   222,   223,
     224,     0,   226,   227,   228,   229,   230,   424,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     0,
     244,   245,   246,     0,     0,   249,   250,   251,   252,   425,
     426,   427,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   428,   429,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,   430,   431,   432,   433,   434,     0,   435,
       0,   436,   437,   438,   439,   440,   441,   442,   443,    56,
     444,     0,     0,     0,     0,     0,     0,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,   447,   448,     0,    14,     0,
       0,   449,   450,     0,     0,     0,   407,   408,     0,     0,
     451,     0,   452,     0,   453,   454,   409,   410,   411,   412,
     413,     0,     0,     0,     0,     0,   414,     0,   415,     0,
       0,     0,   416,     0,     0,     0,     0,     0,     0,     0,
     417,     0,     0,     0,     0,     0,   418,     0,     0,   419,
       0,     0,   420,     0,     0,     0,   421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   422,
     423,     0,   222,   223,   224,     0,   226,   227,   228,   229,
     230,   424,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     0,   244,   245,   246,     0,     0,   249,
     250,   251,   252,   425,   426,   427,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   428,   429,
       0,     0,     0,     0,     0,     0,     0,   729,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,   430,   431,   432,
     433,   434,     0,   435,     0,   436,   437,   438,   439,   440,
     441,   442,   443,    56,   444,     0,     0,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,   447,
     448,     0,    14,     0,     0,   449,   450,     0,     0,     0,
     407,   408,     0,     0,   451,     0,   452,     0,   453,   454,
     409,   410,   411,   412,   413,     0,     0,   866,     0,     0,
     414,     0,   415,     0,     0,     0,   416,     0,     0,     0,
       0,     0,     0,     0,   417,     0,     0,     0,     0,     0,
     418,     0,     0,   419,     0,     0,   420,     0,     0,     0,
     421,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   422,   423,     0,   222,   223,   224,     0,
     226,   227,   228,   229,   230,   424,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,   244,   245,
     246,     0,     0,   249,   250,   251,   252,   425,   426,   427,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   428,   429,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,   430,   431,   432,   433,   434,     0,   435,     0,   436,
     437,   438,   439,   440,   441,   442,   443,    56,   444,     0,
       0,     0,     0,     0,     0,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,   447,   448,     0,    14,     0,     0,   449,
     450,     0,     0,     0,   407,   408,     0,     0,   451,     0,
     452,     0,   453,   454,   409,   410,   411,   412,   413,     0,
       0,     0,     0,     0,   414,     0,   415,     0,     0,     0,
     416,     0,     0,     0,     0,     0,     0,     0,   417,     0,
       0,     0,     0,     0,   418,     0,     0,   419,     0,     0,
     420,     0,     0,     0,   421,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   422,   423,     0,
     222,   223,   224,     0,   226,   227,   228,   229,   230,   424,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,   244,   245,   246,     0,     0,   249,   250,   251,
     252,   425,   426,   427,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   428,   429,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,   430,   431,   432,   433,   434,
       0,   435,     0,   436,   437,   438,   439,   440,   441,   442,
     443,    56,   444,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,   447,   448,     0,
      14,     0,     0,   449,   450,     0,     0,     0,   407,   408,
       0,     0,   451,     0,   452,   886,   453,   454,   409,   410,
     411,   412,   413,     0,     0,     0,     0,     0,   414,     0,
     415,     0,     0,     0,   416,     0,     0,     0,     0,     0,
       0,     0,   417,     0,     0,     0,     0,     0,   418,     0,
       0,   419,     0,     0,   420,     0,     0,     0,   421,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   422,   423,     0,   222,   223,   224,     0,   226,   227,
     228,   229,   230,   424,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,     0,   244,   245,   246,     0,
       0,   249,   250,   251,   252,   425,   426,   427,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     428,   429,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,   430,
     431,   432,   433,   434,     0,   435,     0,   436,   437,   438,
     439,   440,   441,   442,   443,    56,   444,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   972,     0,
     446,   447,   448,     0,    14,     0,     0,   449,   450,     0,
       0,     0,   407,   408,     0,     0,   451,     0,   452,     0,
     453,   454,   409,   410,   411,   412,   413,     0,     0,     0,
       0,     0,   414,     0,   415,     0,     0,     0,   416,     0,
       0,     0,     0,     0,     0,     0,   417,     0,     0,     0,
       0,     0,   418,     0,     0,   419,     0,     0,   420,     0,
       0,     0,   421,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   422,   423,     0,   222,   223,
     224,     0,   226,   227,   228,   229,   230,   424,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     0,
     244,   245,   246,     0,     0,   249,   250,   251,   252,   425,
     426,   427,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   428,   429,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,   430,   431,   432,   433,   434,     0,   435,
       0,   436,   437,   438,   439,   440,   441,   442,   443,    56,
     444,     0,     0,     0,     0,     0,     0,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,   447,   448,     0,    14,     0,
       0,   449,   450,     0,     0,     0,   407,   408,     0,     0,
     451,     0,   452,  1143,   453,   454,   409,   410,   411,   412,
     413,     0,     0,     0,     0,     0,   414,     0,   415,     0,
       0,     0,   416,     0,     0,     0,     0,     0,     0,     0,
     417,     0,     0,     0,     0,     0,   418,     0,     0,   419,
       0,     0,   420,     0,     0,     0,   421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   422,
     423,     0,   222,   223,   224,     0,   226,   227,   228,   229,
     230,   424,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     0,   244,   245,   246,     0,     0,   249,
     250,   251,   252,   425,   426,   427,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   428,   429,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,   430,   431,   432,
     433,   434,     0,   435,     0,   436,   437,   438,   439,   440,
     441,   442,   443,    56,   444,     0,     0,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,   447,
     448,     0,    14,     0,     0,   449,   450,     0,     0,     0,
     407,   408,     0,     0,   451,     0,   452,  1152,   453,   454,
     409,   410,   411,   412,   413,     0,     0,     0,     0,     0,
     414,     0,   415,     0,     0,     0,   416,     0,     0,     0,
       0,     0,     0,     0,   417,     0,     0,     0,     0,     0,
     418,     0,     0,   419,     0,     0,   420,     0,     0,     0,
     421,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   422,   423,     0,   222,   223,   224,     0,
     226,   227,   228,   229,   230,   424,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,   244,   245,
     246,     0,     0,   249,   250,   251,   252,   425,   426,   427,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   428,   429,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,   430,   431,   432,   433,   434,     0,   435,     0,   436,
     437,   438,   439,   440,   441,   442,   443,    56,   444,     0,
       0,     0,     0,     0,     0,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,   447,   448,     0,    14,     0,     0,   449,
     450,     0,     0,     0,   407,   408,     0,     0,   451,     0,
     452,  1197,   453,   454,   409,   410,   411,   412,   413,     0,
       0,     0,     0,     0,   414,     0,   415,     0,     0,     0,
     416,     0,     0,     0,     0,     0,     0,     0,   417,     0,
       0,     0,     0,     0,   418,     0,     0,   419,     0,     0,
     420,     0,     0,     0,   421,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   422,   423,     0,
     222,   223,   224,     0,   226,   227,   228,   229,   230,   424,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,   244,   245,   246,     0,     0,   249,   250,   251,
     252,   425,   426,   427,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   428,   429,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,   430,   431,   432,   433,   434,
       0,   435,     0,   436,   437,   438,   439,   440,   441,   442,
     443,    56,   444,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,   447,   448,     0,
      14,     0,     0,   449,   450,     0,     0,     0,   407,   408,
       0,     0,   451,     0,   452,  1269,   453,   454,   409,   410,
     411,   412,   413,     0,     0,     0,     0,     0,   414,     0,
     415,     0,     0,     0,   416,     0,     0,     0,     0,     0,
       0,     0,   417,     0,     0,     0,     0,     0,   418,     0,
       0,   419,     0,     0,   420,     0,     0,     0,   421,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   422,   423,     0,   222,   223,   224,     0,   226,   227,
     228,   229,   230,   424,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,     0,   244,   245,   246,     0,
       0,   249,   250,   251,   252,   425,   426,   427,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     428,   429,     0,     0,     0,     0,     0,     0,     0,  1285,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,   430,
     431,   432,   433,   434,     0,   435,     0,   436,   437,   438,
     439,   440,   441,   442,   443,    56,   444,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,   447,   448,     0,    14,     0,     0,   449,   450,     0,
       0,     0,   407,   408,     0,     0,   451,     0,   452,     0,
     453,   454,   409,   410,   411,   412,   413,     0,     0,     0,
       0,     0,   414,     0,   415,     0,     0,     0,   416,     0,
       0,     0,     0,     0,     0,     0,   417,     0,     0,     0,
       0,     0,   418,     0,     0,   419,     0,     0,   420,     0,
       0,     0,   421,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   422,   423,     0,   222,   223,
     224,     0,   226,   227,   228,   229,   230,   424,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     0,
     244,   245,   246,     0,     0,   249,   250,   251,   252,   425,
     426,   427,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   428,   429,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,   430,   431,   432,   433,   434,     0,   435,
       0,   436,   437,   438,   439,   440,   441,   442,   443,    56,
     444,     0,     0,     0,     0,     0,     0,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,   447,   448,     0,    14,     0,
       0,   449,   450,     0,     0,     0,   407,   408,     0,     0,
     451,     0,   452,     0,   453,   454,   409,   410,   411,   412,
     413,     0,     0,     0,     0,     0,   414,     0,   415,     0,
       0,     0,   416,     0,     0,     0,     0,     0,     0,     0,
     417,     0,     0,     0,     0,     0,   418,     0,     0,   419,
       0,     0,   420,     0,     0,     0,   421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   422,
     423,     0,   222,   223,   224,     0,   226,   227,   228,   229,
     230,   424,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     0,   244,   245,   246,     0,     0,   249,
     250,   251,   252,   425,   426,   427,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   428,   429,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,   430,   431,   432,
     433,   434,     0,   435,     0,   436,   437,   438,   439,   440,
     441,   442,   443,    56,   444,     0,     0,     0,     0,   216,
       0,   445,     0,     0,     0,   217,     0,     0,     0,     0,
       0,   218,     0,     0,     0,     0,     0,     0,   446,   447,
     448,   219,    14,     0,     0,   449,   450,     0,     0,   220,
       0,     0,     0,     0,  1128,     0,   452,     0,   453,   454,
       0,     0,     0,     0,   221,     0,     0,     0,     0,     0,
       0,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,     0,     0,     0,   642,   643,     0,
       0,   216,     0,     0,     0,     0,     0,   217,     0,     0,
       0,     0,     0,   218,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,     0,     0,     0,    55,     0,
       0,   220,     0,   642,   643,     0,     0,     0,     0,     0,
       0,   255,     0,     0,     0,     0,   221,     0,     0,     0,
       0,     0,    56,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,     0,     0,     0,     0,
       0,   644,   645,   646,   647,   648,     0,   256,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,     0,   658,
     659,     0,     0,     0,     0,   660,   661,   662,     0,     0,
      55,   663,     0,     0,     0,   642,   643,   644,   645,   646,
     647,   648,     0,   255,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,   508,   658,   659,     0,     0,     0,
       0,   660,   661,   662,     0,     0,   664,   663,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   675,   676,
       0,     0,   694,     0,     0,     0,     0,     0,     0,   256,
       0,     0,   664,     0,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   675,   676,     0,     0,   768,   644,
     645,   646,   647,   648,   642,   643,   649,   650,   651,   652,
       0,   653,   654,   655,   656,   657,     0,   658,   659,     0,
       0,     0,     0,   660,   661,   662,     0,     0,     0,   663,
       0,     0,     0,     0,     0,   642,   643,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   664,     0,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   675,   676,     0,     0,
     910,     0,     0,     0,     0,     0,     0,     0,   644,   645,
     646,   647,   648,     0,     0,   649,   650,   651,   652,     0,
     653,   654,   655,   656,   657,     0,   658,   659,     0,     0,
       0,     0,   660,   661,   662,     0,     0,     0,   663,   644,
     645,   646,   647,   648,   642,   643,   649,   650,   651,   652,
       0,   653,   654,   655,   656,   657,     0,   658,   659,     0,
       0,     0,     0,   660,   661,   662,     0,     0,     0,   663,
       0,     0,     0,   664,     0,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   675,   676,     0,     0,   983,
       0,     0,     0,     0,   664,     0,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   675,   676,     0,     0,
     986,     0,     0,     0,     0,     0,   642,   643,   644,   645,
     646,   647,   648,     0,     0,   649,   650,   651,   652,     0,
     653,   654,   655,   656,   657,     0,   658,   659,     0,     0,
       0,     0,   660,   661,   662,     0,     0,     0,   663,   642,
     643,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   664,     0,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   675,   676,     0,     0,   995,
     644,   645,   646,   647,   648,     0,     0,   649,   650,   651,
     652,     0,   653,   654,   655,   656,   657,     0,   658,   659,
       0,     0,     0,     0,   660,   661,   662,     0,     0,     0,
     663,   642,   643,   644,   645,   646,   647,   648,     0,     0,
     649,   650,   651,   652,     0,   653,   654,   655,   656,   657,
       0,   658,   659,     0,     0,     0,     0,   660,   661,   662,
       0,     0,     0,   663,     0,   664,     0,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   675,   676,     0,
       0,   996,     0,     0,     0,     0,     0,     0,   664,     0,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     675,   676,     0,     0,   997,   644,   645,   646,   647,   648,
     642,   643,   649,   650,   651,   652,     0,   653,   654,   655,
     656,   657,     0,   658,   659,     0,     0,     0,     0,   660,
     661,   662,     0,     0,     0,   663,     0,     0,     0,     0,
       0,   642,   643,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     664,     0,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   675,   676,     0,     0,   998,     0,     0,     0,
       0,     0,     0,     0,   644,   645,   646,   647,   648,     0,
       0,   649,   650,   651,   652,     0,   653,   654,   655,   656,
     657,     0,   658,   659,     0,     0,     0,     0,   660,   661,
     662,     0,     0,     0,   663,   644,   645,   646,   647,   648,
     642,   643,   649,   650,   651,   652,     0,   653,   654,   655,
     656,   657,     0,   658,   659,     0,     0,     0,     0,   660,
     661,   662,     0,     0,     0,   663,     0,     0,     0,   664,
       0,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   675,   676,     0,     0,   999,     0,     0,     0,     0,
     664,     0,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   675,   676,     0,     0,  1000,     0,     0,     0,
       0,     0,   642,   643,   644,   645,   646,   647,   648,     0,
       0,   649,   650,   651,   652,     0,   653,   654,   655,   656,
     657,     0,   658,   659,     0,     0,     0,     0,   660,   661,
     662,     0,     0,     0,   663,   642,   643,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   664,
       0,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   675,   676,     0,     0,  1075,   644,   645,   646,   647,
     648,     0,     0,   649,   650,   651,   652,     0,   653,   654,
     655,   656,   657,     0,   658,   659,     0,     0,     0,     0,
     660,   661,   662,     0,     0,     0,   663,   642,   643,   644,
     645,   646,   647,   648,     0,     0,   649,   650,   651,   652,
       0,   653,   654,   655,   656,   657,     0,   658,   659,     0,
       0,     0,     0,   660,   661,   662,     0,     0,     0,   663,
       0,   664,     0,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   675,   676,     0,     0,  1095,     0,     0,
       0,     0,     0,     0,   664,     0,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   675,   676,     0,     0,
    1162,   644,   645,   646,   647,   648,   642,   643,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,     0,   658,
     659,     0,     0,     0,     0,   660,   661,   662,     0,     0,
       0,   663,     0,     0,     0,     0,     0,   642,   643,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   664,     0,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   675,   676,
       0,     0,  1168,     0,     0,     0,     0,     0,     0,     0,
     644,   645,   646,   647,   648,     0,     0,   649,   650,   651,
     652,     0,   653,   654,   655,   656,   657,     0,   658,   659,
       0,     0,     0,     0,   660,   661,   662,     0,     0,     0,
     663,   644,   645,   646,   647,   648,   642,   643,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,     0,   658,
     659,     0,     0,     0,     0,   660,   661,   662,     0,     0,
       0,   663,     0,     0,     0,   664,     0,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   675,   676,     0,
       0,  1202,     0,     0,     0,     0,   664,     0,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   675,   676,
       0,     0,  1203,     0,     0,     0,     0,     0,   642,   643,
     644,   645,   646,   647,   648,     0,     0,   649,   650,   651,
     652,     0,   653,   654,   655,   656,   657,     0,   658,   659,
       0,     0,     0,     0,   660,   661,   662,     0,     0,     0,
     663,   642,   643,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   664,     0,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   675,   676,     0,
       0,  1206,   644,   645,   646,   647,   648,     0,     0,   649,
     650,   651,   652,     0,   653,   654,   655,   656,   657,     0,
     658,   659,     0,     0,     0,     0,   660,   661,   662,     0,
       0,     0,   663,   642,   643,   644,   645,   646,   647,   648,
       0,     0,   649,   650,   651,   652,     0,   653,   654,   655,
     656,   657,     0,   658,   659,     0,     0,     0,     0,   660,
     661,   662,     0,     0,     0,   663,     0,   664,     0,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   675,
     676,     0,     0,  1223,     0,     0,     0,     0,     0,     0,
     664,     0,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   675,   676,     0,     0,  1225,   644,   645,   646,
     647,   648,   642,   643,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,     0,   658,   659,     0,     0,     0,
       0,   660,   661,   662,     0,     0,     0,   663,     0,     0,
       0,     0,     0,   642,   643,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   664,     0,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   675,   676,     0,     0,  1227,     0,
       0,     0,     0,     0,     0,     0,   644,   645,   646,   647,
     648,     0,     0,   649,   650,   651,   652,     0,   653,   654,
     655,   656,   657,     0,   658,   659,     0,     0,     0,     0,
     660,   661,   662,     0,     0,     0,   663,   644,   645,   646,
     647,   648,   642,   643,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,     0,   658,   659,     0,     0,     0,
       0,   660,   661,   662,     0,     0,     0,   663,     0,     0,
       0,   664,     0,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   675,   676,     0,     0,  1231,     0,     0,
       0,     0,   664,     0,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   675,   676,     0,     0,  1291,     0,
       0,     0,     0,     0,   642,   643,   644,   645,   646,   647,
     648,     0,     0,   649,   650,   651,   652,     0,   653,   654,
     655,   656,   657,     0,   658,   659,     0,     0,     0,     0,
     660,   661,   662,     0,     0,     0,   663,   642,   643,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   664,     0,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   675,   676,     0,     0,  1292,   644,   645,
     646,   647,   648,     0,     0,   649,   650,   651,   652,     0,
     653,   654,   655,   656,   657,     0,   658,   659,     0,     0,
       0,     0,   660,   661,   662,     0,     0,     0,   663,   642,
     643,   644,   645,   646,   647,   648,     0,     0,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,     0,   658,
     659,     0,     0,     0,     0,   660,   661,   662,     0,     0,
       0,   663,     0,   664,     0,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   675,   676,     0,     0,  1293,
       0,     0,     0,     0,     0,     0,   664,     0,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   675,   676,
       0,     0,  1313,   644,   645,   646,   647,   648,   642,   643,
     649,   650,   651,   652,     0,   653,   654,   655,   656,   657,
       0,   658,   659,     0,     0,     0,     0,   660,   661,   662,
       0,     0,     0,   663,     0,     0,     0,     0,     0,   642,
     643,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   664,     0,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     675,   676,     0,     0,  1324,     0,     0,     0,     0,     0,
       0,     0,   644,   645,   646,   647,   648,     0,     0,   649,
     650,   651,   652,     0,   653,   654,   655,   656,   657,     0,
     658,   659,     0,     0,     0,     0,   660,   661,   662,     0,
       0,     0,   663,   644,   645,   646,   647,   648,   642,   643,
     649,   650,   651,   652,     0,   653,   654,   655,   656,   657,
       0,   658,   659,     0,     0,     0,     0,   660,   661,   662,
       0,     0,     0,   663,     0,     0,     0,   664,     0,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   675,
     676,     0,     0,  1334,     0,     0,     0,     0,   664,     0,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     675,   676,     0,     0,  1364,     0,     0,     0,     0,     0,
     642,   643,   644,   645,   646,   647,   648,     0,     0,   649,
     650,   651,   652,     0,   653,   654,   655,   656,   657,     0,
     658,   659,     0,     0,     0,     0,   660,   661,   662,     0,
       0,     0,   663,   642,   643,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   664,     0,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   675,
     676,     0,     0,  1371,   644,   645,   646,   647,   648,     0,
       0,   649,   650,   651,   652,     0,   653,   654,   655,   656,
     657,     0,   658,   659,     0,     0,     0,     0,   660,   661,
     662,     0,     0,     0,   663,   642,   643,   644,   645,   646,
     647,   648,     0,     0,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,     0,   658,   659,     0,     0,     0,
       0,   660,   661,   662,     0,     0,     0,   663,     0,   664,
       0,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   675,   676,   699,     0,     0,     0,     0,     0,     0,
       0,     0,   664,     0,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   675,   676,   906,   642,   643,   644,
     645,   646,   647,   648,     0,     0,   649,   650,   651,   652,
       0,   653,   654,   655,   656,   657,     0,   658,   659,     0,
       0,     0,     0,   660,   661,   662,     0,     0,     0,   663,
     642,   643,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   664,     0,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   675,   676,  1033,     0,
       0,   644,   645,   646,   647,   648,     0,     0,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,     0,   658,
     659,     0,     0,     0,     0,   660,   661,   662,     0,     0,
       0,   663,   642,   643,   644,   645,   646,   647,   648,     0,
       0,   649,   650,   651,   652,     0,   653,   654,   655,   656,
     657,     0,   658,   659,     0,     0,     0,     0,   660,   661,
     662,     0,     0,     0,   663,     0,   664,     0,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   675,   676,
    1048,     0,     0,     0,     0,     0,     0,     0,     0,   664,
       0,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   675,   676,  1150,     0,     0,   644,   645,   646,   647,
     648,   642,   643,   649,   650,   651,   652,     0,   653,   654,
     655,   656,   657,     0,   658,   659,     0,     0,     0,     0,
     660,   661,   662,     0,     0,     0,   663,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   664,     0,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   675,   676,  1155,     0,   744,   745,   746,
     747,   748,   749,   750,   751,   644,   645,   646,   647,   648,
     752,   753,   649,   650,   651,   652,   754,   653,   654,   655,
     656,   657,   755,   658,   659,   756,   757,   267,   268,   660,
     661,   662,   758,   759,   760,   663,     0,     0,     0,     0,
       0,     0,     0,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   642,   643,
       0,     0,  -316,     0,     0,     0,     0,     0,     0,   761,
     664,     0,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   675,   676,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,     0,     0,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,     0,     0,   296,   297,   298,   299,   300,
     301,   302,   644,   645,   646,   647,   648,   642,   643,   649,
     650,   651,   652,     0,   653,   654,   655,   656,   657,     0,
     658,   659,     0,     0,   813,     0,   660,   661,   662,     0,
       0,     0,   663,     0,     0,     0,   303,     0,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,     0,     0,
     314,   315,     0,     0,     0,     0,     0,     0,   316,   317,
       0,     0,     0,     0,     0,     0,     0,   664,     0,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   675,
     676,     0,     0,     0,     0,     0,   642,   643,     0,     0,
       0,   644,   645,   646,   647,   648,     0,     0,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,     0,   658,
     659,     0,     0,     0,     0,   660,   661,   662,     0,     0,
       0,   663,   642,   643,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   322,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   664,     0,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   675,   676,
     644,   645,   646,   647,   648,     0,     0,   649,   650,   651,
     652,     0,   653,   654,   655,   656,   657,     0,   658,   659,
       0,     0,     0,     0,   660,   661,   662,     0,     0,     0,
     663,   642,   643,     0,     0,     0,   644,   645,   646,   647,
     648,     0,     0,   649,   650,   651,   652,     0,   653,   654,
     655,   656,   657,     0,   658,   659,     0,   961,     0,     0,
     660,   661,   662,     0,     0,   664,   663,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   675,   676,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   664,  1038,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   642,   643,     0,     0,     0,     0,     0,
       0,     0,     0,   675,   676,   644,   645,   646,   647,   648,
       0,     0,   649,   650,   651,   652,     0,   653,   654,   655,
     656,   657,     0,   658,   659,   642,   643,     0,     0,   660,
     661,   662,     0,     0,     0,   663,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1086,     0,     0,     0,     0,     0,     0,     0,
     664,     0,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,     0,     0,     0,     0,     0,   644,   645,   646,
     647,   648,   675,   676,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,     0,   658,   659,   642,   643,     0,
       0,   660,   661,   662,     0,     0,     0,   663,     0,   644,
     645,   646,   647,   648,     0,     0,   649,   650,   651,   652,
       0,   653,   654,   655,   656,   657,     0,   658,   659,     0,
    1116,   642,   643,   660,   661,   662,     0,     0,     0,   663,
       0,     0,   664,     0,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   675,   676,  1325,     0,     0,     0,
       0,     0,     0,     0,   664,     0,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,     0,     0,     0,     0,
       0,   644,   645,   646,   647,   648,   675,   676,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,     0,   658,
     659,     0,     0,   642,   643,   660,   661,   662,     0,     0,
       0,   663,     0,     0,     0,   644,   645,   646,   647,   648,
       0,     0,   649,   650,   651,   652,     0,   653,   654,   655,
     656,   657,     0,   658,   659,   642,   643,     0,  1366,   660,
     661,   662,     0,     0,     0,   663,   664,     0,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   675,   676,
       0,     0,  1385,     0,     0,     0,     0,     0,     0,     0,
     664,     0,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,     0,     0,     0,     0,     0,   644,   645,   646,
     647,   648,   675,   676,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,     0,   658,   659,   642,   643,     0,
       0,   660,   661,   662,     0,     0,     0,   663,     0,   644,
     645,   646,   647,   648,     0,     0,   649,   650,   651,   652,
       0,   653,   654,   655,   656,   657,     0,   658,   659,   642,
     643,     0,     0,   660,   661,   662,     0,     0,     0,  -674,
       0,     0,   664,     0,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   675,   676,     0,     0,     0,     0,
       0,     0,     0,     0,   664,     0,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,     0,     0,     0,     0,
       0,   644,   645,   646,   647,   648,   675,   676,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,     0,   658,
     659,   642,   643,     0,     0,   660,   661,   662,     0,     0,
       0,     0,     0,   644,   645,   646,   647,   648,     0,     0,
     649,   650,   651,   652,     0,   653,   654,   655,   656,   657,
       0,   658,   659,   642,   643,     0,     0,   660,     0,     0,
       0,     0,     0,     0,     0,     0,   664,     0,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   675,   676,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
       0,     0,     0,     0,     0,   644,   645,   646,   647,   648,
     675,   676,   649,   650,   651,   652,     0,   653,   654,   655,
     656,   657,     0,   658,   659,   642,   643,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   644,   645,   646,
     647,   648,     0,     0,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,     0,   658,   659,   642,   643,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   675,   676,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   666,   667,   668,   669,   670,
     671,   672,   673,   674,     0,     0,     0,     0,     0,   644,
     645,   646,   647,   648,   675,   676,   649,   650,   651,   652,
       0,   653,   654,   655,   656,   657,     0,   658,   659,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   644,   645,   646,   647,   648,     0,     0,   649,     0,
       0,   652,     0,   653,   654,   655,   656,   657,     0,   658,
     659,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   667,   668,
     669,   670,   671,   672,   673,   674,   842,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   675,   676,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   668,   669,   670,   671,   672,   673,   674,  1034,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   675,   676,
       0,     0,     0,     0,     0,     0,     0,     0,   222,   223,
     224,     0,   226,   227,   228,   229,   230,   424,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     0,
     244,   245,   246,     0,     0,   249,   250,   251,   252,     0,
     222,   223,   224,     0,   226,   227,   228,   229,   230,   424,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,   244,   245,   246,     0,     0,   249,   250,   251,
     252,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     843,     0,   171,     0,     0,     0,     0,     0,     0,   844,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1035,     0,     0,     0,     0,     0,   172,     0,
     173,  1036,   174,   175,   176,   177,   178,     0,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,     0,
     190,   191,   192,     0,     0,   193,   194,   195,   196,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   197,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199
};

static const yytype_int16 yycheck[] =
{
      14,    15,   576,   599,   165,   533,   713,   485,   152,   487,
     685,   489,   687,   541,   689,   491,   636,   490,   814,   781,
     396,   638,    77,     4,    19,   165,   149,     0,   621,    14,
      15,    19,   463,     6,   837,     4,     5,   630,   154,    32,
      20,    21,   569,     7,   127,   128,    60,    61,    62,    45,
     452,   171,   149,    19,    19,    24,    29,  1193,    31,    61,
      33,    30,    18,    19,  1307,   124,    39,    21,   127,   128,
       6,  1275,   125,   371,   152,   177,    49,   161,   131,    32,
    1273,   146,    55,   161,   207,    99,   100,   101,   102,   178,
     127,   128,   494,   138,   139,   140,   161,   624,    67,    68,
    1343,   203,    56,   401,   125,   632,    79,   634,   205,   105,
     207,    14,    15,    49,   125,   152,  1252,  1253,   201,   202,
     101,   102,   206,   716,   161,   178,  1330,   205,   101,   102,
     183,  1267,   101,   102,   169,  1328,   116,   117,   184,   204,
     571,   171,   201,   202,   124,   137,   126,   127,   128,   129,
     130,   165,   171,   208,   177,   185,   177,   178,   204,   180,
     205,   137,   183,   171,   201,   202,   136,   178,   137,   154,
     181,   206,   207,   177,   159,   125,   161,   162,  1314,  1315,
     203,   131,   177,    20,    21,   161,   205,   715,   180,   177,
     183,   994,   161,   337,   722,   597,   180,   205,   171,   169,
     169,    20,    21,   184,   606,   161,   170,   609,   828,   640,
     371,   177,   177,   374,   125,   184,   171,   190,   177,   204,
     131,   201,   202,   204,   817,   125,   137,   388,   178,   202,
     183,   131,   177,   202,   636,   189,   180,   171,   202,   183,
     401,   161,   256,   404,   405,   406,   125,   201,   388,   202,
     205,   154,   131,   177,   171,   208,   159,   161,   161,   162,
     205,   788,   125,   790,   404,   405,   406,   178,   131,   125,
     797,   205,   171,   800,   171,   131,   678,   161,   178,   116,
     117,   205,   171,   171,   339,   161,   190,   124,   205,   126,
     127,   128,   129,   130,   137,   177,   177,   116,   117,   178,
     598,   161,   177,   146,    33,   124,   205,   126,   127,   128,
     129,   130,   929,   611,   171,   178,   205,   205,   161,   480,
     481,   203,   178,   484,   205,   486,   177,   488,   185,   490,
     205,    20,    21,    62,   180,   177,   138,   161,   140,   185,
     480,   481,     4,     5,   484,     7,   486,   171,   488,  1024,
     970,   188,   189,   190,   205,   181,   834,   371,   204,   185,
     374,   177,  1069,   205,   201,   202,   742,   186,   187,   188,
     189,   190,   137,    35,   388,    60,    61,    62,   392,   781,
     177,   146,   201,   202,   177,   177,   151,   401,   161,   205,
     404,   405,   406,   137,   922,   171,   161,   411,   184,  1161,
     181,   130,   180,  1199,   185,   180,   203,   185,   137,   185,
     185,   154,   205,   205,    99,   100,   101,   102,   204,   184,
      20,    21,   184,  1130,   900,   898,   204,   116,   117,   204,
     146,   180,   161,   184,    46,   124,   185,   598,   127,   128,
     129,   130,   204,   146,   204,   161,  1310,  1311,  1123,    11,
     611,   201,  1316,   204,    66,   204,   161,  1321,   161,   171,
      22,    23,   152,  1138,   171,   194,   480,   481,   163,   164,
     484,   161,   486,   185,   488,   204,   490,   171,   185,   777,
     778,   642,   643,  1347,  1348,   177,    56,   181,   180,   787,
     161,   183,    62,   152,   792,   793,   657,   795,   796,  1206,
     798,   799,   161,   801,   138,   139,   140,  1103,  1128,   152,
     152,   152,   201,   202,   114,   115,   116,   117,   161,   161,
     161,    10,    11,    12,   124,    56,   126,   127,   128,   129,
     130,    62,   132,   133,   695,    74,  1014,    56,    56,    78,
      56,   161,   703,    62,    62,   706,    62,  1075,  1026,   163,
      56,    56,    32,    92,    93,   695,    62,    62,    97,    98,
      99,   100,   171,   703,   171,    32,   706,   171,   177,   161,
     177,   181,   161,   177,   169,   185,   178,   591,   181,    59,
      60,    56,   185,   169,   598,   169,   186,   187,   188,   189,
     190,   181,    59,    60,   181,   185,   163,   611,   185,   181,
    1002,   201,   202,   185,  1006,   169,   181,   181,   181,  1137,
     185,   185,   185,   163,   164,   776,   777,   778,   779,   105,
     181,   635,   783,   767,   185,   138,   787,  1334,   180,  1031,
     207,   792,   793,    34,   795,   796,   776,   798,   799,   779,
     801,  1043,   122,   783,    34,   125,   126,   204,   163,   164,
     165,   131,   169,   161,   207,   122,    32,   169,   184,   126,
     170,  1188,   184,   184,  1260,   161,   204,    32,   204,  1071,
     184,   204,    21,  1247,   181,   203,   203,   975,   976,   977,
     184,   695,   980,    59,    60,   163,   164,   165,   166,   703,
     184,   171,   706,  1221,    59,    60,   184,   184,   178,   184,
     184,   184,    32,   183,   171,   866,   186,   161,   188,  1237,
    1238,   161,   161,  1115,   161,  1013,   183,  1119,   185,   186,
     180,   188,   202,   180,   169,   204,    42,   161,   208,    59,
      60,  1305,   202,   177,  1354,   202,   161,   898,   131,   204,
     161,   208,   161,   161,   184,   184,   122,   184,   204,   204,
     126,   184,   184,   204,   184,   916,   184,   122,   184,  1161,
     125,   126,   776,   777,   778,   779,   131,   184,   204,   783,
     161,   202,   207,   787,   161,   204,   916,   204,   792,   793,
     204,   795,   796,   205,   798,   799,   161,   801,   204,   204,
    1317,  1318,   122,  1320,   204,   204,   126,   203,   171,   170,
     180,   171,   170,    20,    21,   204,   161,   183,   171,   185,
     186,   154,   188,   178,   975,   976,   977,    36,   183,   980,
     171,   186,   204,   188,   171,     9,   202,   171,    65,   171,
     171,   171,   208,   171,   171,    42,  1364,   202,   177,   348,
    1368,  1139,   178,   208,   204,   204,   177,    12,   177,   358,
     185,   184,  1013,   183,   202,   185,   186,  1259,   188,   368,
     184,   184,   207,  1265,   161,   177,   170,    42,    13,   178,
     180,   205,   202,   154,   169,     7,   204,   204,   208,   161,
      69,   390,   170,   203,   898,   177,   205,   204,   184,   398,
     204,   204,     1,   184,   205,   202,   204,   114,   115,   116,
     117,   118,   916,  1064,   121,   122,   123,   124,   161,   126,
     127,   128,   129,   130,   204,   132,   133,   204,   204,   428,
     429,   204,   185,   185,  1064,    32,   204,   185,   161,   161,
     161,   170,    66,   171,   205,   161,   445,   446,   447,   448,
     449,   450,   184,    42,   205,   204,   161,   204,  1246,   205,
      20,    21,    59,    60,   205,   205,   204,   204,   204,   204,
     204,   975,   976,   977,   205,   205,   980,   184,   185,   186,
     187,   188,   189,   190,   204,   161,   161,    11,  1139,   161,
    1141,   161,   161,    32,   201,   202,   204,   161,   204,   185,
     204,   204,   204,   204,   503,   204,   204,   203,   171,  1013,
     205,  1141,   185,   204,   204,   204,    52,   205,   171,   170,
     519,   205,   203,   171,   620,   122,   203,   205,   527,   126,
      76,     1,   531,    42,   205,   534,   535,   205,   128,    79,
    1384,   540,  1243,   542,    98,  1243,  1243,   214,  1243,  1243,
       1,  1216,  1172,  1175,   114,   115,   116,   117,   118,  1250,
    1064,   121,   122,   123,   124,  1082,   126,   127,   128,   129,
     130,   523,   132,   133,  1251,   470,  1170,  1228,   138,    51,
     140,   580,   763,    -1,   970,    -1,   183,    -1,   185,   186,
      -1,   188,    -1,    -1,    -1,  1246,   411,    -1,  1228,   411,
     599,   600,    -1,    -1,   603,   202,    -1,    -1,    -1,    -1,
      -1,   208,    -1,    -1,    -1,   614,   615,   616,   617,   618,
     619,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    18,    -1,  1139,    -1,  1141,    -1,    -1,
      -1,   201,   202,    -1,    -1,   644,   645,    -1,    -1,   648,
     649,   650,   651,    -1,   653,    -1,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,    -1,   676,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      -1,    -1,    97,    98,    99,   100,    -1,    -1,   717,    -1,
      -1,   720,    -1,    -1,  1228,    -1,    -1,    -1,    -1,    -1,
     729,    -1,    -1,    -1,    -1,   734,    -1,    -1,    32,    -1,
      -1,    -1,  1246,    -1,    -1,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   756,   757,   758,
     759,   760,   761,   762,    -1,    59,    60,   152,    -1,    -1,
      -1,  1275,   771,    -1,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    32,   782,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    59,
      60,   810,    -1,    -1,   813,   814,    48,    -1,    -1,   818,
      -1,    -1,    -1,    -1,    -1,    -1,  1330,    -1,   122,    -1,
      -1,    63,   126,    -1,    -1,    -1,   835,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    32,   122,    -1,    -1,    -1,   126,    -1,    -1,    -1,
     879,    -1,    -1,    -1,   883,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,    -1,   188,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,   137,   905,    -1,   202,    -1,
      -1,    -1,   911,    -1,   208,    -1,    -1,    -1,   150,   918,
      -1,    -1,    -1,    -1,    -1,    18,   925,    -1,    -1,   161,
      -1,    24,   931,   183,    -1,   185,   186,    30,   188,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,   202,    -1,    -1,    48,    -1,    -1,   208,    -1,
      -1,   122,    -1,    -1,    -1,   126,    -1,    59,    60,    -1,
      63,    -1,    -1,    -1,   206,    -1,   208,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      -1,    -1,  1011,  1012,    -1,    -1,  1015,  1016,  1017,    -1,
    1019,    -1,   183,    -1,   185,   186,    -1,   188,    -1,  1028,
     122,  1030,    -1,  1032,   126,    -1,    -1,    -1,    -1,  1038,
      -1,   202,    -1,  1042,   137,    -1,    -1,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,  1074,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,    -1,   188,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1103,    -1,    -1,    -1,    -1,    -1,
     202,    -1,    32,   206,    -1,    -1,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1147,    -1,
    1149,    -1,    -1,    -1,    -1,  1154,    -1,    -1,    -1,   114,
     115,   116,   117,   118,    -1,  1164,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,   130,    -1,   132,   133,    -1,
      -1,    -1,  1181,   138,   139,   140,    -1,    -1,    -1,   144,
    1189,  1190,  1191,    -1,    -1,    -1,    -1,  1196,    -1,    -1,
    1199,  1200,   122,    -1,    -1,    -1,   126,    -1,    -1,    -1,
    1209,  1210,  1211,    -1,    -1,    -1,    -1,    -1,    -1,  1218,
      -1,    -1,    -1,    -1,   179,    -1,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1243,    -1,   201,   202,    -1,    -1,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1260,    -1,   183,    -1,   185,   186,    -1,   188,    -1,
      -1,    -1,    -1,    -1,    -1,  1274,    -1,    -1,  1277,  1278,
      -1,    -1,   202,    -1,    -1,    -1,  1285,    -1,   208,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1297,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1306,    -1,    -1,
      -1,    -1,    -1,  1312,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,  1340,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,  1356,    30,    -1,
      -1,    -1,  1361,  1362,    -1,    37,    38,    -1,    -1,    41,
      -1,    43,    44,    -1,    -1,    47,    -1,    49,    50,    51,
      -1,    53,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    -1,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,   148,   149,    -1,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,   169,   170,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,   188,    -1,   190,    -1,
      -1,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    -1,   204,     1,   206,   207,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    -1,    41,    -1,    43,    44,    -1,    -1,    47,
      -1,    49,    50,    51,    -1,    53,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    -1,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     148,   149,    -1,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,
      -1,   169,   170,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,
     188,    -1,   190,    -1,    -1,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,   204,     1,   206,   207,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    -1,    41,    -1,    43,
      44,    -1,    -1,    47,    -1,    49,    50,    51,    -1,    53,
      54,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    -1,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   148,   149,    -1,   151,    32,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,   169,   170,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,   186,   187,   188,    -1,   190,    -1,    -1,   193,
     194,    -1,    -1,    -1,     4,     5,    -1,    -1,   202,    -1,
     204,    -1,   206,   207,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    -1,    32,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,   122,    -1,
      50,    51,   126,    -1,    54,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,    -1,   188,    -1,   116,   117,    -1,   122,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,   202,    -1,
      -1,    -1,    -1,    -1,   208,    -1,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   148,   149,
      -1,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,    32,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,    -1,   188,   186,   187,   188,    -1,
     190,    59,    60,   193,   194,    -1,    -1,    -1,    -1,   202,
       4,     5,   202,    -1,   204,   208,   206,   207,    12,    -1,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    48,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,   122,    -1,    -1,    -1,   126,    -1,
      -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,   183,    -1,   185,   186,    -1,
     188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   202,    -1,    -1,    -1,    -1,    -1,
     208,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
      32,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,   187,   188,    -1,   190,    59,    60,   193,
     194,    -1,    -1,    -1,    -1,    -1,     4,     5,   202,    -1,
     204,    -1,   206,   207,    12,    -1,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      48,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,
     122,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    67,
      68,    -1,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,   183,    -1,   185,   186,    -1,   188,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     202,    -1,    -1,    -1,    -1,    -1,   208,   145,   146,   147,
     148,   149,    -1,   151,    32,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,   186,   187,
     188,    -1,   190,    -1,    -1,   193,   194,    -1,    -1,    -1,
       4,     5,    -1,    -1,   202,    -1,   204,    -1,   206,   207,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,   122,    -1,    50,    -1,   126,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,    -1,
     188,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,
     208,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,   187,   188,    -1,   190,    -1,    -1,   193,
     194,    -1,    -1,    -1,     4,     5,    -1,    -1,   202,    -1,
     204,   205,   206,   207,    14,    15,    16,    17,    18,    -1,
      -1,    32,    -1,    -1,    24,    -1,    26,    -1,    -1,    32,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    59,    60,
      50,    -1,    -1,    -1,    54,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,   126,   116,   117,    -1,   122,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   148,   149,
      -1,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,   169,
      -1,    -1,   183,    -1,   185,   186,    -1,   188,    -1,    -1,
     183,    -1,   185,   186,    -1,   188,   186,   187,   188,    -1,
     190,   202,    -1,   193,   194,    -1,    -1,   208,    -1,   202,
       4,     5,   202,   203,   204,   208,   206,   207,    12,    -1,
      14,    15,    16,    17,    18,    -1,    -1,    32,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    59,    60,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,   126,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   148,   149,    -1,   151,    32,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,   183,    -1,
     185,   186,    -1,   188,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,   186,   187,   188,    -1,   190,   202,    -1,   193,
     194,    -1,    -1,   208,     4,     5,    -1,    -1,   202,    -1,
     204,    -1,   206,   207,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,   122,    -1,
      50,    -1,   126,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,    -1,   188,    -1,   116,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,   202,    -1,
      -1,    -1,    -1,    -1,   208,    -1,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   148,   149,
      -1,   151,    32,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,   186,   187,   188,    -1,
     190,    -1,    -1,   193,   194,    -1,    -1,    -1,     4,     5,
      -1,    -1,   202,    -1,   204,    -1,   206,   207,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    47,   122,    -1,    50,    -1,   126,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    -1,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,   186,    -1,   188,    -1,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,   208,    -1,
      -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,   149,    -1,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,    -1,
      -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,   187,   188,    -1,   190,    -1,    -1,   193,   194,    -1,
      -1,    -1,     4,     5,    -1,    -1,   202,    -1,   204,    -1,
     206,   207,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,   148,   149,    -1,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,   188,    -1,   190,    -1,
      -1,   193,   194,    -1,    -1,    -1,     4,     5,    -1,    -1,
     202,    -1,   204,    -1,   206,   207,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     148,   149,    -1,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,
     188,    -1,   190,    -1,    -1,   193,   194,    -1,    -1,    -1,
       4,     5,    -1,    -1,   202,    -1,   204,    -1,   206,   207,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   148,   149,    -1,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,   187,   188,    -1,   190,    -1,    -1,   193,
     194,    -1,    -1,    -1,     4,     5,    -1,    -1,   202,    -1,
     204,    -1,   206,   207,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   148,   149,
      -1,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,   187,   188,    -1,
     190,    -1,    -1,   193,   194,    -1,    -1,    -1,     4,     5,
      -1,    -1,   202,    -1,   204,   205,   206,   207,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    -1,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,   149,    -1,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,    -1,
      -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,
     186,   187,   188,    -1,   190,    -1,    -1,   193,   194,    -1,
      -1,    -1,     4,     5,    -1,    -1,   202,    -1,   204,    -1,
     206,   207,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,   148,   149,    -1,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,   188,    -1,   190,    -1,
      -1,   193,   194,    -1,    -1,    -1,     4,     5,    -1,    -1,
     202,    -1,   204,   205,   206,   207,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     148,   149,    -1,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,
     188,    -1,   190,    -1,    -1,   193,   194,    -1,    -1,    -1,
       4,     5,    -1,    -1,   202,    -1,   204,   205,   206,   207,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,   148,   149,    -1,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,   187,   188,    -1,   190,    -1,    -1,   193,
     194,    -1,    -1,    -1,     4,     5,    -1,    -1,   202,    -1,
     204,   205,   206,   207,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,   148,   149,
      -1,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,   187,   188,    -1,
     190,    -1,    -1,   193,   194,    -1,    -1,    -1,     4,     5,
      -1,    -1,   202,    -1,   204,   205,   206,   207,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    -1,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,   149,    -1,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,    -1,
      -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,   187,   188,    -1,   190,    -1,    -1,   193,   194,    -1,
      -1,    -1,     4,     5,    -1,    -1,   202,    -1,   204,    -1,
     206,   207,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,   148,   149,    -1,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,   188,    -1,   190,    -1,
      -1,   193,   194,    -1,    -1,    -1,     4,     5,    -1,    -1,
     202,    -1,   204,    -1,   206,   207,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
     148,   149,    -1,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,    -1,    -1,    18,
      -1,   169,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,
     188,    40,   190,    -1,    -1,   193,   194,    -1,    -1,    48,
      -1,    -1,    -1,    -1,   202,    -1,   204,    -1,   206,   207,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,    20,    21,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,   137,    -1,
      -1,    48,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,   150,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,   161,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,    -1,   206,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,
     137,   144,    -1,    -1,    -1,    20,    21,   114,   115,   116,
     117,   118,    -1,   150,   121,   122,   123,   124,    -1,   126,
     127,   128,   129,   130,   161,   132,   133,    -1,    -1,    -1,
      -1,   138,   139,   140,    -1,    -1,   179,   144,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,   179,    -1,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,   205,   114,
     115,   116,   117,   118,    20,    21,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,   130,    -1,   132,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,   144,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,    -1,    -1,   121,   122,   123,   124,    -1,
     126,   127,   128,   129,   130,    -1,   132,   133,    -1,    -1,
      -1,    -1,   138,   139,   140,    -1,    -1,    -1,   144,   114,
     115,   116,   117,   118,    20,    21,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,   130,    -1,   132,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,   144,
      -1,    -1,    -1,   179,    -1,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,   205,
      -1,    -1,    -1,    -1,   179,    -1,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
     205,    -1,    -1,    -1,    -1,    -1,    20,    21,   114,   115,
     116,   117,   118,    -1,    -1,   121,   122,   123,   124,    -1,
     126,   127,   128,   129,   130,    -1,   132,   133,    -1,    -1,
      -1,    -1,   138,   139,   140,    -1,    -1,    -1,   144,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   179,    -1,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,   205,
     114,   115,   116,   117,   118,    -1,    -1,   121,   122,   123,
     124,    -1,   126,   127,   128,   129,   130,    -1,   132,   133,
      -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,
     144,    20,    21,   114,   115,   116,   117,   118,    -1,    -1,
     121,   122,   123,   124,    -1,   126,   127,   128,   129,   130,
      -1,   132,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
      -1,    -1,    -1,   144,    -1,   179,    -1,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,
      -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,   202,    -1,    -1,   205,   114,   115,   116,   117,   118,
      20,    21,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,   138,
     139,   140,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     179,    -1,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,   202,    -1,    -1,   205,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,    -1,
      -1,   121,   122,   123,   124,    -1,   126,   127,   128,   129,
     130,    -1,   132,   133,    -1,    -1,    -1,    -1,   138,   139,
     140,    -1,    -1,    -1,   144,   114,   115,   116,   117,   118,
      20,    21,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,   138,
     139,   140,    -1,    -1,    -1,   144,    -1,    -1,    -1,   179,
      -1,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,   202,    -1,    -1,   205,    -1,    -1,    -1,    -1,
     179,    -1,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,   202,    -1,    -1,   205,    -1,    -1,    -1,
      -1,    -1,    20,    21,   114,   115,   116,   117,   118,    -1,
      -1,   121,   122,   123,   124,    -1,   126,   127,   128,   129,
     130,    -1,   132,   133,    -1,    -1,    -1,    -1,   138,   139,
     140,    -1,    -1,    -1,   144,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
      -1,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,   202,    -1,    -1,   205,   114,   115,   116,   117,
     118,    -1,    -1,   121,   122,   123,   124,    -1,   126,   127,
     128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,
     138,   139,   140,    -1,    -1,    -1,   144,    20,    21,   114,
     115,   116,   117,   118,    -1,    -1,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,   130,    -1,   132,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,   144,
      -1,   179,    -1,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,   202,    -1,    -1,   205,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
     205,   114,   115,   116,   117,   118,    20,    21,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,    -1,    -1,   121,   122,   123,
     124,    -1,   126,   127,   128,   129,   130,    -1,   132,   133,
      -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,
     144,   114,   115,   116,   117,   118,    20,    21,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,
      -1,   144,    -1,    -1,    -1,   179,    -1,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,
      -1,   205,    -1,    -1,    -1,    -1,   179,    -1,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    20,    21,
     114,   115,   116,   117,   118,    -1,    -1,   121,   122,   123,
     124,    -1,   126,   127,   128,   129,   130,    -1,   132,   133,
      -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,
     144,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   179,    -1,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,
      -1,   205,   114,   115,   116,   117,   118,    -1,    -1,   121,
     122,   123,   124,    -1,   126,   127,   128,   129,   130,    -1,
     132,   133,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,
      -1,    -1,   144,    20,    21,   114,   115,   116,   117,   118,
      -1,    -1,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,   138,
     139,   140,    -1,    -1,    -1,   144,    -1,   179,    -1,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,
     179,    -1,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,   202,    -1,    -1,   205,   114,   115,   116,
     117,   118,    20,    21,   121,   122,   123,   124,    -1,   126,
     127,   128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,
      -1,   138,   139,   140,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   179,    -1,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,
     118,    -1,    -1,   121,   122,   123,   124,    -1,   126,   127,
     128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,
     138,   139,   140,    -1,    -1,    -1,   144,   114,   115,   116,
     117,   118,    20,    21,   121,   122,   123,   124,    -1,   126,
     127,   128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,
      -1,   138,   139,   140,    -1,    -1,    -1,   144,    -1,    -1,
      -1,   179,    -1,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,   202,    -1,    -1,   205,    -1,    -1,
      -1,    -1,   179,    -1,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,   205,    -1,
      -1,    -1,    -1,    -1,    20,    21,   114,   115,   116,   117,
     118,    -1,    -1,   121,   122,   123,   124,    -1,   126,   127,
     128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,
     138,   139,   140,    -1,    -1,    -1,   144,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,    -1,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,   202,    -1,    -1,   205,   114,   115,
     116,   117,   118,    -1,    -1,   121,   122,   123,   124,    -1,
     126,   127,   128,   129,   130,    -1,   132,   133,    -1,    -1,
      -1,    -1,   138,   139,   140,    -1,    -1,    -1,   144,    20,
      21,   114,   115,   116,   117,   118,    -1,    -1,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,
      -1,   144,    -1,   179,    -1,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,   205,
      -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,   205,   114,   115,   116,   117,   118,    20,    21,
     121,   122,   123,   124,    -1,   126,   127,   128,   129,   130,
      -1,   132,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
      -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,   202,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,   118,    -1,    -1,   121,
     122,   123,   124,    -1,   126,   127,   128,   129,   130,    -1,
     132,   133,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,
      -1,    -1,   144,   114,   115,   116,   117,   118,    20,    21,
     121,   122,   123,   124,    -1,   126,   127,   128,   129,   130,
      -1,   132,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
      -1,    -1,    -1,   144,    -1,    -1,    -1,   179,    -1,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,   205,    -1,    -1,    -1,    -1,   179,    -1,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,   202,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,
      20,    21,   114,   115,   116,   117,   118,    -1,    -1,   121,
     122,   123,   124,    -1,   126,   127,   128,   129,   130,    -1,
     132,   133,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,
      -1,    -1,   144,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,   205,   114,   115,   116,   117,   118,    -1,
      -1,   121,   122,   123,   124,    -1,   126,   127,   128,   129,
     130,    -1,   132,   133,    -1,    -1,    -1,    -1,   138,   139,
     140,    -1,    -1,    -1,   144,    20,    21,   114,   115,   116,
     117,   118,    -1,    -1,   121,   122,   123,   124,    -1,   126,
     127,   128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,
      -1,   138,   139,   140,    -1,    -1,    -1,   144,    -1,   179,
      -1,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,   202,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   179,    -1,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,   203,    20,    21,   114,
     115,   116,   117,   118,    -1,    -1,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,   130,    -1,   132,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,   144,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,   203,    -1,
      -1,   114,   115,   116,   117,   118,    -1,    -1,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,
      -1,   144,    20,    21,   114,   115,   116,   117,   118,    -1,
      -1,   121,   122,   123,   124,    -1,   126,   127,   128,   129,
     130,    -1,   132,   133,    -1,    -1,    -1,    -1,   138,   139,
     140,    -1,    -1,    -1,   144,    -1,   179,    -1,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
      -1,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,   202,   203,    -1,    -1,   114,   115,   116,   117,
     118,    20,    21,   121,   122,   123,   124,    -1,   126,   127,
     128,   129,   130,    -1,   132,   133,    -1,    -1,    -1,    -1,
     138,   139,   140,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,    -1,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,   202,   203,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,    20,    21,   138,
     139,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,   178,
     179,    -1,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,   126,   127,   128,    -1,    -1,   131,   132,
     133,   134,   135,    -1,    -1,   138,   139,   140,   141,   142,
     143,   144,   114,   115,   116,   117,   118,    20,    21,   121,
     122,   123,   124,    -1,   126,   127,   128,   129,   130,    -1,
     132,   133,    -1,    -1,   136,    -1,   138,   139,   140,    -1,
      -1,    -1,   144,    -1,    -1,    -1,   179,    -1,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,   114,   115,   116,   117,   118,    -1,    -1,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,    -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,
      -1,   144,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
     114,   115,   116,   117,   118,    -1,    -1,   121,   122,   123,
     124,    -1,   126,   127,   128,   129,   130,    -1,   132,   133,
      -1,    -1,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,
     144,    20,    21,    -1,    -1,    -1,   114,   115,   116,   117,
     118,    -1,    -1,   121,   122,   123,   124,    -1,   126,   127,
     128,   129,   130,    -1,   132,   133,    -1,   171,    -1,    -1,
     138,   139,   140,    -1,    -1,   179,   144,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,   202,   114,   115,   116,   117,   118,
      -1,    -1,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,   130,    -1,   132,   133,    20,    21,    -1,    -1,   138,
     139,   140,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     179,    -1,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   201,   202,   121,   122,   123,   124,    -1,   126,
     127,   128,   129,   130,    -1,   132,   133,    20,    21,    -1,
      -1,   138,   139,   140,    -1,    -1,    -1,   144,    -1,   114,
     115,   116,   117,   118,    -1,    -1,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,   130,    -1,   132,   133,    -1,
     167,    20,    21,   138,   139,   140,    -1,    -1,    -1,   144,
      -1,    -1,   179,    -1,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,   201,   202,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,    -1,    -1,    20,    21,   138,   139,   140,    -1,    -1,
      -1,   144,    -1,    -1,    -1,   114,   115,   116,   117,   118,
      -1,    -1,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,   130,    -1,   132,   133,    20,    21,    -1,   171,   138,
     139,   140,    -1,    -1,    -1,   144,   179,    -1,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     179,    -1,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   201,   202,   121,   122,   123,   124,    -1,   126,
     127,   128,   129,   130,    -1,   132,   133,    20,    21,    -1,
      -1,   138,   139,   140,    -1,    -1,    -1,   144,    -1,   114,
     115,   116,   117,   118,    -1,    -1,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,   130,    -1,   132,   133,    20,
      21,    -1,    -1,   138,   139,   140,    -1,    -1,    -1,   144,
      -1,    -1,   179,    -1,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,   201,   202,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,    20,    21,    -1,    -1,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,   114,   115,   116,   117,   118,    -1,    -1,
     121,   122,   123,   124,    -1,   126,   127,   128,   129,   130,
      -1,   132,   133,    20,    21,    -1,    -1,   138,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     201,   202,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,   130,    -1,   132,   133,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,    -1,    -1,   121,   122,   123,   124,    -1,   126,
     127,   128,   129,   130,    -1,   132,   133,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   201,   202,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,   130,    -1,   132,   133,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,    -1,    -1,   121,    -1,
      -1,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   184,   185,   186,   187,   188,   189,   190,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    -1,    -1,    97,    98,    99,   100,    -1,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    -1,    -1,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,   161,    74,    75,    76,    77,    78,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    -1,    -1,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   210,     0,     6,    29,    31,    33,    39,    49,    55,
      79,   101,   102,   171,   190,   202,   211,   214,   220,   222,
     223,   227,   253,   257,   281,   355,   362,   366,   375,   419,
     423,   427,    18,    19,   161,   245,   246,   247,   154,   228,
     229,   161,   190,   224,   225,    56,    62,   359,   360,   161,
     206,   213,   359,   359,   359,   137,   161,   268,    33,    62,
     130,   194,   204,   249,   250,   251,   252,   268,   171,     4,
       5,     7,    35,   372,    61,   353,   178,   177,   180,   177,
     224,    21,    56,   189,   201,   226,   161,   171,   353,   161,
     161,   161,   161,   137,   221,   251,   251,   251,   204,   138,
     139,   140,   177,   203,    56,    62,   258,   260,    56,    62,
     363,    56,    62,   373,    56,    62,   354,    14,    15,   154,
     159,   161,   162,   204,   216,   246,   154,   229,   161,   161,
     161,   361,    56,    62,   212,   428,   420,   424,   161,   163,
     219,   205,   247,   251,   251,   251,   251,   261,   161,   364,
     376,   169,   356,   163,   164,   215,    14,    15,   154,   159,
     161,   216,   243,   244,   226,   178,   169,   169,   169,   163,
     205,    34,    70,    72,    74,    75,    76,    77,    78,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      92,    93,    94,    97,    98,    99,   100,   116,   117,   161,
     256,   259,   180,   365,   105,   370,   371,   351,   207,   248,
     327,   163,   164,   165,   177,   205,    18,    24,    30,    40,
      48,    63,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   150,   206,   268,   379,   381,
     382,   385,   390,   418,   429,   421,   425,    20,    21,    37,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   126,   127,
     128,   131,   132,   133,   134,   135,   138,   139,   140,   141,
     142,   143,   144,   179,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   193,   194,   201,   202,    34,    34,
     204,   254,   169,   262,    74,    78,    92,    93,    97,    98,
      99,   100,   380,   169,   161,   377,   170,   352,   246,   207,
     146,   161,   349,   350,   243,   184,   184,   184,   204,   184,
     184,   204,   184,   184,   184,   184,   184,   184,   204,   268,
      32,    59,    60,   122,   126,   183,   186,   188,   202,   208,
     389,   181,   161,   384,   341,   344,   161,   161,   161,   203,
      21,   161,   203,   149,   205,   327,   337,   338,   180,   255,
     265,   367,   180,   369,   169,   374,   327,   246,   204,    42,
     177,   180,   183,   348,   391,   396,   398,     4,     5,    14,
      15,    16,    17,    18,    24,    26,    30,    38,    44,    47,
      50,    54,    67,    68,    79,   101,   102,   103,   116,   117,
     145,   146,   147,   148,   149,   151,   153,   154,   155,   156,
     157,   158,   159,   160,   162,   169,   186,   187,   188,   193,
     194,   202,   204,   206,   207,   218,   220,   263,   268,   273,
     286,   293,   296,   299,   303,   305,   307,   308,   310,   315,
     318,   319,   326,   379,   431,   436,   446,   449,   461,   464,
     400,   394,   161,   386,   402,   404,   406,   408,   410,   412,
     414,   416,   319,   184,   204,    32,   183,    32,   183,   202,
     208,   203,   319,   202,   208,   390,   177,   463,   161,   171,
     339,   418,   422,   161,   171,   342,   426,   161,   131,   204,
       6,    49,   280,   171,   205,   418,     1,     8,     9,    10,
      12,    25,    27,    28,    37,    41,    43,    51,    53,    57,
      58,    64,   104,   170,   171,   230,   231,   234,   236,   237,
     238,   239,   240,   241,   242,   264,   269,   274,   275,   276,
     277,   278,   279,   281,   285,   306,   319,   161,   357,   358,
     268,   333,   350,   319,   161,   161,   390,   125,   131,   178,
     347,   418,   418,   388,   418,   184,   184,   184,   270,   381,
     431,   204,   184,     4,   101,   102,   184,   204,   184,   204,
     204,   184,   184,   204,   184,   184,   204,   184,   184,   204,
     184,   184,   319,   319,   204,   204,   204,   204,   204,   204,
     217,    12,   319,   445,   460,   319,   319,   319,   319,   319,
      12,    48,   297,   319,   297,   207,   204,   253,   169,   207,
     299,   304,    20,    21,   114,   115,   116,   117,   118,   121,
     122,   123,   124,   126,   127,   128,   129,   130,   132,   133,
     138,   139,   140,   144,   179,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   201,   202,   205,   204,   418,
     418,   205,   161,   383,   418,   254,   418,   254,   418,   254,
     339,   340,   342,   343,   205,   393,   266,   297,   203,   203,
     319,   161,   430,   180,   171,   170,   180,   171,   170,   319,
     146,   161,   346,   378,   337,   319,   204,   125,   319,   262,
      60,   319,   319,   161,   171,   154,    57,   319,   262,   125,
     319,    36,   171,   171,   204,     9,   171,   171,   171,   171,
     171,    65,   282,   171,   106,   107,   108,   109,   110,   111,
     112,   113,   119,   120,   125,   131,   134,   135,   141,   142,
     143,   178,   178,   177,   463,   170,   253,   334,   205,    42,
     171,   347,   319,   185,   185,   185,   171,   437,   439,   271,
     204,   204,   268,   294,   184,   184,   184,   456,   297,   390,
     460,   319,   287,   289,   319,   291,   458,   297,   443,   447,
     297,   441,   390,   319,   319,   319,   319,   319,   319,   165,
     166,   215,   378,   136,   177,   463,   378,    12,   177,   463,
     463,   146,   151,   184,   268,   309,   152,   161,   202,   205,
     297,   432,   433,   202,   302,   265,   207,   253,    18,   152,
     161,   379,    18,   152,   161,   379,   319,   319,   319,   319,
     319,   319,   161,   319,   152,   161,   319,   319,   319,   379,
     319,   319,   319,   319,   319,   319,    21,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   127,   128,
     152,   161,   201,   202,   316,   319,   205,   297,   185,   185,
     171,   185,   185,   255,   185,   255,   185,   255,   171,   185,
     171,   185,   267,   418,   205,   177,   203,   170,   418,   418,
     205,   204,    42,   125,   177,   178,   180,   183,   345,   262,
     378,   319,    13,   319,   262,   178,   180,   154,   319,   169,
     319,   204,   204,   284,   350,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   357,   368,     7,   327,   332,   161,
     319,   171,   392,   397,   399,   418,   390,   390,   418,    69,
     435,   266,   184,   319,   418,   450,   452,   454,   390,   463,
     171,   185,   463,   205,   390,   390,   205,   390,   390,   463,
     390,   390,   463,   390,   185,   205,   205,   205,   205,   205,
     205,   319,    19,   319,   445,   170,    19,   378,   319,   203,
     205,   204,   204,   311,   313,   204,   131,   345,   432,   177,
     205,   177,   205,   202,   254,   170,   302,   184,   204,   184,
     204,   204,   204,   203,    18,   152,   161,   379,   180,   152,
     161,   319,   204,   204,   152,   161,   319,     1,   203,   205,
     401,   395,   161,   387,   403,   185,   407,   185,   411,   185,
     339,   415,   342,   417,   171,   185,   319,   161,   161,   418,
     319,    19,   262,   319,   265,   205,   319,   161,   283,   170,
      56,    62,   330,    66,   331,   171,   171,   185,   185,   185,
     161,   205,   433,   205,   161,   205,   185,   390,   390,   390,
     185,   205,   390,   204,   205,   185,   185,   185,   185,   205,
     185,   185,   205,   185,   302,   204,   167,   297,   297,    19,
     319,   319,   390,   254,   319,   319,   319,   203,   202,   152,
     161,   125,   131,   178,   183,   300,   301,   255,   254,   320,
     319,   322,   319,   205,   297,   319,   184,   204,   319,   204,
     203,   319,   205,   297,   204,   203,   317,   405,   409,   413,
     418,   204,   205,    42,   345,   297,   170,   262,   205,   177,
     205,    46,   331,    45,   105,   328,   438,   440,   272,   205,
     171,   185,   295,   185,   185,   185,   457,   185,   460,   288,
     290,   292,   459,   444,   448,   442,   204,   205,   297,   171,
     171,   297,   205,   205,   185,   255,   205,   205,   432,   204,
     131,   345,   161,   161,   161,   161,   177,   203,   136,   262,
     298,   255,   390,   205,   418,   205,   205,   205,   324,   319,
     319,   205,   205,   319,   266,   161,   319,   205,    11,    22,
      23,   232,   233,    11,   235,   161,   180,   348,    32,   329,
     328,   330,   204,   204,   161,   319,   451,   453,   455,   204,
     204,   463,   319,   319,   319,   204,   435,   204,   204,   205,
     319,   205,   445,   319,   171,   312,   185,   131,   345,   203,
     319,   319,   319,   300,   203,   125,   319,   262,   185,   185,
     418,   205,   205,   205,   205,   262,   262,   204,   236,   274,
     275,   276,   277,   319,   171,   390,   347,   335,   329,   346,
     435,   435,   185,   205,   204,   204,   204,   297,   460,   205,
     297,   435,   432,   434,   205,   171,   462,   462,   319,   309,
     314,   319,   319,   205,   205,   319,   321,   323,   185,   319,
     347,   319,   259,   336,   434,   434,   319,   435,   435,   434,
     463,   463,   463,   434,   171,   205,    52,   170,   203,   462,
     309,   131,   345,   325,   205,   319,   171,   171,   259,   205,
     205,   205,   434,   434,   205,   205,   205,   205,   205,   432,
     319,   203,   319,   319,   262,   171,   262,   205,   205,   233
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   209,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   211,   212,   212,
     212,   213,   213,   214,   215,   215,   215,   215,   216,   217,
     217,   217,   218,   219,   219,   221,   220,   222,   223,   224,
     224,   224,   224,   225,   225,   226,   226,   227,   228,   228,
     229,   229,   230,   231,   231,   232,   232,   233,   233,   233,
     234,   234,   235,   235,   236,   236,   236,   236,   236,   237,
     237,   238,   239,   240,   241,   242,   243,   243,   243,   243,
     243,   243,   244,   244,   245,   245,   245,   246,   246,   246,
     246,   246,   246,   246,   246,   247,   247,   248,   248,   249,
     249,   249,   250,   250,   251,   251,   251,   251,   251,   251,
     251,   252,   252,   253,   253,   254,   254,   254,   255,   255,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   257,   258,   258,   258,   259,
     261,   260,   262,   262,   263,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   265,   265,   265,   266,   266,   267,   267,
     268,   268,   268,   269,   269,   271,   272,   270,   273,   273,
     273,   273,   273,   274,   275,   276,   276,   276,   277,   277,
     278,   279,   280,   280,   280,   281,   281,   282,   282,   283,
     283,   284,   284,   285,   285,   287,   288,   286,   289,   290,
     286,   291,   292,   286,   294,   295,   293,   296,   296,   296,
     297,   297,   298,   298,   298,   299,   299,   299,   300,   300,
     300,   300,   301,   301,   302,   302,   303,   304,   304,   305,
     305,   305,   305,   305,   305,   305,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   307,   307,   308,   308,   309,
     309,   310,   311,   312,   310,   313,   314,   310,   315,   315,
     315,   315,   316,   317,   315,   318,   318,   318,   318,   318,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   320,   321,   319,   319,
     319,   319,   322,   323,   319,   319,   319,   324,   325,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   327,   327,
     328,   328,   328,   329,   329,   330,   330,   330,   331,   331,
     332,   333,   334,   333,   335,   333,   336,   333,   337,   337,
     338,   338,   339,   339,   340,   340,   341,   341,   341,   342,
     343,   343,   344,   344,   344,   345,   345,   346,   346,   346,
     346,   346,   347,   347,   347,   348,   348,   349,   349,   349,
     349,   349,   350,   350,   350,   351,   352,   351,   353,   353,
     354,   354,   354,   355,   356,   355,   357,   357,   358,   358,
     358,   359,   359,   359,   361,   360,   362,   363,   363,   363,
     364,   365,   365,   367,   368,   366,   369,   369,   370,   370,
     371,   372,   372,   373,   373,   373,   374,   374,   376,   377,
     375,   378,   378,   378,   378,   378,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   380,   380,   380,   380,   380,   380,   380,
     380,   381,   382,   382,   382,   383,   383,   384,   384,   384,
     386,   387,   385,   388,   388,   389,   389,   390,   390,   390,
     390,   390,   390,   391,   392,   390,   390,   390,   393,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   394,   395,   390,   390,   396,   397,   390,   398,
     399,   390,   400,   401,   390,   390,   402,   403,   390,   404,
     405,   390,   390,   406,   407,   390,   408,   409,   390,   390,
     410,   411,   390,   412,   413,   390,   414,   415,   390,   416,
     417,   390,   418,   418,   418,   420,   421,   422,   419,   424,
     425,   426,   423,   428,   429,   430,   427,   431,   431,   431,
     431,   431,   432,   432,   432,   432,   432,   432,   432,   432,
     433,   434,   434,   435,   435,   437,   438,   436,   439,   440,
     436,   441,   442,   436,   443,   444,   436,   445,   445,   446,
     447,   448,   446,   449,   450,   451,   449,   452,   453,   449,
     454,   455,   449,   449,   456,   457,   449,   449,   458,   459,
     449,   460,   460,   461,   461,   461,   461,   462,   462,   463,
     463,   464,   464,   464
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     1,
       1,     1,     1,     4,     1,     1,     2,     2,     3,     0,
       2,     4,     3,     1,     2,     0,     4,     2,     2,     1,
       2,     3,     3,     2,     4,     0,     1,     2,     1,     3,
       1,     3,     3,     3,     2,     1,     1,     0,     2,     6,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     6,
       7,     7,     2,     3,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     5,     1,     3,     2,     3,     1,
       1,     1,     1,     4,     1,     2,     3,     3,     3,     3,
       2,     1,     3,     0,     3,     0,     2,     3,     0,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     2,     2,     3,     4,
       3,     2,     2,     2,     2,     2,     3,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     1,     1,     3,
       0,     4,     3,     7,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       2,     2,     2,     0,     2,     2,     0,     1,     1,     3,
       1,     3,     2,     2,     3,     0,     0,     5,     2,     5,
       5,     6,     2,     1,     1,     1,     2,     3,     2,     3,
       2,     4,     1,     1,     0,     1,     1,     1,     0,     1,
       3,     8,     7,     3,     3,     0,     0,     7,     0,     0,
       7,     0,     0,     7,     0,     0,     6,     5,     8,    10,
       1,     3,     1,     2,     3,     1,     1,     2,     2,     2,
       2,     2,     1,     3,     0,     5,     6,     6,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     6,     8,     5,     6,     1,
       4,     3,     0,     0,     8,     0,     0,     9,     3,     4,
       5,     6,     0,     0,     5,     3,     4,     4,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       4,     4,     5,     4,     5,     3,     4,     1,     1,     2,
       4,     4,     7,     8,     3,     5,     0,     0,     8,     3,
       3,     3,     0,     0,     8,     3,     4,     0,     0,     9,
       4,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     4,     4,     4,     4,     4,     1,     6,     7,
       6,     6,     7,     7,     6,     7,     6,     6,     0,     1,
       0,     1,     1,     0,     1,     0,     1,     1,     0,     1,
       5,     0,     0,     4,     0,     9,     0,    10,     3,     4,
       1,     3,     1,     3,     1,     3,     0,     2,     3,     3,
       1,     3,     0,     2,     3,     1,     1,     1,     2,     3,
       5,     3,     1,     1,     1,     0,     1,     1,     4,     3,
       3,     5,     4,     6,     5,     0,     0,     4,     0,     1,
       0,     1,     1,     6,     0,     6,     1,     3,     0,     1,
       3,     0,     1,     1,     0,     5,     3,     0,     1,     1,
       1,     0,     2,     0,     0,    11,     0,     2,     0,     1,
       3,     1,     1,     0,     1,     1,     0,     3,     0,     0,
       7,     1,     4,     3,     3,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     1,     3,     0,     1,     3,
       0,     0,     6,     1,     3,     3,     4,     1,     1,     1,
       1,     2,     3,     0,     0,     6,     4,     5,     0,     9,
       4,     2,     2,     3,     2,     3,     2,     2,     3,     3,
       3,     2,     0,     0,     6,     2,     0,     0,     6,     0,
       0,     6,     0,     0,     6,     1,     0,     0,     6,     0,
       0,     7,     1,     0,     0,     6,     0,     0,     7,     1,
       0,     0,     6,     0,     0,     7,     0,     0,     6,     0,
       0,     6,     1,     3,     3,     0,     0,     0,     9,     0,
       0,     0,     9,     0,     0,     0,    10,     1,     1,     1,
       1,     1,     3,     3,     5,     5,     6,     6,     8,     8,
       1,     1,     3,     0,     1,     0,     0,    10,     0,     0,
      10,     0,     0,     9,     0,     0,     7,     3,     1,     5,
       0,     0,    10,     4,     0,     0,    11,     0,     0,    11,
       0,     0,    10,     5,     0,     0,    10,     5,     0,     0,
      10,     1,     3,     4,     5,     8,    10,     0,     3,     0,
       1,     9,    10,     9
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
        yyerror (&yylloc, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
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
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if DAS2_YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined DAS2_YYLTYPE_IS_TRIVIAL && DAS2_YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, scanner);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !DAS2_YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !DAS2_YYDEBUG */


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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 161: /* "name"  */
            { delete ((*yyvaluep).s); }
        break;

    case 213: /* module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case 215: /* character_sequence  */
            { delete ((*yyvaluep).s); }
        break;

    case 216: /* string_constant  */
            { delete ((*yyvaluep).s); }
        break;

    case 217: /* string_builder_body  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 218: /* string_builder  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 220: /* expr_reader  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 224: /* require_module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case 230: /* expression_label  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 231: /* expression_goto  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 233: /* expression_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 235: /* expression_else_one_liner  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 236: /* expression_if_one_liner  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 237: /* expression_if_then_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 238: /* expression_for_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 239: /* expression_unsafe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 240: /* expression_while_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 241: /* expression_with  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 242: /* expression_with_alias  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 243: /* annotation_argument_value  */
            { delete ((*yyvaluep).aa); }
        break;

    case 244: /* annotation_argument_value_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case 245: /* annotation_argument_name  */
            { delete ((*yyvaluep).s); }
        break;

    case 246: /* annotation_argument  */
            { delete ((*yyvaluep).aa); }
        break;

    case 247: /* annotation_argument_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case 248: /* metadata_argument_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case 249: /* annotation_declaration_name  */
            { delete ((*yyvaluep).s); }
        break;

    case 250: /* annotation_declaration_basic  */
            { delete ((*yyvaluep).fa); }
        break;

    case 251: /* annotation_declaration  */
            { delete ((*yyvaluep).fa); }
        break;

    case 252: /* annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case 253: /* optional_annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case 254: /* optional_function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case 255: /* optional_function_type  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case 256: /* function_name  */
            { delete ((*yyvaluep).s); }
        break;

    case 259: /* function_declaration_header  */
            { ((*yyvaluep).pFuncDecl)->delRef(); }
        break;

    case 260: /* function_declaration  */
            { ((*yyvaluep).pFuncDecl)->delRef(); }
        break;

    case 262: /* expression_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 263: /* expr_call_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 264: /* expression_any  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 265: /* expressions  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 266: /* optional_expr_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 267: /* type_declaration_no_options_list  */
            { deleteTypeDeclarationList(((*yyvaluep).pTypeDeclList)); }
        break;

    case 268: /* name_in_namespace  */
            { delete ((*yyvaluep).s); }
        break;

    case 269: /* expression_delete  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 270: /* new_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case 273: /* expr_new  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 274: /* expression_break  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 275: /* expression_continue  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 276: /* expression_return  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 277: /* expression_yield_no_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 278: /* expression_yield  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 279: /* expression_try_catch  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 283: /* tuple_expansion  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case 284: /* tuple_expansion_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case 285: /* expression_let  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 286: /* expr_cast  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 293: /* expr_type_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 296: /* expr_type_info  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 297: /* expr_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 298: /* block_or_simple_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 300: /* capture_entry  */
            { delete ((*yyvaluep).pCapt); }
        break;

    case 301: /* capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case 302: /* optional_capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case 303: /* expr_full_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 304: /* expr_full_block_assumed_piped  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 305: /* expr_numeric_const  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 306: /* expr_assign  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 307: /* expr_named_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 308: /* expr_method_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 309: /* func_addr_name  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 310: /* func_addr_expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 315: /* expr_field  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 318: /* expr_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 319: /* expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 326: /* expr_mtag  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 327: /* optional_field_annotation  */
            { delete ((*yyvaluep).aaList); }
        break;

    case 332: /* structure_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case 333: /* struct_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case 337: /* function_argument_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case 338: /* function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case 339: /* tuple_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case 340: /* tuple_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case 341: /* tuple_alias_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case 342: /* variant_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case 343: /* variant_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case 344: /* variant_alias_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case 346: /* variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case 349: /* let_variable_name_with_pos_list  */
            { delete ((*yyvaluep).pNameWithPosList); }
        break;

    case 350: /* let_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case 351: /* global_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case 357: /* enum_expression  */
            { delete ((*yyvaluep).pEnumPair); }
        break;

    case 358: /* enum_list  */
            { if ( ((*yyvaluep).pEnum)->use_count()==1 ) delete ((*yyvaluep).pEnum); }
        break;

    case 364: /* enum_name  */
            { if ( ((*yyvaluep).pEnum)->use_count()==1 ) delete ((*yyvaluep).pEnum); }
        break;

    case 369: /* optional_structure_parent  */
            { delete ((*yyvaluep).s); }
        break;

    case 374: /* optional_struct_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case 378: /* variable_name_with_pos_list  */
            { delete ((*yyvaluep).pNameWithPosList); }
        break;

    case 381: /* structure_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case 382: /* auto_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case 383: /* bitfield_bits  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case 384: /* bitfield_alias_bits  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case 385: /* bitfield_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case 388: /* table_type_pair  */
            { delete ((*yyvaluep).aTypePair).firstType; delete ((*yyvaluep).aTypePair).secondType; }
        break;

    case 389: /* dim_list  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case 390: /* type_declaration_no_options  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case 418: /* type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case 431: /* make_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 432: /* make_struct_fields  */
            { delete ((*yyvaluep).pMakeStruct); }
        break;

    case 433: /* make_struct_single  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 434: /* make_struct_dim  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 436: /* make_struct_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 445: /* make_map_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 446: /* make_tuple_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 449: /* make_dim_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 460: /* expr_map_tuple_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 461: /* make_table_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 462: /* array_comprehension_where  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case 464: /* array_comprehension  */
            { delete ((*yyvaluep).pExpression); }
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined DAS2_YYLTYPE_IS_TRIVIAL && DAS2_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

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

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3:
                                   {
            if ( yyextra->das_has_type_declarations ) {
                das2_yyerror(scanner,"module name has to be first declaration",tokAt(scanner,(yylsp[0])), CompilationError::syntax_error);
            }
        }
    break;

  case 4:
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 5:
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 6:
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 7:
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 11:
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 12:
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 13:
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 14:
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 17:
                             {
        delete (yyvsp[-1].pExpression);    // we do nothing, we don't even attemp to 'visit'
    }
    break;

  case 18:
                        { (yyval.b) = yyextra->g_Program->policies.default_module_public; }
    break;

  case 19:
                        { (yyval.b) = true; }
    break;

  case 20:
                        { (yyval.b) = false; }
    break;

  case 21:
                    { (yyval.s) = new string("$"); }
    break;

  case 22:
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 23:
                                                                                                      {
        yyextra->g_Program->thisModuleName = *(yyvsp[-2].s);
        yyextra->g_Program->thisModule->isPublic = (yyvsp[0].b);
        yyextra->g_Program->thisModule->isModule = true;
        if ( yyextra->g_Program->thisModule->name.empty() ) {
            yyextra->g_Program->thisModule->name = *(yyvsp[-2].s);
        } else if ( yyextra->g_Program->thisModule->name != *(yyvsp[-2].s) ){
            das2_yyerror(scanner,"this module already has a name " + yyextra->g_Program->thisModule->name,tokAt(scanner,(yylsp[-2])),
                CompilationError::module_already_has_a_name);
        }
        if ( !yyextra->g_Program->policies.ignore_shared_modules ) {
            yyextra->g_Program->promoteToBuiltin = (yyvsp[-1].b);
        }
        delete (yyvsp[-2].s);
    }
    break;

  case 24:
                                                            { (yyval.s) = new string(); *(yyval.s) += (yyvsp[0].ch); }
    break;

  case 25:
                                                            { (yyval.s) = new string(); *(yyval.s) += "\\\\"; }
    break;

  case 26:
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += (yyvsp[0].ch); }
    break;

  case 27:
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += "\\\\"; }
    break;

  case 28:
                                                           { (yyval.s) = (yyvsp[-1].s); }
    break;

  case 29:
        {
        (yyval.pExpression) = new ExprStringBuilder();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 30:
                                                           {
        bool err;
        auto esconst = unescapeString(*(yyvsp[0].s),&err);
        if ( err ) das2_yyerror(scanner,"invalid escape sequence",tokAt(scanner,(yylsp[-1])), CompilationError::invalid_escape_sequence);
        auto sc = make_smart<ExprConstString>(tokAt(scanner,(yylsp[0])),esconst);
        delete (yyvsp[0].s);
        static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression))->elements.push_back(sc);
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 31:
                                                                                {
        auto se = ExpressionPtr((yyvsp[-1].pExpression));
        static_cast<ExprStringBuilder *>((yyvsp[-3].pExpression))->elements.push_back(se);
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 32:
                                                                   {
        auto strb = static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression));
        if ( strb->elements.size()==0 ) {
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),"");
            delete (yyvsp[-1].pExpression);
        } else if ( strb->elements.size()==1 && strb->elements[0]->rtti_isStringConstant() ) {
            auto sconst = static_pointer_cast<ExprConstString>(strb->elements[0]);
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),sconst->text);
            delete (yyvsp[-1].pExpression);
        } else {
            (yyval.pExpression) = (yyvsp[-1].pExpression);
        }
    }
    break;

  case 33:
                               {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das2_yyend_reader(scanner);
        }
    }
    break;

  case 34:
                                                                {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das2_yyend_reader(scanner);
        }
    }
    break;

  case 35:
                                        {
        auto macros = yyextra->g_Program->getReaderMacro(*(yyvsp[0].s));
        if ( macros.size()==0 ) {
            das2_yyerror(scanner,"reader macro " + *(yyvsp[0].s) + " not found",tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( macros.size()>1 ) {
            string options;
            for ( auto & x : macros ) {
                options += "\t" + x->module->name + "::" + x->name + "\n";
            }
            das2_yyerror(scanner,"too many options for the reader macro " + *(yyvsp[0].s) +  "\n" + options, tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( yychar != '~' ) {
            das2_yyerror(scanner,"expecting ~ after the reader macro", tokAt(scanner,(yylsp[0])),
                CompilationError::syntax_error);
        } else {
            yyextra->g_ReaderMacro = macros.back().get();
            yyextra->g_ReaderExpr = new ExprReader(tokAt(scanner,(yylsp[-1])),yyextra->g_ReaderMacro);
            yyclearin ;
            das2_yybegin_reader(scanner);
        }
    }
    break;

  case 36:
                                     {
        yyextra->g_ReaderExpr->at = tokRangeAt(scanner,(yylsp[-3]),(yylsp[0]));
        (yyval.pExpression) = yyextra->g_ReaderExpr;
        int thisLine = 0;
        FileInfo * info = nullptr;
        if ( auto seqt = yyextra->g_ReaderMacro->suffix(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, thisLine, info, tokAt(scanner,(yylsp[0]))) ) {
            das2_accept_sequence(scanner,seqt,strlen(seqt),thisLine,info);
            yylloc.first_column = (yylsp[0]).first_column;
            yylloc.first_line = (yylsp[0]).first_line;
            yylloc.last_column = (yylsp[0]).last_column;
            yylloc.last_line = (yylsp[0]).last_line;
        }
        delete (yyvsp[-2].s);
        yyextra->g_ReaderMacro = nullptr;
        yyextra->g_ReaderExpr = nullptr;
    }
    break;

  case 37:
                                                   {
        if ( yyextra->g_Program->options.size() ) {
            for ( auto & opt : *(yyvsp[0].aaList) ) {
                if ( yyextra->g_Access->isOptionAllowed(opt.name, yyextra->g_Program->thisModuleName) ) {
                    yyextra->g_Program->options.push_back(opt);
                } else {
                    das2_yyerror(scanner,"option " + opt.name + " is not allowed here",
                        tokAt(scanner,(yylsp[0])), CompilationError::invalid_option);
                }
            }
        } else {
            swap ( yyextra->g_Program->options, *(yyvsp[0].aaList) );
        }
        delete (yyvsp[0].aaList);
    }
    break;

  case 39:
                   {
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 40:
                                     {
        *(yyvsp[0].s) = "%" + *(yyvsp[0].s);
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 41:
                                                {
        *(yyvsp[-2].s) += ".";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 42:
                                                {
        *(yyvsp[-2].s) += "/";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 43:
                                                         {
        ast_requireModule(scanner,(yyvsp[-1].s),nullptr,(yyvsp[0].b),tokAt(scanner,(yylsp[-1])));
    }
    break;

  case 44:
                                                                              {
        ast_requireModule(scanner,(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].b),tokAt(scanner,(yylsp[-3])));
    }
    break;

  case 45:
                    { (yyval.b) = false; }
    break;

  case 46:
                    { (yyval.b) = true; }
    break;

  case 50:
                   {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[0].i))] ++;
    }
    break;

  case 51:
                                      {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[-2].i))] += (yyvsp[0].i);
    }
    break;

  case 52:
                                          {
        (yyval.pExpression) = new ExprLabel(tokAt(scanner,(yylsp[-2])),(yyvsp[-1].i));
    }
    break;

  case 53:
                                                {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-2])),(yyvsp[0].i));
    }
    break;

  case 54:
                               {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 55:
                          { (yyval.b) = false; }
    break;

  case 56:
                          { (yyval.b) = true; }
    break;

  case 57:
                                                           { (yyval.pExpression) = nullptr; }
    break;

  case 58:
                                                           { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 59:
                                                                                                  {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-5])),ExpressionPtr((yyvsp[-3].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-5].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 60:
                        { (yyval.b) = false; }
    break;

  case 61:
                        { (yyval.b) = true; }
    break;

  case 62:
        { (yyval.pExpression) = nullptr; }
    break;

  case 63:
                                                      {
            (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 64:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 65:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 66:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 67:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 68:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 69:
                                                                                              {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-5])),ExpressionPtr((yyvsp[-3].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-5].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 70:
                                                                                                                {
        (yyval.pExpression) = new ExprIfThenElse(tokAt(scanner,(yylsp[-5])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr(ast_wrapInBlock((yyvsp[-6].pExpression))),(yyvsp[-1].pExpression) ? ExpressionPtr(ast_wrapInBlock((yyvsp[-1].pExpression))) : nullptr);
    }
    break;

  case 71:
                                                                                                               {
        (yyval.pExpression) = ast_forLoop(scanner,(yyvsp[-4].pNameWithPosList),(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-6])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 72:
                                                 {
        auto pUnsafe = new ExprUnsafe(tokAt(scanner,(yylsp[-1])));
        pUnsafe->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pUnsafe;
    }
    break;

  case 73:
                                                               {
        auto pWhile = new ExprWhile(tokAt(scanner,(yylsp[-2])));
        pWhile->cond = ExpressionPtr((yyvsp[-1].pExpression));
        pWhile->body = ExpressionPtr((yyvsp[0].pExpression));
        ((ExprBlock *)(yyvsp[0].pExpression))->inTheLoop = true;
        (yyval.pExpression) = pWhile;
    }
    break;

  case 74:
                                                         {
        auto pWith = new ExprWith(tokAt(scanner,(yylsp[-2])));
        pWith->with = ExpressionPtr((yyvsp[-1].pExpression));
        pWith->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pWith;
    }
    break;

  case 75:
                                                      {
        (yyval.pExpression) = new ExprAssume(tokAt(scanner,(yylsp[-3])), *(yyvsp[-2].s), (yyvsp[0].pExpression) );
        delete (yyvsp[-2].s);
    }
    break;

  case 76:
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 77:
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 78:
                                 { (yyval.aa) = new AnnotationArgument("",(yyvsp[0].i)); }
    break;

  case 79:
                                 { (yyval.aa) = new AnnotationArgument("",float((yyvsp[0].fd))); }
    break;

  case 80:
                                 { (yyval.aa) = new AnnotationArgument("",true); }
    break;

  case 81:
                                 { (yyval.aa) = new AnnotationArgument("",false); }
    break;

  case 82:
                                       {
        (yyval.aaList) = new AnnotationArgumentList();
        (yyval.aaList)->push_back(*(yyvsp[0].aa));
        delete (yyvsp[0].aa);
    }
    break;

  case 83:
                                                                                {
            (yyval.aaList) = (yyvsp[-2].aaList);
            (yyval.aaList)->push_back(*(yyvsp[0].aa));
            delete (yyvsp[0].aa);
    }
    break;

  case 84:
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 85:
                    { (yyval.s) = new string("type"); }
    break;

  case 86:
                    { (yyval.s) = new string("in"); }
    break;

  case 87:
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 88:
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 89:
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),(yyvsp[0].i),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 90:
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),float((yyvsp[0].fd)),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 91:
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),true,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 92:
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),false,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 93:
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[0].s),true,tokAt(scanner,(yylsp[0]))); delete (yyvsp[0].s); }
    break;

  case 94:
                                                                                          {
        { (yyval.aa) = new AnnotationArgument(*(yyvsp[-4].s),(yyvsp[-1].aaList),tokAt(scanner,(yylsp[-4]))); delete (yyvsp[-4].s); }
    }
    break;

  case 95:
                                  {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,new AnnotationArgumentList(),(yyvsp[0].aa));
    }
    break;

  case 96:
                                                                    {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,(yyvsp[-2].aaList),(yyvsp[0].aa));
    }
    break;

  case 97:
                                      {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,new AnnotationArgumentList(),(yyvsp[0].aa));
    }
    break;

  case 98:
                                                                  {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,(yyvsp[-2].aaList),(yyvsp[0].aa));
    }
    break;

  case 99:
                                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 100:
                                    { (yyval.s) = new string("require"); }
    break;

  case 101:
                                    { (yyval.s) = new string("private"); }
    break;

  case 102:
                                          {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[0]));
        if ( yyextra->g_Access->isAnnotationAllowed(*(yyvsp[0].s), yyextra->g_Program->thisModuleName) ) {
            if ( auto ann = findAnnotation(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0]))) ) {
                (yyval.fa)->annotation = ann;
            }
        } else {
            das2_yyerror(scanner,"annotation " + *(yyvsp[0].s) + " is not allowed here",
                        tokAt(scanner,(yylsp[0])), CompilationError::invalid_annotation);
        }
        delete (yyvsp[0].s);
    }
    break;

  case 103:
                                                                                 {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[-3]));
        if ( yyextra->g_Access->isAnnotationAllowed(*(yyvsp[-3].s), yyextra->g_Program->thisModuleName) ) {
            if ( auto ann = findAnnotation(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3]))) ) {
                (yyval.fa)->annotation = ann;
            }
        } else {
            das2_yyerror(scanner,"annotation " + *(yyvsp[-3].s) + " is not allowed here",
                        tokAt(scanner,(yylsp[-3])), CompilationError::invalid_annotation);
        }
        swap ( (yyval.fa)->arguments, *(yyvsp[-1].aaList) );
        delete (yyvsp[-1].aaList);
        delete (yyvsp[-3].s);
    }
    break;

  case 104:
                                          {
        (yyval.fa) = (yyvsp[0].fa);
    }
    break;

  case 105:
                                              {
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das2_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Not,(yyvsp[0].fa),nullptr);
    }
    break;

  case 106:
                                                                              {
        if ( !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das2_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das2_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::And,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 107:
                                                                            {
        if ( !(yyvsp[-2].fa)->annotation || !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das2_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation || !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das2_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Or,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 108:
                                                                              {
        if ( !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das2_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das2_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Xor,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 109:
                                            {
        (yyval.fa) = (yyvsp[-1].fa);
    }
    break;

  case 110:
                                          {
        (yyval.fa) = (yyvsp[0].fa);
        (yyvsp[0].fa)->inherited = true;
    }
    break;

  case 111:
                                    {
            (yyval.faList) = new AnnotationList();
            (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 112:
                                                              {
        (yyval.faList) = (yyvsp[-2].faList);
        (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 113:
                                        { (yyval.faList) = nullptr; }
    break;

  case 114:
                                        { (yyval.faList) = (yyvsp[-1].faList); }
    break;

  case 115:
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 116:
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 117:
                                                { (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList); }
    break;

  case 118:
        {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
    }
    break;

  case 119:
                                        {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 120:
                          {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 121:
                             { (yyval.s) = new string("!"); }
    break;

  case 122:
                             { (yyval.s) = new string("~"); }
    break;

  case 123:
                             { (yyval.s) = new string("+="); }
    break;

  case 124:
                             { (yyval.s) = new string("-="); }
    break;

  case 125:
                             { (yyval.s) = new string("*="); }
    break;

  case 126:
                             { (yyval.s) = new string("/="); }
    break;

  case 127:
                             { (yyval.s) = new string("%="); }
    break;

  case 128:
                             { (yyval.s) = new string("&="); }
    break;

  case 129:
                             { (yyval.s) = new string("|="); }
    break;

  case 130:
                             { (yyval.s) = new string("^="); }
    break;

  case 131:
                                { (yyval.s) = new string("&&="); }
    break;

  case 132:
                                { (yyval.s) = new string("||="); }
    break;

  case 133:
                                { (yyval.s) = new string("^^="); }
    break;

  case 134:
                             { (yyval.s) = new string("&&"); }
    break;

  case 135:
                             { (yyval.s) = new string("||"); }
    break;

  case 136:
                             { (yyval.s) = new string("^^"); }
    break;

  case 137:
                             { (yyval.s) = new string("+"); }
    break;

  case 138:
                             { (yyval.s) = new string("-"); }
    break;

  case 139:
                             { (yyval.s) = new string("*"); }
    break;

  case 140:
                             { (yyval.s) = new string("/"); }
    break;

  case 141:
                             { (yyval.s) = new string("%"); }
    break;

  case 142:
                             { (yyval.s) = new string("<"); }
    break;

  case 143:
                             { (yyval.s) = new string(">"); }
    break;

  case 144:
                             { (yyval.s) = new string("interval"); }
    break;

  case 145:
                             { (yyval.s) = new string("=="); }
    break;

  case 146:
                             { (yyval.s) = new string("!="); }
    break;

  case 147:
                             { (yyval.s) = new string("<="); }
    break;

  case 148:
                             { (yyval.s) = new string(">="); }
    break;

  case 149:
                             { (yyval.s) = new string("&"); }
    break;

  case 150:
                             { (yyval.s) = new string("|"); }
    break;

  case 151:
                             { (yyval.s) = new string("^"); }
    break;

  case 152:
                             { (yyval.s) = new string("++"); }
    break;

  case 153:
                             { (yyval.s) = new string("--"); }
    break;

  case 154:
                             { (yyval.s) = new string("+++"); }
    break;

  case 155:
                             { (yyval.s) = new string("---"); }
    break;

  case 156:
                             { (yyval.s) = new string("<<"); }
    break;

  case 157:
                             { (yyval.s) = new string(">>"); }
    break;

  case 158:
                             { (yyval.s) = new string("<<="); }
    break;

  case 159:
                             { (yyval.s) = new string(">>="); }
    break;

  case 160:
                             { (yyval.s) = new string("<<<"); }
    break;

  case 161:
                             { (yyval.s) = new string(">>>"); }
    break;

  case 162:
                             { (yyval.s) = new string("<<<="); }
    break;

  case 163:
                             { (yyval.s) = new string(">>>="); }
    break;

  case 164:
                             { (yyval.s) = new string("[]"); }
    break;

  case 165:
                                { (yyval.s) = new string("?[]"); }
    break;

  case 166:
                             { (yyval.s) = new string("."); }
    break;

  case 167:
                             { (yyval.s) = new string("?."); }
    break;

  case 168:
                                       { (yyval.s) = new string(".`"+*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 169:
                                             { (yyval.s) = new string(".`"+*(yyvsp[-1].s)+"`clone"); delete (yyvsp[-1].s); }
    break;

  case 170:
                                       { (yyval.s) = new string("?.`"+*(yyvsp[0].s)); delete (yyvsp[0].s);}
    break;

  case 171:
                                { (yyval.s) = new string("clone"); }
    break;

  case 172:
                                { (yyval.s) = new string("finalize"); }
    break;

  case 173:
                           { (yyval.s) = new string("??"); }
    break;

  case 174:
                            { (yyval.s) = new string("`is"); }
    break;

  case 175:
                            { (yyval.s) = new string("`as"); }
    break;

  case 176:
                                       { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "`is`" + *(yyvsp[0].s); }
    break;

  case 177:
                                       { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "`as`" + *(yyvsp[0].s); }
    break;

  case 178:
                                { (yyval.s) = new string("?as"); }
    break;

  case 179:
                                           { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "?as`" + *(yyvsp[0].s); }
    break;

  case 180:
                     { (yyval.s) = new string("bool"); }
    break;

  case 181:
                     { (yyval.s) = new string("string"); }
    break;

  case 182:
                     { (yyval.s) = new string("int"); }
    break;

  case 183:
                     { (yyval.s) = new string("int2"); }
    break;

  case 184:
                     { (yyval.s) = new string("int3"); }
    break;

  case 185:
                     { (yyval.s) = new string("int4"); }
    break;

  case 186:
                     { (yyval.s) = new string("uint"); }
    break;

  case 187:
                     { (yyval.s) = new string("uint2"); }
    break;

  case 188:
                     { (yyval.s) = new string("uint3"); }
    break;

  case 189:
                     { (yyval.s) = new string("uint4"); }
    break;

  case 190:
                     { (yyval.s) = new string("float"); }
    break;

  case 191:
                     { (yyval.s) = new string("float2"); }
    break;

  case 192:
                     { (yyval.s) = new string("float3"); }
    break;

  case 193:
                     { (yyval.s) = new string("float4"); }
    break;

  case 194:
                     { (yyval.s) = new string("range"); }
    break;

  case 195:
                     { (yyval.s) = new string("urange"); }
    break;

  case 196:
                     { (yyval.s) = new string("range64"); }
    break;

  case 197:
                     { (yyval.s) = new string("urange64"); }
    break;

  case 198:
                     { (yyval.s) = new string("int64"); }
    break;

  case 199:
                     { (yyval.s) = new string("uint64"); }
    break;

  case 200:
                     { (yyval.s) = new string("double"); }
    break;

  case 201:
                     { (yyval.s) = new string("int8"); }
    break;

  case 202:
                     { (yyval.s) = new string("uint8"); }
    break;

  case 203:
                     { (yyval.s) = new string("int16"); }
    break;

  case 204:
                     { (yyval.s) = new string("uint16"); }
    break;

  case 205:
                                                                                {
        (yyvsp[0].pFuncDecl)->atDecl = tokRangeAt(scanner,(yylsp[-1]),(yylsp[0]));
        assignDefaultArguments((yyvsp[0].pFuncDecl));
        runFunctionAnnotations(scanner, yyextra, (yyvsp[0].pFuncDecl), (yyvsp[-2].faList), tokAt(scanner,(yylsp[-2])));
        if ( (yyvsp[0].pFuncDecl)->isGeneric() ) {
            implAddGenericFunction(scanner,(yyvsp[0].pFuncDecl));
        } else {
            if ( !yyextra->g_Program->addFunction((yyvsp[0].pFuncDecl)) ) {
                das2_yyerror(scanner,"function is already defined " +
                    (yyvsp[0].pFuncDecl)->getMangledName(),(yyvsp[0].pFuncDecl)->at,
                        CompilationError::function_already_declared);
            }
        }
        (yyvsp[0].pFuncDecl)->delRef();
    }
    break;

  case 206:
                        { (yyval.b) = yyextra->g_thisStructure ? !yyextra->g_thisStructure->privateStructure : yyextra->g_Program->thisModule->isPublic; }
    break;

  case 207:
                        { (yyval.b) = false; }
    break;

  case 208:
                        { (yyval.b) = true; }
    break;

  case 209:
                                                                                                {
        (yyval.pFuncDecl) = ast_functionDeclarationHeader(scanner,(yyvsp[-2].s),(yyvsp[-1].pVarDeclList),(yyvsp[0].pTypeDecl),tokAt(scanner,(yylsp[-2])));
    }
    break;

  case 210:
                                                     {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
        }
    }
    break;

  case 211:
                                                                {
        (yyvsp[-1].pFuncDecl)->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyvsp[-1].pFuncDecl)->privateFunction = !(yyvsp[-3].b);
        (yyval.pFuncDecl) = (yyvsp[-1].pFuncDecl);
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
        }
    }
    break;

  case 212:
                                                   {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
    }
    break;

  case 213:
                                                                                          {
        auto pB = (ExprBlock *) (yyvsp[-5].pExpression);
        auto pF = (ExprBlock *) (yyvsp[-1].pExpression);
        swap ( pB->finalList, pF->list );
        (yyval.pExpression) = (yyvsp[-5].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-6]),(yylsp[0]));
        delete (yyvsp[-1].pExpression);
    }
    break;

  case 214:
                                                           {
        if ( (yyvsp[-1].pExpression)->rtti_isCallLikeExpr() ) {
            ((ExprLooksLikeCall *)(yyvsp[-1].pExpression))->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            (yyval.pExpression) = (yyvsp[-1].pExpression);
        } else {
            (yyval.pExpression) = (yyvsp[-1].pExpression);
            delete (yyvsp[0].pExpression);
        }
    }
    break;

  case 215:
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 216:
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 217:
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 218:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 219:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 220:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 221:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 222:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 223:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 224:
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 225:
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 226:
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 227:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 228:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 229:
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 230:
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 231:
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 232:
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 233:
        {
        (yyval.pExpression) = new ExprBlock();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 234:
                                                        {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        if ( (yyvsp[0].pExpression) ) {
            static_cast<ExprBlock*>((yyvsp[-1].pExpression))->list.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        }
    }
    break;

  case 235:
                                 {
        delete (yyvsp[-1].pExpression); (yyval.pExpression) = nullptr; YYABORT;
    }
    break;

  case 236:
        { (yyval.pExpression) = nullptr; }
    break;

  case 237:
                             { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 238:
                               {
        (yyval.pTypeDeclList) = new vector<Expression *>();
        (yyval.pTypeDeclList)->push_back(new ExprTypeDecl(tokAt(scanner,(yylsp[0])),(yyvsp[0].pTypeDecl)));
    }
    break;

  case 239:
                                                                           {
        (yyval.pTypeDeclList) = (yyvsp[-2].pTypeDeclList);
        (yyval.pTypeDeclList)->push_back(new ExprTypeDecl(tokAt(scanner,(yylsp[0])),(yyvsp[0].pTypeDecl)));
    }
    break;

  case 240:
                                               { (yyval.s) = (yyvsp[0].s); }
    break;

  case 241:
                                               {
            auto ita = yyextra->das_module_alias.find(*(yyvsp[-2].s));
            if ( ita == yyextra->das_module_alias.end() ) {
                *(yyvsp[-2].s) += "::";
            } else {
                *(yyvsp[-2].s) = ita->second + "::";
            }
            *(yyvsp[-2].s) += *(yyvsp[0].s);
            delete (yyvsp[0].s);
            (yyval.s) = (yyvsp[-2].s);
        }
    break;

  case 242:
                                               { *(yyvsp[0].s) = "::" + *(yyvsp[0].s); (yyval.s) = (yyvsp[0].s); }
    break;

  case 243:
                                      {
        (yyval.pExpression) = new ExprDelete(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 244:
                                                   {
        auto delExpr = new ExprDelete(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[0].pExpression)));
        delExpr->native = true;
        (yyval.pExpression) = delExpr;
    }
    break;

  case 245:
           { yyextra->das_arrow_depth ++; }
    break;

  case 246:
                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 247:
                                                                                                            {
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 248:
                                                            {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-1])),TypeDeclPtr((yyvsp[0].pTypeDecl)),true);
    }
    break;

  case 249:
                                                                                                   {
        auto pNew = new ExprNew(tokAt(scanner,(yylsp[-4])),TypeDeclPtr((yyvsp[-3].pTypeDecl)),true);
        (yyval.pExpression) = parseFunctionArguments(pNew,(yyvsp[-1].pExpression));
    }
    break;

  case 250:
                                                                                     {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-4])),TypeDeclPtr((yyvsp[-3].pTypeDecl)),true);
        ((ExprNew *)(yyval.pExpression))->initializer = (yyvsp[-1].b);
    }
    break;

  case 251:
                                                                                                            {
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->at = tokAt(scanner,(yylsp[-4]));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->makeType = (yyvsp[-4].pTypeDecl);
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->useInitializer = (yyvsp[-2].b);
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->alwaysUseInitializer = true;
        (yyval.pExpression) = new ExprAscend(tokAt(scanner,(yylsp[-5])),ExpressionPtr((yyvsp[-1].pExpression)));
    }
    break;

  case 252:
                                    {
        (yyval.pExpression) = new ExprAscend(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 253:
                       { (yyval.pExpression) = new ExprBreak(tokAt(scanner,(yylsp[0]))); }
    break;

  case 254:
                          { (yyval.pExpression) = new ExprContinue(tokAt(scanner,(yylsp[0]))); }
    break;

  case 255:
                        {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[0])),nullptr);
    }
    break;

  case 256:
                                      {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-1])),(yyvsp[0].pExpression));
    }
    break;

  case 257:
                                             {
        auto pRet = new ExprReturn(tokAt(scanner,(yylsp[-2])),(yyvsp[0].pExpression));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 258:
                                     {
        (yyval.pExpression) = new ExprYield(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 259:
                                            {
        auto pRet = new ExprYield(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 260:
                                             {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 261:
                                                                                       {
        (yyval.pExpression) = new ExprTryCatch(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 262:
                 { (yyval.b) = true; }
    break;

  case 263:
                 { (yyval.b) = false; }
    break;

  case 264:
                    { (yyval.b) = true; }
    break;

  case 265:
                 { (yyval.b) = true; }
    break;

  case 266:
                 { (yyval.b) = false; }
    break;

  case 267:
                    { (yyval.b) = true; }
    break;

  case 268:
                     { (yyval.b) = false; }
    break;

  case 269:
                    {
        (yyval.pNameList) = new vector<string>();
        (yyval.pNameList)->push_back(*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 270:
                                             {
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        delete (yyvsp[0].s);
        (yyval.pNameList) = (yyvsp[-2].pNameList);
    }
    break;

  case 271:
                                                                                                                          {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-6].pNameList),tokAt(scanner,(yylsp[-6])),(yyvsp[-3].pTypeDecl),(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
        (yyval.pVarDecl)->isTupleExpansion = true;
    }
    break;

  case 272:
                                                                                                  {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-5]));
        typeDecl->ref = (yyvsp[-3].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-5].pNameList),tokAt(scanner,(yylsp[-5])),typeDecl,(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
        (yyval.pVarDecl)->isTupleExpansion = true;
    }
    break;

  case 273:
                                                                 {
        (yyval.pExpression) = ast_Let(scanner,(yyvsp[-2].b),(yyvsp[-1].b),(yyvsp[0].pVarDecl),tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 274:
                                                                             {
        (yyval.pExpression) = ast_Let(scanner,(yyvsp[-2].b),(yyvsp[-1].b),(yyvsp[0].pVarDecl),tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 275:
                          { yyextra->das_arrow_depth ++; }
    break;

  case 276:
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 277:
                                                                                                                                                {
        (yyval.pExpression) = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
    }
    break;

  case 278:
                            { yyextra->das_arrow_depth ++; }
    break;

  case 279:
                                                                                                   { yyextra->das_arrow_depth --; }
    break;

  case 280:
                                                                                                                                                  {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->upcast = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 281:
                                 { yyextra->das_arrow_depth ++; }
    break;

  case 282:
                                                                                                        { yyextra->das_arrow_depth --; }
    break;

  case 283:
                                                                                                                                                       {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->reinterpret = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 284:
                         { yyextra->das_arrow_depth ++; }
    break;

  case 285:
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 286:
                                                                                                                      {
        (yyval.pExpression) = new ExprTypeDecl(tokAt(scanner,(yylsp[-5])),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 287:
                                                                         {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ptd->typeexpr);
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[-1].pExpression)));
            }
            delete (yyvsp[-2].s);
    }
    break;

  case 288:
                                                                                                {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ptd->typeexpr,*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-3].s));
            }
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 289:
                                                                                                                     {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ptd->typeexpr,*(yyvsp[-5].s),*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-5].s),*(yyvsp[-3].s));
            }
            delete (yyvsp[-7].s);
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 290:
                      {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 291:
                                            {
            (yyval.pExpression) = new ExprSequence(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 292:
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 293:
                                        {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-1]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 294:
                                               {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[0].pExpression)));
            retE->moveSemantics = true;
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-2]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 295:
                { (yyval.i) = 0;   /* block */  }
    break;

  case 296:
                { (yyval.i) = 1;   /* lambda */ }
    break;

  case 297:
                { (yyval.i) = 2;   /* local function */ }
    break;

  case 298:
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_reference); delete (yyvsp[0].s); }
    break;

  case 299:
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_copy); delete (yyvsp[0].s); }
    break;

  case 300:
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_move); delete (yyvsp[0].s); }
    break;

  case 301:
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_clone); delete (yyvsp[0].s); }
    break;

  case 302:
                         {
        (yyval.pCaptList) = new vector<CaptureEntry>();
        (yyval.pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
    }
    break;

  case 303:
                                               {
        (yyvsp[-2].pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
        (yyval.pCaptList) = (yyvsp[-2].pCaptList);
    }
    break;

  case 304:
        { (yyval.pCaptList) = nullptr; }
    break;

  case 305:
                                         { (yyval.pCaptList) = (yyvsp[-2].pCaptList); }
    break;

  case 306:
                                                                                            {
        (yyval.pExpression) = ast_makeBlock(scanner,(yyvsp[-5].i),(yyvsp[-4].faList),(yyvsp[-3].pCaptList),(yyvsp[-2].pVarDeclList),(yyvsp[-1].pTypeDecl),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[-4])));
    }
    break;

  case 307:
                                                                                       {
        (yyval.pExpression) = ast_makeBlock(scanner,(yyvsp[-5].i),(yyvsp[-4].faList),(yyvsp[-3].pCaptList),(yyvsp[-2].pVarDeclList),(yyvsp[-1].pTypeDecl),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[-4])));
    }
    break;

  case 308:
                                   {
        (yyval.pExpression) = ast_makeBlock(scanner,0,nullptr,nullptr,nullptr,new TypeDecl(Type::autoinfer),(yyvsp[-1].pExpression),tokAt(scanner,(yylsp[-1])),tokAt(scanner,(yylsp[-1])));
    }
    break;

  case 309:
                                              { (yyval.pExpression) = new ExprConstInt(tokAt(scanner,(yylsp[0])),(int32_t)(yyvsp[0].i)); }
    break;

  case 310:
                                              { (yyval.pExpression) = new ExprConstUInt(tokAt(scanner,(yylsp[0])),(uint32_t)(yyvsp[0].ui)); }
    break;

  case 311:
                                              { (yyval.pExpression) = new ExprConstInt64(tokAt(scanner,(yylsp[0])),(int64_t)(yyvsp[0].i64)); }
    break;

  case 312:
                                              { (yyval.pExpression) = new ExprConstUInt64(tokAt(scanner,(yylsp[0])),(uint64_t)(yyvsp[0].ui64)); }
    break;

  case 313:
                                              { (yyval.pExpression) = new ExprConstUInt8(tokAt(scanner,(yylsp[0])),(uint8_t)(yyvsp[0].ui)); }
    break;

  case 314:
                                              { (yyval.pExpression) = new ExprConstFloat(tokAt(scanner,(yylsp[0])),(float)(yyvsp[0].fd)); }
    break;

  case 315:
                                              { (yyval.pExpression) = new ExprConstDouble(tokAt(scanner,(yylsp[0])),(double)(yyvsp[0].d)); }
    break;

  case 316:
                                             { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 317:
                                             { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 318:
                                             { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 319:
                                             { (yyval.pExpression) = new ExprClone(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 320:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 321:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 322:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 323:
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 324:
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 325:
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 326:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 327:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 328:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 329:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 330:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 331:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 332:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 333:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 334:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 335:
                                                                         {
        auto nc = new ExprNamedCall(tokAt(scanner,(yylsp[-5])),*(yyvsp[-5].s));
        nc->arguments = *(yyvsp[-2].pMakeStruct);
        delete (yyvsp[-2].pMakeStruct);
        delete (yyvsp[-5].s);
        (yyval.pExpression) = nc;
    }
    break;

  case 336:
                                                                                                  {
        auto nc = new ExprNamedCall(tokAt(scanner,(yylsp[-7])),*(yyvsp[-7].s));
        nc->nonNamedArguments = sequenceToList((yyvsp[-5].pExpression));
        nc->arguments = *(yyvsp[-2].pMakeStruct);
        delete (yyvsp[-2].pMakeStruct);
        delete (yyvsp[-7].s);
        (yyval.pExpression) = nc;
    }
    break;

  case 337:
                                                         {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-3])), (yyvsp[-4].pExpression), *(yyvsp[-2].s));
        delete (yyvsp[-2].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 338:
                                                                              {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-4])), (yyvsp[-5].pExpression), *(yyvsp[-3].s));
        auto callArgs = sequenceToList((yyvsp[-1].pExpression));
        pInvoke->arguments.insert ( pInvoke->arguments.end(), callArgs.begin(), callArgs.end() );
        delete (yyvsp[-3].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 339:
                                    {
        (yyval.pExpression) = new ExprAddr(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 340:
                                          {
        auto expr = new ExprAddr(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``ADDR``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression), expr, "i");
    }
    break;

  case 341:
                                          {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 342:
                    { yyextra->das_arrow_depth ++; }
    break;

  case 343:
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 344:
                                                                                                                                                       {
        auto expr = (ExprAddr *) ((yyvsp[0].pExpression)->rtti_isAddr() ? (yyvsp[0].pExpression) : (((ExprTag *) (yyvsp[0].pExpression))->value.get()));
        expr->funcType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 345:
                    { yyextra->das_arrow_depth ++; }
    break;

  case 346:
                                                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 347:
                                                                                                                                                                                     {
        auto expr = (ExprAddr *) ((yyvsp[0].pExpression)->rtti_isAddr() ? (yyvsp[0].pExpression) : (((ExprTag *) (yyvsp[0].pExpression))->value.get()));
        expr->funcType = make_smart<TypeDecl>(Type::tFunction);
        expr->funcType->firstType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        if ( (yyvsp[-4].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, expr->funcType.get(), (yyvsp[-4].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-4].pVarDeclList));
        }
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 348:
                                              {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 349:
                                                  {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true);
        delete (yyvsp[0].s);
    }
    break;

  case 350:
                                                      {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-3])), (yyvsp[-4].pExpression), *(yyvsp[-2].s));
        delete (yyvsp[-2].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 351:
                                                                           {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-4])), (yyvsp[-5].pExpression), *(yyvsp[-3].s));
        auto callArgs = sequenceToList((yyvsp[-1].pExpression));
        pInvoke->arguments.insert ( pInvoke->arguments.end(), callArgs.begin(), callArgs.end() );
        delete (yyvsp[-3].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 352:
                               { yyextra->das_suppress_errors=true; }
    break;

  case 353:
                                                                            { yyextra->das_suppress_errors=false; }
    break;

  case 354:
                                                                                                                    {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-3])), tokAt(scanner,(yylsp[-3])), ExpressionPtr((yyvsp[-4].pExpression)), "");
        yyerrok;
    }
    break;

  case 355:
                                               {
            (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),*(yyvsp[-2].s));
            delete (yyvsp[-2].s);
    }
    break;

  case 356:
                                                               {
            ((ExprMakeStruct *)(yyvsp[-1].pExpression))->at = tokAt(scanner,(yylsp[-3]));
            ((ExprMakeStruct *)(yyvsp[-1].pExpression))->makeType = new TypeDecl(Type::alias);
            ((ExprMakeStruct *)(yyvsp[-1].pExpression))->makeType->alias = *(yyvsp[-3].s);
            ((ExprMakeStruct *)(yyvsp[-1].pExpression))->useInitializer = true;
            ((ExprMakeStruct *)(yyvsp[-1].pExpression))->alwaysUseInitializer = true;
            delete (yyvsp[-3].s);
            (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 357:
                                                                    {
            (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),*(yyvsp[-3].s)),(yyvsp[-1].pExpression));
            delete (yyvsp[-3].s);
    }
    break;

  case 358:
                                                    {
        (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-2].type)));
    }
    break;

  case 359:
                                                                         {
        (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-3].type))),(yyvsp[-1].pExpression));
    }
    break;

  case 360:
                                              { (yyval.pExpression) = new ExprConstPtr(tokAt(scanner,(yylsp[0])),nullptr); }
    break;

  case 361:
                                              { (yyval.pExpression) = new ExprVar(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 362:
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 363:
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 364:
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 365:
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 366:
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),true); }
    break;

  case 367:
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),false); }
    break;

  case 368:
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 369:
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 370:
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"!",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 371:
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"~",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 372:
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"+",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 373:
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"-",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 374:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 375:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 376:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 377:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 378:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 379:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 380:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 381:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 382:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 383:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 384:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 385:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"==", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 386:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"!=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 387:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 388:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 389:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 390:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 391:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 392:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 393:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 394:
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 395:
                                             {
        auto itv = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-1])),"interval");
        itv->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        itv->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = itv;
    }
    break;

  case 396:
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"++", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 397:
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"--", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 398:
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"+++", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 399:
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"---", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 400:
                                                         {
            if ( (yyvsp[-2].pExpression)->rtti_isSequence() ) {
                auto mkt = new ExprMakeTuple(tokAt(scanner,(yylsp[-2])));
                mkt->values = sequenceToList((yyvsp[-2].pExpression));
                (yyval.pExpression) = mkt;
            } else if ( (yyvsp[-1].b) ) {
                auto mkt = new ExprMakeTuple(tokAt(scanner,(yylsp[-2])));
                mkt->values.push_back((yyvsp[-2].pExpression));
                (yyval.pExpression) = mkt;
            } else {
                (yyval.pExpression) = (yyvsp[-2].pExpression);
            }
        }
    break;

  case 401:
                                                 { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 402:
                                                     { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 403:
                                                 { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 404:
                                                     { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 405:
                                                 { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 406:
                                                     { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true); delete (yyvsp[0].s); }
    break;

  case 407:
                                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 408:
                        { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 409:
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 410:
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 411:
                                                   { (yyval.pExpression) = new ExprRef2Ptr(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 412:
                                                                                                              {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-4].pTypeDecl),(yyvsp[-2].pCaptList),nullptr,tokAt(scanner,(yylsp[-6])));
    }
    break;

  case 413:
                                                                                                                            {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-5].pTypeDecl),(yyvsp[-3].pCaptList),(yyvsp[-1].pExpression),tokAt(scanner,(yylsp[-7])));
    }
    break;

  case 414:
                                                   { (yyval.pExpression) = new ExprNullCoalescing(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 415:
                                                          {
            (yyval.pExpression) = new ExprOp3(tokAt(scanner,(yylsp[-3])),"?",ExpressionPtr((yyvsp[-4].pExpression)),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        }
    break;

  case 416:
                                               { yyextra->das_arrow_depth ++; }
    break;

  case 417:
                                                                                                                      { yyextra->das_arrow_depth --; }
    break;

  case 418:
                                                                                                                                                       {
        (yyval.pExpression) = new ExprIs(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-7].pExpression)),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 419:
                                                               {
        auto vdecl = new TypeDecl((yyvsp[0].type));
        vdecl->at = tokAt(scanner,(yylsp[0]));
        (yyval.pExpression) = new ExprIs(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),vdecl);
    }
    break;

  case 420:
                                              {
        (yyval.pExpression) = new ExprIsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 421:
                                              {
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 422:
                                               { yyextra->das_arrow_depth ++; }
    break;

  case 423:
                                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 424:
                                                                                                                                            {
        auto vname = (yyvsp[-2].pTypeDecl)->describe();
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-7].pExpression)),vname);
        delete (yyvsp[-2].pTypeDecl);
    }
    break;

  case 425:
                                                               {
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),das_to_string((yyvsp[0].type)));
    }
    break;

  case 426:
                                                  {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 427:
                                                   { yyextra->das_arrow_depth ++; }
    break;

  case 428:
                                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 429:
                                                                                                                                                {
        auto vname = (yyvsp[-2].pTypeDecl)->describe();
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-8].pExpression)),vname);
        delete (yyvsp[-2].pTypeDecl);
    }
    break;

  case 430:
                                                                   {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),das_to_string((yyvsp[0].type)));
    }
    break;

  case 431:
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 432:
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 433:
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 434:
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 435:
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 436:
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 437:
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 438:
                                                { (yyval.pExpression) = ast_lpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 439:
                                                { (yyval.pExpression) = ast_rpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 440:
                                                          {
        auto fncall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[0].type)));
        (yyval.pExpression) = ast_rpipe(scanner,(yyvsp[-2].pExpression),fncall,tokAt(scanner,(yylsp[-1])));
    }
    break;

  case 441:
                             { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 442:
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"e"); }
    break;

  case 443:
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"i"); }
    break;

  case 444:
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"v"); }
    break;

  case 445:
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"b"); }
    break;

  case 446:
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"a"); }
    break;

  case 447:
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[0])),nullptr,"..."); }
    break;

  case 448:
                                                            {
            auto ccall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-5])),tokAt(scanner,(yylsp[0])),"``MACRO``TAG``CALL``");
            (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-5])),(yyvsp[-3].pExpression),ccall,"c");
        }
    break;

  case 449:
                                                                                {
            auto ccall = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-6])),tokAt(scanner,(yylsp[0])),"``MACRO``TAG``CALL``"),(yyvsp[-1].pExpression));
            (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-6])),(yyvsp[-4].pExpression),ccall,"c");
        }
    break;

  case 450:
                                                                {
        auto cfield = new ExprField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-5].pExpression)), "``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 451:
                                                                 {
        auto cfield = new ExprSafeField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-5].pExpression)), "``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 452:
                                                                    {
        auto cfield = new ExprField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-6].pExpression)), "``MACRO``TAG``FIELD``", true);
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 453:
                                                                     {
        auto cfield = new ExprSafeField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-6].pExpression)), "``MACRO``TAG``FIELD``", true);
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 454:
                                                                   {
        auto cfield = new ExprAsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-5].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 455:
                                                                       {
        auto cfield = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-6].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 456:
                                                                   {
        auto cfield = new ExprIsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-5].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 457:
                                                         {
        auto ccall = new ExprAddr(tokAt(scanner,(yylsp[-4])),"``MACRO``TAG``ADDR``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-3])),(yyvsp[-1].pExpression),ccall,"c");
    }
    break;

  case 458:
                                      { (yyval.aaList) = nullptr; }
    break;

  case 459:
                                      { (yyval.aaList) = (yyvsp[0].aaList); }
    break;

  case 460:
                      { (yyval.i) = OVERRIDE_NONE; }
    break;

  case 461:
                      { (yyval.i) = OVERRIDE_OVERRIDE; }
    break;

  case 462:
                      { (yyval.i) = OVERRIDE_SEALED; }
    break;

  case 463:
                        { (yyval.b) = false; }
    break;

  case 464:
                        { (yyval.b) = true; }
    break;

  case 465:
                        { (yyval.b) = false; }
    break;

  case 466:
                        { (yyval.b) = false; }
    break;

  case 467:
                        { (yyval.b) = true; }
    break;

  case 468:
                        { (yyval.b) = false; }
    break;

  case 469:
                        { (yyval.b) = true; }
    break;

  case 470:
                                                                                                                                                                                      {
        (yyvsp[0].pVarDecl)->override = (yyvsp[-2].i) == OVERRIDE_OVERRIDE;
        (yyvsp[0].pVarDecl)->sealed = (yyvsp[-2].i) == OVERRIDE_SEALED;
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-4].aaList);
        (yyvsp[0].pVarDecl)->isPrivate = (yyvsp[-1].b);
        (yyvsp[0].pVarDecl)->isStatic = (yyvsp[-3].b);
        (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
    }
    break;

  case 471:
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 472:
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructureFields(tak);
        }
    }
    break;

  case 473:
                                               {
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        if ( (yyvsp[-1].pVarDecl) ) (yyvsp[-3].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-3]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *((yyvsp[-1].pVarDecl)->pNameList) ) {
                    crd->afterStructureField(nl.name.c_str(), nl.at);
                }
            }
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructureFields(tak);
        }
    }
    break;

  case 474:
                                                                                                                     {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-2]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 475:
                                                    {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-1]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDefAbstract(scanner,(yyvsp[-8].pVarDeclList),(yyvsp[-7].faList),(yyvsp[-5].b),(yyvsp[-3].b), (yyvsp[-1].pFuncDecl));
            }
    break;

  case 476:
                                                                                                                                                                         {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 477:
                                                                        {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDef(scanner,(yyvsp[-9].pVarDeclList),(yyvsp[-8].faList),(yyvsp[-5].b),(yyvsp[-6].b),(yyvsp[-4].i),(yyvsp[-3].b),(yyvsp[-1].pFuncDecl),(yyvsp[0].pExpression),tokRangeAt(scanner,(yylsp[-7]),(yylsp[0])),tokAt(scanner,(yylsp[-8])));
            }
    break;

  case 478:
                                                                                                  {
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            if ( (yyvsp[-1].b) ) {
                (yyvsp[0].pVarDecl)->pTypeDecl->constant = true;
            } else {
                (yyvsp[0].pVarDecl)->pTypeDecl->removeConstant = true;
            }
            (yyvsp[0].pVarDecl)->annotation = (yyvsp[-2].aaList);
        }
    break;

  case 479:
                                     {
            auto na = new vector<VariableNameAndPosition>();
            na->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1]))});
            auto decl = new VariableDeclaration(na, new TypeDecl(Type::none), (yyvsp[-1].pExpression));
            decl->pTypeDecl->isTag = true;
            (yyval.pVarDecl) = decl;
        }
    break;

  case 480:
                                                                                 { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 481:
                                                                                 { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 482:
                                    {
        (yyval.pVarDecl) = new VariableDeclaration(nullptr,(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 483:
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 484:
                                                       { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 485:
                                                       { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 486:
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 487:
                                      {
        (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList);
    }
    break;

  case 488:
                                                         {
        (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        /*
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tokName = tokAt(scanner,@decl);
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *($decl->pNameList) ) {
                    crd->afterVariantEntry(nl.name.c_str(), nl.at);
                }
            }
        }
        */
    }
    break;

  case 489:
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 490:
                                                         { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 491:
                                                         { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 492:
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 493:
                                        {
        (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList);
    }
    break;

  case 494:
                                                             {
        (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tokName = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *((yyvsp[-1].pVarDecl)->pNameList) ) {
                    crd->afterVariantEntry(nl.name.c_str(), nl.at);
                }
            }
        }
    }
    break;

  case 495:
                    { (yyval.b) = false; }
    break;

  case 496:
                    { (yyval.b) = true; }
    break;

  case 497:
                                          {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[0]));
        autoT->ref = false;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[0].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 498:
                                              {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[-1]));
        autoT->ref = true;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-1].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 499:
                                                                          {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 500:
                                                                                                      {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 501:
                                                                       {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 502:
                    { (yyval.i) = CorM_COPY; }
    break;

  case 503:
                    { (yyval.i) = CorM_MOVE; }
    break;

  case 504:
                    { (yyval.i) = CorM_CLONE; }
    break;

  case 505:
            { (yyval.b) = false; }
    break;

  case 506:
            { (yyval.b) = true; }
    break;

  case 507:
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 508:
                                     {
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-1].pExpression))});
        (yyval.pNameWithPosList) = pSL;
    }
    break;

  case 509:
                                         {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 510:
                                                             {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = (yyvsp[-2].pNameWithPosList);
        delete (yyvsp[0].s);
    }
    break;

  case 511:
                                                                                   {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-4].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = (yyvsp[-4].pNameWithPosList);
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 512:
                                                                                            {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),(yyvsp[-1].pTypeDecl),nullptr);
    }
    break;

  case 513:
                                                                                                                                  {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-5].pNameWithPosList),(yyvsp[-3].pTypeDecl),(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 514:
                                                                                                          {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-4]));
        typeDecl->ref = (yyvsp[-3].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),typeDecl,(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 515:
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 516:
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 517:
                                                                      {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
        (yyvsp[-3].pVarDeclList)->push_back((yyvsp[0].pVarDecl));
    }
    break;

  case 518:
                     { (yyval.b) = false; }
    break;

  case 519:
                     { (yyval.b) = true; }
    break;

  case 520:
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 521:
                     { (yyval.b) = false; }
    break;

  case 522:
                     { (yyval.b) = true; }
    break;

  case 523:
                                                                                                                                       {
        ast_globalLetList(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].pVarDeclList));
    }
    break;

  case 524:
                                                                                        {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 525:
                                                                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        ast_globalLet(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].aaList),(yyvsp[0].pVarDecl));
    }
    break;

  case 526:
                   {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyval.pEnumPair) = new EnumPair((yyvsp[0].s),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 527:
                                   {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        (yyval.pEnumPair) = new EnumPair((yyvsp[-2].s),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-2])));
    }
    break;

  case 528:
        {
        (yyval.pEnum) = new Enumeration();
    }
    break;

  case 529:
                            {
        (yyval.pEnum) = new Enumeration();
        if ( !(yyval.pEnum)->add((yyvsp[0].pEnumPair)->name,(yyvsp[0].pEnumPair)->expr,(yyvsp[0].pEnumPair)->at) ) {
            das2_yyerror(scanner,"enumeration already declared " + (yyvsp[0].pEnumPair)->name, (yyvsp[0].pEnumPair)->at,
                CompilationError::enumeration_value_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            for ( auto & crd : yyextra->g_CommentReaders ) {
                crd->afterEnumerationEntry((yyvsp[0].pEnumPair)->name.c_str(), (yyvsp[0].pEnumPair)->at);
            }
        }
        delete (yyvsp[0].pEnumPair);
    }
    break;

  case 530:
                                              {
        if ( !(yyvsp[-2].pEnum)->add((yyvsp[0].pEnumPair)->name,(yyvsp[0].pEnumPair)->expr,(yyvsp[0].pEnumPair)->at) ) {
            das2_yyerror(scanner,"enumeration already declared " + (yyvsp[0].pEnumPair)->name, (yyvsp[0].pEnumPair)->at,
                CompilationError::enumeration_value_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            for ( auto & crd : yyextra->g_CommentReaders ) {
                crd->afterEnumerationEntry((yyvsp[0].pEnumPair)->name.c_str(), (yyvsp[0].pEnumPair)->at);
            }
        }
        delete (yyvsp[0].pEnumPair);
        (yyval.pEnum) = (yyvsp[-2].pEnum);
    }
    break;

  case 531:
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 532:
                     { (yyval.b) = false; }
    break;

  case 533:
                     { (yyval.b) = true; }
    break;

  case 534:
                                                         {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeAlias(pubename);
        }
    }
    break;

  case 535:
                                  {
        das_checkName(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])));
        (yyvsp[0].pTypeDecl)->isPrivateAlias = !(yyvsp[-4].b);
        if ( (yyvsp[0].pTypeDecl)->baseType == Type::alias ) {
            das2_yyerror(scanner,"alias cannot be defined in terms of another alias "+*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])),
                CompilationError::invalid_type);
        }
        (yyvsp[0].pTypeDecl)->alias = *(yyvsp[-3].s);
        if ( !yyextra->g_Program->addAlias(TypeDeclPtr((yyvsp[0].pTypeDecl))) ) {
            das2_yyerror(scanner,"type alias is already defined "+*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterAlias((yyvsp[-3].s)->c_str(),pubename);
        }
        delete (yyvsp[-3].s);
    }
    break;

  case 537:
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 538:
                     { (yyval.b) = false; }
    break;

  case 539:
                     { (yyval.b) = true; }
    break;

  case 540:
                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeEnumeration(pubename);
        }
        (yyval.pEnum) = ast_addEmptyEnum(scanner, (yyvsp[0].s), tokAt(scanner,(yylsp[0])));
    }
    break;

  case 541:
        {
        (yyval.type) = Type::tInt;
    }
    break;

  case 542:
                                              {
        (yyval.type) = (yyvsp[0].type);
    }
    break;

  case 543:
                                                                                                                                                          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeEnumerationEntries(tak);
        }
    }
    break;

  case 544:
                                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumerationEntries(tak);
        }
    }
    break;

  case 545:
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[-3]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumeration((yyvsp[-7].pEnum)->name.c_str(),pubename);
        }
        ast_enumDeclaration(scanner,(yyvsp[-10].faList),tokAt(scanner,(yylsp[-10])),(yyvsp[-8].b),(yyvsp[-7].pEnum),(yyvsp[-3].pEnum),(yyvsp[-6].type));
    }
    break;

  case 546:
                                        { (yyval.s) = nullptr; }
    break;

  case 547:
                                        { (yyval.s) = (yyvsp[0].s); }
    break;

  case 548:
                        { (yyval.b) = false; }
    break;

  case 549:
                        { (yyval.b) = true; }
    break;

  case 550:
                                                                           {
        (yyval.pStructure) = ast_structureName(scanner,(yyvsp[-2].b),(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])),(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 551:
                    { (yyval.b) = true; }
    break;

  case 552:
                    { (yyval.b) = false; }
    break;

  case 553:
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 554:
                     { (yyval.b) = false; }
    break;

  case 555:
                     { (yyval.b) = true; }
    break;

  case 556:
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 557:
                                                       {
        (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList);
    }
    break;

  case 558:
                                                                                                        {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructure(tak);
        }
    }
    break;

  case 559:
                         { if ( (yyvsp[0].pStructure) ) { (yyvsp[0].pStructure)->isClass = (yyvsp[-3].b); (yyvsp[0].pStructure)->privateStructure = !(yyvsp[-2].b); } }
    break;

  case 560:
                                                                                                                                                    {
        if ( (yyvsp[-2].pStructure) ) {
            ast_structureDeclaration ( scanner, (yyvsp[-6].faList), tokAt(scanner,(yylsp[-5])), (yyvsp[-2].pStructure), tokAt(scanner,(yylsp[-2])), (yyvsp[0].pVarDeclList) );
            if ( !yyextra->g_CommentReaders.empty() ) {
                auto tak = tokAt(scanner,(yylsp[-5]));
                for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructure((yyvsp[-2].pStructure),tak);
            }
        } else {
            deleteVariableDeclarationList((yyvsp[0].pVarDeclList));
        }
    }
    break;

  case 561:
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 562:
                                     {
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression)});
        (yyval.pNameWithPosList) = pSL;
    }
    break;

  case 563:
                                         {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 564:
                                                         {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = (yyvsp[-2].pNameWithPosList);
        delete (yyvsp[0].s);
    }
    break;

  case 565:
                                                                               {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-4].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = (yyvsp[-4].pNameWithPosList);
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 566:
                        { (yyval.type) = Type::tBool; }
    break;

  case 567:
                        { (yyval.type) = Type::tString; }
    break;

  case 568:
                        { (yyval.type) = Type::tInt; }
    break;

  case 569:
                        { (yyval.type) = Type::tInt8; }
    break;

  case 570:
                        { (yyval.type) = Type::tInt16; }
    break;

  case 571:
                        { (yyval.type) = Type::tInt64; }
    break;

  case 572:
                        { (yyval.type) = Type::tInt2; }
    break;

  case 573:
                        { (yyval.type) = Type::tInt3; }
    break;

  case 574:
                        { (yyval.type) = Type::tInt4; }
    break;

  case 575:
                        { (yyval.type) = Type::tUInt; }
    break;

  case 576:
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 577:
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 578:
                        { (yyval.type) = Type::tUInt64; }
    break;

  case 579:
                        { (yyval.type) = Type::tUInt2; }
    break;

  case 580:
                        { (yyval.type) = Type::tUInt3; }
    break;

  case 581:
                        { (yyval.type) = Type::tUInt4; }
    break;

  case 582:
                        { (yyval.type) = Type::tFloat; }
    break;

  case 583:
                        { (yyval.type) = Type::tFloat2; }
    break;

  case 584:
                        { (yyval.type) = Type::tFloat3; }
    break;

  case 585:
                        { (yyval.type) = Type::tFloat4; }
    break;

  case 586:
                        { (yyval.type) = Type::tVoid; }
    break;

  case 587:
                        { (yyval.type) = Type::tRange; }
    break;

  case 588:
                        { (yyval.type) = Type::tURange; }
    break;

  case 589:
                        { (yyval.type) = Type::tRange64; }
    break;

  case 590:
                        { (yyval.type) = Type::tURange64; }
    break;

  case 591:
                        { (yyval.type) = Type::tDouble; }
    break;

  case 592:
                        { (yyval.type) = Type::tBitfield; }
    break;

  case 593:
                        { (yyval.type) = Type::tInt; }
    break;

  case 594:
                        { (yyval.type) = Type::tInt8; }
    break;

  case 595:
                        { (yyval.type) = Type::tInt16; }
    break;

  case 596:
                        { (yyval.type) = Type::tUInt; }
    break;

  case 597:
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 598:
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 599:
                        { (yyval.type) = Type::tInt64; }
    break;

  case 600:
                        { (yyval.type) = Type::tUInt64; }
    break;

  case 601:
                                 {
        (yyval.pTypeDecl) = yyextra->g_Program->makeTypeDeclaration(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s));
        if ( !(yyval.pTypeDecl) ) {
            (yyval.pTypeDecl) = new TypeDecl(Type::tVoid);
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
        }
        delete (yyvsp[0].s);
    }
    break;

  case 602:
                       {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 603:
                                            {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pTypeDecl)->alias = *(yyvsp[-1].s);
        delete (yyvsp[-1].s);
    }
    break;

  case 604:
                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::alias);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pTypeDecl)->alias = "``MACRO``TAG``";
        (yyval.pTypeDecl)->isTag = true;
        (yyval.pTypeDecl)->firstType = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->firstType->at = tokAt(scanner, (yylsp[-1]));
        (yyval.pTypeDecl)->firstType->dimExpr.push_back((yyvsp[-1].pExpression));
    }
    break;

  case 605:
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<string>();
        pSL->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 606:
                                           {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = (yyvsp[-2].pNameList);
        delete (yyvsp[0].s);
    }
    break;

  case 607:
        {
        auto pSL = new vector<string>();
        (yyval.pNameList) = pSL;

    }
    break;

  case 608:
                   {
        (yyval.pNameList) = new vector<string>();
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyval.pNameList)->push_back(*(yyvsp[0].s));
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterBitfieldEntry((yyvsp[0].s)->c_str(),atvname);
        }
        delete (yyvsp[0].s);
    }
    break;

  case 609:
                                                 {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = (yyvsp[-2].pNameList);
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterBitfieldEntry((yyvsp[0].s)->c_str(),atvname);
        }
        delete (yyvsp[0].s);
    }
    break;

  case 610:
                                     { yyextra->das_arrow_depth ++; }
    break;

  case 611:
                                                                                            { yyextra->das_arrow_depth --; }
    break;

  case 612:
                                                                                                                             {
            (yyval.pTypeDecl) = new TypeDecl(Type::tBitfield);
            (yyval.pTypeDecl)->argNames = *(yyvsp[-2].pNameList);
            if ( (yyval.pTypeDecl)->argNames.size()>32 ) {
                das2_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-5])),
                    CompilationError::invalid_type);
            }
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
            delete (yyvsp[-2].pNameList);
    }
    break;

  case 613:
                                      {
        (yyval.aTypePair).firstType = (yyvsp[0].pTypeDecl);
        (yyval.aTypePair).secondType = new TypeDecl(Type::tVoid);
    }
    break;

  case 614:
                                                                          {
        (yyval.aTypePair).firstType = (yyvsp[-2].pTypeDecl);
        (yyval.aTypePair).secondType = (yyvsp[0].pTypeDecl);
    }
    break;

  case 615:
                             {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        appendDimExpr((yyval.pTypeDecl), (yyvsp[-1].pExpression));
    }
    break;

  case 616:
                                            {
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
        appendDimExpr((yyval.pTypeDecl), (yyvsp[-1].pExpression));
    }
    break;

  case 617:
                                                            { (yyval.pTypeDecl) = new TypeDecl((yyvsp[0].type)); (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0])); }
    break;

  case 618:
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 619:
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 620:
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 621:
                                                                {
        if ( (yyvsp[-1].pTypeDecl)->baseType==Type::typeDecl ) {
            das2_yyerror(scanner,"type declaration can`t be used as array base type",tokAt(scanner,(yylsp[-1])),
                CompilationError::invalid_type);
        } else if ( (yyvsp[-1].pTypeDecl)->baseType==Type::typeMacro ) {
            das2_yyerror(scanner,"macro can`t be used as array base type",tokAt(scanner,(yylsp[-1])),
                CompilationError::invalid_type);
        }
        (yyvsp[-1].pTypeDecl)->dim.insert((yyvsp[-1].pTypeDecl)->dim.begin(), (yyvsp[0].pTypeDecl)->dim.begin(), (yyvsp[0].pTypeDecl)->dim.end());
        (yyvsp[-1].pTypeDecl)->dimExpr.insert((yyvsp[-1].pTypeDecl)->dimExpr.begin(), (yyvsp[0].pTypeDecl)->dimExpr.begin(), (yyvsp[0].pTypeDecl)->dimExpr.end());
        (yyvsp[-1].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyvsp[0].pTypeDecl)->dimExpr.clear();
        delete (yyvsp[0].pTypeDecl);
    }
    break;

  case 622:
                                                      {
        (yyvsp[-2].pTypeDecl)->dim.push_back(TypeDecl::dimAuto);
        (yyvsp[-2].pTypeDecl)->dimExpr.push_back(nullptr);
        (yyvsp[-2].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 623:
                     { yyextra->das_arrow_depth ++; }
    break;

  case 624:
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 625:
                                                                                                                      {
        (yyvsp[-2].pTypeDecl)->autoToAlias = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 626:
                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::typeDecl);
        (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-3]),(yylsp[-1]));
        (yyval.pTypeDecl)->dimExpr.push_back((yyvsp[-1].pExpression));
    }
    break;

  case 627:
                                                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::typeMacro);
        (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-3]), (yylsp[-1]));
        (yyval.pTypeDecl)->dimExpr = sequenceToList((yyvsp[-1].pExpression));
        (yyval.pTypeDecl)->dimExpr.insert((yyval.pTypeDecl)->dimExpr.begin(), new ExprConstString(tokAt(scanner,(yylsp[-3])), *(yyvsp[-3].s)));
        delete (yyvsp[-3].s);
    }
    break;

  case 628:
                                        { yyextra->das_arrow_depth ++; }
    break;

  case 629:
                                                                                                                                                           {
        (yyval.pTypeDecl) = new TypeDecl(Type::typeMacro);
        (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-7]), (yylsp[-1]));
        (yyval.pTypeDecl)->dimExpr = typesAndSequenceToList((yyvsp[-4].pTypeDeclList),(yyvsp[-1].pExpression));
        (yyval.pTypeDecl)->dimExpr.insert((yyval.pTypeDecl)->dimExpr.begin(), new ExprConstString(tokAt(scanner,(yylsp[-7])), *(yyvsp[-7].s)));
        delete (yyvsp[-7].s);
    }
    break;

  case 630:
                                                          {
        (yyvsp[-3].pTypeDecl)->removeDim = true;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
    break;

  case 631:
                                                           {
        (yyvsp[-1].pTypeDecl)->isExplicit = true;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 632:
                                                        {
        (yyvsp[-1].pTypeDecl)->constant = true;
        (yyvsp[-1].pTypeDecl)->removeConstant = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 633:
                                                            {
        (yyvsp[-2].pTypeDecl)->constant = false;
        (yyvsp[-2].pTypeDecl)->removeConstant = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 634:
                                                  {
        (yyvsp[-1].pTypeDecl)->ref = true;
        (yyvsp[-1].pTypeDecl)->removeRef = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 635:
                                                      {
        (yyvsp[-2].pTypeDecl)->ref = false;
        (yyvsp[-2].pTypeDecl)->removeRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 636:
                                                  {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->temporary = true;
    }
    break;

  case 637:
                                                           {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->implicit = true;
    }
    break;

  case 638:
                                                      {
        (yyvsp[-2].pTypeDecl)->temporary = false;
        (yyvsp[-2].pTypeDecl)->removeTemporary = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 639:
                                                               {
        (yyvsp[-2].pTypeDecl)->explicitConst = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 640:
                                                         {
        (yyvsp[-2].pTypeDecl)->explicitRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 641:
                                                  {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 642:
                               { yyextra->das_arrow_depth ++; }
    break;

  case 643:
                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 644:
                                                                                                                                {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->smartPtr = true;
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 645:
                                                 {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = make_smart<TypeDecl>(Type::tPointer);
        (yyval.pTypeDecl)->firstType->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 646:
                           { yyextra->das_arrow_depth ++; }
    break;

  case 647:
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 648:
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tArray);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 649:
                           { yyextra->das_arrow_depth ++; }
    break;

  case 650:
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 651:
                                                                                                                      {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTable);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].aTypePair).firstType);
        (yyval.pTypeDecl)->secondType = TypeDeclPtr((yyvsp[-2].aTypePair).secondType);
    }
    break;

  case 652:
                               { yyextra->das_arrow_depth ++; }
    break;

  case 653:
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 654:
                                                                                                                                  {
        (yyval.pTypeDecl) = new TypeDecl(Type::tIterator);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 655:
                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 656:
                             { yyextra->das_arrow_depth ++; }
    break;

  case 657:
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 658:
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 659:
                             { yyextra->das_arrow_depth ++; }
    break;

  case 660:
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 661:
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 662:
                           {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 663:
                               { yyextra->das_arrow_depth ++; }
    break;

  case 664:
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 665:
                                                                                                                                 {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 666:
                               { yyextra->das_arrow_depth ++; }
    break;

  case 667:
                                                                                                                                         { yyextra->das_arrow_depth --; }
    break;

  case 668:
                                                                                                                                                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 669:
                         {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 670:
                             { yyextra->das_arrow_depth ++; }
    break;

  case 671:
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 672:
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 673:
                             { yyextra->das_arrow_depth ++; }
    break;

  case 674:
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 675:
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 676:
                            { yyextra->das_arrow_depth ++; }
    break;

  case 677:
                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 678:
                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTuple);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 679:
                              { yyextra->das_arrow_depth ++; }
    break;

  case 680:
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 681:
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tVariant);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 682:
                                        {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
    }
    break;

  case 683:
                                                                     {
        if ( (yyvsp[-2].pTypeDecl)->baseType==Type::option ) {
            (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[0].pTypeDecl));
        } else {
            (yyval.pTypeDecl) = new TypeDecl(Type::option);
            (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[-2].pTypeDecl));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[0].pTypeDecl));
        }
    }
    break;

  case 684:
                                             {
        if ( (yyvsp[-2].pTypeDecl)->baseType==Type::option ) {
            (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
            (yyval.pTypeDecl)->argTypes.push_back(make_smart<TypeDecl>(*(yyvsp[-2].pTypeDecl)->argTypes.back()));
            (yyvsp[-2].pTypeDecl)->argTypes.back()->temporary ^= true;
        } else {
            (yyval.pTypeDecl) = new TypeDecl(Type::option);
            (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[-2].pTypeDecl));
            (yyval.pTypeDecl)->argTypes.push_back(make_smart<TypeDecl>(*(yyvsp[-2].pTypeDecl)));
            (yyval.pTypeDecl)->argTypes.back()->temporary ^= true;
        }
    }
    break;

  case 685:
                                                                      {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeTuple(atvname);
        }
    }
    break;

  case 686:
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeTupleEntries(atvname);
        }
    }
    break;

  case 687:
                                  {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-4]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterTupleEntries(atvname);
        }
    }
    break;

  case 688:
          {
        auto vtype = make_smart<TypeDecl>(Type::tTuple);
        vtype->alias = *(yyvsp[-6].s);
        vtype->at = tokAt(scanner,(yylsp[-6]));
        vtype->isPrivateAlias = !(yyvsp[-7].b);
        varDeclToTypeDecl(scanner, vtype.get(), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        if ( !yyextra->g_Program->addAlias(vtype) ) {
            das2_yyerror(scanner,"type alias is already defined "+*(yyvsp[-6].s),tokAt(scanner,(yylsp[-6])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-6]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterTuple((yyvsp[-6].s)->c_str(),atvname);
        }
        delete (yyvsp[-6].s);
    }
    break;

  case 689:
                                                                        {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeVariant(atvname);
        }
    }
    break;

  case 690:
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeVariantEntries(atvname);
        }

    }
    break;

  case 691:
                                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-4]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterVariantEntries(atvname);
        }
    }
    break;

  case 692:
          {
        auto vtype = make_smart<TypeDecl>(Type::tVariant);
        vtype->alias = *(yyvsp[-6].s);
        vtype->at = tokAt(scanner,(yylsp[-6]));
        vtype->isPrivateAlias = !(yyvsp[-7].b);
        varDeclToTypeDecl(scanner, vtype.get(), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        if ( !yyextra->g_Program->addAlias(vtype) ) {
            das2_yyerror(scanner,"type alias is already defined "+*(yyvsp[-6].s),tokAt(scanner,(yylsp[-6])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-6]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterVariant((yyvsp[-6].s)->c_str(),atvname);
        }
        delete (yyvsp[-6].s);
    }
    break;

  case 693:
                                                                         {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeBitfield(atvname);
        }
    }
    break;

  case 694:
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeBitfieldEntries(atvname);
        }
    }
    break;

  case 695:
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-5]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterBitfieldEntries(atvname);
        }
    }
    break;

  case 696:
          {
        auto btype = make_smart<TypeDecl>(Type::tBitfield);
        btype->alias = *(yyvsp[-7].s);
        btype->at = tokAt(scanner,(yylsp[-7]));
        btype->argNames = *(yyvsp[-3].pNameList);
        btype->isPrivateAlias = !(yyvsp[-8].b);
        if ( btype->argNames.size()>32 ) {
            das2_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-7])),
                CompilationError::invalid_type);
        }
        if ( !yyextra->g_Program->addAlias(btype) ) {
            das2_yyerror(scanner,"type alias is already defined "+*(yyvsp[-7].s),tokAt(scanner,(yylsp[-7])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-7]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterBitfield((yyvsp[-7].s)->c_str(),atvname);
        }
        delete (yyvsp[-7].s);
        delete (yyvsp[-3].pNameList);
    }
    break;

  case 697:
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 698:
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 699:
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 700:
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 701:
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 702:
                                               {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 703:
                                      {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 704:
                                                                           {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 705:
                                                                  {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 706:
                                                                   {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 707:
                                                          {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),false,true);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 708:
                                                                                               {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        ((MakeStruct *)(yyvsp[-7].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-7].pMakeStruct);
    }
    break;

  case 709:
                                                                                      {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),false,true);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        ((MakeStruct *)(yyvsp[-7].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-7].pMakeStruct);
    }
    break;

  case 710:
                                {
        auto msd = new ExprMakeStruct();
        msd->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = msd;
    }
    break;

  case 711:
                                {
        auto msd = new ExprMakeStruct();
        msd->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = msd;
    }
    break;

  case 712:
                                                         {
        ((ExprMakeStruct *) (yyvsp[-2].pExpression))->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 713:
                            { (yyval.b) = true; }
    break;

  case 714:
                            { (yyval.b) = false; }
    break;

  case 715:
                             { yyextra->das_arrow_depth ++; }
    break;

  case 716:
                                                                                                   { yyextra->das_arrow_depth --; }
    break;

  case 717:
                                                                                                                                                                                        {
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-9]));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->useInitializer = (yyvsp[-2].b);
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->forceStruct = true;
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->alwaysUseInitializer = true;
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 718:
                            { yyextra->das_arrow_depth ++; }
    break;

  case 719:
                                                                                                  { yyextra->das_arrow_depth --; }
    break;

  case 720:
                                                                                                                                                                                       {
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-9]));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->useInitializer = (yyvsp[-2].b);
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->forceClass = true;
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 721:
                               { yyextra->das_arrow_depth ++; }
    break;

  case 722:
                                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 723:
                                                                                                                                                                    {
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-8]));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->forceVariant = true;
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 724:
                              { yyextra->das_arrow_depth ++; }
    break;

  case 725:
                                                                                                    { yyextra->das_arrow_depth --; }
    break;

  case 726:
                                                                                                                                                           {
        auto msd = new ExprMakeStruct();
        msd->at = tokAt(scanner,(yylsp[-6]));
        msd->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        msd->useInitializer = (yyvsp[0].b);
        msd->alwaysUseInitializer = true;
        (yyval.pExpression) = msd;
    }
    break;

  case 727:
                                         {
        ExprMakeTuple * mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-1])));
        mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 728:
                 {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 729:
                                                                    {
        auto mkt = new ExprMakeTuple(tokAt(scanner,(yylsp[-4])));
        mkt->values = sequenceToList((yyvsp[-2].pExpression));
        mkt->makeType = make_smart<TypeDecl>(Type::autoinfer);
        (yyval.pExpression) = mkt;
    }
    break;

  case 730:
                             { yyextra->das_arrow_depth ++; }
    break;

  case 731:
                                                                                                   { yyextra->das_arrow_depth --; }
    break;

  case 732:
                                                                                                                                                                                        {
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-9]));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->useInitializer = (yyvsp[-2].b);
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->forceTuple = true;
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 733:
                                                          {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-3])));
        mka->values = sequenceToList((yyvsp[-2].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::autoinfer);
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),"to_array_move");
        tam->arguments.push_back(mka);
        (yyval.pExpression) = tam;
    }
    break;

  case 734:
                                       { yyextra->das_arrow_depth ++; }
    break;

  case 735:
                                                                                                             { yyextra->das_arrow_depth --; }
    break;

  case 736:
                                                                                                                                                                                                  {
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-10]));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->useInitializer = (yyvsp[-2].b);
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->forceStruct = true;
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->alwaysUseInitializer = true;
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-10])),"to_array_move");
        tam->arguments.push_back((yyvsp[-1].pExpression));
        (yyval.pExpression) = tam;
    }
    break;

  case 737:
                                       { yyextra->das_arrow_depth ++; }
    break;

  case 738:
                                                                                                             { yyextra->das_arrow_depth --; }
    break;

  case 739:
                                                                                                                                                                                                  {
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-10]));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->useInitializer = (yyvsp[-2].b);
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->forceTuple = true;
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->alwaysUseInitializer = true;
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-10])),"to_array_move");
        tam->arguments.push_back((yyvsp[-1].pExpression));
        (yyval.pExpression) = tam;
    }
    break;

  case 740:
                                         { yyextra->das_arrow_depth ++; }
    break;

  case 741:
                                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 742:
                                                                                                                                                                              {
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-9]));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->forceVariant = true;
        ((ExprMakeStruct *)(yyvsp[-1].pExpression))->alwaysUseInitializer = true;
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-9])),"to_array_move");
        tam->arguments.push_back((yyvsp[-1].pExpression));
        (yyval.pExpression) = tam;
    }
    break;

  case 743:
                                                                   {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-4])));
        mka->values = sequenceToList((yyvsp[-2].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::autoinfer);
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-4])),"to_array_move");
        tam->arguments.push_back(mka);
        (yyval.pExpression) = tam;
    }
    break;

  case 744:
                           { yyextra->das_arrow_depth ++; }
    break;

  case 745:
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 746:
                                                                                                                                                                              {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-9])));
        mka->values = sequenceToList((yyvsp[-2].pExpression));
        mka->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-9])),"to_array_move");
        tam->arguments.push_back(mka);
        (yyval.pExpression) = tam;
    }
    break;

  case 747:
                                                                         {
        auto mka = new ExprMakeArray(tokAt(scanner,(yylsp[-4])));
        mka->values = sequenceToList((yyvsp[-2].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::autoinfer);
        mka->makeType->dim.push_back(TypeDecl::dimAuto);
        (yyval.pExpression) = mka;
    }
    break;

  case 748:
                                 { yyextra->das_arrow_depth ++; }
    break;

  case 749:
                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 750:
                                                                                                                                                                                    {
        auto mka = new ExprMakeArray(tokAt(scanner,(yylsp[-9])));
        mka->values = sequenceToList((yyvsp[-2].pExpression));
        mka->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        if ( !mka->makeType->dim.size() ) mka->makeType->dim.push_back(TypeDecl::dimAuto);
        (yyval.pExpression) = mka;
    }
    break;

  case 751:
                                {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 752:
                                                                {
            (yyval.pExpression) = new ExprSequence(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 753:
                                                                    {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-3])));
        mka->values = sequenceToList((yyvsp[-2].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::autoinfer);
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),"to_table_move");
        ttm->arguments.push_back(mka);
        (yyval.pExpression) = ttm;
    }
    break;

  case 754:
                                                                             {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-4])));
        mka->values = sequenceToList((yyvsp[-2].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::autoinfer);
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-4])),"to_table_move");
        ttm->arguments.push_back(mka);
        (yyval.pExpression) = ttm;
    }
    break;

  case 755:
                                                                                                                       {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-7])));
        mka->values = sequenceToList((yyvsp[-2].pExpression));
        mka->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-7])),"to_table_move");
        ttm->arguments.push_back(mka);
        (yyval.pExpression) = ttm;
    }
    break;

  case 756:
                                                                                                                                                                {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-9])));
        mka->values = sequenceToList((yyvsp[-2].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::tTuple);
        mka->makeType->argTypes.push_back((yyvsp[-7].pTypeDecl));
        mka->makeType->argTypes.push_back((yyvsp[-5].pTypeDecl));
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-9])),"to_table_move");
        ttm->arguments.push_back(mka);
        (yyval.pExpression) = ttm;
    }
    break;

  case 757:
                                    { (yyval.pExpression) = nullptr; }
    break;

  case 758:
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 759:
                { (yyval.b) = false; }
    break;

  case 760:
                { (yyval.b) = true; }
    break;

  case 761:
                                                                                                                                                    {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-7])),(yyvsp[-6].pNameWithPosList),(yyvsp[-4].pExpression),(yyvsp[-2].pExpression),(yyvsp[-1].pExpression),tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),false,false);
    }
    break;

  case 762:
                                                                                                                                                                 {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-7])),(yyvsp[-6].pNameWithPosList),(yyvsp[-4].pExpression),(yyvsp[-2].pExpression),(yyvsp[-1].pExpression),tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),true,false);
    }
    break;

  case 763:
                                                                                                                                                              {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-7])),(yyvsp[-6].pNameWithPosList),(yyvsp[-4].pExpression),(yyvsp[-2].pExpression),(yyvsp[-1].pExpression),tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),false,true);
    }
    break;



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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp, scanner);
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


void das2_yyfatalerror ( DAS2_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr ) {
    yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
        lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),cerr);
}

void das2_yyerror ( DAS2_YYLTYPE * lloc, yyscan_t scanner, const string & error ) {
    if ( !yyextra->das_suppress_errors ) {
        yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
            lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),
                CompilationError::syntax_error);
    }
}

LineInfo tokAt ( yyscan_t scanner, const struct DAS2_YYLTYPE & li ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        li.last_column,li.last_line);
}

LineInfo tokRangeAt ( yyscan_t scanner, const struct DAS2_YYLTYPE & li, const struct DAS2_YYLTYPE & lie ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        lie.last_column,lie.last_line);
}



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
     PATH = 258,
     QPATH = 259,
     FILENAME = 260,
     COMMON = 261,
     CLASS = 262,
     CONSTRAIN = 263,
     VALIDATETRANS = 264,
     INHERITS = 265,
     SID = 266,
     ROLE = 267,
     ROLEATTRIBUTE = 268,
     ATTRIBUTE_ROLE = 269,
     ROLES = 270,
     TYPEALIAS = 271,
     TYPEATTRIBUTE = 272,
     TYPEBOUNDS = 273,
     TYPE = 274,
     TYPES = 275,
     ALIAS = 276,
     ATTRIBUTE = 277,
     EXPANDATTRIBUTE = 278,
     BOOL = 279,
     TUNABLE = 280,
     IF = 281,
     ELSE = 282,
     TYPE_TRANSITION = 283,
     TYPE_MEMBER = 284,
     TYPE_CHANGE = 285,
     ROLE_TRANSITION = 286,
     RANGE_TRANSITION = 287,
     SENSITIVITY = 288,
     DOMINANCE = 289,
     DOM = 290,
     DOMBY = 291,
     INCOMP = 292,
     CATEGORY = 293,
     LEVEL = 294,
     RANGE = 295,
     MLSCONSTRAIN = 296,
     MLSVALIDATETRANS = 297,
     USER = 298,
     NEVERALLOW = 299,
     ALLOW = 300,
     AUDITALLOW = 301,
     AUDITDENY = 302,
     DONTAUDIT = 303,
     ALLOWXPERM = 304,
     AUDITALLOWXPERM = 305,
     DONTAUDITXPERM = 306,
     NEVERALLOWXPERM = 307,
     SOURCE = 308,
     TARGET = 309,
     SAMEUSER = 310,
     FSCON = 311,
     PORTCON = 312,
     NETIFCON = 313,
     NODECON = 314,
     IBPKEYCON = 315,
     IBENDPORTCON = 316,
     PIRQCON = 317,
     IOMEMCON = 318,
     IOPORTCON = 319,
     PCIDEVICECON = 320,
     DEVICETREECON = 321,
     FSUSEXATTR = 322,
     FSUSETASK = 323,
     FSUSETRANS = 324,
     GENFSCON = 325,
     U1 = 326,
     U2 = 327,
     U3 = 328,
     R1 = 329,
     R2 = 330,
     R3 = 331,
     T1 = 332,
     T2 = 333,
     T3 = 334,
     L1 = 335,
     L2 = 336,
     H1 = 337,
     H2 = 338,
     NOT = 339,
     AND = 340,
     OR = 341,
     XOR = 342,
     CTRUE = 343,
     CFALSE = 344,
     IDENTIFIER = 345,
     NUMBER = 346,
     EQUALS = 347,
     NOTEQUAL = 348,
     IPV4_ADDR = 349,
     IPV6_ADDR = 350,
     MODULE = 351,
     VERSION_IDENTIFIER = 352,
     REQUIRE = 353,
     OPTIONAL = 354,
     POLICYCAP = 355,
     PERMISSIVE = 356,
     FILESYSTEM = 357,
     DEFAULT_USER = 358,
     DEFAULT_ROLE = 359,
     DEFAULT_TYPE = 360,
     DEFAULT_RANGE = 361,
     LOW_HIGH = 362,
     LOW = 363,
     HIGH = 364,
     GLBLUB = 365
   };
#endif
/* Tokens.  */
#define PATH 258
#define QPATH 259
#define FILENAME 260
#define COMMON 261
#define CLASS 262
#define CONSTRAIN 263
#define VALIDATETRANS 264
#define INHERITS 265
#define SID 266
#define ROLE 267
#define ROLEATTRIBUTE 268
#define ATTRIBUTE_ROLE 269
#define ROLES 270
#define TYPEALIAS 271
#define TYPEATTRIBUTE 272
#define TYPEBOUNDS 273
#define TYPE 274
#define TYPES 275
#define ALIAS 276
#define ATTRIBUTE 277
#define EXPANDATTRIBUTE 278
#define BOOL 279
#define TUNABLE 280
#define IF 281
#define ELSE 282
#define TYPE_TRANSITION 283
#define TYPE_MEMBER 284
#define TYPE_CHANGE 285
#define ROLE_TRANSITION 286
#define RANGE_TRANSITION 287
#define SENSITIVITY 288
#define DOMINANCE 289
#define DOM 290
#define DOMBY 291
#define INCOMP 292
#define CATEGORY 293
#define LEVEL 294
#define RANGE 295
#define MLSCONSTRAIN 296
#define MLSVALIDATETRANS 297
#define USER 298
#define NEVERALLOW 299
#define ALLOW 300
#define AUDITALLOW 301
#define AUDITDENY 302
#define DONTAUDIT 303
#define ALLOWXPERM 304
#define AUDITALLOWXPERM 305
#define DONTAUDITXPERM 306
#define NEVERALLOWXPERM 307
#define SOURCE 308
#define TARGET 309
#define SAMEUSER 310
#define FSCON 311
#define PORTCON 312
#define NETIFCON 313
#define NODECON 314
#define IBPKEYCON 315
#define IBENDPORTCON 316
#define PIRQCON 317
#define IOMEMCON 318
#define IOPORTCON 319
#define PCIDEVICECON 320
#define DEVICETREECON 321
#define FSUSEXATTR 322
#define FSUSETASK 323
#define FSUSETRANS 324
#define GENFSCON 325
#define U1 326
#define U2 327
#define U3 328
#define R1 329
#define R2 330
#define R3 331
#define T1 332
#define T2 333
#define T3 334
#define L1 335
#define L2 336
#define H1 337
#define H2 338
#define NOT 339
#define AND 340
#define OR 341
#define XOR 342
#define CTRUE 343
#define CFALSE 344
#define IDENTIFIER 345
#define NUMBER 346
#define EQUALS 347
#define NOTEQUAL 348
#define IPV4_ADDR 349
#define IPV6_ADDR 350
#define MODULE 351
#define VERSION_IDENTIFIER 352
#define REQUIRE 353
#define OPTIONAL 354
#define POLICYCAP 355
#define PERMISSIVE 356
#define FILESYSTEM 357
#define DEFAULT_USER 358
#define DEFAULT_ROLE 359
#define DEFAULT_TYPE 360
#define DEFAULT_RANGE 361
#define LOW_HIGH 362
#define LOW 363
#define HIGH 364
#define GLBLUB 365




/* Copy the first part of user declarations.  */
#line 32 "policy_parse.y"

#include <sys/types.h>
#include <assert.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>

#include <sepol/policydb/expand.h>
#include <sepol/policydb/policydb.h>
#include <sepol/policydb/services.h>
#include <sepol/policydb/conditional.h>
#include <sepol/policydb/hierarchy.h>
#include <sepol/policydb/polcaps.h>
#include "queue.h"
#include "checkpolicy.h"
#include "module_compiler.h"
#include "policy_define.h"

extern policydb_t *policydbp;
extern unsigned int pass;

extern char yytext[];
extern int yylex(void);
extern int yywarn(const char *msg);
extern int yyerror(const char *msg);

typedef int (* require_func_t)(int pass);



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
#line 68 "policy_parse.y"
{
	unsigned int val;
	uint64_t val64;
	uintptr_t valptr;
	void *ptr;
        require_func_t require_func;
}
/* Line 193 of yacc.c.  */
#line 360 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 373 "y.tab.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1351

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  195
/* YYNRULES -- Number of rules.  */
#define YYNRULES  401
/* YYNRULES -- Number of states.  */
#define YYNSTATES  804

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   365

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     116,   117,   120,     2,   115,   118,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   114,   113,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   111,     2,   112,   119,     2,     2,     2,
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
     105,   106,   107,   108,   109,   110
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     8,     9,    10,    30,    32,
      35,    38,    40,    43,    46,    49,    51,    52,    54,    57,
      63,    65,    68,    74,    79,    87,    89,    90,    92,    94,
      96,    98,   101,   104,   107,   110,   115,   120,   125,   130,
     135,   140,   146,   152,   158,   164,   170,   176,   181,   183,
     184,   190,   192,   195,   200,   204,   207,   210,   215,   217,
     218,   220,   223,   228,   232,   234,   237,   243,   247,   249,
     252,   254,   256,   262,   267,   269,   272,   274,   276,   278,
     280,   282,   284,   286,   288,   290,   292,   294,   296,   298,
     300,   302,   304,   306,   308,   310,   312,   314,   316,   318,
     320,   324,   329,   335,   340,   345,   350,   355,   358,   359,
     364,   369,   371,   373,   380,   385,   386,   390,   393,   397,
     401,   405,   409,   413,   415,   417,   420,   421,   423,   425,
     427,   436,   444,   452,   460,   462,   464,   466,   468,   476,
     484,   492,   500,   509,   517,   525,   533,   539,   547,   549,
     551,   553,   555,   557,   559,   561,   563,   565,   573,   581,
     589,   597,   605,   614,   623,   632,   641,   645,   651,   656,
     662,   670,   675,   680,   682,   683,   685,   688,   690,   692,
     698,   703,   707,   710,   714,   718,   720,   724,   728,   732,
     733,   738,   739,   744,   745,   750,   751,   756,   757,   762,
     763,   768,   769,   774,   775,   780,   781,   786,   788,   789,
     794,   795,   800,   803,   804,   809,   810,   815,   819,   823,
     827,   831,   835,   839,   841,   843,   845,   847,   849,   851,
     853,   856,   863,   868,   869,   871,   874,   878,   880,   881,
     883,   886,   888,   890,   892,   894,   896,   900,   904,   910,
     914,   920,   924,   928,   930,   931,   933,   936,   942,   946,
     948,   949,   951,   954,   959,   966,   968,   969,   971,   974,
     979,   986,   988,   989,   991,   994,   999,  1001,  1002,  1004,
    1007,  1012,  1014,  1015,  1017,  1020,  1025,  1030,  1032,  1033,
    1035,  1038,  1043,  1048,  1053,  1055,  1056,  1058,  1061,  1068,
    1069,  1077,  1082,  1084,  1086,  1088,  1091,  1094,  1098,  1100,
    1103,  1104,  1109,  1111,  1113,  1115,  1122,  1125,  1126,  1130,
    1132,  1136,  1138,  1140,  1144,  1146,  1148,  1150,  1152,  1154,
    1157,  1160,  1161,  1166,  1168,  1170,  1172,  1176,  1178,  1181,
    1186,  1188,  1191,  1193,  1195,  1198,  1202,  1204,  1207,  1209,
    1210,  1214,  1216,  1218,  1220,  1222,  1224,  1226,  1228,  1230,
    1232,  1234,  1238,  1242,  1245,  1250,  1252,  1254,  1256,  1259,
    1262,  1264,  1266,  1268,  1270,  1272,  1274,  1276,  1281,  1284,
    1286,  1289,  1293,  1297,  1299,  1301,  1303,  1305,  1307,  1309,
    1311,  1313,  1315,  1317,  1321,  1322,  1329,  1334,  1335,  1337,
    1339,  1342
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     122,     0,    -1,   123,    -1,   298,    -1,    -1,    -1,    -1,
     124,   127,   129,   131,   125,   137,   143,   158,   224,   202,
     126,   227,   237,   256,   259,   240,   229,   244,   247,    -1,
     128,    -1,   127,   128,    -1,     7,   289,    -1,   130,    -1,
     129,   130,    -1,    11,   289,    -1,   132,   135,    -1,   133,
      -1,    -1,   134,    -1,   133,   134,    -1,     6,   289,   111,
     284,   112,    -1,   136,    -1,   135,   136,    -1,     7,   289,
     111,   284,   112,    -1,     7,   289,    10,   289,    -1,     7,
     289,    10,   289,   111,   284,   112,    -1,   138,    -1,    -1,
     139,    -1,   140,    -1,   141,    -1,   142,    -1,   138,   139,
      -1,   138,   140,    -1,   138,   141,    -1,   138,   142,    -1,
     103,   277,    53,   113,    -1,   103,   277,    54,   113,    -1,
     104,   277,    53,   113,    -1,   104,   277,    54,   113,    -1,
     105,   277,    53,   113,    -1,   105,   277,    54,   113,    -1,
     106,   277,    53,   108,   113,    -1,   106,   277,    53,   109,
     113,    -1,   106,   277,    53,   107,   113,    -1,   106,   277,
      54,   108,   113,    -1,   106,   277,    54,   109,   113,    -1,
     106,   277,    54,   107,   113,    -1,   106,   277,   110,   113,
      -1,   144,    -1,    -1,   145,   148,   149,   152,   154,    -1,
     146,    -1,   145,   146,    -1,    33,   289,   147,   113,    -1,
      33,   289,   113,    -1,    21,   277,    -1,    34,   289,    -1,
      34,   111,   284,   112,    -1,   150,    -1,    -1,   151,    -1,
     150,   151,    -1,    38,   289,   147,   113,    -1,    38,   289,
     113,    -1,   153,    -1,   152,   153,    -1,    39,   289,   114,
     274,   113,    -1,    39,   289,   113,    -1,   155,    -1,   154,
     155,    -1,   156,    -1,   157,    -1,    41,   277,   277,   207,
     113,    -1,    42,   277,   207,   113,    -1,   159,    -1,   158,
     159,    -1,   161,    -1,   160,    -1,   172,    -1,   310,    -1,
     296,    -1,   113,    -1,   196,    -1,   197,    -1,   199,    -1,
     200,    -1,   201,    -1,   198,    -1,   162,    -1,   163,    -1,
     164,    -1,   165,    -1,   166,    -1,   167,    -1,   169,    -1,
     170,    -1,   184,    -1,   185,    -1,   186,    -1,   297,    -1,
      22,   289,   113,    -1,    23,   277,   171,   113,    -1,    19,
     289,   147,   168,   113,    -1,    19,   289,   168,   113,    -1,
      16,   289,   147,   113,    -1,    17,   289,   274,   113,    -1,
      18,   289,   274,   113,    -1,   115,   274,    -1,    -1,    24,
     289,   171,   113,    -1,    25,   289,   171,   113,    -1,    88,
      -1,    89,    -1,    26,   174,   111,   176,   112,   173,    -1,
      27,   111,   176,   112,    -1,    -1,   116,   174,   117,    -1,
      84,   174,    -1,   174,    85,   174,    -1,   174,    86,   174,
      -1,   174,    87,   174,    -1,   174,    92,   174,    -1,   174,
      93,   174,    -1,   175,    -1,   289,    -1,   176,   177,    -1,
      -1,   178,    -1,   179,    -1,   304,    -1,    28,   277,   277,
     114,   277,   289,   292,   113,    -1,    28,   277,   277,   114,
     277,   289,   113,    -1,    29,   277,   277,   114,   277,   289,
     113,    -1,    30,   277,   277,   114,   277,   289,   113,    -1,
     180,    -1,   181,    -1,   182,    -1,   183,    -1,    45,   277,
     277,   114,   277,   277,   113,    -1,    46,   277,   277,   114,
     277,   277,   113,    -1,    47,   277,   277,   114,   277,   277,
     113,    -1,    48,   277,   277,   114,   277,   277,   113,    -1,
      28,   277,   277,   114,   277,   289,   292,   113,    -1,    28,
     277,   277,   114,   277,   289,   113,    -1,    29,   277,   277,
     114,   277,   289,   113,    -1,    30,   277,   277,   114,   277,
     289,   113,    -1,    32,   277,   277,   272,   113,    -1,    32,
     277,   277,   114,   277,   272,   113,    -1,   187,    -1,   188,
      -1,   189,    -1,   190,    -1,   191,    -1,   192,    -1,   193,
      -1,   194,    -1,   195,    -1,    45,   277,   277,   114,   277,
     277,   113,    -1,    46,   277,   277,   114,   277,   277,   113,
      -1,    47,   277,   277,   114,   277,   277,   113,    -1,    48,
     277,   277,   114,   277,   277,   113,    -1,    44,   277,   277,
     114,   277,   277,   113,    -1,    49,   277,   277,   114,   277,
     289,   264,   113,    -1,    50,   277,   277,   114,   277,   289,
     264,   113,    -1,    51,   277,   277,   114,   277,   289,   264,
     113,    -1,    52,   277,   277,   114,   277,   289,   264,   113,
      -1,    14,   289,   113,    -1,    12,   289,    20,   277,   113,
      -1,    12,   289,   168,   113,    -1,    31,   277,   277,   289,
     113,    -1,    31,   277,   277,   114,   277,   289,   113,    -1,
      45,   277,   277,   113,    -1,    13,   289,   274,   113,    -1,
     203,    -1,    -1,   204,    -1,   203,   204,    -1,   205,    -1,
     206,    -1,     8,   277,   277,   207,   113,    -1,     9,   277,
     207,   113,    -1,   116,   207,   117,    -1,    84,   207,    -1,
     207,    85,   207,    -1,   207,    86,   207,    -1,   208,    -1,
      71,   222,    72,    -1,    74,   223,    75,    -1,    77,   222,
      78,    -1,    -1,    71,   222,   209,   281,    -1,    -1,    72,
     222,   210,   281,    -1,    -1,    73,   222,   211,   281,    -1,
      -1,    74,   222,   212,   281,    -1,    -1,    75,   222,   213,
     281,    -1,    -1,    76,   222,   214,   281,    -1,    -1,    77,
     222,   215,   281,    -1,    -1,    78,   222,   216,   281,    -1,
      -1,    79,   222,   217,   281,    -1,    55,    -1,    -1,    53,
      12,   218,   281,    -1,    -1,    54,    12,   219,   281,    -1,
      12,   223,    -1,    -1,    53,    19,   220,   281,    -1,    -1,
      54,    19,   221,   281,    -1,    80,   223,    81,    -1,    80,
     223,    83,    -1,    82,   223,    81,    -1,    82,   223,    83,
      -1,    80,   223,    82,    -1,    81,   223,    83,    -1,    92,
      -1,    93,    -1,   222,    -1,    35,    -1,    36,    -1,    37,
      -1,   225,    -1,   224,   225,    -1,    43,   289,    15,   277,
     226,   113,    -1,    39,   273,    40,   272,    -1,    -1,   228,
      -1,   227,   228,    -1,    11,   289,   270,    -1,   230,    -1,
      -1,   231,    -1,   230,   231,    -1,   232,    -1,   233,    -1,
     234,    -1,   235,    -1,   236,    -1,    62,   293,   270,    -1,
      63,   294,   270,    -1,    63,   294,   118,   294,   270,    -1,
      64,   293,   270,    -1,    64,   293,   118,   293,   270,    -1,
      65,   293,   270,    -1,    66,   291,   270,    -1,   238,    -1,
      -1,   239,    -1,   238,   239,    -1,    56,   293,   293,   270,
     270,    -1,   241,   250,   253,    -1,   242,    -1,    -1,   243,
      -1,   242,   243,    -1,    57,   289,   293,   270,    -1,    57,
     289,   293,   118,   293,   270,    -1,   245,    -1,    -1,   246,
      -1,   245,   246,    -1,    60,   295,   293,   270,    -1,    60,
     295,   293,   118,   293,   270,    -1,   248,    -1,    -1,   249,
      -1,   248,   249,    -1,    61,   289,   293,   270,    -1,   251,
      -1,    -1,   252,    -1,   251,   252,    -1,    58,   289,   270,
     270,    -1,   254,    -1,    -1,   255,    -1,   254,   255,    -1,
      59,   263,   263,   270,    -1,    59,   295,   295,   270,    -1,
     257,    -1,    -1,   258,    -1,   257,   258,    -1,    67,   290,
     270,   113,    -1,    68,   289,   270,   113,    -1,    69,   289,
     270,   113,    -1,   260,    -1,    -1,   261,    -1,   260,   261,
      -1,    70,   290,   291,   118,   289,   270,    -1,    -1,    70,
     290,   291,   118,   118,   262,   270,    -1,    70,   290,   291,
     270,    -1,    94,    -1,   269,    -1,   265,    -1,   275,   269,
      -1,   275,   265,    -1,   111,   266,   112,    -1,   267,    -1,
     266,   267,    -1,    -1,   269,   118,   268,   269,    -1,   269,
      -1,   265,    -1,   293,    -1,   289,   114,   289,   114,   289,
     271,    -1,   114,   272,    -1,    -1,   273,   118,   273,    -1,
     273,    -1,   289,   114,   274,    -1,   289,    -1,   289,    -1,
     274,   115,   289,    -1,   119,    -1,   120,    -1,   289,    -1,
     285,    -1,   276,    -1,   275,   289,    -1,   275,   285,    -1,
      -1,   289,   118,   278,   289,    -1,   275,    -1,   276,    -1,
     283,    -1,   111,   282,   112,    -1,   280,    -1,   279,   283,
      -1,   279,   111,   282,   112,    -1,   283,    -1,   282,   283,
      -1,    90,    -1,   289,    -1,   284,   289,    -1,   111,   286,
     112,    -1,   287,    -1,   286,   287,    -1,   289,    -1,    -1,
     118,   288,   289,    -1,   285,    -1,    90,    -1,   102,    -1,
      90,    -1,     3,    -1,     4,    -1,     5,    -1,    91,    -1,
      91,    -1,    95,    -1,   100,   289,   113,    -1,   101,   289,
     113,    -1,   299,   301,    -1,    96,   289,   300,   113,    -1,
      97,    -1,   293,    -1,   263,    -1,   302,   315,    -1,   302,
     303,    -1,   303,    -1,   160,    -1,   161,    -1,   172,    -1,
     304,    -1,   310,    -1,   113,    -1,    98,   111,   305,   112,
      -1,   305,   306,    -1,   306,    -1,   307,   113,    -1,   308,
     309,   113,    -1,     7,   289,   277,    -1,    12,    -1,    19,
      -1,    22,    -1,    14,    -1,    43,    -1,    24,    -1,    25,
      -1,    33,    -1,    38,    -1,   289,    -1,   309,   115,   289,
      -1,    -1,   313,   111,   301,   112,   311,   312,    -1,   314,
     111,   301,   112,    -1,    -1,    99,    -1,    27,    -1,   225,
     315,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   163,   163,   164,   166,   168,   171,   166,   175,   176,
     178,   181,   182,   184,   187,   189,   190,   192,   193,   195,
     198,   199,   201,   203,   205,   208,   209,   211,   212,   213,
     214,   215,   216,   217,   218,   220,   222,   225,   227,   230,
     232,   235,   237,   239,   241,   243,   245,   247,   250,   251,
     253,   255,   256,   258,   260,   263,   265,   267,   270,   271,
     273,   274,   276,   278,   281,   282,   284,   286,   289,   290,
     292,   293,   295,   298,   301,   302,   304,   305,   306,   307,
     308,   309,   311,   312,   313,   314,   315,   316,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     331,   334,   337,   339,   342,   345,   348,   351,   352,   354,
     357,   360,   362,   365,   368,   371,   373,   375,   378,   381,
     384,   387,   390,   393,   396,   400,   403,   405,   407,   409,
     412,   415,   418,   421,   425,   427,   429,   431,   434,   438,
     442,   446,   451,   453,   455,   457,   460,   462,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   475,   478,   481,
     484,   487,   490,   493,   496,   499,   502,   505,   508,   511,
     513,   516,   519,   522,   523,   525,   526,   528,   529,   531,
     534,   537,   539,   542,   545,   548,   551,   554,   557,   560,
     560,   563,   563,   566,   566,   569,   569,   572,   572,   575,
     575,   578,   578,   581,   581,   584,   584,   587,   590,   590,
     593,   593,   596,   599,   599,   602,   602,   605,   608,   611,
     614,   617,   620,   624,   626,   629,   631,   633,   635,   638,
     639,   641,   644,   645,   647,   648,   650,   653,   653,   655,
     656,   658,   659,   660,   661,   662,   664,   667,   669,   672,
     674,   677,   680,   683,   684,   686,   687,   689,   692,   694,
     695,   697,   698,   700,   702,   705,   706,   708,   709,   711,
     713,   716,   717,   719,   720,   722,   725,   726,   728,   729,
     731,   734,   735,   737,   738,   740,   742,   745,   746,   748,
     749,   751,   753,   755,   758,   759,   761,   762,   764,   766,
     766,   768,   771,   774,   776,   778,   780,   784,   786,   787,
     789,   789,   790,   791,   793,   796,   798,   799,   801,   803,
     806,   808,   811,   812,   814,   816,   818,   820,   822,   825,
     828,   831,   831,   834,   837,   840,   841,   842,   843,   844,
     846,   847,   849,   852,   853,   855,   857,   857,   859,   859,
     859,   859,   861,   864,   866,   869,   871,   874,   877,   890,
     899,   902,   905,   910,   915,   918,   920,   922,   924,   926,
     927,   929,   930,   931,   932,   933,   934,   936,   938,   939,
     941,   942,   944,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   957,   959,   963,   962,   967,   969,   971,   974,
     977,   978
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PATH", "QPATH", "FILENAME", "COMMON",
  "CLASS", "CONSTRAIN", "VALIDATETRANS", "INHERITS", "SID", "ROLE",
  "ROLEATTRIBUTE", "ATTRIBUTE_ROLE", "ROLES", "TYPEALIAS", "TYPEATTRIBUTE",
  "TYPEBOUNDS", "TYPE", "TYPES", "ALIAS", "ATTRIBUTE", "EXPANDATTRIBUTE",
  "BOOL", "TUNABLE", "IF", "ELSE", "TYPE_TRANSITION", "TYPE_MEMBER",
  "TYPE_CHANGE", "ROLE_TRANSITION", "RANGE_TRANSITION", "SENSITIVITY",
  "DOMINANCE", "DOM", "DOMBY", "INCOMP", "CATEGORY", "LEVEL", "RANGE",
  "MLSCONSTRAIN", "MLSVALIDATETRANS", "USER", "NEVERALLOW", "ALLOW",
  "AUDITALLOW", "AUDITDENY", "DONTAUDIT", "ALLOWXPERM", "AUDITALLOWXPERM",
  "DONTAUDITXPERM", "NEVERALLOWXPERM", "SOURCE", "TARGET", "SAMEUSER",
  "FSCON", "PORTCON", "NETIFCON", "NODECON", "IBPKEYCON", "IBENDPORTCON",
  "PIRQCON", "IOMEMCON", "IOPORTCON", "PCIDEVICECON", "DEVICETREECON",
  "FSUSEXATTR", "FSUSETASK", "FSUSETRANS", "GENFSCON", "U1", "U2", "U3",
  "R1", "R2", "R3", "T1", "T2", "T3", "L1", "L2", "H1", "H2", "NOT", "AND",
  "OR", "XOR", "CTRUE", "CFALSE", "IDENTIFIER", "NUMBER", "EQUALS",
  "NOTEQUAL", "IPV4_ADDR", "IPV6_ADDR", "MODULE", "VERSION_IDENTIFIER",
  "REQUIRE", "OPTIONAL", "POLICYCAP", "PERMISSIVE", "FILESYSTEM",
  "DEFAULT_USER", "DEFAULT_ROLE", "DEFAULT_TYPE", "DEFAULT_RANGE",
  "LOW_HIGH", "LOW", "HIGH", "GLBLUB", "'{'", "'}'", "';'", "':'", "','",
  "'('", "')'", "'-'", "'~'", "'*'", "$accept", "policy", "base_policy",
  "@1", "@2", "@3", "classes", "class_def", "initial_sids",
  "initial_sid_def", "access_vectors", "opt_common_perms", "common_perms",
  "common_perms_def", "av_perms", "av_perms_def", "opt_default_rules",
  "default_rules", "default_user_def", "default_role_def",
  "default_type_def", "default_range_def", "opt_mls", "mls",
  "sensitivities", "sensitivity_def", "alias_def", "dominance",
  "opt_categories", "categories", "category_def", "levels", "level_def",
  "mlspolicy", "mlspolicy_decl", "mlsconstraint_def",
  "mlsvalidatetrans_def", "te_rbac", "te_rbac_decl", "rbac_decl",
  "te_decl", "attribute_def", "expandattribute_def", "type_def",
  "typealias_def", "typeattribute_def", "typebounds_def", "opt_attr_list",
  "bool_def", "tunable_def", "bool_val", "cond_stmt_def", "cond_else",
  "cond_expr", "cond_expr_prim", "cond_pol_list", "cond_rule_def",
  "cond_transition_def", "cond_te_avtab_def", "cond_allow_def",
  "cond_auditallow_def", "cond_auditdeny_def", "cond_dontaudit_def",
  "transition_def", "range_trans_def", "te_avtab_def", "allow_def",
  "auditallow_def", "auditdeny_def", "dontaudit_def", "neverallow_def",
  "xperm_allow_def", "xperm_auditallow_def", "xperm_dontaudit_def",
  "xperm_neverallow_def", "attribute_role_def", "role_type_def",
  "role_attr_def", "role_trans_def", "role_allow_def", "roleattribute_def",
  "opt_constraints", "constraints", "constraint_decl", "constraint_def",
  "validatetrans_def", "cexpr", "cexpr_prim", "@4", "@5", "@6", "@7", "@8",
  "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16", "op",
  "role_mls_op", "users", "user_def", "opt_mls_user",
  "initial_sid_contexts", "initial_sid_context_def", "opt_dev_contexts",
  "dev_contexts", "dev_context_def", "pirq_context_def",
  "iomem_context_def", "ioport_context_def", "pci_context_def",
  "dtree_context_def", "opt_fs_contexts", "fs_contexts", "fs_context_def",
  "net_contexts", "opt_port_contexts", "port_contexts", "port_context_def",
  "opt_ibpkey_contexts", "ibpkey_contexts", "ibpkey_context_def",
  "opt_ibendport_contexts", "ibendport_contexts", "ibendport_context_def",
  "opt_netif_contexts", "netif_contexts", "netif_context_def",
  "opt_node_contexts", "node_contexts", "node_context_def", "opt_fs_uses",
  "fs_uses", "fs_use_def", "opt_genfs_contexts", "genfs_contexts",
  "genfs_context_def", "@17", "ipv4_addr_def", "xperms",
  "nested_xperm_set", "nested_xperm_list", "nested_xperm_element", "@18",
  "xperm", "security_context_def", "opt_mls_range_def", "mls_range_def",
  "mls_level_def", "id_comma_list", "tilde", "asterisk", "names", "@19",
  "tilde_push", "asterisk_push", "names_push", "identifier_list_push",
  "identifier_push", "identifier_list", "nested_id_set", "nested_id_list",
  "nested_id_element", "@20", "identifier", "filesystem", "path",
  "filename", "number", "number64", "ipv6_addr", "policycap_def",
  "permissive_def", "module_policy", "module_def", "version_identifier",
  "avrules_block", "avrule_decls", "avrule_decl", "require_block",
  "require_list", "require_decl", "require_class", "require_decl_def",
  "require_id_list", "optional_block", "@21", "optional_else",
  "optional_decl", "else_decl", "avrule_user_defs", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
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
     365,   123,   125,    59,    58,    44,    40,    41,    45,   126,
      42
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   121,   122,   122,   124,   125,   126,   123,   127,   127,
     128,   129,   129,   130,   131,   132,   132,   133,   133,   134,
     135,   135,   136,   136,   136,   137,   137,   138,   138,   138,
     138,   138,   138,   138,   138,   139,   139,   140,   140,   141,
     141,   142,   142,   142,   142,   142,   142,   142,   143,   143,
     144,   145,   145,   146,   146,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   157,   158,   158,   159,   159,   159,   159,
     159,   159,   160,   160,   160,   160,   160,   160,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     162,   163,   164,   164,   165,   166,   167,   168,   168,   169,
     170,   171,   171,   172,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   174,   175,   176,   176,   177,   177,   177,
     178,   178,   178,   178,   179,   179,   179,   179,   180,   181,
     182,   183,   184,   184,   184,   184,   185,   185,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     199,   200,   201,   202,   202,   203,   203,   204,   204,   205,
     206,   207,   207,   207,   207,   207,   208,   208,   208,   209,
     208,   210,   208,   211,   208,   212,   208,   213,   208,   214,
     208,   215,   208,   216,   208,   217,   208,   208,   218,   208,
     219,   208,   208,   220,   208,   221,   208,   208,   208,   208,
     208,   208,   208,   222,   222,   223,   223,   223,   223,   224,
     224,   225,   226,   226,   227,   227,   228,   229,   229,   230,
     230,   231,   231,   231,   231,   231,   232,   233,   233,   234,
     234,   235,   236,   237,   237,   238,   238,   239,   240,   241,
     241,   242,   242,   243,   243,   244,   244,   245,   245,   246,
     246,   247,   247,   248,   248,   249,   250,   250,   251,   251,
     252,   253,   253,   254,   254,   255,   255,   256,   256,   257,
     257,   258,   258,   258,   259,   259,   260,   260,   261,   262,
     261,   261,   263,   264,   264,   264,   264,   265,   266,   266,
     268,   267,   267,   267,   269,   270,   271,   271,   272,   272,
     273,   273,   274,   274,   275,   276,   277,   277,   277,   277,
     277,   278,   277,   279,   280,   281,   281,   281,   281,   281,
     282,   282,   283,   284,   284,   285,   286,   286,   287,   288,
     287,   287,   289,   290,   290,   291,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   300,   300,   301,   302,
     302,   303,   303,   303,   303,   303,   303,   304,   305,   305,
     306,   306,   307,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   309,   309,   311,   310,   312,   312,   313,   314,
     315,   315
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     0,     0,    19,     1,     2,
       2,     1,     2,     2,     2,     1,     0,     1,     2,     5,
       1,     2,     5,     4,     7,     1,     0,     1,     1,     1,
       1,     2,     2,     2,     2,     4,     4,     4,     4,     4,
       4,     5,     5,     5,     5,     5,     5,     4,     1,     0,
       5,     1,     2,     4,     3,     2,     2,     4,     1,     0,
       1,     2,     4,     3,     1,     2,     5,     3,     1,     2,
       1,     1,     5,     4,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     5,     4,     4,     4,     4,     2,     0,     4,
       4,     1,     1,     6,     4,     0,     3,     2,     3,     3,
       3,     3,     3,     1,     1,     2,     0,     1,     1,     1,
       8,     7,     7,     7,     1,     1,     1,     1,     7,     7,
       7,     7,     8,     7,     7,     7,     5,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     7,     7,
       7,     7,     8,     8,     8,     8,     3,     5,     4,     5,
       7,     4,     4,     1,     0,     1,     2,     1,     1,     5,
       4,     3,     2,     3,     3,     1,     3,     3,     3,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     1,     0,     4,
       0,     4,     2,     0,     4,     0,     4,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     6,     4,     0,     1,     2,     3,     1,     0,     1,
       2,     1,     1,     1,     1,     1,     3,     3,     5,     3,
       5,     3,     3,     1,     0,     1,     2,     5,     3,     1,
       0,     1,     2,     4,     6,     1,     0,     1,     2,     4,
       6,     1,     0,     1,     2,     4,     1,     0,     1,     2,
       4,     1,     0,     1,     2,     4,     4,     1,     0,     1,
       2,     4,     4,     4,     1,     0,     1,     2,     6,     0,
       7,     4,     1,     1,     1,     2,     2,     3,     1,     2,
       0,     4,     1,     1,     1,     6,     2,     0,     3,     1,
       3,     1,     1,     3,     1,     1,     1,     1,     1,     2,
       2,     0,     4,     1,     1,     1,     3,     1,     2,     4,
       1,     2,     1,     1,     2,     3,     1,     2,     1,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     4,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     1,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     6,     4,     0,     1,     1,
       2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     0,     2,     0,     3,     0,   352,     0,     1,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,   376,   371,   372,    88,    89,    90,    91,    92,
      93,    94,    95,   373,    96,    97,    98,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    82,    83,    87,    84,
      85,    86,    99,   363,   401,   370,   374,   375,     0,   358,
     302,   365,   367,   366,     0,    10,     0,     9,    16,    11,
     108,     0,     0,     0,     0,     0,   108,     0,     0,   324,
     325,     0,   328,     0,   327,   326,     0,     0,     0,     0,
       0,   123,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     401,   369,   368,     0,   364,    13,     0,    12,     5,     0,
      15,    17,     0,     0,     0,     0,   322,   166,     0,     0,
       0,     0,   108,     0,   100,   349,   351,     0,   346,   348,
     330,   329,   111,   112,     0,   331,     0,     0,   117,     0,
       0,     0,     0,     0,     0,   126,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   383,   386,   384,   385,   388,   389,   390,   391,   387,
       0,   379,     0,     0,   362,     0,   400,     0,     0,    26,
       0,    14,    20,    18,     0,   107,   168,   172,     0,    55,
     104,   105,   106,     0,   103,     0,   345,   347,   101,     0,
     109,   110,   116,   118,   119,   120,   121,   122,     0,     0,
       0,     0,     0,     0,     0,     0,   319,   321,     0,   171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   377,
     378,   380,   392,     0,     0,   394,     0,     0,     0,     0,
       0,    49,    25,    27,    28,    29,    30,     0,    21,   167,
     323,   102,   350,   332,     0,     0,     0,     0,     0,     0,
       0,   115,   125,   127,   128,   134,   135,   136,   137,   129,
       0,     0,     0,     0,   169,     0,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   382,   381,
       0,   233,   397,     0,   343,     0,     0,     0,     0,     0,
       0,    48,     0,    51,    31,    32,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,   318,   320,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   393,     0,     0,   399,   395,
       0,    19,   344,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,    74,    77,    76,    78,
      80,    79,     0,    52,    59,    23,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   357,   143,     0,   144,   145,
     170,   147,   161,   157,   158,   159,   160,     0,     0,   304,
     303,     0,   314,     0,     0,     0,     0,   231,     0,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,    47,    54,     0,     0,    75,   174,   229,     0,    56,
       0,     0,    58,    60,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,   142,   313,     0,   308,   312,   162,
     306,   305,   163,   164,   165,     0,     0,    43,    41,    42,
      46,    44,    45,    53,   361,     0,     0,     6,   173,   175,
     177,   178,   230,     0,     0,     0,     0,    64,    61,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   307,   309,
     310,   232,   396,     0,     0,     0,   176,    57,    63,     0,
       0,     0,     0,    65,    50,    68,    70,    71,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   207,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   185,     0,   254,
     234,    62,    67,     0,     0,     0,    69,   131,     0,   132,
     133,   138,   139,   140,   141,   311,     0,   226,   227,   228,
     223,   224,   225,   212,   208,   213,   210,   215,   189,   191,
     193,   195,     0,   197,   199,   201,   203,   205,     0,     0,
       0,   182,     0,     0,     0,   180,     0,     0,   235,   288,
     253,   255,     0,     0,     0,   130,   179,     0,     0,     0,
       0,   186,     0,     0,     0,     0,   187,     0,     0,   188,
       0,     0,     0,   217,   221,   218,   222,   219,   220,   181,
     183,   184,   236,     0,     0,     0,     0,     0,   295,   287,
     289,   256,    66,     0,    73,   342,     0,   333,   334,     0,
     337,   209,   335,   214,   211,   216,   190,   192,   194,   196,
     198,   200,   202,   204,   206,     0,     0,   354,   353,     0,
       0,     0,     0,   260,   294,   296,   290,    72,     0,   340,
       0,   338,     0,     0,     0,     0,     0,     0,     0,   238,
     277,   259,   261,   297,   336,   341,     0,     0,   257,   291,
     292,   293,   355,   356,     0,     0,     0,     0,     0,     0,
       0,   266,   237,   239,   241,   242,   243,   244,   245,     0,
     282,   276,   278,   262,   339,   317,     0,   301,     0,     0,
     359,     0,     0,     0,     0,     0,   272,   265,   267,   240,
       0,     0,   258,   281,   283,   279,     0,   315,   299,     0,
       0,   263,   246,     0,   247,     0,   249,   251,   252,   360,
       0,     0,     7,   271,   273,   268,     0,     0,     0,   284,
     316,     0,   298,     0,     0,     0,     0,     0,   274,   280,
       0,     0,   300,   264,   248,   250,     0,   269,     0,   285,
     286,     0,   275,   270
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,   209,   515,    11,    12,    88,    89,
     138,   139,   140,   141,   211,   212,   271,   272,   273,   274,
     275,   276,   330,   331,   332,   333,   149,   394,   451,   452,
     453,   496,   497,   524,   525,   526,   527,   385,   386,    43,
      44,    45,    46,    47,    48,    49,    50,   144,    51,    52,
     164,    53,   348,   110,   111,   238,   292,   293,   294,   295,
     296,   297,   298,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,   487,   488,   489,   490,   491,   556,   557,   622,   623,
     624,   625,   627,   628,   630,   631,   632,   617,   619,   618,
     620,   582,   583,   446,   130,   367,   559,   560,   721,   722,
     723,   724,   725,   726,   727,   728,   609,   610,   611,   699,
     700,   701,   702,   746,   747,   748,   772,   773,   774,   730,
     731,   732,   752,   753,   754,   648,   649,   650,   683,   684,
     685,   781,    82,   418,   419,   466,   467,   536,   420,   642,
     757,   245,   246,   145,   101,   102,   103,   229,   659,   660,
     661,   688,   662,   323,   104,   157,   158,   225,   105,   679,
     714,   407,   422,   741,   770,   390,    72,     5,     6,    84,
      73,    74,    75,    76,   200,   201,   202,   203,   263,    77,
     322,   369,    78,   370,   132
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -613
static const yytype_int16 yypact[] =
{
      44,    16,   131,  -613,    88,  -613,   500,  -613,   354,  -613,
      16,    59,  -613,    16,    16,    16,    16,    16,    16,    16,
      16,    57,    16,    16,   -11,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    73,
    -613,    16,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,
    -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,
    -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,
    -613,  -613,  -613,  -613,   327,  -613,  -613,  -613,   105,  -613,
    -613,  -613,  -613,  -613,    42,  -613,    16,  -613,   421,  -613,
       4,    16,   109,   224,    16,    16,    12,   167,   -30,  -613,
    -613,   124,  -613,   391,  -613,   176,   391,   391,   -11,   -11,
     276,  -613,  -613,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,   374,   219,    16,
     305,  -613,  -613,   500,  -613,  -613,    16,  -613,  -613,   347,
     360,  -613,    57,    16,   267,    72,  -613,  -613,    57,   279,
     205,   220,   274,   293,  -613,  -613,  -613,    47,  -613,  -613,
    -613,  -613,  -613,  -613,   307,  -613,   311,   324,   428,   113,
     -11,   -11,   -11,   -11,   -11,  -613,   340,   372,   383,   -25,
     133,   401,   456,   413,   423,   442,   447,   457,   481,   482,
      16,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,
      29,  -613,   484,    16,  -613,   552,  -613,   488,   491,   430,
      16,   347,  -613,  -613,   490,   489,  -613,  -613,    16,  -613,
    -613,  -613,  -613,   493,  -613,    16,  -613,  -613,  -613,    16,
    -613,  -613,  -613,   428,   238,   312,  -613,  -613,   115,    57,
      57,    57,    57,   494,    57,   496,   492,   498,    57,  -613,
      57,    57,    57,    57,    57,    57,    57,    57,    57,  -613,
    -613,  -613,  -613,   331,    57,  -613,    16,    57,    57,    57,
      57,   575,   430,  -613,  -613,  -613,  -613,    10,  -613,  -613,
    -613,  -613,  -613,  -613,    57,    57,    57,    57,    57,    57,
      57,   584,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,
      16,    16,    16,    16,  -613,    16,  -613,    16,    16,    57,
      57,    57,    57,    57,    16,    16,    16,    16,  -613,  -613,
      16,   576,   587,   143,  -613,   520,   522,   524,   -19,    16,
     608,  -613,   546,  -613,  -613,  -613,  -613,  -613,    16,    16,
      57,    57,    57,    57,    57,    57,    57,   505,  -613,     5,
     504,   506,   510,   515,  -613,   489,   516,   528,   529,   530,
     531,   -15,   -15,   -15,   -15,  -613,    16,   534,  -613,  -613,
     507,  -613,  -613,   536,   537,   538,   548,   549,   550,   154,
     431,   551,    11,    16,  -613,   459,  -613,  -613,  -613,  -613,
    -613,  -613,   231,  -613,   597,   554,   166,   553,   555,   556,
     557,   558,   559,   562,  -613,  -613,  -613,   564,  -613,  -613,
    -613,  -613,  -613,  -613,  -613,  -613,  -613,   141,   568,  -613,
    -613,   141,  -613,   569,   570,   571,   626,  -613,   500,  -613,
    -613,  -613,  -613,  -613,  -613,   574,   577,   578,   580,   581,
     582,  -613,  -613,   583,   585,  -613,    60,  -613,    16,  -613,
      16,   629,   597,  -613,    16,  -613,    57,    57,    57,    57,
      57,    57,    57,   212,  -613,  -613,   273,  -613,   592,  -613,
    -613,  -613,  -613,  -613,  -613,    16,   588,  -613,  -613,  -613,
    -613,  -613,  -613,  -613,  -613,    57,    57,  -613,   573,  -613,
    -613,  -613,  -613,   174,    17,    16,   454,  -613,  -613,   191,
      16,    16,    16,    57,    57,    57,    57,  -613,  -613,  -613,
    -613,  -613,  -613,    57,   195,   675,  -613,  -613,  -613,   589,
     470,    57,    57,  -613,   544,  -613,  -613,  -613,  -613,    25,
     590,   591,   598,   599,   601,   602,   610,   195,    22,   348,
     371,  -613,   495,   495,   495,    22,   495,   495,   495,   495,
     495,    22,    22,    22,   195,   195,    95,  -613,    16,    26,
    -613,  -613,  -613,    16,    57,   195,  -613,  -613,   603,  -613,
    -613,  -613,  -613,  -613,  -613,  -613,    97,  -613,  -613,  -613,
    -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,   616,  -613,
    -613,   614,   624,  -613,  -613,   627,  -613,  -613,   460,   634,
     369,  -613,    -8,   195,   195,  -613,    16,   610,  -613,   486,
     662,  -613,   453,   195,   140,  -613,  -613,   100,   100,   100,
     100,  -613,   100,   100,   100,   100,  -613,   100,   100,  -613,
     100,   100,   100,  -613,  -613,  -613,  -613,  -613,  -613,  -613,
    -613,   635,  -613,   605,   610,   227,    16,    16,   652,   486,
    -613,  -613,  -613,   223,  -613,  -613,   633,  -613,  -613,   236,
    -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,
    -613,  -613,  -613,  -613,  -613,    16,    16,  -613,  -613,    16,
      16,    16,   227,   667,   652,  -613,  -613,  -613,   215,  -613,
     633,  -613,   611,    16,   613,   617,   618,   586,    16,   403,
     669,   667,  -613,  -613,  -613,  -613,   222,    16,  -613,  -613,
    -613,  -613,  -613,  -613,   -38,   610,   610,   638,   610,   610,
     586,   672,   403,  -613,  -613,  -613,  -613,  -613,  -613,    16,
     674,   669,  -613,  -613,  -613,   620,    -7,  -613,    35,    16,
    -613,    46,   103,    16,    16,   641,   678,   672,  -613,  -613,
      16,   497,  -613,   674,  -613,  -613,    16,  -613,  -613,    16,
     610,  -613,  -613,   638,  -613,   610,  -613,  -613,  -613,  -613,
     610,    16,  -613,   678,  -613,  -613,    16,   650,   641,  -613,
    -613,    16,  -613,    16,    16,    16,   128,   610,  -613,  -613,
      16,    16,  -613,  -613,  -613,  -613,   610,  -613,    16,  -613,
    -613,    16,  -613,  -613
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -613,  -613,  -613,  -613,  -613,  -613,  -613,   734,  -613,   658,
    -613,  -613,  -613,   607,  -613,   539,  -613,  -613,   476,   479,
     480,   499,  -613,  -613,  -613,   422,   -91,  -613,  -613,  -613,
     301,  -613,   265,  -613,   239,  -613,  -613,  -613,   377,  -286,
    -283,  -613,  -613,  -613,  -613,  -613,  -613,   -51,  -613,  -613,
     487,  -275,  -613,   -22,  -613,   361,  -613,  -613,  -613,  -613,
    -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,
    -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,
    -613,  -613,  -613,   278,  -613,  -613,  -491,  -613,  -613,  -613,
    -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,  -613,
    -613,   -86,  -151,  -613,  -354,  -613,  -613,   208,  -613,  -613,
      50,  -613,  -613,  -613,  -613,  -613,  -613,  -613,   158,  -613,
    -613,  -613,    63,  -613,  -613,    27,  -613,  -613,    -4,  -613,
    -613,    45,  -613,  -613,    20,  -613,  -613,   129,  -613,  -613,
      93,  -613,  -576,   201,  -346,  -613,   313,  -613,  -410,  -547,
    -613,  -301,  -282,   -93,  -335,  -209,   787,  -613,  -613,  -613,
    -189,    91,  -502,  -331,   -59,  -613,   630,  -613,    -1,   104,
      68,   262,    41,    30,  -612,  -613,  -613,  -613,  -613,  -613,
    -130,  -613,   718,  -232,  -613,   594,  -613,  -613,  -613,  -269,
    -613,  -613,  -613,  -613,   665
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -226
static const yytype_int16 yytable[] =
{
       8,   150,   151,   207,   353,   152,   299,   468,   396,    85,
     405,   471,    90,    91,    92,    93,    94,    95,    96,    97,
     338,   106,   107,   112,   142,   354,   421,   421,   421,   421,
     405,   447,   148,   148,   379,   380,   190,   558,   148,   156,
     128,   191,   160,   192,   387,   153,   576,   388,   193,    83,
     215,   194,     7,   195,   196,   389,   468,   577,   578,   579,
       7,   391,   197,   601,   602,     7,    10,   198,   485,   486,
      86,   465,   199,   108,   614,   470,    79,   603,   604,     7,
     736,    98,   607,     7,   426,   135,   168,   169,   155,   242,
     146,   381,   492,   146,   146,    10,   417,   159,   156,   387,
     161,   223,   388,   129,    99,   109,     7,   112,   112,   639,
     389,   758,   640,   641,   580,   581,   391,   493,   406,   143,
     465,   339,   653,   499,   442,     7,   575,   143,   205,   693,
     518,     9,   694,   695,   696,   208,     7,     7,   567,   778,
       1,   259,   146,   284,   285,   286,   708,     7,   233,   234,
     235,   236,   237,   760,   689,   134,   159,   691,    98,   226,
     287,   288,   289,   290,   763,   155,   791,   737,    98,   112,
     112,   112,   112,   112,   511,   777,    99,   100,   243,   247,
     603,   604,   603,   604,   127,   217,   705,   218,   689,   258,
     655,   761,   762,     7,   764,   766,   767,   768,   170,   171,
     172,   790,   262,   776,   705,   173,   174,   538,   605,   277,
     616,   656,   782,    39,     7,   355,   133,   280,     7,    99,
     100,   765,   147,     7,   282,   603,   604,   291,   283,   789,
     232,   299,    79,     7,   792,    98,   793,   794,   795,   797,
     284,   285,   286,   799,   800,   148,   796,   244,   539,   540,
     541,   802,   417,   654,   803,   371,     7,   287,   288,   289,
     290,   435,   436,   437,     7,   324,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   455,   554,
     154,     7,   657,   657,   657,   657,   517,   657,   657,   657,
     657,   443,   657,   657,   165,   657,   657,   657,   476,   349,
     350,   351,   352,   528,   247,   655,   247,   146,   603,   604,
      39,   555,   655,   361,   362,   363,   364,   677,   221,   365,
     218,     7,   372,   170,   507,   172,   655,   704,   382,   678,
     173,   174,   204,   222,   734,   218,   687,   395,   324,    13,
      14,    15,   448,    16,    17,    18,    19,   690,   129,    20,
      21,    22,    23,    24,   210,    25,    26,    27,    28,    29,
     584,   170,   171,   172,    79,   247,   136,   585,   173,   174,
     129,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     216,   190,   444,   586,   417,   508,   191,   175,   192,   143,
     587,   449,   220,   193,   592,   372,   194,   170,   195,   196,
     598,   599,   600,   519,   173,   174,   224,   197,   658,   658,
     658,   658,   198,   658,   658,   658,   658,   199,   658,   658,
     228,   658,   658,   658,   230,    39,    40,   136,    41,   663,
     664,   665,    86,   666,   667,   668,   669,   231,   670,   671,
      42,   672,   673,   674,   319,    79,   320,   324,    80,   494,
     637,    81,   638,   324,   239,   780,   588,   589,   590,   591,
     593,   594,   595,   596,   597,   716,   717,   718,   719,   720,
     612,    13,    14,    15,   247,    16,    17,    18,    19,   162,
     163,    20,    21,    22,    23,    24,   240,    25,    26,    27,
      28,    29,   372,   495,   520,   521,   522,   241,   372,   529,
     530,   531,   129,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    13,    14,    15,   248,    16,    17,    18,    19,
     173,   174,    20,    21,    22,    23,    24,   251,    25,    26,
      27,    28,    29,   267,   268,   269,   270,   252,   438,   439,
     440,   633,   634,   635,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   645,   646,   647,   253,   606,    40,   383,
      41,   254,   146,   423,   424,   425,   652,   264,   218,   249,
     250,   255,   384,   373,   374,   375,   376,   377,   378,   329,
     392,   485,   486,   562,   563,   521,   522,   580,   581,   712,
     713,    80,   769,   166,   167,   256,   257,   261,    39,    40,
     265,    41,   266,   279,   218,   643,   281,   304,   329,   306,
     307,   347,   308,    42,   368,   366,   404,   408,   428,   409,
      13,    14,    15,   410,    16,    17,    18,    19,   411,   412,
      20,    21,    22,    23,    24,   450,    25,    26,    27,    28,
      29,   413,   414,   415,   416,   680,   681,   427,   644,   429,
     430,   431,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   432,   433,   434,   441,   454,   475,   456,   495,   457,
     458,   459,   460,   461,   692,   643,   462,   464,   643,   643,
     643,   469,   472,   473,   474,   676,   558,   477,   621,  -225,
     478,   479,   643,   480,   481,   482,   483,   715,   484,   626,
     512,    79,   561,   569,   570,   629,   735,    40,   383,    41,
     510,   571,   572,   643,   573,   574,   615,   636,   607,   675,
     603,   384,   682,   655,   698,   707,   709,   729,   750,   740,
     710,   711,   745,   751,   756,   759,   769,   643,   643,   771,
     643,   643,   643,   643,    80,    87,   137,   213,   334,   643,
     278,   335,   336,   498,   393,   247,   738,   739,   643,   742,
     743,   523,   445,   566,   733,   463,   516,   608,   651,   788,
     787,   337,   749,   779,   775,   643,   755,   703,   686,   509,
     643,   706,   643,   643,   643,   643,   697,   227,   744,   643,
     643,   568,   131,   784,   260,   206,     0,   643,     0,     0,
     643,   783,     0,     0,     0,     0,   785,     0,     0,     0,
       0,   786,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,     0,   798,     0,
       0,     0,     0,     0,     0,     0,     0,   801,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   214,
       0,     0,     0,     0,     0,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   300,   301,   302,   303,
       0,   305,     0,     0,     0,   309,     0,   310,   311,   312,
     313,   314,   315,   316,   317,   318,     0,     0,     0,     0,
       0,   321,     0,     0,   325,   326,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,   345,   346,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   356,   357,   358,   359,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   397,   398,   399,
     400,   401,   402,   403,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   500,   501,   502,   503,   504,   505,   506,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   513,   514,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     532,   533,   534,   535,     0,     0,     0,     0,     0,     0,
     537,     0,     0,     0,     0,     0,     0,     0,   564,   565,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   613
};

static const yytype_int16 yycheck[] =
{
       1,    94,    95,   133,   305,    96,   238,   417,   339,    10,
       5,   421,    13,    14,    15,    16,    17,    18,    19,    20,
      10,    22,    23,    24,    20,   307,   361,   362,   363,   364,
       5,   385,    21,    21,    53,    54,     7,    11,    21,    98,
      41,    12,   101,    14,   330,    96,   537,   330,    19,     8,
     143,    22,    90,    24,    25,   330,   466,    35,    36,    37,
      90,   330,    33,   554,   555,    90,     7,    38,     8,     9,
      11,   417,    43,    84,   565,   421,    91,    85,    86,    90,
     118,   111,    56,    90,   366,    86,   108,   109,   118,   114,
      91,   110,   446,    94,    95,     7,   111,    98,   157,   385,
     101,   152,   385,    43,   119,   116,    90,   108,   109,   117,
     385,   118,   603,   604,    92,    93,   385,   448,   113,   115,
     466,   111,   613,   454,   113,    90,   536,   115,   129,   676,
     113,     0,   679,   680,   681,   136,    90,    90,   113,   751,
      96,   112,   143,    28,    29,    30,   693,    90,   170,   171,
     172,   173,   174,   118,   656,   113,   157,   659,   111,   112,
      45,    46,    47,    48,   118,   118,   778,   714,   111,   170,
     171,   172,   173,   174,   475,   751,   119,   120,   179,   180,
      85,    86,    85,    86,   111,   113,   688,   115,   690,   190,
      90,   738,   739,    90,   741,   742,   743,   744,    85,    86,
      87,   777,   203,   750,   706,    92,    93,    12,   113,   210,
     113,   111,   759,    98,    90,   308,   111,   218,    90,   119,
     120,   118,   113,    90,   225,    85,    86,   112,   229,   776,
     117,   463,    91,    90,   781,   111,   783,   784,   785,   786,
      28,    29,    30,   790,   791,    21,   118,   114,    53,    54,
      55,   798,   111,   113,   801,   112,    90,    45,    46,    47,
      48,   107,   108,   109,    90,   266,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,   112,    84,
     113,    90,   617,   618,   619,   620,   112,   622,   623,   624,
     625,   382,   627,   628,   118,   630,   631,   632,   428,   300,
     301,   302,   303,   112,   305,    90,   307,   308,    85,    86,
      98,   116,    90,   314,   315,   316,   317,    90,   113,   320,
     115,    90,   323,    85,   112,    87,    90,   112,   329,   102,
      92,    93,   113,   113,   112,   115,   113,   338,   339,    12,
      13,    14,   111,    16,    17,    18,    19,   111,    43,    22,
      23,    24,    25,    26,     7,    28,    29,    30,    31,    32,
      12,    85,    86,    87,    91,   366,     6,    19,    92,    93,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
     113,     7,   383,    12,   111,   112,    12,   111,    14,   115,
      19,   392,   113,    19,   545,   396,    22,    85,    24,    25,
     551,   552,   553,   494,    92,    93,   113,    33,   617,   618,
     619,   620,    38,   622,   623,   624,   625,    43,   627,   628,
     113,   630,   631,   632,   113,    98,    99,     6,   101,   618,
     619,   620,    11,   622,   623,   624,   625,   113,   627,   628,
     113,   630,   631,   632,   113,    91,   115,   448,    94,   450,
      81,    97,    83,   454,   114,   756,   542,   543,   544,   545,
     546,   547,   548,   549,   550,    62,    63,    64,    65,    66,
     563,    12,    13,    14,   475,    16,    17,    18,    19,    88,
      89,    22,    23,    24,    25,    26,   114,    28,    29,    30,
      31,    32,   493,    39,   495,    41,    42,   114,   499,   500,
     501,   502,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    12,    13,    14,   114,    16,    17,    18,    19,
      92,    93,    22,    23,    24,    25,    26,   114,    28,    29,
      30,    31,    32,   103,   104,   105,   106,   114,   107,   108,
     109,    81,    82,    83,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    67,    68,    69,   114,   558,    99,   100,
     101,   114,   563,   362,   363,   364,   113,    15,   115,   113,
     114,   114,   113,    53,    54,    53,    54,    53,    54,    33,
      34,     8,     9,   113,   114,    41,    42,    92,    93,     3,
       4,    94,    95,   106,   107,   114,   114,   113,    98,    99,
     112,   101,   111,   113,   115,   606,   113,   113,    33,   113,
     118,    27,   114,   113,    27,    39,   111,   113,   111,   113,
      12,    13,    14,   113,    16,    17,    18,    19,   113,   113,
      22,    23,    24,    25,    26,    38,    28,    29,    30,    31,
      32,   113,   113,   113,   113,   646,   647,   113,   607,   113,
     113,   113,    44,    45,    46,    47,    48,    49,    50,    51,
      52,   113,   113,   113,   113,   111,    40,   114,    39,   114,
     114,   114,   114,   114,   675,   676,   114,   113,   679,   680,
     681,   113,   113,   113,   113,   644,    11,   113,    72,    75,
     113,   113,   693,   113,   113,   113,   113,   698,   113,    75,
     112,    91,   113,   113,   113,    78,   707,    99,   100,   101,
     118,   113,   113,   714,   113,   113,   113,    83,    56,   114,
      85,   113,    70,    90,    57,   114,   113,    58,   729,    91,
     113,   113,    60,    59,   114,   736,    95,   738,   739,    61,
     741,   742,   743,   744,    94,    11,    88,   140,   272,   750,
     211,   272,   272,   452,   332,   756,   715,   716,   759,   718,
     719,   496,   385,   524,   701,   404,   488,   559,   610,   773,
     771,   272,   722,   753,   747,   776,   731,   684,   649,   466,
     781,   690,   783,   784,   785,   786,   682,   157,   720,   790,
     791,   529,    74,   763,   200,   130,    -1,   798,    -1,    -1,
     801,   760,    -1,    -1,    -1,    -1,   765,    -1,    -1,    -1,
      -1,   770,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,   787,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   796,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,
      -1,   244,    -1,    -1,    -1,   248,    -1,   250,   251,   252,
     253,   254,   255,   256,   257,   258,    -1,    -1,    -1,    -1,
      -1,   264,    -1,    -1,   267,   268,   269,   270,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   284,   285,   286,   287,   288,   289,   290,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,   310,   311,   312,
     313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,   342,
     343,   344,   345,   346,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   456,   457,   458,   459,   460,   461,   462,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   485,   486,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     503,   504,   505,   506,    -1,    -1,    -1,    -1,    -1,    -1,
     513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   521,   522,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   564
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    96,   122,   123,   124,   298,   299,    90,   289,     0,
       7,   127,   128,    12,    13,    14,    16,    17,    18,    19,
      22,    23,    24,    25,    26,    28,    29,    30,    31,    32,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    98,
      99,   101,   113,   160,   161,   162,   163,   164,   165,   166,
     167,   169,   170,   172,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   297,   301,   302,   303,   304,   310,   313,    91,
      94,    97,   263,   293,   300,   289,    11,   128,   129,   130,
     289,   289,   289,   289,   289,   289,   289,   289,   111,   119,
     120,   275,   276,   277,   285,   289,   289,   289,    84,   116,
     174,   175,   289,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   111,   289,    43,
     225,   303,   315,   111,   113,   289,     6,   130,   131,   132,
     133,   134,    20,   115,   168,   274,   289,   113,    21,   147,
     274,   274,   147,   168,   113,   118,   285,   286,   287,   289,
     285,   289,    88,    89,   171,   118,   171,   171,   174,   174,
      85,    86,    87,    92,    93,   111,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
       7,    12,    14,    19,    22,    24,    25,    33,    38,    43,
     305,   306,   307,   308,   113,   289,   315,   301,   289,   125,
       7,   135,   136,   134,   277,   274,   113,   113,   115,   277,
     113,   113,   113,   168,   113,   288,   112,   287,   113,   278,
     113,   113,   117,   174,   174,   174,   174,   174,   176,   114,
     114,   114,   114,   289,   114,   272,   273,   289,   114,   113,
     114,   114,   114,   114,   114,   114,   114,   114,   289,   112,
     306,   113,   289,   309,    15,   112,   111,   103,   104,   105,
     106,   137,   138,   139,   140,   141,   142,   289,   136,   113,
     289,   113,   289,   289,    28,    29,    30,    45,    46,    47,
      48,   112,   177,   178,   179,   180,   181,   182,   183,   304,
     277,   277,   277,   277,   113,   277,   113,   118,   114,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   113,
     115,   277,   311,   284,   289,   277,   277,   277,   277,    33,
     143,   144,   145,   146,   139,   140,   141,   142,    10,   111,
     277,   277,   277,   277,   277,   277,   277,    27,   173,   289,
     289,   289,   289,   272,   273,   274,   277,   277,   277,   277,
     277,   289,   289,   289,   289,   289,    39,   226,    27,   312,
     314,   112,   289,    53,    54,    53,    54,    53,    54,    53,
      54,   110,   289,   100,   113,   158,   159,   160,   161,   172,
     296,   310,    34,   146,   148,   289,   284,   277,   277,   277,
     277,   277,   277,   277,   111,     5,   113,   292,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   111,   264,   265,
     269,   275,   293,   264,   264,   264,   273,   113,   111,   113,
     113,   113,   113,   113,   113,   107,   108,   109,   107,   108,
     109,   113,   113,   147,   289,   159,   224,   225,   111,   289,
      38,   149,   150,   151,   111,   112,   114,   114,   114,   114,
     114,   114,   114,   176,   113,   265,   266,   267,   269,   113,
     265,   269,   113,   113,   113,    40,   301,   113,   113,   113,
     113,   113,   113,   113,   113,     8,     9,   202,   203,   204,
     205,   206,   225,   284,   289,    39,   152,   153,   151,   284,
     277,   277,   277,   277,   277,   277,   277,   112,   112,   267,
     118,   272,   112,   277,   277,   126,   204,   112,   113,   147,
     289,    41,    42,   153,   154,   155,   156,   157,   112,   289,
     289,   289,   277,   277,   277,   277,   268,   277,    12,    53,
      54,    55,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    84,   116,   207,   208,    11,   227,
     228,   113,   113,   114,   277,   277,   155,   113,   292,   113,
     113,   113,   113,   113,   113,   269,   207,    35,    36,    37,
      92,    93,   222,   223,    12,    19,    12,    19,   222,   222,
     222,   222,   223,   222,   222,   222,   222,   222,   223,   223,
     223,   207,   207,    85,    86,   113,   289,    56,   228,   237,
     238,   239,   274,   277,   207,   113,   113,   218,   220,   219,
     221,    72,   209,   210,   211,   212,    75,   213,   214,    78,
     215,   216,   217,    81,    82,    83,    83,    81,    83,   117,
     207,   207,   270,   289,   293,    67,    68,    69,   256,   257,
     258,   239,   113,   207,   113,    90,   111,   275,   276,   279,
     280,   281,   283,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   114,   293,    90,   102,   290,
     289,   289,    70,   259,   260,   261,   258,   113,   282,   283,
     111,   283,   289,   270,   270,   270,   270,   290,    57,   240,
     241,   242,   243,   261,   112,   283,   282,   114,   270,   113,
     113,   113,     3,     4,   291,   289,    62,    63,    64,    65,
      66,   229,   230,   231,   232,   233,   234,   235,   236,    58,
     250,   251,   252,   243,   112,   289,   118,   270,   293,   293,
      91,   294,   293,   293,   291,    60,   244,   245,   246,   231,
     289,    59,   253,   254,   255,   252,   114,   271,   118,   289,
     118,   270,   270,   118,   270,   118,   270,   270,   270,    95,
     295,    61,   247,   248,   249,   246,   270,   263,   295,   255,
     272,   262,   270,   293,   294,   293,   293,   289,   249,   270,
     263,   295,   270,   270,   270,   270,   118,   270,   293,   270,
     270,   293,   270,   270
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
        case 4:
#line 166 "policy_parse.y"
    { if (define_policy(pass, 0) == -1) return -1; }
    break;

  case 5:
#line 168 "policy_parse.y"
    { if (pass == 1) { if (policydb_index_classes(policydbp)) return -1; }
                            else if (pass == 2) { if (policydb_index_others(NULL, policydbp, 0)) return -1; }}
    break;

  case 6:
#line 171 "policy_parse.y"
    { if (pass == 1) { if (policydb_index_bools(policydbp)) return -1;}
			   else if (pass == 2) { if (policydb_index_others(NULL, policydbp, 0)) return -1;}}
    break;

  case 10:
#line 179 "policy_parse.y"
    {if (define_class()) return -1;}
    break;

  case 13:
#line 185 "policy_parse.y"
    {if (define_initial_sid()) return -1;}
    break;

  case 19:
#line 196 "policy_parse.y"
    {if (define_common_perms()) return -1;}
    break;

  case 22:
#line 202 "policy_parse.y"
    {if (define_av_perms(FALSE)) return -1;}
    break;

  case 23:
#line 204 "policy_parse.y"
    {if (define_av_perms(TRUE)) return -1;}
    break;

  case 24:
#line 206 "policy_parse.y"
    {if (define_av_perms(TRUE)) return -1;}
    break;

  case 35:
#line 221 "policy_parse.y"
    {if (define_default_user(DEFAULT_SOURCE)) return -1; }
    break;

  case 36:
#line 223 "policy_parse.y"
    {if (define_default_user(DEFAULT_TARGET)) return -1; }
    break;

  case 37:
#line 226 "policy_parse.y"
    {if (define_default_role(DEFAULT_SOURCE)) return -1; }
    break;

  case 38:
#line 228 "policy_parse.y"
    {if (define_default_role(DEFAULT_TARGET)) return -1; }
    break;

  case 39:
#line 231 "policy_parse.y"
    {if (define_default_type(DEFAULT_SOURCE)) return -1; }
    break;

  case 40:
#line 233 "policy_parse.y"
    {if (define_default_type(DEFAULT_TARGET)) return -1; }
    break;

  case 41:
#line 236 "policy_parse.y"
    {if (define_default_range(DEFAULT_SOURCE_LOW)) return -1; }
    break;

  case 42:
#line 238 "policy_parse.y"
    {if (define_default_range(DEFAULT_SOURCE_HIGH)) return -1; }
    break;

  case 43:
#line 240 "policy_parse.y"
    {if (define_default_range(DEFAULT_SOURCE_LOW_HIGH)) return -1; }
    break;

  case 44:
#line 242 "policy_parse.y"
    {if (define_default_range(DEFAULT_TARGET_LOW)) return -1; }
    break;

  case 45:
#line 244 "policy_parse.y"
    {if (define_default_range(DEFAULT_TARGET_HIGH)) return -1; }
    break;

  case 46:
#line 246 "policy_parse.y"
    {if (define_default_range(DEFAULT_TARGET_LOW_HIGH)) return -1; }
    break;

  case 47:
#line 248 "policy_parse.y"
    {if (define_default_range(DEFAULT_GLBLUB)) return -1; }
    break;

  case 53:
#line 259 "policy_parse.y"
    {if (define_sens()) return -1;}
    break;

  case 54:
#line 261 "policy_parse.y"
    {if (define_sens()) return -1;}
    break;

  case 56:
#line 266 "policy_parse.y"
    {if (define_dominance()) return -1;}
    break;

  case 57:
#line 268 "policy_parse.y"
    {if (define_dominance()) return -1;}
    break;

  case 62:
#line 277 "policy_parse.y"
    {if (define_category()) return -1;}
    break;

  case 63:
#line 279 "policy_parse.y"
    {if (define_category()) return -1;}
    break;

  case 66:
#line 285 "policy_parse.y"
    {if (define_level()) return -1;}
    break;

  case 67:
#line 287 "policy_parse.y"
    {if (define_level()) return -1;}
    break;

  case 72:
#line 296 "policy_parse.y"
    { if (define_constraint((constraint_expr_t*)(yyvsp[(4) - (5)].valptr))) return -1; }
    break;

  case 73:
#line 299 "policy_parse.y"
    { if (define_validatetrans((constraint_expr_t*)(yyvsp[(3) - (4)].valptr))) return -1; }
    break;

  case 100:
#line 332 "policy_parse.y"
    { if (define_attrib()) return -1;}
    break;

  case 101:
#line 335 "policy_parse.y"
    { if (expand_attrib()) return -1;}
    break;

  case 102:
#line 338 "policy_parse.y"
    {if (define_type(1)) return -1;}
    break;

  case 103:
#line 340 "policy_parse.y"
    {if (define_type(0)) return -1;}
    break;

  case 104:
#line 343 "policy_parse.y"
    {if (define_typealias()) return -1;}
    break;

  case 105:
#line 346 "policy_parse.y"
    {if (define_typeattribute()) return -1;}
    break;

  case 106:
#line 349 "policy_parse.y"
    {if (define_typebounds()) return -1;}
    break;

  case 109:
#line 355 "policy_parse.y"
    { if (define_bool_tunable(0)) return -1; }
    break;

  case 110:
#line 358 "policy_parse.y"
    { if (define_bool_tunable(1)) return -1; }
    break;

  case 111:
#line 361 "policy_parse.y"
    { if (insert_id("T",0)) return -1; }
    break;

  case 112:
#line 363 "policy_parse.y"
    { if (insert_id("F",0)) return -1; }
    break;

  case 113:
#line 366 "policy_parse.y"
    { if (pass == 2) { if (define_conditional((cond_expr_t*)(yyvsp[(2) - (6)].ptr), (avrule_t*)(yyvsp[(4) - (6)].ptr), (avrule_t*)(yyvsp[(6) - (6)].ptr)) < 0) return -1;  }}
    break;

  case 114:
#line 369 "policy_parse.y"
    { (yyval.ptr) = (yyvsp[(3) - (4)].ptr); }
    break;

  case 115:
#line 371 "policy_parse.y"
    { (yyval.ptr) = NULL; }
    break;

  case 116:
#line 374 "policy_parse.y"
    { (yyval.ptr) = (yyvsp[(2) - (3)].ptr);}
    break;

  case 117:
#line 376 "policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_NOT, (yyvsp[(2) - (2)].ptr), 0);
			  if ((yyval.ptr) == 0) return -1; }
    break;

  case 118:
#line 379 "policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_AND, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
    break;

  case 119:
#line 382 "policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_OR, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));
			  if ((yyval.ptr) == 0) return   -1; }
    break;

  case 120:
#line 385 "policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_XOR, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
    break;

  case 121:
#line 388 "policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_EQ, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
    break;

  case 122:
#line 391 "policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_NEQ, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
    break;

  case 123:
#line 394 "policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 124:
#line 397 "policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_BOOL,0, 0);
			  if ((yyval.ptr) == COND_ERR) return   -1; }
    break;

  case 125:
#line 401 "policy_parse.y"
    { (yyval.ptr) = define_cond_pol_list((avrule_t *)(yyvsp[(1) - (2)].ptr), (avrule_t *)(yyvsp[(2) - (2)].ptr)); }
    break;

  case 126:
#line 403 "policy_parse.y"
    { (yyval.ptr) = NULL; }
    break;

  case 127:
#line 406 "policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 128:
#line 408 "policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 129:
#line 410 "policy_parse.y"
    { (yyval.ptr) = NULL; }
    break;

  case 130:
#line 413 "policy_parse.y"
    { (yyval.ptr) = define_cond_filename_trans() ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
    break;

  case 131:
#line 416 "policy_parse.y"
    { (yyval.ptr) = define_cond_compute_type(AVRULE_TRANSITION) ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
    break;

  case 132:
#line 419 "policy_parse.y"
    { (yyval.ptr) = define_cond_compute_type(AVRULE_MEMBER) ;
                          if ((yyval.ptr) ==  COND_ERR) return -1;}
    break;

  case 133:
#line 422 "policy_parse.y"
    { (yyval.ptr) = define_cond_compute_type(AVRULE_CHANGE) ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
    break;

  case 134:
#line 426 "policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 135:
#line 428 "policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 136:
#line 430 "policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 137:
#line 432 "policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 138:
#line 435 "policy_parse.y"
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_ALLOWED) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
    break;

  case 139:
#line 439 "policy_parse.y"
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_AUDITALLOW) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
    break;

  case 140:
#line 443 "policy_parse.y"
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_AUDITDENY) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
    break;

  case 141:
#line 447 "policy_parse.y"
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_DONTAUDIT);
                          if ((yyval.ptr) == COND_ERR) return -1; }
    break;

  case 142:
#line 452 "policy_parse.y"
    {if (define_filename_trans()) return -1; }
    break;

  case 143:
#line 454 "policy_parse.y"
    {if (define_compute_type(AVRULE_TRANSITION)) return -1;}
    break;

  case 144:
#line 456 "policy_parse.y"
    {if (define_compute_type(AVRULE_MEMBER)) return -1;}
    break;

  case 145:
#line 458 "policy_parse.y"
    {if (define_compute_type(AVRULE_CHANGE)) return -1;}
    break;

  case 146:
#line 461 "policy_parse.y"
    { if (define_range_trans(0)) return -1; }
    break;

  case 147:
#line 463 "policy_parse.y"
    { if (define_range_trans(1)) return -1; }
    break;

  case 157:
#line 476 "policy_parse.y"
    {if (define_te_avtab(AVRULE_ALLOWED)) return -1; }
    break;

  case 158:
#line 479 "policy_parse.y"
    {if (define_te_avtab(AVRULE_AUDITALLOW)) return -1; }
    break;

  case 159:
#line 482 "policy_parse.y"
    {if (define_te_avtab(AVRULE_AUDITDENY)) return -1; }
    break;

  case 160:
#line 485 "policy_parse.y"
    {if (define_te_avtab(AVRULE_DONTAUDIT)) return -1; }
    break;

  case 161:
#line 488 "policy_parse.y"
    {if (define_te_avtab(AVRULE_NEVERALLOW)) return -1; }
    break;

  case 162:
#line 491 "policy_parse.y"
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_ALLOWED)) return -1; }
    break;

  case 163:
#line 494 "policy_parse.y"
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_AUDITALLOW)) return -1; }
    break;

  case 164:
#line 497 "policy_parse.y"
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_DONTAUDIT)) return -1; }
    break;

  case 165:
#line 500 "policy_parse.y"
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_NEVERALLOW)) return -1; }
    break;

  case 166:
#line 503 "policy_parse.y"
    {if (define_attrib_role()) return -1; }
    break;

  case 167:
#line 506 "policy_parse.y"
    {if (define_role_types()) return -1;}
    break;

  case 168:
#line 509 "policy_parse.y"
    {if (define_role_attr()) return -1;}
    break;

  case 169:
#line 512 "policy_parse.y"
    {if (define_role_trans(0)) return -1; }
    break;

  case 170:
#line 514 "policy_parse.y"
    {if (define_role_trans(1)) return -1;}
    break;

  case 171:
#line 517 "policy_parse.y"
    {if (define_role_allow()) return -1; }
    break;

  case 172:
#line 520 "policy_parse.y"
    {if (define_roleattribute()) return -1;}
    break;

  case 179:
#line 532 "policy_parse.y"
    { if (define_constraint((constraint_expr_t*)(yyvsp[(4) - (5)].valptr))) return -1; }
    break;

  case 180:
#line 535 "policy_parse.y"
    { if (define_validatetrans((constraint_expr_t*)(yyvsp[(3) - (4)].valptr))) return -1; }
    break;

  case 181:
#line 538 "policy_parse.y"
    { (yyval.valptr) = (yyvsp[(2) - (3)].valptr); }
    break;

  case 182:
#line 540 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NOT, (yyvsp[(2) - (2)].valptr), 0);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 183:
#line 543 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_AND, (yyvsp[(1) - (3)].valptr), (yyvsp[(3) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 184:
#line 546 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_OR, (yyvsp[(1) - (3)].valptr), (yyvsp[(3) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 185:
#line 549 "policy_parse.y"
    { (yyval.valptr) = (yyvsp[(1) - (1)].valptr); }
    break;

  case 186:
#line 552 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_USER, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 187:
#line 555 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_ROLE, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 188:
#line 558 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_TYPE, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 189:
#line 560 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 190:
#line 561 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_USER, (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 191:
#line 563 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 192:
#line 564 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_USER | CEXPR_TARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 193:
#line 566 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 194:
#line 567 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_USER | CEXPR_XTARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 195:
#line 569 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 196:
#line 570 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_ROLE, (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 197:
#line 572 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 198:
#line 573 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_TARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 199:
#line 575 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 200:
#line 576 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_XTARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 201:
#line 578 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 202:
#line 579 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_TYPE, (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 203:
#line 581 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 204:
#line 582 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_TARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 205:
#line 584 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 206:
#line 585 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_XTARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 207:
#line 588 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_USER, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 208:
#line 590 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 209:
#line 591 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_ROLE, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 210:
#line 593 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 211:
#line 594 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_TARGET), CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 212:
#line 597 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_ROLE, (yyvsp[(2) - (2)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 213:
#line 599 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 214:
#line 600 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_TYPE, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 215:
#line 602 "policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 216:
#line 603 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_TARGET), CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 217:
#line 606 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1L2, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 218:
#line 609 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1H2, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 219:
#line 612 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_H1L2, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 220:
#line 615 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_H1H2, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 221:
#line 618 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1H1, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 222:
#line 621 "policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L2H2, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 223:
#line 625 "policy_parse.y"
    { (yyval.valptr) = CEXPR_EQ; }
    break;

  case 224:
#line 627 "policy_parse.y"
    { (yyval.valptr) = CEXPR_NEQ; }
    break;

  case 225:
#line 630 "policy_parse.y"
    { (yyval.valptr) = (yyvsp[(1) - (1)].valptr); }
    break;

  case 226:
#line 632 "policy_parse.y"
    { (yyval.valptr) = CEXPR_DOM; }
    break;

  case 227:
#line 634 "policy_parse.y"
    { (yyval.valptr) = CEXPR_DOMBY; }
    break;

  case 228:
#line 636 "policy_parse.y"
    { (yyval.valptr) = CEXPR_INCOMP; }
    break;

  case 231:
#line 642 "policy_parse.y"
    {if (define_user()) return -1;}
    break;

  case 236:
#line 651 "policy_parse.y"
    {if (define_initial_sid_context()) return -1;}
    break;

  case 246:
#line 665 "policy_parse.y"
    {if (define_pirq_context((yyvsp[(2) - (3)].val))) return -1;}
    break;

  case 247:
#line 668 "policy_parse.y"
    {if (define_iomem_context((yyvsp[(2) - (3)].val64),(yyvsp[(2) - (3)].val64))) return -1;}
    break;

  case 248:
#line 670 "policy_parse.y"
    {if (define_iomem_context((yyvsp[(2) - (5)].val64),(yyvsp[(4) - (5)].val64))) return -1;}
    break;

  case 249:
#line 673 "policy_parse.y"
    {if (define_ioport_context((yyvsp[(2) - (3)].val),(yyvsp[(2) - (3)].val))) return -1;}
    break;

  case 250:
#line 675 "policy_parse.y"
    {if (define_ioport_context((yyvsp[(2) - (5)].val),(yyvsp[(4) - (5)].val))) return -1;}
    break;

  case 251:
#line 678 "policy_parse.y"
    {if (define_pcidevice_context((yyvsp[(2) - (3)].val))) return -1;}
    break;

  case 252:
#line 681 "policy_parse.y"
    {if (define_devicetree_context()) return -1;}
    break;

  case 257:
#line 690 "policy_parse.y"
    {if (define_fs_context((yyvsp[(2) - (5)].val),(yyvsp[(3) - (5)].val))) return -1;}
    break;

  case 263:
#line 701 "policy_parse.y"
    {if (define_port_context((yyvsp[(3) - (4)].val),(yyvsp[(3) - (4)].val))) return -1;}
    break;

  case 264:
#line 703 "policy_parse.y"
    {if (define_port_context((yyvsp[(3) - (6)].val),(yyvsp[(5) - (6)].val))) return -1;}
    break;

  case 269:
#line 712 "policy_parse.y"
    {if (define_ibpkey_context((yyvsp[(3) - (4)].val),(yyvsp[(3) - (4)].val))) return -1;}
    break;

  case 270:
#line 714 "policy_parse.y"
    {if (define_ibpkey_context((yyvsp[(3) - (6)].val),(yyvsp[(5) - (6)].val))) return -1;}
    break;

  case 275:
#line 723 "policy_parse.y"
    {if (define_ibendport_context((yyvsp[(3) - (4)].val))) return -1;}
    break;

  case 280:
#line 732 "policy_parse.y"
    {if (define_netif_context()) return -1;}
    break;

  case 285:
#line 741 "policy_parse.y"
    {if (define_ipv4_node_context()) return -1;}
    break;

  case 286:
#line 743 "policy_parse.y"
    {if (define_ipv6_node_context()) return -1;}
    break;

  case 291:
#line 752 "policy_parse.y"
    {if (define_fs_use(SECURITY_FS_USE_XATTR)) return -1;}
    break;

  case 292:
#line 754 "policy_parse.y"
    {if (define_fs_use(SECURITY_FS_USE_TASK)) return -1;}
    break;

  case 293:
#line 756 "policy_parse.y"
    {if (define_fs_use(SECURITY_FS_USE_TRANS)) return -1;}
    break;

  case 298:
#line 765 "policy_parse.y"
    {if (define_genfs_context(1)) return -1;}
    break;

  case 299:
#line 766 "policy_parse.y"
    {insert_id("-", 0);}
    break;

  case 300:
#line 767 "policy_parse.y"
    {if (define_genfs_context(1)) return -1;}
    break;

  case 301:
#line 769 "policy_parse.y"
    {if (define_genfs_context(0)) return -1;}
    break;

  case 302:
#line 772 "policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 303:
#line 775 "policy_parse.y"
    { if (insert_separator(0)) return -1; }
    break;

  case 304:
#line 777 "policy_parse.y"
    { if (insert_separator(0)) return -1; }
    break;

  case 305:
#line 779 "policy_parse.y"
    { if (insert_id("~", 0)) return -1; }
    break;

  case 306:
#line 781 "policy_parse.y"
    { if (insert_id("~", 0)) return -1;
			  if (insert_separator(0)) return -1; }
    break;

  case 310:
#line 789 "policy_parse.y"
    { if (insert_id("-", 0)) return -1; }
    break;

  case 314:
#line 794 "policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 318:
#line 802 "policy_parse.y"
    {if (insert_separator(0)) return -1;}
    break;

  case 319:
#line 804 "policy_parse.y"
    {if (insert_separator(0)) return -1;}
    break;

  case 320:
#line 807 "policy_parse.y"
    {if (insert_separator(0)) return -1;}
    break;

  case 321:
#line 809 "policy_parse.y"
    {if (insert_separator(0)) return -1;}
    break;

  case 326:
#line 819 "policy_parse.y"
    { if (insert_separator(0)) return -1; }
    break;

  case 327:
#line 821 "policy_parse.y"
    { if (insert_separator(0)) return -1; }
    break;

  case 328:
#line 823 "policy_parse.y"
    { if (insert_id("*", 0)) return -1; 
			  if (insert_separator(0)) return -1; }
    break;

  case 329:
#line 826 "policy_parse.y"
    { if (insert_id("~", 0)) return -1;
			  if (insert_separator(0)) return -1; }
    break;

  case 330:
#line 829 "policy_parse.y"
    { if (insert_id("~", 0)) return -1; 
			  if (insert_separator(0)) return -1; }
    break;

  case 331:
#line 831 "policy_parse.y"
    { if (insert_id("-", 0)) return -1; }
    break;

  case 332:
#line 832 "policy_parse.y"
    { if (insert_separator(0)) return -1; }
    break;

  case 333:
#line 835 "policy_parse.y"
    { if (insert_id("~", 1)) return -1; }
    break;

  case 334:
#line 838 "policy_parse.y"
    { if (insert_id("*", 1)) return -1; }
    break;

  case 342:
#line 850 "policy_parse.y"
    { if (insert_id(yytext, 1)) return -1; }
    break;

  case 349:
#line 859 "policy_parse.y"
    { if (insert_id("-", 0)) return -1; }
    break;

  case 352:
#line 862 "policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 353:
#line 865 "policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 354:
#line 867 "policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 355:
#line 870 "policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 356:
#line 872 "policy_parse.y"
    { yytext[strlen(yytext) - 1] = '\0'; if (insert_id(yytext + 1,0)) return -1; }
    break;

  case 357:
#line 875 "policy_parse.y"
    { yytext[strlen(yytext) - 1] = '\0'; if (insert_id(yytext + 1,0)) return -1; }
    break;

  case 358:
#line 878 "policy_parse.y"
    { unsigned long x;
			  errno = 0;
			  x = strtoul(yytext, NULL, 0);
			  if (errno)
			      return -1;
#if ULONG_MAX > UINT_MAX
			  if (x > UINT_MAX)
			      return -1;
#endif
			  (yyval.val) = (unsigned int) x;
			}
    break;

  case 359:
#line 891 "policy_parse.y"
    { unsigned long long x;
			  errno = 0;
			  x = strtoull(yytext, NULL, 0);
			  if (errno)
			      return -1;
			  (yyval.val64) = (uint64_t) x;
			}
    break;

  case 360:
#line 900 "policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 361:
#line 903 "policy_parse.y"
    {if (define_polcap()) return -1;}
    break;

  case 362:
#line 906 "policy_parse.y"
    {if (define_permissive()) return -1;}
    break;

  case 363:
#line 911 "policy_parse.y"
    { if (end_avrule_block(pass) == -1) return -1;
                          if (policydb_index_others(NULL, policydbp, 0)) return -1;
                        }
    break;

  case 364:
#line 916 "policy_parse.y"
    { if (define_policy(pass, 1) == -1) return -1; }
    break;

  case 365:
#line 919 "policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 366:
#line 921 "policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 382:
#line 945 "policy_parse.y"
    { if (require_class(pass)) return -1; }
    break;

  case 383:
#line 947 "policy_parse.y"
    { (yyval.require_func) = require_role; }
    break;

  case 384:
#line 948 "policy_parse.y"
    { (yyval.require_func) = require_type; }
    break;

  case 385:
#line 949 "policy_parse.y"
    { (yyval.require_func) = require_attribute; }
    break;

  case 386:
#line 950 "policy_parse.y"
    { (yyval.require_func) = require_attribute_role; }
    break;

  case 387:
#line 951 "policy_parse.y"
    { (yyval.require_func) = require_user; }
    break;

  case 388:
#line 952 "policy_parse.y"
    { (yyval.require_func) = require_bool; }
    break;

  case 389:
#line 953 "policy_parse.y"
    { (yyval.require_func) = require_tunable; }
    break;

  case 390:
#line 954 "policy_parse.y"
    { (yyval.require_func) = require_sens; }
    break;

  case 391:
#line 955 "policy_parse.y"
    { (yyval.require_func) = require_cat; }
    break;

  case 392:
#line 958 "policy_parse.y"
    { if ((yyvsp[(0) - (1)].require_func) (pass)) return -1; }
    break;

  case 393:
#line 960 "policy_parse.y"
    { if ((yyvsp[(0) - (3)].require_func) (pass)) return -1; }
    break;

  case 394:
#line 963 "policy_parse.y"
    { if (end_avrule_block(pass) == -1) return -1; }
    break;

  case 395:
#line 965 "policy_parse.y"
    { if (end_optional(pass) == -1) return -1; }
    break;

  case 396:
#line 968 "policy_parse.y"
    { if (end_avrule_block(pass) == -1) return -1; }
    break;

  case 398:
#line 972 "policy_parse.y"
    { if (begin_optional(pass) == -1) return -1; }
    break;

  case 399:
#line 975 "policy_parse.y"
    { if (begin_optional_else(pass) == -1) return -1; }
    break;


/* Line 1267 of yacc.c.  */
#line 3663 "y.tab.c"
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




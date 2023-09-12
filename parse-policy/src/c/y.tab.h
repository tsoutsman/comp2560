/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 277 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


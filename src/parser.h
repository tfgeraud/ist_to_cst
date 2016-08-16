#define INIT 257
#define RULES 258
#define TARGET 259
#define INVARIANTS 260
#define VARS 261
#define ID 262
#define NB 263
#define EQUAL 264
#define TRUE 265
#define ARROW 266
#define GTE 267
#define COMMA 268
#define IN 269
#define TERMINATOR 270
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
  int integer;
  char* string;
  T_PTR_tbsymbol_entry tbsymbol_entry;
  T_PTR_tree tree;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

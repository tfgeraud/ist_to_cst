/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 22 "parser.y"
#include <stdio.h>
#include "laparser.h"
#include "error.h"

extern int yylex();
extern char* yytext;
T_PTR_tree tmp_tree;
int yyerror(char *);


#line 34 "parser.y"
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
#line 46 "parser.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

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
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,   20,   21,   21,   15,   14,   12,   12,   13,   13,
   11,   11,   11,   10,    9,    9,    8,    7,    7,    6,
    6,    4,    4,    5,    5,    3,    2,    2,    2,    2,
    1,    1,   16,   16,   18,   18,   19,   19,   17,
};
static const YYINT yylen[] = {                            2,
    5,    2,    2,    0,    2,    2,    2,    1,    3,    1,
    3,    3,    7,    2,    2,    0,    4,    3,    1,    1,
    1,    2,    0,    3,    0,    4,    3,    3,    1,    1,
    3,    1,    2,    0,    2,    1,    3,    1,    3,
};
static const YYINT yydefred[] = {                         0,
    4,    0,    0,    0,    0,    0,    3,    0,   21,    0,
    0,    0,   14,   20,    0,    0,    0,    0,    0,    0,
    0,   15,    0,    5,    0,    0,   11,   12,    0,   18,
    0,    0,    0,    0,    6,    0,    0,    1,    0,    0,
    0,   22,   17,    9,    7,    0,    0,   33,    0,    0,
    0,    0,    0,    0,   35,    0,   32,   29,    0,   26,
   24,   39,   37,   13,    0,    0,   27,   31,   28,    0,
};
static const YYINT yydgoto[] = {                          2,
   68,   60,   32,   33,   42,   10,   11,   12,   13,    6,
   23,   35,   36,   26,   16,   38,   47,   48,   49,    3,
    4,
};
static const YYINT yysindex[] = {                      -239,
    0,    0, -252, -238, -254, -234,    0, -260,    0, -243,
 -240, -254,    0,    0, -235, -231, -233, -232,  -62, -254,
 -230,    0, -229,    0, -235, -227,    0,    0, -228,    0,
   -5, -226, -225, -235,    0, -235, -224,    0, -222, -223,
 -230,    0,    0,    0,    0, -221, -220,    0, -224, -219,
 -246, -226, -216, -224,    0,  -57,    0,    0,  -31,    0,
    0,    0,    0,    0, -242, -214,    0,    0,    0, -212,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0, -218, -206,    0,    0,    0,    0, -213,
    0, -206,    0,    0,    0,    0,    0,    0,    0,    0,
 -215,    0,    1,    0,    0,   37,    0,    0,    0,    0,
    0, -211,    0,    0,    0,    5,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    2,    0,   52,    0,
    0, -211,    0,    0,    0,    0,    0,    0, -255,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    3,    0,   15,    0,    6,    0,   40,    0,   45,    0,
   -2,   25,  -15,    0,    0,    0,    0,   13,    9,    0,
    0,
};
#define YYTABLESIZE 265
static const YYINT yytable[] = {                         24,
   10,   38,   14,   17,    8,    5,   18,    8,   19,   14,
    9,   65,   30,   66,   30,   57,   58,   14,   44,   57,
   67,    1,   15,    7,   20,   21,    8,   25,   29,   27,
   28,   31,   37,   40,   39,   64,   34,   46,   34,    2,
   51,   41,   53,   56,   43,   50,   62,   54,   69,   57,
   16,   36,   19,   59,   23,   52,   22,   61,   25,   30,
   45,   55,   63,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   10,
   10,    0,   10,   38,    8,
};
static const YYINT yycheck[] = {                         15,
    0,    0,    5,  264,    0,  258,  267,  262,  269,   12,
  265,   43,  268,   45,  270,  262,  263,   20,   34,  262,
  263,  261,  257,  262,  268,  266,  262,  259,   91,  263,
  263,  262,  260,   39,  263,   93,    0,  262,  268,  258,
  264,  268,  264,  263,  270,  268,  263,  268,  263,  262,
  257,    0,  266,   51,  270,   41,   12,   52,  270,   20,
   36,   49,   54,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  259,
  260,   -1,  262,  262,  260,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 270
#define YYUNDFTOKEN 294
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,"'\\''",0,0,0,"'+'",0,"'-'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INIT",
"RULES","TARGET","INVARIANTS","VARS","ID","NB","EQUAL","TRUE","ARROW","GTE",
"COMMA","IN","TERMINATOR",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : prog",
"prog : varsection rulessection initsection targetssection invsection",
"varsection : VARS varlist",
"varlist : varlist ID",
"varlist :",
"initsection : INIT constrlistand",
"targetssection : TARGET constrlistor",
"constrlistor : constrlistand constrlistor",
"constrlistor : constrlistand",
"constrlistand : constr COMMA constrlistand",
"constrlistand : constr",
"constr : ID EQUAL NB",
"constr : ID GTE NB",
"constr : ID IN '[' NB COMMA NB ']'",
"rulessection : RULES guardedcmdlist",
"guardedcmdlist : guardedcmd guardedcmdlist",
"guardedcmdlist :",
"guardedcmd : guardlist ARROW statementlist TERMINATOR",
"guardlist : guard COMMA guardlist",
"guardlist : guard",
"guard : constr",
"guard : TRUE",
"statementlist : statement statementfollow",
"statementlist :",
"statementfollow : COMMA statement statementfollow",
"statementfollow :",
"statement : ID '\\'' EQUAL exprarith",
"exprarith : exprarithleft '+' NB",
"exprarith : exprarithleft '-' NB",
"exprarith : NB",
"exprarith : exprarithleft",
"exprarithleft : exprarithleft '+' exprarithleft",
"exprarithleft : ID",
"invsection : INVARIANTS equallistor",
"invsection :",
"equallistor : equallistand equallistor",
"equallistor : equallistand",
"equallistand : equal COMMA equallistand",
"equallistand : equal",
"equal : ID EQUAL NB",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 395 "parser.y"
#include "error.h"
#include "laparser.h"

// T_PTR_tree yyparse(void);

int
yyerror(char* s){
  err_quit("%s : line %d on '%s'",s, linenumber, yytext);
  return -1;
}

extern FILE *yyin;


int
my_yyparse(T_PTR_tree* tree, char* filename)
{
  int retval;
  // Input redirection for lex
  yyin = fopen(filename,"r");
  if (yyin == NULL)
    err_sys("fopen error");

  nbr_var = 0;

  retval = yyparse();
  *tree = tmp_tree;

  if (fclose(yyin) != 0)
    err_sys("fclose error");

  return retval;
}
// The field 'read' let us control if the variable has already been constrained
// in a block where this can happend just once or not.

// If we are working on a transition we also want to store the minimum value possible
// for the variable.

// To reset the symbol table before continue analyzing a different block we have to
// reset the field to the same value with which we initialize it.

void reset(T_PTR_tbsymbol_entry entry){
  T_PTR_tbsymbol_info info;

  info = tbsymbol_getinfo(entry);
  if(info->tag == tbsymbol_INFO_ID)
    info->info.nb.read = -1;
}
#line 352 "parser.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 83 "parser.y"
	{
  tmp_tree = tree_new4("program", yystack.l_mark[-3].tree, yystack.l_mark[-2].tree, yystack.l_mark[-1].tree, yystack.l_mark[0].tree);
}
break;
case 3:
#line 91 "parser.y"
	{
		 /* One should write varlist : ID varlist but in that
		    way the output has the inversed order comparing
		    to the order in the *.spec file */
  T_PTR_tbsymbol_info info;
  T_PTR_tbsymbol_entry entry;

  if (tbsymbol_select(tbsymbol, yystack.l_mark[0].string))
    err_quit("\nhey fieu don't put twice a symbol line %d on %s", linenumber, yystack.l_mark[0].string);
  entry = tbsymbol_insert(tbsymbol, yystack.l_mark[0].string);
  info = tbsymbol_info_new();
  info->tag = tbsymbol_INFO_ID;
  info->info.id.addr = nbr_var++;
  info->info.nb.read = -1; /* Initialize with an invalid value*/
  tbsymbol_setinfo(entry, info, sizeof(T_tbsymbol_info));
}
break;
case 4:
#line 107 "parser.y"
	{ }
break;
case 5:
#line 110 "parser.y"
	{
  yyval.tree = tree_new1("init", yystack.l_mark[0].tree);
  /* We must reset the table to be able to detect*/
  /* if a symbol has been delimited twice or not*/
  tbsymbol_dump(tbsymbol, reset);
}
break;
case 6:
#line 118 "parser.y"
	{
  yyval.tree = tree_new1("target", yystack.l_mark[0].tree);
}
break;
case 7:
#line 125 "parser.y"
	{
  yyval.tree = tree_merge("or",tree_new1("or", yystack.l_mark[-1].tree),yystack.l_mark[0].tree);
}
break;
case 8:
#line 128 "parser.y"
	{
  yyval.tree = tree_new1("or", yystack.l_mark[0].tree);
}
break;
case 9:
#line 133 "parser.y"
	{
  yyval.tree = tree_merge("and",tree_new1("and",yystack.l_mark[-2].tree),yystack.l_mark[0].tree);
}
break;
case 10:
#line 136 "parser.y"
	{
  yyval.tree = tree_new1("and",yystack.l_mark[0].tree);

  /* We must reset the table to be able to detect*/
  /* if a symbol has been delimited twice or not*/
  tbsymbol_dump(tbsymbol, reset);
}
break;
case 11:
#line 145 "parser.y"
	{
  T_PTR_tbsymbol_entry entry;
  T_PTR_tbsymbol_info info;

  entry = tbsymbol_select(tbsymbol, yystack.l_mark[-2].string);
  if (entry == NULL)
    err_quit("\nhey fieu undeclared symbol %s line %d", yystack.l_mark[-2].string, linenumber);
  /* Storing the constan value into the symbol table*/

  yyval.tree = tree_new2("=", tree_new0(entry), tree_new0(yystack.l_mark[0].tbsymbol_entry));

  info = tbsymbol_getinfo(entry);
  if (info->info.nb.read != -1)
    err_quit("\nhey fieu symbol %s has been limited twice in the same state, last time in line %d", yystack.l_mark[-2].string, linenumber);
  info->info.nb.read = atoi(yystack.l_mark[0].tbsymbol_entry->name); /* Store the min value that the variable could have before applying this transition.*/

}
break;
case 12:
#line 162 "parser.y"
	{
  T_PTR_tbsymbol_entry entry;
  T_PTR_tbsymbol_info info;

  entry = tbsymbol_select(tbsymbol, yystack.l_mark[-2].string);
  if (entry == NULL)
    err_quit("\nhey fieu undeclared symbol %s line %d", yystack.l_mark[-2].string, linenumber);
  /* Storing the constan value into the symbol table*/

  yyval.tree = tree_new2(">=", tree_new0(entry), tree_new0(yystack.l_mark[0].tbsymbol_entry));

  info = tbsymbol_getinfo(entry);
  if (info->info.nb.read != -1)
    err_quit("\nhey fieu symbol %s has been limited twice in the same state, last time in line %d", yystack.l_mark[-2].string, linenumber);
  info->info.nb.read = atoi(yystack.l_mark[0].tbsymbol_entry->name); /* Store the min value that the variable could have before applying this transition.*/

}
break;
case 13:
#line 179 "parser.y"
	{

  T_PTR_tbsymbol_entry entry;
  T_PTR_tbsymbol_info info;

  entry = tbsymbol_select(tbsymbol, yystack.l_mark[-6].string);
  if (entry == NULL)
    err_quit("\nhey fieu undeclared symbol %s line %d", yystack.l_mark[-6].string, linenumber);
  /* Storing the constan value into the symbol table*/

  yyval.tree = tree_new3("in", tree_new0(entry), tree_new0(yystack.l_mark[-3].tbsymbol_entry),tree_new0(yystack.l_mark[-1].tbsymbol_entry));

  info = tbsymbol_getinfo(entry);
  if (info->info.nb.read != -1)
    err_quit("\nhey fieu symbol %s has been limited twice in the same state, last time in line %d", yystack.l_mark[-6].string, linenumber);
  info->info.nb.read = atoi(yystack.l_mark[-3].tbsymbol_entry->name); /* Store the min value that the variable could have before applying this transition.*/

}
break;
case 14:
#line 199 "parser.y"
	{
  yyval.tree = yystack.l_mark[0].tree;
}
break;
case 15:
#line 204 "parser.y"
	{
  yyval.tree = tree_merge("rules",
		  tree_new1("firstrule", yystack.l_mark[-1].tree), yystack.l_mark[0].tree);

}
break;
case 16:
#line 209 "parser.y"
	{ yyval.tree = NULL;}
break;
case 17:
#line 212 "parser.y"
	{
	/* For bounded transfer an arrow -X-> with X a natural
	 * number should be added in the grammar. Up till now
	 * we only consider unbounded transfers
	 */
  yyval.tree = tree_new2("guardedcmd", yystack.l_mark[-3].tree, yystack.l_mark[-1].tree);

  /* We must reset the table to be able to detect*/
  /* if a symbol has been delimited twice or not*/

  tbsymbol_dump(tbsymbol, reset);
}
break;
case 18:
#line 226 "parser.y"
	{
  yyval.tree = tree_merge("guard", tree_new1("guard", yystack.l_mark[-2].tree), yystack.l_mark[0].tree);
}
break;
case 19:
#line 229 "parser.y"
	{
  yyval.tree = tree_new1("guard", yystack.l_mark[0].tree);
}
break;
case 20:
#line 234 "parser.y"
	{
		   yyval.tree = yystack.l_mark[0].tree;
	   }
break;
case 21:
#line 237 "parser.y"
	{
  T_PTR_tbsymbol_info info;
  T_PTR_tbsymbol_entry entry;

  entry = tbsymbol_select(tbsymbol, "true");
  if (entry == NULL) {
    entry = tbsymbol_insert(tbsymbol, "true");
    info = tbsymbol_info_new();
    info->tag = tbsymbol_INFO_ID;
    info->info.id.addr = -1;        /* useless data field*/
    tbsymbol_setinfo(entry, info, sizeof(T_tbsymbol_info));
  }

  yyval.tree = tree_new0(entry);
}
break;
case 22:
#line 263 "parser.y"
	{

  yyval.tree = tree_merge("statement", tree_new1("statement",yystack.l_mark[-1].tree), yystack.l_mark[0].tree);
}
break;
case 23:
#line 267 "parser.y"
	{
  yyval.tree = NULL;
}
break;
case 24:
#line 272 "parser.y"
	{
    yyval.tree = tree_merge("statement",tree_new1("statement",yystack.l_mark[-1].tree),yystack.l_mark[0].tree);
}
break;
case 25:
#line 275 "parser.y"
	{
    yyval.tree = NULL;
}
break;
case 26:
#line 280 "parser.y"
	{
  T_PTR_tree tree;
  T_PTR_tbsymbol_entry entry;
  T_PTR_tbsymbol_info info;

  entry = tbsymbol_select(tbsymbol, yystack.l_mark[-3].string);
  if (entry == NULL)
    err_quit("\nhey fieu undeclared symbol %s line %d", yystack.l_mark[-3].string, linenumber);

  tree = tree_new2("=", tree_new0(entry), yystack.l_mark[0].tree);

  yyval.tree = tree;

  if (strcmp(yystack.l_mark[0].tree->info, "-") == 0) { /*If we have a substraction*/
    info = tbsymbol_getinfo(entry);
    /* Checking that the variable we are going to substract is lower or equal than the minimum value reached by the variable before the transition began so we can ensure that the variable never goes below 0.*/
    if(atoi(yystack.l_mark[0].tree->subtrees[1]->info) > info->info.nb.read && info->info.nb.read >= 0){
       err_quit("\nhey fieu invalid operation in line %d. %d must be lower than %d", linenumber, atoi(yystack.l_mark[0].tree->subtrees[1]->info), info->info.nb.read);
    }
  }
}
break;
case 27:
#line 303 "parser.y"
	{
  T_PTR_tree tree;

  tree = tree_new2("+", yystack.l_mark[-2].tree, tree_new0(yystack.l_mark[0].tbsymbol_entry));

  yyval.tree = tree;
}
break;
case 28:
#line 310 "parser.y"
	{
  T_PTR_tree tree;

  tree = tree_new2("-", yystack.l_mark[-2].tree, tree_new0(yystack.l_mark[0].tbsymbol_entry));

  yyval.tree = tree;
}
break;
case 29:
#line 317 "parser.y"
	{
  T_PTR_tree tree;

  tree = tree_new0(yystack.l_mark[0].tbsymbol_entry);

  yyval.tree = tree;
}
break;
case 30:
#line 324 "parser.y"
	{
	yyval.tree = yystack.l_mark[0].tree;
}
break;
case 31:
#line 329 "parser.y"
	{
  T_PTR_tree tree;

  tree = tree_new2("+", yystack.l_mark[-2].tree, yystack.l_mark[0].tree);

  yyval.tree = tree;
}
break;
case 32:
#line 336 "parser.y"
	{
  T_PTR_tree tree;
  T_PTR_tbsymbol_entry entry;

  entry = tbsymbol_select(tbsymbol, yystack.l_mark[0].string);
  if (entry == NULL)
    err_quit("\nhey fieu undeclared symbol %s line %d", yystack.l_mark[0].string, linenumber);

  tree = tree_new0(entry);

  yyval.tree = tree;
}
break;
case 33:
#line 350 "parser.y"
	{
  yyval.tree = tree_new1("invariants", yystack.l_mark[0].tree);
}
break;
case 34:
#line 353 "parser.y"
	{}
break;
case 35:
#line 356 "parser.y"
	{
  yyval.tree = tree_merge("or",tree_new1("or", yystack.l_mark[-1].tree),yystack.l_mark[0].tree);
}
break;
case 36:
#line 359 "parser.y"
	{
  yyval.tree = tree_new1("or", yystack.l_mark[0].tree);
}
break;
case 37:
#line 364 "parser.y"
	{
  yyval.tree = tree_merge("and",tree_new1("and",yystack.l_mark[-2].tree),yystack.l_mark[0].tree);
}
break;
case 38:
#line 367 "parser.y"
	{
  /* We must reset the table to be able to detect*/
  /* if a symbol has been delimited twice or not*/
  yyval.tree = tree_new1("and",yystack.l_mark[0].tree);
  tbsymbol_dump(tbsymbol, reset);
}
break;
case 39:
#line 375 "parser.y"
	{
  T_PTR_tbsymbol_entry entry;
  T_PTR_tbsymbol_info info;

  entry = tbsymbol_select(tbsymbol, yystack.l_mark[-2].string);
  if (entry == NULL)
    err_quit("\nhey fieu undeclared symbol %s line %d", yystack.l_mark[-2].string, linenumber);

  yyval.tree = tree_new2("=", tree_new0(entry), tree_new0(yystack.l_mark[0].tbsymbol_entry));

  info = tbsymbol_getinfo(entry);
  if (info->info.nb.read != -1)
    err_quit("\nhey fieu symbol %s has been defined has invariant twice in line %d", yystack.l_mark[-2].string, linenumber);

  info->info.nb.read = 0; /* For the invariants the minimum value doesn't care*/
                          /* We just have to distinguish two possible states*/
}
break;
#line 923 "parser.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}

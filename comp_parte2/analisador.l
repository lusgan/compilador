%option noyywrap

%{
#define YYSTYPE struct Tipagem
#include "analisador.tab.h"
#include "ast.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
%}

delim	[ \n\t]
ws	    {delim}+
digit	[0-9]
letra	[_a-zA-Z]

id	    {letra}({letra}|{digit})*
cfloat	{digit}+(\.{digit}*)|{digit}*(\.{digit}+)
cint    {digit}+
literal \"[^\"]*\"

%%
{ws}	    {}

"int"       {strcpy(yylval.StringValue, yytext); return TINT;}
"string"    {strcpy(yylval.StringValue, yytext); return TSTRING;}
"float"	    {strcpy(yylval.StringValue, yytext); return TFLOAT;}
"void"	    {strcpy(yylval.StringValue, yytext); return TVOID;}

"+"	        {return TADD;}
"-"	        {return TSUB;}
"*"	        {return TMUL;}
"/"	        {return TDIV;}

"("	        {return TEPAR;}
")"	        {return TDPAR;}
"{"	        {return TECHAVE;}
"}"	        {return TDCHAVE;}
","	        {return TVIRGULA;}
";"	        {return TPVIRGULA;}

"<="    	{return TMEI;}
"<"	        {return TME;}
">="	    {return TMAI;}
">"	        {return TMA;}
"!="	    {return TDIF;}
"=="	    {return TIGUAL;}

"&&"	    {return TAND;}
"||"	    {return TOR;}
"!"	        {return TNOT;}
"if"	    {return TIF;}
"else"	    {return TELSE;}
"while"	    {return TWHILE;}

"="	        {return TATRIB;}
"print"	    {return TPRINT;}
"read"	    {return TREAD;}
"return"	{return TRETURN;}

{id}	    {strcpy(yylval.StringValue, yytext); return TID;}
{literal}	{strcpy(yylval.StringValue, yytext); return TLIT;}
{cint}	    {yylval.IntValue = atoi(yytext); return CINT;}
{cfloat}	{yylval.DoubleValue = atof(yytext); return CFLOAT;}

.           { /* Handle other characters */ }

%%

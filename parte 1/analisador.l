%option noyywrap

%{
#define YYSTYPE double
#include "analisador.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int num_linha = 1; // Initialize num_linha

%}

delim   [ \t]
ws      {delim}+
digit   [0-9]
letra   [_a-zA-Z]

id	    {letra}({letra}|{digit})*
cfloat	{digit}+(\.{digit}*)|{digit}*(\.{digit}+)
cint    {digit}+
literal \"[^\"]*\"

%%
{ws}        {}

"int"       {return TINT;}
"string"    {return TSTRING;}
"float"     {return TFLOAT;}
"void"      {return TVOID;}


"+"         {return TADD;}
"-"         {return TSUB;}
"*"         {return TMUL;}
"/"         {return TDIV;}

"("         {return TEPAR;}
")"         {return TDPAR;}
"{"         {return TECHAVE;}
"}"         {return TDCHAVE;}
","         {return TVIRGULA;}
";"         {return TPVIRGULA;}

"<="        {return TMEI;}
"<"         {return TME;}
">="        {return TMAI;}
">"         {return TMA;}
"!="        {return TDIF;}
"=="        {return TIGUAL;}

"&&"        {return TAND;}
"||"        {return TOR;}
"!"         {return TNOT;}
"if"        {return TIF;}
"else"      {return TELSE;}
"while"     {return TWHILE;}

"="         {return TATRIB;}
"print"     {return TPRINT;}
"read"      {return TREAD;}
"return"    {return TRETURN;}

{id}        {yylval = atof(yytext); return TID;}
{literal}   {yylval = atof(yytext); return TLIT;}
{cint}      {yylval = atoi(yytext); return CINT;}
{cfloat}    {yylval = atof(yytext); return CFLOAT;}

\n          {num_linha++;}
.           { /* Handle other characters */ }

%%

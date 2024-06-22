%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int num_linha;

int yyerror(const char *);
int yylex(void);

%}
%define parse.error verbose

%token TINT TSTRING TFLOAT TVOID TID TLIT CINT CFLOAT
%token TADD TMUL TSUB TDIV
%token TEPAR TDPAR TECHAVE TDCHAVE TVIRGULA TPVIRGULA
%token TMEI TME TMAI TMA TDIF TIGUAL
%token TAND TOR TNOT TIF TELSE TWHILE
%token TATRIB TPRINT TREAD TRETURN
%token TFIM

%%
Programa: ListaFuncoes BlocoPrincipal
         | BlocoPrincipal
         ;

ListaFuncoes: ListaFuncoes Funcao
            | Funcao
            ;

Funcao: TipoRetorno TID TEPAR DeclParametros TDPAR BlocoPrincipal
      | TipoRetorno TID TEPAR TDPAR BlocoPrincipal
      ;

TipoRetorno: Tipo
           | TVOID
           ;

DeclParametros: DeclParametros TVIRGULA Parametro
              | Parametro
              ;

Parametro: Tipo TID
          ;

BlocoPrincipal: TECHAVE Declaracoes ListaCmd TDCHAVE
              | TECHAVE ListaCmd TDCHAVE
              ;

Declaracoes: Declaracoes Declaracao
           | Declaracao
           ;

Declaracao: Tipo ListaId TPVIRGULA
          ;

Tipo: TINT
    | TSTRING
    | TFLOAT
    ;

ListaId: ListaId TVIRGULA TID
       | TID
       ;

Bloco: TECHAVE ListaCmd TDCHAVE
      ;

ListaCmd: ListaCmd Comando
        | Comando
        ;

Comando: CmdSe
       | CmdEnquanto
       | CmdAtrib
       | CmdEscrita
       | CmdLeitura
       | ChamadaProc
       | Retorno
       ;

Retorno: TRETURN Expr TPVIRGULA
       | TRETURN TLIT TPVIRGULA
       | TRETURN TPVIRGULA
       ;

CmdSe: TIF TEPAR Log TDPAR Bloco
     | TIF TEPAR Log TDPAR Bloco TELSE Bloco
     ;

CmdEnquanto: TWHILE TEPAR Log TDPAR Bloco
           ;

CmdAtrib: TID TATRIB Expr TPVIRGULA
        | TID TATRIB TLIT TPVIRGULA
        ;

CmdEscrita: TPRINT TEPAR Expr TDPAR TPVIRGULA
          | TPRINT TEPAR TLIT TDPAR TPVIRGULA
          ;

CmdLeitura: TREAD TEPAR TID TDPAR TPVIRGULA
          ;

ChamadaProc: ChamaFuncao TPVIRGULA
           ;

ChamaFuncao: TID TEPAR ListaParametros TDPAR
           | TID TEPAR TDPAR
           ;

ListaParametros: ListaParametros TVIRGULA Expr
               | ListaParametros TVIRGULA TLIT
               | Expr
               | TLIT
               ;

Log: Log TAND OperaLog //{ $$ = nova_arvore(TAND, $1, $3); }
   | Log TOR OperaLog  //{ $$ = nova_arvore(TOR, $1, $3); }
   | OperaLog
   ;

OperaLog: Rel
         | TNOT OperaLog  //{ $$ = nova_arvore(TNOT, NULL, $2); }
         | TEPAR Log TDPAR //{ $$ = $2; }
         ;

Rel: Expr TMEI Expr //{ $$ = nova_arvore(TMEI, $1, $3); }
    | Expr TME Expr //{ $$ = nova_arvore(TME, $1, $3); }
    | Expr TMAI Expr //{ $$ = nova_arvore(TMAI, $1, $3); }
    | Expr TMA Expr  //{ $$ = nova_arvore(TMA, $1, $3); }
    | Expr TDIF Expr  //{ $$ = nova_arvore(TDIF, $1, $3); }
    | Expr TIGUAL Expr  //{ $$ = nova_arvore(TIGUAL, $1, $3); }
    ;

Expr: Expr TADD Termo  //{ $$ = nova_arvore(TADD, $1, $3); }
    | Expr TSUB Termo  //{ $$ = nova_arvore(TSUB, $1, $3); }
    | Termo
    ;

Termo: Termo TMUL Fator //{ $$ = nova_arvore(TMUL, $1, $3); }
     | Termo TDIV Fator //{ $$ = nova_arvore(TDIV, $1, $3); }
     | Fator
     ;

Fator: TEPAR Expr TDPAR //{ $$ = $2; }
     | CINT  //{ $$ = new_num($1); }
     | CFLOAT //{ $$ = new_num($1); }
     | TID   //{ $$ = new_id(yytext); }
     | ChamaFuncao
     ;

%%
int yyerror (const char *str) {
    fprintf(stderr, "%s na linha %d\n", str, num_linha);
    return 0;
}


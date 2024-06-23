%{
#define YYSTYPE struct Tipagem
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

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

%%
Linha: Programa {printar_codigo($1.programa);}
	 ;

Programa: ListaFuncoes BlocoPrincipal {$$.programa = iniciar_programa($1.funcao, $2.bloco);}
		| BlocoPrincipal {$$.programa = iniciar_programa(NULL, $1.bloco);}
		;

ListaFuncoes: ListaFuncoes Funcao {struct Funcao *temp = $1.funcao;
								   while (temp->proximo != NULL) {
								       temp = temp->proximo;
								   }
								   ;temp->proximo = $2.funcao;
								   $2.funcao->anterior = temp;
								   $$.funcao = $1.funcao;}
            | Funcao {$$.funcao = $1.funcao;}
			;

Funcao: TipoRetorno TID TEPAR DeclParametros TDPAR BlocoPrincipal {$$.funcao = comp_funcao(comp_no(ID, $2.StringValue, -1, -1), $1.No, $4.parametro, $6.bloco);}
      | TipoRetorno TID TEPAR TDPAR BlocoPrincipal {$$.funcao = comp_funcao(comp_no(ID, $2.StringValue, -1, -1),$1.No, NULL, $5.bloco);}
      ;

TipoRetorno: Tipo {$$.No = $1.No;}
		   | TVOID {$$.No = comp_no(TIPO, $1.StringValue, -1, -1);}
		   ;

DeclParametros: DeclParametros TVIRGULA Parametro {$$.parametro->proximo = $3.parametro;
												   $3.parametro->anterior = $$.parametro;}
			  | Parametro {$$.parametro = $1.parametro;}
		      ;

Parametro: Tipo TID {$$.parametro = comp_parametro(comp_no(ID, $2.StringValue, -1, -1), $1.No, NULL);}
		 ;

BlocoPrincipal: TECHAVE Declaracoes ListaCmd TDCHAVE {$$.bloco = comp_bloco($2.tabela_de_simbolos, $3.No);}
		      | TECHAVE ListaCmd TDCHAVE {$$.bloco = comp_bloco(NULL, $2.No);}
			  ;

Declaracoes: Declaracoes Declaracao {$1.tabela_de_simbolos->proximo = $2.tabela_de_simbolos;
									 $2.tabela_de_simbolos->anterior = $1.tabela_de_simbolos;}
		   | Declaracao {$$.tabela_de_simbolos = $1.tabela_de_simbolos;}
		   ;

Declaracao: Tipo ListaID TPVIRGULA {$$.tabela_de_simbolos = comp_tabela($2.No, $1.No, NULL);}
		  ;

Tipo: TINT {$$.No = comp_no(TIPO, $1.StringValue, -1, -1);}
	| TSTRING {$$.No = comp_no(TIPO, $1.StringValue, -1, -1);} 
	| TFLOAT {$$.No = comp_no(TIPO, $1.StringValue, -1, -1);}
	;

ListaID: ListaID TVIRGULA TID {struct No* newNode = comp_no(ID, $3.StringValue, -1, -1);
							   struct No* current = $1.No;
							   while (current->proximo != NULL) {
								   current = current->proximo;
							   }
							   current->proximo = newNode;
							   newNode->anterior = current;
							   $$.No = $1.No;}
       | TID {$$.No = comp_no(ID, $1.StringValue, -1, -1);}
       ;

Bloco: TECHAVE ListaCmd TDCHAVE {$$.bloco = comp_bloco(NULL, $2.No);}
	 ;

ListaCmd: ListaCmd Comando {struct No *current = $1.No;
							while (current->proximo != NULL) {
								current = current->proximo;
							}
							current->proximo = $2.No;
							$2.No->anterior = current;
							$$.No = $1.No;}
        | Comando {$$.No = $1.No;}
        ;

Comando: CmdSe {$$.No = $1.No;}
	   | CmdEnquanto {$$.No = $1.No;}
	   | CmdAtrib {$$.No = $1.No;}
	   | CmdEscrita {$$.No = $1.No;}
	   | CmdLeitura {$$.No = $1.No;}
	   | ChamadaProc {$$.No = $1.No;}
	   | Retorno {$$.No = $1.No;}
       ;

Retorno: TRETURN Expr TPVIRGULA {$$.No = comp_operacao_binaria(RETURN, $2.No, NULL);}
	   | TRETURN TLIT TPVIRGULA {$$.No = comp_operacao_binaria(RETURN, comp_no(LITERAL, $2.StringValue, -1, -1), NULL);}
	   | TRETURN TPVIRGULA {$$.No = comp_operacao_binaria(RETURN, NULL, NULL);}
	   ;

CmdSe: TIF TEPAR Log TDPAR Bloco {$$.No = comp_if_else(IF, $3.No, $5.bloco,NULL);}
	 | TIF TEPAR Log TDPAR Bloco TELSE Bloco {$$.No = comp_if_else(IF, $3.No, $5.bloco, $7.bloco);}
	 ;

CmdEnquanto: TWHILE TEPAR Log TDPAR Bloco {$$.No = comp_while(WHILE, $3.No, $5.bloco);}
		   ;

CmdAtrib: TID TATRIB Expr TPVIRGULA {$$.No = comp_operacao_binaria(ATRIB, comp_no(ID, $1.StringValue, -1, -1), $3.No);}
		| TID TATRIB TLIT TPVIRGULA {$$.No = comp_operacao_binaria(ATRIB, comp_no(ID, $1.StringValue, -1, -1), comp_no(LITERAL, $3.StringValue, -1, -1));}
		;

CmdEscrita: TPRINT TEPAR Expr TDPAR TPVIRGULA {$$.No = comp_escrita(WRITE, NULL, $3.No);}
		  | TPRINT TEPAR TLIT TDPAR TPVIRGULA {$$.No = comp_escrita(WRITE, comp_no(LITERAL, $3.StringValue, -1, -1), NULL);}
		  ;

CmdLeitura: TREAD TEPAR TID TDPAR TPVIRGULA {$$.No = comp_chamada_funcao(READ, comp_no(ID, $3.StringValue, -1, -1), NULL);}
		  ;

ChamadaProc: ChamaFuncao TPVIRGULA {$$.No = $1.No;}
		   ;

ChamaFuncao: TID TEPAR ListaParametros TDPAR {$$.No = comp_chamada_funcao(FUNC, comp_no(ID, $1.StringValue, -1,-1), $3.parametro);}
		   | TID TEPAR TDPAR {$$.No = comp_chamada_funcao(FUNC, comp_no(ID, $1.StringValue, -1, -1), NULL);}
		   ;

ListaParametros: ListaParametros TVIRGULA Expr {struct Parametro *aux = comp_parametro(NULL, NULL, $3.No); 
															   $$.parametro->proximo = aux; aux->anterior = $$.parametro;}
	| ListaParametros TVIRGULA TLIT {struct Parametro *aux = comp_parametro(comp_no(LITERAL, $3.StringValue, -1, -1), comp_no(TIPO, "string", -1, -1), NULL); 
									 $$.parametro->proximo = aux;
									 aux->anterior = $$.parametro;}
	| Expr {$$.parametro = comp_parametro(NULL, NULL, $1.No);}
	| TLIT {$$.parametro = comp_parametro(comp_no(LITERAL, $1.StringValue, -1, -1), comp_no(TIPO, "string", -1, -1), NULL);}
	;

Log: Rel TAND OperaLog {$$.No = comp_operacao_binaria(AND, $1.No, $3.No);}
   | Rel TOR OperaLog {$$.No = comp_operacao_binaria(OR, $1.No, $3.No);}
   | OperaLog {$$.No = $1.No;}
   ;

OperaLog: Rel {$$.No = $1.No;}
		| TNOT Log {$$.No = comp_operacao_binaria(NOT, $2.No, NULL);}
		| TEPAR Log TDPAR {$$.No = $1.No; $$.No->parenteses = 1;}
		;

Rel: Expr TMEI Expr {$$.No = comp_operacao_binaria(MEI, $1.No, $3.No);}
   | Expr TME Expr {$$.No = comp_operacao_binaria(ME, $1.No, $3.No);}
   | Expr TMAI Expr {$$.No = comp_operacao_binaria(MAI, $1.No, $3.No);}
   | Expr TMA Expr {$$.No = comp_operacao_binaria(MA, $1.No, $3.No);}
   | Expr TDIF Expr {$$.No = comp_operacao_binaria(DIF, $1.No, $3.No);}
   | Expr TIGUAL Expr {$$.No = comp_operacao_binaria(IGUAL, $1.No, $3.No);}
   ;

Expr: Expr TADD Termo {$$.No = comp_operacao_binaria(ADD, $1.No, $3.No);}
	| Expr TSUB Termo {$$.No = comp_operacao_binaria(SUB, $1.No, $3.No);}
	| Termo {$$.No = $1.No;}
	;

Termo: Termo TMUL Fator {$$.No = comp_operacao_binaria(MUL, $1.No, $3.No);}
	 | Termo TDIV Fator {$$.No = comp_operacao_binaria(DIV, $1.No, $3.No);}
	 | Fator {$$.No = $1.No;}
	 ;

Fator: TEPAR Expr TDPAR {$$.No = $1.No; $$.No->parenteses = 1;}
	 | CFLOAT {$$.No = comp_no(FLOAT, "", -1, $1.DoubleValue);}
	 | CINT {$$.No = comp_no(INT, "", $1.IntValue, -1);}
	 | TID {$$.No = comp_no(ID, $1.StringValue, -1, -1);}
	 | ChamaFuncao {$$.No = $1.No;}
	 ;
%%

int yyerror (const char *str) {
	fprintf(stderr, "%s\n", str);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

struct Programa *iniciar_programa(struct Funcao *funcoes, struct Bloco *blocoPrincipal) {
    struct Programa *programa = malloc(sizeof(*programa));
    
    if(programa == NULL) {
        perror("erro de alocacao"); 
        abort();
    }

    programa->funcoes = funcoes;
    programa->blocoPrincipal = blocoPrincipal;

    return programa;
}

struct Funcao *comp_funcao(struct No *nome, struct No *tipoRetorno, struct Parametro *parametros, struct Bloco *blocoPrincipal) {
    struct Funcao *funcao = malloc(sizeof(*funcao));
    
    if(funcao == NULL) {
        perror("erro de alocacao"); 
        abort();
    }

    funcao->nome = nome;
    funcao->tipoRetorno = tipoRetorno;
    funcao->parametros = parametros;
    funcao->bloco = blocoPrincipal;

    return funcao;
}

struct Parametro *comp_parametro(struct No *id, struct No *tipo, struct No* exprAritm) {
    struct Parametro *p = malloc(sizeof(*p));
    
    if (p == NULL) {
        perror("erro de alocacao"); 
        abort();
    }

    p->nome = id;
    p->tipo = tipo;
    p->exprAritm = exprAritm;

    return p;
}

struct Tabela_de_simbolos *comp_tabela(struct No *listaIDs, struct No *tipo, struct No *local) {
    struct Tabela_de_simbolos *tab = malloc(sizeof(*tab));
        
        if(tab == NULL) {
            perror("erro de alocacao"); 
            abort();
        }
        
        tab->id = listaIDs;        
        tab->tipo = tipo;
        tab->local = local;
        
        struct Tabela_de_simbolos *aux2 = tab;
        struct No *aux = tab->id;
        while(aux2->id->proximo) {
            aux = aux2->id->proximo;
            struct Tabela_de_simbolos *ajudante = malloc(sizeof(*ajudante));

            ajudante->id = aux;
            ajudante->tipo = aux2->tipo;
            ajudante->local = aux2->local;
            ajudante->anterior = aux2;

            aux2->proximo = ajudante;
            aux2 = aux2->proximo;
        }

    return tab;
}

struct Bloco *comp_bloco(struct Tabela_de_simbolos *declaracoes, struct No *comandos) {
    struct Bloco *bloco = malloc(sizeof(*bloco));
    
    if (bloco == NULL) {
        perror("erro de alocacao"); 
        abort();
    }

    bloco->comandos = comandos;
    bloco->declaracoes = declaracoes;

    return bloco;
}

struct No *comp_while(enum identificador identificador, struct No *exprLog, struct Bloco *bloco) {
    struct No *noWhile = malloc(sizeof(*noWhile));
    
    if (noWhile == NULL) {
        perror("erro de alocacao"); 
        abort();
    }

    noWhile->identificador = identificador;
    noWhile->ramo1 = exprLog;
    noWhile->bloco1 = bloco;

    return noWhile;
}

struct No *comp_if_else(enum identificador identificador, struct No *exprLog, struct Bloco *b1, struct Bloco *b2) {
    struct No *noIfElse = malloc(sizeof(*noIfElse));
    
    if (noIfElse == NULL) {
        perror("erro de alocacao"); 
        abort();
    }
    noIfElse->identificador = identificador;
    noIfElse->ramo1 = exprLog;
    noIfElse->bloco1 = b1;
    noIfElse->bloco2 = b2;

    return noIfElse;
}

struct No *comp_operacao_binaria(enum identificador identificador, struct No *ramo1, struct No *ramo2) {
    struct No *nooperacao_binaria = malloc(sizeof(*nooperacao_binaria));
    
    if (nooperacao_binaria == NULL) {
        perror("erro de alocacao"); 
        abort();
    }

    nooperacao_binaria->identificador = identificador;
    nooperacao_binaria->ramo1 = ramo1;
    nooperacao_binaria->ramo2 = ramo2;

    return nooperacao_binaria;
}

struct No *comp_chamada_funcao(enum identificador identificador, struct No *nome, struct Parametro *listaParam) {
    struct No *noChamada = malloc(sizeof(*noChamada));
    
    if (noChamada == NULL) {
        perror("erro de alocacao"); 
        abort();
    }

    noChamada->identificador = identificador;
    noChamada->ramo1 = nome;
    noChamada->listaParam = listaParam;

    return noChamada;
}

struct No *comp_escrita(enum identificador identificador, struct No* exprAritm, struct No* literal) {
    struct No *noEscrita = malloc(sizeof(*noEscrita));
   
    if (noEscrita == NULL) {
        perror("erro de alocacao"); 
        abort();
    }

    noEscrita->identificador = identificador;
    noEscrita->ramo1 = exprAritm;
    noEscrita->ramo2 = literal;

    return noEscrita;
}

struct No *comp_no(enum identificador identificador, const char *nome, int IntValue, double DoubleValue) {
    struct No *noFolha = malloc(sizeof(*noFolha));
    
    if (noFolha == NULL) {
        perror("erro de alocacao"); 
        abort();
    }
    
    noFolha->identificador = identificador;
    strcpy(noFolha->StringValue, nome);
    noFolha->IntValue = IntValue;
    noFolha->DoubleValue = DoubleValue;

    return noFolha;
}


//---------------------------------------mostrar o programa na tela-----------------------------------------


void printDeclaracoes(struct Tabela_de_simbolos* decl) {
    struct Tabela_de_simbolos *ajudante = decl;
    do{        
        printf("%s ", ajudante->tipo->StringValue); // printa o tipo da lista de variáveis de mesmo tipo        
        struct Tabela_de_simbolos *ajudante2 = ajudante;
        if(ajudante2->id->proximo) {            
            while(!strcmp(ajudante2->proximo->tipo->StringValue, ajudante2->tipo->StringValue)) {
                // enquanto os tipos de uma variável e da próxima forem iguais, vai printando tudo em sequência
                // separado por vírgula
                printf("%s, ", ajudante2->id->StringValue);
                ajudante2 = ajudante2->proximo;
                if(!ajudante2->proximo){ 
                    break;
                }
            }            
        }

        printf("%s;\n", ajudante2->id->StringValue); // printa a última variável da lista de variáveis que compartilham tipo
        
        ajudante = ajudante2->proximo;
    }while(ajudante);

    printf("\n");

    return;
}
void printar_declara_parametros(struct Parametro *par) {
    struct Parametro *ajudante = par;
    printf("%s %s", ajudante->tipo->StringValue, ajudante->nome->StringValue);
    if (ajudante->proximo) {
    do {
        ajudante = ajudante->proximo;
        printf(", %s %s", ajudante->tipo->StringValue, ajudante->nome->StringValue);
    } while (ajudante->proximo);
}

    return;
}

void printar_funcoes(struct Funcao *funcoes) {
    struct Funcao *ajudante = funcoes;
    do{
        printf("%s %s(", ajudante->tipoRetorno->StringValue, ajudante->nome->StringValue);
        if(ajudante->parametros){
            printar_declara_parametros(ajudante->parametros);
        }
        printf(")\n");
        printar_bloco(ajudante->bloco);

        ajudante = ajudante->proximo;
    }while(ajudante);
    
    return;
}

void printExprLog(struct No* exprLog) {
    if(exprLog->parenteses){
        printf("(");
    }

    switch(exprLog->identificador) {
        case AND:
            print_expr_rel(exprLog->ramo1);
            printf("&& ");
            if(exprLog->ramo2->identificador == NOT || exprLog->ramo2->parenteses) {
                printExprLog(exprLog->ramo2);
            }
            else{
                print_expr_rel(exprLog->ramo2);}
            
            break;
        case OR:
            print_expr_rel(exprLog->ramo1);
            printf("|| ");
            if(exprLog->ramo2->identificador == NOT || exprLog->ramo2->parenteses){
                printExprLog(exprLog->ramo2);
            }
            else{
                print_expr_rel(exprLog->ramo2);}
            
            break;
        case NOT:
            printf("!"); 
            printExprLog(exprLog->ramo1);
            break;
        default:
            print_expr_rel(exprLog);
            break;
    }

    if(exprLog->parenteses) printf(")");
}

void print_expr_rel(struct No* exprRel) {
    printar_expr_aritm(exprRel->ramo1);
    switch(exprRel->identificador) {
        case MAI:
            printf(">= ");
            break;
        case MA:
            printf("> ");
            break;
        case MEI:
            printf("<= ");
            break;
        case ME:
            printf("< ");
            break;
        case IGUAL:
            printf("== ");
            break;
        case DIF:
            printf("!= ");
            break;
    }
    printar_expr_aritm(exprRel->ramo2);

    return;
}

void printar_chamada_funcao(struct No* exprAritm) {
    printf("%s(",exprAritm->ramo1->StringValue);
    if(exprAritm->listaParam){
        printar_lita_parametros(exprAritm->listaParam);
    }

    printf(") ");

    return;
}

void printar_expr_aritm(struct No* exprAritm) {
    if(exprAritm->parenteses){
        printf("(");
    }

    if(exprAritm->identificador < 4) {
        printar_expr_aritm(exprAritm->ramo1);
        switch(exprAritm->identificador) {
            case ADD:
                printf("+ ");
                break;
            case SUB:
                printf("- ");
                break;
            case MUL:
                printf("* ");
                break;
            case DIV:
                printf("/");
                break;
        }
        printar_expr_aritm(exprAritm->ramo2);
    }
    
    else {
        switch(exprAritm->identificador) {
            case FUNC:
                printar_chamada_funcao(exprAritm);
                break;
            case ID:
                printf("%s ", exprAritm->StringValue);
                break;
            case INT:
                printf("%d ", exprAritm->IntValue);
                break;
            case FLOAT:
                printf("%f ", exprAritm->DoubleValue);
                break;
        }
    }

    if(exprAritm->parenteses){
        printf(") ");
    }    

    return;
}

void printReturn(struct No* cmd) {
    if(!cmd->ramo1){
        printf("return;\n");
    }

    else if(cmd->ramo1->identificador == LITERAL){
        printf("return %s;\n", cmd->ramo1->StringValue);
    }

    else {
        printf("return ");
        printar_expr_aritm(cmd->ramo1);
        printf(";\n");
    }

    return;
}

void printar_if_else(struct No* cmd) {
    printf("if(");
    printExprLog(cmd->ramo1);
    printf(") ");
    printar_bloco(cmd->bloco1);
    if(cmd->bloco2) {
        printf("else ");
        printar_bloco(cmd->bloco2);
    }

    return;
}

void printWhile(struct No* cmd) {
    printf("while (");
    printExprLog(cmd->ramo1);
    printf(") ");
    printar_bloco(cmd->bloco1);

    return;
}

void printAtrib(struct No* cmd) {
    if(cmd->ramo2->identificador == LITERAL){
        printf("%s = %s;\n", cmd->ramo1->StringValue, cmd->ramo2->StringValue);
    }

    else if(cmd->ramo2->identificador == FUNC){
        printf("%s = ", cmd->ramo1->StringValue);
        printar_chamada_funcao(cmd->ramo2);
        printf(";\n");
    }
    else{
        printf("%s = ", cmd->ramo1->StringValue);
        printar_expr_aritm(cmd->ramo2);
        printf(";\n");
    }//O analisador semântico deve receber como entrada a AST,

    return;
}

void printWrite(struct No* cmd) {
    if(cmd->ramo1 && cmd->ramo1->identificador == LITERAL){
        printf("print(%s);\n", cmd->ramo1->StringValue);
    }

    else {
        printf("print(");
        printar_expr_aritm(cmd->ramo2);
        printf(");\n");
    }

    return;
}

void printRead(struct No* cmd) {
    printf("read(%s);\n", cmd->ramo1->StringValue);
    
    return;
}

void printar_lita_parametros(struct Parametro* par) {
    struct Parametro *ajudante = par;
    while (ajudante) {
        if (ajudante->exprAritm) {
            printar_expr_aritm(ajudante->exprAritm);
        } else {
            printf("%s", ajudante->nome->StringValue);
        }
        
        if (ajudante->proximo) {
            printf(", ");
        }
        
        ajudante = ajudante->proximo;
    }
}

void printCmdChamadaFunc(struct No* cmd) {
    printf("%s(",cmd->ramo1->StringValue);
    if(cmd->listaParam){
        printar_lita_parametros(cmd->listaParam);
    }

    printf(");\n");

    return;
}

void printListaCmds(struct No* comandos) {
    struct No* ajudante = comandos;
    do {
        switch(ajudante->identificador) {
            case IF: 
                printar_if_else(ajudante); 
                break;

            case WHILE:
                printWhile(ajudante);
                break;

            case ATRIB:
                printAtrib(ajudante);
                break;

            case WRITE:
                printWrite(ajudante);
                break;

            case READ:
                printRead(ajudante);
                break;

            case FUNC:
                printCmdChamadaFunc(ajudante);
                break;

            case RETURN:
                printReturn(ajudante);
                break;
        }
        ajudante = ajudante->proximo;
    }while(ajudante);

    return;
}

void printar_bloco(struct Bloco *bloco) {
    printf("{\n");
    if(bloco->declaracoes){
        printDeclaracoes(bloco->declaracoes);

    }
    printListaCmds(bloco->comandos);
    printf("}\n");

    return;
}

void printar_codigo(struct Programa *programa) {
    if(!programa){ 
        return;
    }

    if(programa->funcoes){ 
        printar_funcoes(programa->funcoes);
    }

    printar_bloco(programa->blocoPrincipal);
    return;
}


//---------------------------------dar free nos ponteiros -------------------------------------------------------------


void freeBloco(struct Bloco *bloco);

void freeExprAritmRel(struct No *No) {
    if (!No) return;


    if(No->ramo1){
        freeExprAritmRel(No->ramo1);
    }

    if(No->ramo2){
        freeExprAritmRel(No->ramo2);
    }

    
    free(No);
}

void freeExprLog(struct No *No) {    
    freeExprAritmRel(No->ramo1);
    if(!(No->identificador == NOT)){
        freeExprAritmRel(No->ramo2);
    }

    free(No);

    return;
}

void freeParametro(struct Parametro *parametro) {
    if (parametro) {
        free(parametro->nome);
        free(parametro->tipo);
        free(parametro->exprAritm);
        free(parametro);
    }
}

void freeListaParametros(struct Parametro *parametro) {
    while (parametro) {
        struct Parametro *prox = parametro->proximo;
        freeParametro(parametro);
        parametro = prox;
    }
}

void freeComando(struct No *cmd) {
    switch(cmd->identificador) {
        case IF:
            freeExprLog(cmd->ramo1);
            freeBloco(cmd->bloco1);
            if(cmd->bloco2){
                freeBloco(cmd->bloco2);
            }
            break;

        case WHILE:
            freeExprLog(cmd->ramo1);
            freeBloco(cmd->bloco1);
            break;
            
        case ATRIB:
            free(cmd->ramo1);

            if(cmd->ramo2->identificador == LITERAL){
                free(cmd->ramo2);
            }
            
            else{
                freeExprAritmRel(cmd->ramo2);
            }
            break;
            
        case WRITE:
            if(cmd->ramo1){
                freeExprAritmRel(cmd->ramo1);
            }
            
            else{
                free(cmd->ramo2);
            }
            
            break;

        case READ:
            free(cmd->ramo1);
            break;

        case FUNC:
            free(cmd->ramo1);
            if(cmd->listaParam){
                freeListaParametros(cmd->listaParam);
            }
            break;
            
        case RETURN:
            if(cmd->ramo1) {
                if(cmd->ramo1->identificador == LITERAL) free(cmd->ramo1);
                else freeExprAritmRel(cmd->ramo1);
            }            
            break;
    }

    free(cmd);

    return;
}

void freeCmds(struct No *comandos) {
    struct No *ajudante = comandos;
    
    while(ajudante->proximo) {
        freeComando(ajudante);
        
        ajudante = ajudante->proximo;
        free(ajudante->anterior);
    }
    
    freeComando(ajudante);
    
    return;
}

void freeDeclaracoes(struct Tabela_de_simbolos *decl) {
    struct Tabela_de_simbolos *ajudante = decl;
    
    while(ajudante->proximo) {
        free(ajudante->tipo);
        free(ajudante->id);
        
        ajudante = ajudante->proximo;
        free(ajudante->anterior);
    }

    free(ajudante->tipo);
    free(ajudante->id);
    free(ajudante);

    return;
}

void freeBloco(struct Bloco *bloco) {
    if (!bloco){
        return;
    }

    if(bloco->declaracoes){
        freeDeclaracoes(bloco->declaracoes);
    }

    freeCmds(bloco->comandos);
    free(bloco);
}

void freeDeclPar(struct Parametro *par) {
    struct Parametro *ajudante = par;
    
    while(ajudante->proximo) {
        free(ajudante->tipo);
        free(ajudante->nome);
        
        ajudante = ajudante->proximo;
        free(ajudante->anterior);
    }

    free(ajudante->tipo);
    free(ajudante->nome);
    free(ajudante);

    return;
}

void freeFuncoes(struct Funcao *funcoes) {
    struct Funcao *ajudante = funcoes;
    while(ajudante->proximo) {
        free(ajudante->tipoRetorno);
        free(ajudante->nome);
        
        if(ajudante->parametros){
            freeDeclPar(ajudante->parametros);
        }

        freeBloco(ajudante->bloco);  
        ajudante = ajudante->proximo;
        free(ajudante->anterior);
    };

    free(ajudante->tipoRetorno);
    free(ajudante->nome);

    if(ajudante->parametros){
        freeDeclPar(ajudante->parametros);
    }

    freeBloco(ajudante->bloco);
    free(ajudante);

    return;
}

void free_programa(struct Programa *programa) {
    if (!programa){
        return;
    }

    if(programa->funcoes){
        freeFuncoes(programa->funcoes);
    }

    freeBloco(programa->blocoPrincipal);
    free(programa);

    return;
}

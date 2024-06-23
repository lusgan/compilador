#ifndef AST_H
#define AST_H

enum identificador {
    ADD, SUB, MUL, DIV, 
    MA, MAI, ME, MEI, IGUAL, 
    DIF, AND, OR, NOT, ATRIB,
    WHILE, IF, FUNC, RETURN, READ, 
    WRITE, INT, FLOAT, LITERAL, ID, 
    TIPO, LOCAL,STRING
};

// yylval
struct Tipagem{
    struct Programa *programa;
    struct Bloco *bloco;
    struct Tabela_de_simbolos *tabela_de_simbolos;
    struct Funcao *funcao;
    struct Parametro *parametro;
    struct No *No;

    int IntValue;
    double DoubleValue;
    char StringValue[50];
};

struct Programa {
    struct Funcao *funcoes;
    struct Bloco *blocoPrincipal;
};

struct Funcao {
    struct No *nome;
    struct No *tipoRetorno;
    struct Parametro *parametros;    
    struct Bloco *bloco;
    struct Funcao *anterior;  // para caso tenha varias funcoes
    struct Funcao*proximo;
};

struct Parametro {
    struct No *nome;
    struct No *tipo;
    struct No *exprAritm;
    struct Parametro *anterior;  // para caso tenha varios parametros
    struct Parametro *proximo;
};

struct Tabela_de_simbolos {    
    struct No *id;
    struct No *tipo;
    struct No *local;
    struct Tabela_de_simbolos *anterior;
    struct Tabela_de_simbolos *proximo;
};

struct Bloco {
    struct Tabela_de_simbolos *declaracoes;
    struct No *comandos;
};

struct No {  // struct utilizada para criação dos nós da AST cada um pode simbolar diversos elementos diferentes da AST
    enum identificador identificador;
    char StringValue[20];
    double DoubleValue;
    int IntValue;
    int parenteses;

    struct No *ramo1; 
    struct No *ramo2;
    struct No *anterior;  // acessar vizinhos
    struct No *proximo;

    struct Parametro *listaParam;
    struct Bloco *bloco1;  // para if
    struct Bloco *bloco2;  // para else
};

struct Programa *iniciar_programa(struct Funcao*, struct Bloco*);
struct Funcao *comp_funcao(struct No*, struct No*, struct Parametro*, struct Bloco*);
struct Parametro *comp_parametro(struct No*, struct No*, struct No*);
struct Tabela_de_simbolos *comp_tabela(struct No*, struct No*, struct No*);
struct Bloco *comp_bloco(struct Tabela_de_simbolos*, struct No*);

struct No *comp_no(enum identificador, const char*, int, double);
struct No *comp_if_else(enum identificador, struct No*, struct Bloco*, struct Bloco*);
struct No *comp_while(enum identificador, struct No*, struct Bloco*);
struct No *comp_operacao_binaria(enum identificador, struct No*, struct No*);
struct No *comp_chamada_funcao(enum identificador, struct No*, struct Parametro*);
struct No *comp_escrita(enum identificador, struct No*, struct No*);

void printar_codigo(struct Programa*);
void free_programa(struct Programa*);
void printar_bloco(struct Bloco *bloco);
void printar_chamada_funcao(struct No* exprAritm);
void printar_expr_aritm(struct No* exprAritm);
void printar_if_else(struct No* cmd) ;
void printar_lita_parametros(struct Parametro* par) ;
void printar_declara_parametros(struct Parametro *par);
void printar_funcoes(struct Funcao *funcoes);
void print_expr_rel(struct No* exprRel);

#endif 

all: main

analisador.tab.c analisador.tab.h: analisador.y
	bison -d analisador.y

lex.yy.c: analisador.l
	flex analisador.l

main: lex.yy.c analisador.tab.c 
	gcc -o resultado ast.c lex.yy.c analisador.tab.c main.c -lm
	
clean: 
	rm -f lex.yy.c analisador.tab.c analisador.tab.h analisador

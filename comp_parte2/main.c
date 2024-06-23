#include <stdio.h>
#include "analisador.tab.h"

extern FILE *yyin;

int main() {
	yyin = fopen("fatorial", "rt");

	if (yyin == NULL) {
		printf("ERRO: Não consegui abrir o arquivo!\n");
		return 1;
	}

	yyparse();
	fclose(yyin);

	return 0;
}

#include "analisador.tab.h"
#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin;


int main() {
	yyin = fopen("./fatorial", "r");
	yyparse();
	
	return 0;
}



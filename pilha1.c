#include <stdio.h>
#include <stdlib.h>


/* slide PilhaFila - pag 4*/
/* Fun��o simples para verificar se a pilha est� vazia */

typedef struct testeno{
	char valor;
	struct testeno *proxno;
}NO;

void mostrar_lista(LNO *p){
	while(p!= NULL){
		printf("O dado �: %c\n", p->valor);
		p = p->proxno;
	}
}

int vazia(NO *ptr){
	if(ptr = NULL)
		return(1);
	else
		return(0);
}


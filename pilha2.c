#include <stdio.h>
#include <stdlib.h>


/* slide PilhaFila - pag 5*/
/* Função para empilhar/adicionar um elemento na pilha */

typedef struct testeno{
	char valor;
	struct testeno *proxno;
}NO;

void mostrar_lista(NO *p){
	while(p!= NULL){
		printf("O dado é: %c\n", p->valor);
		p = p->proxno;
	}
}

int vazia(NO *ptr){
	if(ptr = NULL)
		return(1);
	else
		return(0);
}

void empilhar(NO **ptr, char valor) {
	NO *ptmp;
	
	ptmp = malloc(sizeof(NO));
	ptmp->valor = valor;
	
	if(vazia(*ptr))
		ptmp->proxno = NULL;
	else
		ptmp->proxno = *ptr;
	*ptr = ptmp;
}

main(){
	
}

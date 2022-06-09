#include <stdio.h>
#include <stdlib.h>


/* slide PilhaFila - pag 6*/
/* Função para desempilhar/retirar um elemento da pilha */

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

void desempilhar(NO **ptr, char *valor){
	NO *ptmp;
	ptmp = *ptr;
	if(vazia(ptmp)){
		printf("Pilha vazia\n");
		valor = '\0';
	}
	else{
		*letra = ptmp->valor;
		*ptr = ptmp->proxno;
		free(ptmp);
	}
}

main(){
	
}

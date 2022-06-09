#include <stdio.h>
#include <stdlib.h>


/* slide ListaEncadeadapt1 - pag 10*/
/* Função simples para mostrar os dados da lista */

typedef struct testeno{
	char valor;
	struct testeno *proxno;
}LNO;

void mostrar_lista(LNO *p){
	while(p!= NULL){
		printf("O dado é: %c\n", p->valor);
		p = p->proxno;
	}
}

main(){
	
}

#include <stdio.h>
#include <stdlib.h>


/* slide ListaEncadeadapt1 - pag 14*/
/* Função para adicionar nó no início da lista */

typedef struct testeno{
	char dado;
	struct testeno *proxno;
}LNO;

void mostrar_lista(LNO *p){
	while(p!= NULL){
		printf("O dado é: %c\n", p->dado);
		p = p->proxno;
	}
}

void adiciona_ini(LNO **p, char letra){
	LNO *p1 = NULL;
	p1 = malloc(sizeof(LNO));
	if(p1!=NULL){
		p1 = malloc(sizeof(LNO));
		if(p1!=NULL){
			p1->dado = letra;
			p1->proxno = *p;
			*p = p1;
		}
	}
}

main(){
	
}

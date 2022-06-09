#include <stdio.h>
#include <stdlib.h>


/* slide ListaEncadeadapt2 - pag 5*/
/* Função para procurar um item na lista */

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

void adiciona_no(LNO **p, char letra){
	LNO *p1 = NULL, *p2 = NULL;
	p1 = *p;
	//Não existe nenhum NÓ na fila
	if(p1 == NULL){
		p1 = malloc(sizeof(LNO));
		if(p1!=NULL){
			p1->dado = letra;
			p1->proxno = NULL;
			*p = p1;
		}
	}
	else{
		while(p1->proxno!=NULL)
			p1 = p1->proxno;
		p2 = malloc(sizeof(LNO));
		if(p2!=NULL){
			p2->dado = letra;
			p2->proxno = NULL;
			p1->proxno = p2;
		}
	}
}

int procurar(LNO *p, int x){
	if(p == NULL)
		return(0);
	else{
		do{
			if(p->dado==x)
				return(1);
			p = p->link;
		}while(p!=NULL);
		return(0);
	}
}

main(){
	
}

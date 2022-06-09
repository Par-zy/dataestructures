#include <stdio.h>
#include <stdlib.h>


/* slide ListaEncadeadapt1 - pag 11 e 12*/
/* Função para adicionar nó no final da lista*/

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

main(){
	LNO *n = NULL;
	char letra; 
	
	do {
		printf("Informe uma letra\n");
		letra = getchar();
		if(letra!='x'){
			adiciona_no(&n, letra);
		}
	}while(letra!='x');
	
	mostrar_lista(n);
	
	return 0;
}

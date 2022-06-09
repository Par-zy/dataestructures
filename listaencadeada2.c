#include <stdio.h>
#include <stdlib.h>


/* slide ListaEncadeadapt1 - pag 9*/
/* Iniciando ListaEncadeadaSimples com Alocação Dinâmica */

typedef struct testeno{
	char valor;
	struct testeno *proxno;
}LNO;

main(){
	
	LNO *no1=NULL, *no2=NULL, *no3=NULL;
	
	no1 = (LNO*) malloc(sizeof(LNO));
	no2 = malloc(sizeof(LNO));
	no3 = malloc(sizeof(LNO));
	
	no1->valor = 's';
	no1->proxno = no2;
	
	no2->valor = 'a';
	no2->proxno = no3;
	
	no3->valor = 'm';
	no3->proxno = NULL;	  
	
	return 0;
	
}

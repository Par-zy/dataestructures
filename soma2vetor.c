#include <stdio.h>
#include <stdlib.h>

int main(){

int vetor[12];
int i;

for (i = 0; i < 12; i++){
	printf("Entre com o valor de n�mero %d do vetor:\n", i+1);
	scanf("%d", &vetor[i]);
}

for (i = 0; i < 12; i++){
	printf("Elemento de n�mero %d = %d\n", i+1, vetor[i]);
	
}


return 0;
}	


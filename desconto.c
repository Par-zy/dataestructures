#include <stdio.h>

int main(void){

int idade; 
float conta, desconto;

printf("Informe a idade do cliente: ");
scanf("%d", &idade);
printf("O cliente possui %d anos de idade\n", idade);

printf("Informe o total da conta: ");
scanf("%f", &conta);
printf("O total da conta foi de R$%f\n", conta);

if (conta > 300){
	desconto = conta * 0.25;	
	conta = conta - desconto; 
	printf("Apos desconto, o valor da conta sera de R$%f", conta);
}

else if(conta <= 300 && conta >= 100 && idade > 50){
	desconto = conta * 0.15;	
	conta = conta - desconto; 
	printf("Apos desconto, o valor da conta sera de R$%f", conta);
}

else{
	printf("O valor final da conta sera de R$%f", conta);
}
return 0;

}

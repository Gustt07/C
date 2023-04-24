// Gustavo Abreu 16/06

/* 9- Desenvolver um programa para calcular a Composi��o de Lucros . Um problema comum na �rea financeira
� a determina��o da quantia que ser� acumulada em uma conta banc�ria depois de n anos, conhecendo-se 

quantia inicial depositada, e os rendimentos anuais dessa conta, r por cento ao ano. A resposta a essa quest�o
pode ser determinada pela f�rmula F = p.(1 + i)n

onde i = r/100*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	float qinicial,rendimento,anos,lucros,i,f;
	
	printf("Digite a quantidade inicial depositada R$: ");
	scanf("%f",&qinicial);
	
	printf("Digite os rendimentos anuais da conta: ");
	scanf("%f",&rendimento);
	
	printf("Digite o numero de anos: ");
	scanf("%f",&anos);
	
	i=rendimento/100;
	f= qinicial*(1 + i ) *anos;
	
	
	printf("A taxa de lucros foi de: %.2f ",f);
}

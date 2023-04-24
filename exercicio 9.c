// Gustavo Abreu 16/06

/* 9- Desenvolver um programa para calcular a Composição de Lucros . Um problema comum na área financeira
é a determinação da quantia que será acumulada em uma conta bancária depois de n anos, conhecendo-se 

quantia inicial depositada, e os rendimentos anuais dessa conta, r por cento ao ano. A resposta a essa questão
pode ser determinada pela fórmula F = p.(1 + i)n

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

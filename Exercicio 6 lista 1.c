//Gustavo Abreu 11/06

/* 6 – Dona Joaninha é muito esquecida e sempre paga suas contas depois da data do vencimento. Ela gostaria
de ter um programa que lhe poupasse do trabalho de calcular o valor da multa e dos juros quando fosse pagar
uma conta. Resolva o problema de dona Joaninha: faça um programa que recebe o valor da conta, o número
de dias em atraso e o valor da multa e dos juros por dia de atraso. O programa deverá calcular o valor a ser
pago.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float conta,atraso,multa,juros,pagamento;
	
	printf("Digite o valor da conta R$: ");
	scanf("%f",&conta);
	
	printf("Digite o numero de dias de atraso: ");
	scanf("%f",&atraso);
	
	printf("Digite o valor da multa: ");
	scanf("%f",&multa);
	
	juros= (multa+atraso)*0.30;
	pagamento=juros+conta+multa;
	
	printf("\nValor da conta R$:%.1f ",conta);
	
	printf("\nDias em atraso: %.1f ",atraso);
	
	printf("\nTotal da multa R$: %.2f",multa);
	
	printf("\nTotal de juros R$:%.2f",juros);
	
	printf("\nTotal a pagar R$:%.2f ",pagamento);
	
	
	
}

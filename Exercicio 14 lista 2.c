// Gustavo Abreu 26/06 

/*14 - Escrever um algoritmo que leia a taxa de potência de um refrigerador, o tempo que permaneceu ligado e o valor do quilowatt
hora, e que, calcule e escreva a energia total gasta pelo refrigerador, bem como, o valor a ser pago à companhia de Energia Elétrica. */

#include <stdio.h>
#include <stdlib.h>

	int main (){
		
		int tempo;
		float consumo,qwhp,energiat,valor;
		
		printf("Digite o qual a taxa de consumo de energia ");
		scanf("%f",&consumo);
		
		printf("Digite o tempo que ele ficou ligado: ");
		scanf("%d",&tempo);
		
		printf("Digite o valor que esta o quilowatt hora: ");
		scanf("%f",&qwhp);
		
		energiat= consumo*tempo;
		
		valor= energiat*qwhp;
		
		printf("A energia utilizada foi %.2fw, e o valor a ser pago sera de %.1f",energiat,valor);
	}

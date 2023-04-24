// Gustavo Abreu 25/06 

/* 06 - Uma locadora de charretes cobra R$8,50 de taxa para cada 3 horas de uso destas e R$3,50 para cada hora abaixo destas 3 horas.
Fazer um algoritmo que, dado a quantidade de horas que a charrete foi usada, calcule e escreva quanto o cliente tem de pagar.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main (){
		
		int horas;
		float a,b,charrete,horasextra,pagamento;
		
		printf("Digite a quantidade de horas usadas da charrete: ");
		scanf("%d",&horas);
		
		charrete=(horas /3 ) *8.50;
		a=(horas % 3);
		
		horasextra=a*3.50;
		
		pagamento=charrete+horasextra;
		
		printf("O valor pago pelas horas de charrete sera: R$%.2f",pagamento);
		
	}

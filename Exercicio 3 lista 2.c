// Gustavo Abreu 17/06
/* 03 - O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e dos impostos
(aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 12% do pre�o de f�brica e os impostos de 30% do
pre�o de f�brica, fazer um algoritmo para ler o custo de f�brica de um carro e imprimir o custo ao consumidor. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main (){
		
		float carro,carrofabrica,imposto,pdistribuidor,consumidor;
		
			printf("Digite o valor de um carro novo: ");
			scanf("%f",&carro);
			
		
		pdistribuidor= carro * 0.12 * 0.30;
		
		carrofabrica=pdistribuidor;
		
		consumidor=carrofabrica+pdistribuidor;
		
			printf("O pre�o do carro de fabrica eh de %.3f e o de consumidor de: %.3f ",pdistribuidor,consumidor);
		
		
		
		}

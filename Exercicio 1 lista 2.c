// Gustavo Abreu 17/06 revis�o das listas

/* 01 - Um fabricante de latas deseja desenvolver um algoritmo para calcular o custo de uma lata cil�ndrica de alum�nio. O custo do
alum�nio � R$ 100,00 por m2

. Dados de Entrada: raio e altura da lata (em metros). �rea da lata = �rea da base(p * raio2

* 2) + �rea do

lado(2 * p * raio * altura). Considere o pre�o do alum�nio por m2

como sendo uma constante. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main (){
		
		float arealata,altura,raio,total,metro,pi;
		
		printf("Defina o raio: ");
		scanf("%f",&raio);
		
		printf("Defina a altura: ");
		scanf("%f",&altura);
		
	metro= 100;
	pi= 3,14;
	arealata= (pi * pow(raio, 2)*2 ) + (2 * pi * raio * altura);
	total= arealata *  metro;
	
	printf("O valor do custo do aluminio e de %.2f ",total);
		
	}

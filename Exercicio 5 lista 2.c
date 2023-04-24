// Gustavo Abreu 25/06 

/* 05 - Dada a base e a altura de uma pirâmide, fazer um algoritmo que calcule e escreva o seu volume.*/

#include <stdio.h>
#include <stdlib.h>

	int main (){
		
		float base,altura,volume,v;
		
		printf("Digite a base: ");
		scanf("%f",&base);
		
		printf("Digite a altura: ");
		scanf("%f",&altura);
		
		volume= (1 / 3.0) * (base * altura);
		
		printf ("O volume da piramide eh de %.2f ",volume);
		
	}

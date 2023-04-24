// Gustavo Abreu 27/06 

/* 18 - Fazer um algoritmo que leia um inteiro positivo, calcule e escreva as seguintes itens:

Numero:
Quadrado:
Raiz Quadrada:*/

#include <stdio.h>
#include <stdlib.h>

	int main (){
		
		int numero;
		float result;
		
		printf("Digite um numero inteiro:  ");
		scanf("%d",&numero);
		
		
		result=sqrt(numero);
		
		printf("Seu numero eh %f",result);
	}

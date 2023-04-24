// Gustavo Abreu 25/06 

/* 07 - Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.*/

#include <stdio.h>
#include <stdlib.h>

	int main (){
		
		int idade,anos,meses,dias;
		
		printf("Digite sua idade em anos : ");
		scanf("%d",&anos);
		
		printf("Digite sua idade em meses: ");
		scanf("%d",&meses);
		
		printf("Digite sua idade em dias: ");
		scanf("%d",&dias);
		
		idade=(dias +(anos*365)+(meses*30));
		
		printf("A idade em dias eh %d",idade);
		
		
	}

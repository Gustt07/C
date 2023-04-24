// Gustavo Abreu 11/06 

/* 5 - Faça um programa para ler dois valores inteiros, uma para a variável A e outro para a variável B, e para
efetuar a troca dos valores de forma que a variável A passe a possuir o valor da variável B e variável B passe
a possuir o valor da variável A. OBS: Não utilize uma variável auxiliar.*/


#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int A,B;
	
	printf("\NDigite o valor de A e B: ");
	scanf("%d,%d",&A,&B);
	
	
	A= A+B;
	B= A-B;
	A=A-B;
	
	printf("A: %d\t, B: %d",A,B);
	
}

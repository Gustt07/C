// Gustavo Abreu 11/06 

/* 5 - Fa�a um programa para ler dois valores inteiros, uma para a vari�vel A e outro para a vari�vel B, e para
efetuar a troca dos valores de forma que a vari�vel A passe a possuir o valor da vari�vel B e vari�vel B passe
a possuir o valor da vari�vel A. OBS: N�o utilize uma vari�vel auxiliar.*/


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

// Gustavo Abreu 25/06 

/* 08 - Fa�a um algoritmo que leia o tempo de dura��o de um evento em uma f�brica expressa em segundos e mostre-o expresso em
horas, minutos e segundos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main (){
		
	int t,h,h1,m1,m,s,a;
		
		printf("Digite a dura��o do evento em segundos: ");
		scanf("%d",&t);
		
		h1=3600;
		m1=60;
		 
		 h=t/h1;
		 a=t%h1;
		 m=a/m1;
		 s=a%m;
		
		
		
		printf("A dura��o do evento foi de %d horas %d minutos e %d segundos ",h,m,s);
		
		
		
		//h=t/3600;
		//m=(h % 3600 )/60;
		//s=((m % 3600)%60); erro
		
		// "N�o utilizar 3600 no teste
	}

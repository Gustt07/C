// Gustavo Abreu 26/06 

/* 15 - Criar um algoritmo que, dado o n�mero da conta corrente com tr�s d�gitos, retorne o d�gito verificador, o qual � calculado da
seguinte maneira:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main (){
		
		int numero,a,b,c,A,B,verificador,RESULT;
		
		printf("Digite um numero de 3 casas: ");
		scanf("%d",&numero);
		
	a=numero/100;
	A= numero-(a*100);
	b=A/10;
	c=numero-((a*100)+b*10);
	
		
		verificador= (c*100)+(b*10)+(a);
	RESULT=numero+verificador;
		
		printf("O digito retornado foi o %d ",RESULT);
	}

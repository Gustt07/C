// Gustavo Abreu 25/06 

/*Escrever um algoritmo que l�:

� a percentagem do IPI a ser acrescido no valor das pe�as;
� o c�digo da pe�a 1, valor unit�rio da pe�a 1, quantidade de pe�as 1;
� o c�digo da pe�a 2, valor unit�rio da pe�a 2, quantidade de pe�as 2;
O algoritmo deve calcular o valor total a ser pago e apresentar o resultado. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main (){
		
		char peca1,peca2;
		int ipi,cp1,vp1,qp1,cp2,vp2,qp2;
		float totalp1,totalp2,total,resultado;
		
		printf("Informe o codigo da pe�a 1: ");
		scanf("%d",&cp1);
		
		printf("Informe o valor  da pe�a 1: ");
		scanf("%d",&vp1);
		
		printf("Informe a quantidade de pe�a 1: ");
		scanf("%d",&qp1);
		
		printf("Informe o codigo da pe�a 2: ");
		scanf("%d",&cp2);
		
		printf("Informe o valor  da pe�a 2: ");
		scanf("%d",&vp2);
		
		printf("Informe a quantidade da pe�a 2: ");
		scanf("%d",&qp1);
		
		printf("Informe o desconto ipi: ");
		scanf("%d",&ipi);
		
		totalp1=qp1*vp1;
		totalp2=qp2*vp2;
		
		total=((totalp1+totalp2)*(ipi/100)+1);
		resultado=((vp1*qp1)+(vp2*qp2))*((ipi/100)+1);
		
		printf("O Valor total foi de %.2f e o resultado de %.2f",total,resultado);
		
		
		
	}

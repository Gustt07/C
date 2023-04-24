// Gustavo Abreu 25/06 

/*Escrever um algoritmo que lê:

• a percentagem do IPI a ser acrescido no valor das peças;
• o código da peça 1, valor unitário da peça 1, quantidade de peças 1;
• o código da peça 2, valor unitário da peça 2, quantidade de peças 2;
O algoritmo deve calcular o valor total a ser pago e apresentar o resultado. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main (){
		
		char peca1,peca2;
		int ipi,cp1,vp1,qp1,cp2,vp2,qp2;
		float totalp1,totalp2,total,resultado;
		
		printf("Informe o codigo da peça 1: ");
		scanf("%d",&cp1);
		
		printf("Informe o valor  da peça 1: ");
		scanf("%d",&vp1);
		
		printf("Informe a quantidade de peça 1: ");
		scanf("%d",&qp1);
		
		printf("Informe o codigo da peça 2: ");
		scanf("%d",&cp2);
		
		printf("Informe o valor  da peça 2: ");
		scanf("%d",&vp2);
		
		printf("Informe a quantidade da peça 2: ");
		scanf("%d",&qp1);
		
		printf("Informe o desconto ipi: ");
		scanf("%d",&ipi);
		
		totalp1=qp1*vp1;
		totalp2=qp2*vp2;
		
		total=((totalp1+totalp2)*(ipi/100)+1);
		resultado=((vp1*qp1)+(vp2*qp2))*((ipi/100)+1);
		
		printf("O Valor total foi de %.2f e o resultado de %.2f",total,resultado);
		
		
		
	}

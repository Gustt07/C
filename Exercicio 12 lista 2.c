// Gustavo Abreu 25/06 

/*	12 - Em uma padaria o padeiro quer saber qual o custo de fabrica��o do p�o franc�s para saber por quanto ter� que vender o p�o,
tendo um lucro de 30%. Sabendo-se que a receita do p�o leva farinha, �gua e fermento, escreva um algoritmo que: leia a quantidade de
quilos de farinha, o valor do quilo de farinha, a quantidade de litros de �gua, o valor do litro de �gua, a quantidade de quilowatts hora de
energia, o valor do quilowatt hora e o percentual do imposto que o padeiro paga pelo p�o, calcule o pre�o de custo e o valor de venda, e
escreva estes valores.	*/

#include <stdio.h>
#include <stdlib.h>

	int main (){
		
		float Pcusto,Pvenda,a,b,c,d,e,f;
		float lucro,paum,farinha,farinhaq,agua,agual,fermento,qwh,qwhp;
	
	printf("Qual a quantidade de quilos de farinha usados: ");
	scanf("%f",&farinha);
	
	printf("Digite o valor do quilo de farinha: ");
	scanf("%f",&farinhaq);
	
	printf("Digite a quantidade de litros d'agua usados : ");
	scanf("%f",&agua);
	
	printf("Digite o valor do litro d'agua: ");
	scanf("%f",&agual);
	
	printf("Qual a quantidade de Quilowatts hora usados: ");
	scanf("%f",&qwh);
	
	printf("Digite o valor do quilowatt hora: ");
	scanf("%f",&qwhp);
	
	printf("Qual o percentual de imposto que o padeiro paga pelo p�o: ");
	scanf("%f",&paum);
	
	a= farinha*farinhaq;
	b=agua*agual;
	c=qwh*qwhp; 
	
	d= (paum/100);
	
	Pcusto=a+b+c;
	Pvenda= (a+b+c)/d ;
	
	printf("O pre�o de custo sera de : %.1f ",Pcusto);
	
		printf("O pre�o de venda sera de : %.1f ",Pvenda);

		
	}

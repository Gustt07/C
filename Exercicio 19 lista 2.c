// Gustavo Abreu 27/06 

/* 19 - Numa certa loja de eletrodom�sticos, o comerci�rio encarregado da se��o de televisores recebe, mensalmente, um sal�rio fixo
mais comiss�o. Essa comiss�o � calculada em rela��o ao n�mero de televisores vendidos por m�s de cada um dos tipos de TV,
obedecendo-se � tabela abaixo:*/

#include <stdio.h>
#include <stdlib.h>

	int main (){
		
		float a,b,tvlcd,tvled,tvplasma,salariof,salariot;
		float com1,com2,com3;
		
		printf("Digite o salario fixo: ");
		scanf("%f",&salariof);
		
		printf("Digite a quantidade de tv's lcd vendidas ao mes :");
		scanf("%f",&tvlcd);
		
		printf("Digite a quantidade de tv's led vendidas ao mes :");
		scanf("%f",&tvled);
		
		printf("Digite a quantidade de tv's plasma vendidas ao mes :");
		scanf("%f",&tvplasma);
		
		com1=tvlcd*50;
		com2=tvled*60;
		com3=tvplasma*55;
		
		
		salariot=salariof+com1+com2+com3;
		
		printf("O salario total do empregado eh: %.2f",salariot);
	}

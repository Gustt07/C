// Gustavo Abreu 11/06
/*4 � O custo do seguro contra granizo numa comunidade t�pica de fazendeiros � 3,5% do valor de cobertura
solicitado (para cada acre), multiplicado pelo n�mero de acres plantados. Supondo que as possibilidades de
colheita sejam limitadas a milho, feij�o e caf�, fa�a um programa para ler a cobertura desejada e o n�mero de
acres plantados para cada uma das tr�s planta��es e calcular o custo total do seguro para o cliente.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float milho,feijao,cafe,cobertura,acre,a,total;
	
	printf("Digite a quantidade de acres de milho: ");
	scanf("%f",&milho);
	
	printf("Digite a quantidade de acres de feijao: ");
	scanf("%f",&feijao);
	
	printf("Digite a quantidade de acres de cafe: ");
	scanf("%f",&cafe);
	
	printf("Digite a cobertura: ");
	scanf("%f",&cobertura);
	
	acre= (milho+cafe+feijao);
	
	a=cobertura*3.5/100;
	
	total=a*acre ;
	
	printf("O custo total do seguro foi de R$:%.3f ",total);
	
	return 0;
	
	
}

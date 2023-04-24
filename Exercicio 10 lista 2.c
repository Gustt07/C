// Gustavo Abreu 25/06 

/*10 - Escrever um algoritmo que lê o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora, o
número de filhos com idade menor que 14 anos e o valor do salário família (pago por filho com menos de 14 anos), e que calcule o
salário total deste funcionário e escreva o seu número e o seu salário total. */

#include <stdio.h>
#include <stdlib.h>

	int main (){
		
		int funcionario,nfilhos;
		float ht,salarioh,salariof,salariototal;
		
		printf("Digite o numero do funcionario: ");
		scanf("%d",&funcionario);
		
		printf("Digite quantas horas foram trabalhadas: ");
		scanf("%f",&ht);
		
		printf("Digite o valor recebido por hora(s): ");
		scanf("%f",&salarioh);
		
		printf("Digite o numero de filhos: ");
		scanf("%d",&nfilhos);
		
		printf("Digite o salario da familia: ");
		scanf("%f",&salariof);
		
		salariototal=(ht*salarioh)+(nfilhos *salariof);
		
		printf("O funcionario %d, recebe um salario total de %.2f",funcionario,salariototal);
		
		
	}

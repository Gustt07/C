// Gustavo Abreu 25/06 

/*10 - Escrever um algoritmo que l� o n�mero de um funcion�rio, seu n�mero de horas trabalhadas, o valor que recebe por hora, o
n�mero de filhos com idade menor que 14 anos e o valor do sal�rio fam�lia (pago por filho com menos de 14 anos), e que calcule o
sal�rio total deste funcion�rio e escreva o seu n�mero e o seu sal�rio total. */

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

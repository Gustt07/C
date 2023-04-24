// Gustavo Abreu 27/06 

/* 17 - Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a média é ponderada e que
o peso das notas é: 2,3 e 5, respectivamente. */

#include <stdio.h>
#include <stdlib.h>

	int main (){
		float n1,n2,n3,m2,m3,m5,media;
		
		printf("Insira a nota 1: ");
		scanf("%f",&n1);
			printf("Insira o peso da nota(2): ");
			scanf("%f",&m2);
		
		printf("Insira a nota 2: ");
		scanf("%f",&n2);
			printf("Insira o peso da nota(3): ");
			scanf("%f",&m3);
		
		printf("Insira a nota 3: ");
		scanf("%f",&n3);
			printf("Insira o peso da nota(5): ");
			scanf("%f",&m5);
	
	media=(n1*m2 +n2*m3 + n3 * m5)/(m2+m3+m5);
	
	printf("A media geral foi :%.1f",media);
	
		
	}

#include <stdio.h>
#include <stdlib.h>

	int main (){
		// Exercicio 11 lista 1 -- Aluno Gustavo Abreu
		
		int opcao, acre, resultado;
		
		
	printf("Digite quantos acres serao necessarios ser removidos: ");
	scanf("%d",&acre);
	
	printf("Temos 4 Opcoes de limpeza: \n");
	printf("Opcao 1 - pulverizacao contra ervas daninhas, R$5 por acre \n");
		printf("Opcao 2 - pulverizacao contra gafanhotos, R$10 por acre \n");
			printf("Opcao 3 - pulverizacao contra broca, R$15 por acre \n");
				printf("Opcao 4 - pulverizacao contra tudo acima, R$25 \n");
					printf("Digite a opcao desejada: ");
					scanf("%d",&opcao);
				
		switch (opcao){
			
			case 1:
				resultado= acre*5;
			printf("O valor para a detetização sera de: %d ",resultado);
			break;
			case 2:
				resultado= acre*10;
			printf("O valor para a detetização sera de: %d ",resultado);
			break;
			case 3:
				resultado= acre*15;
			printf("O valor para a detetização sera de: %d ",resultado);
			break;
			case 4:
				resultado= acre*25;
			printf("O valor para a detetização sera de: %d ",resultado);
			break;
			case 5:
				printf("ERRO_404");
	
		}
		return 0;
	}

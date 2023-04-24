#include <stdio.h>
#include <stdlib.h>

	int main (){
		// Exercicio 9 lista 2 -- Aluno Gustavo Abreu
		
		int  opcao;
		float metros,residencial,comercial, industrial,a,b;
		
		printf ("Digite a quantidade de metros cubicos: ");
		scanf("%f",&metros);
		
		printf("As opcoes de conta de agua sao: \n");
			printf("\nDigite 1 -- para residencial ");
				printf("\nDigite 2 -- para,comercial ");
					printf("\nDigite 3 -- para industrial ");
						printf("\nDigite a opcao desejada: ");
						scanf("%d",&opcao);

		switch (opcao){
			default:
				break;
			case 1:
				residencial= 5+ (metros*0.05);
				printf("A taxa de gastos do residencial foi de: %f ",residencial);
				
			case 2:
				if (metros>=80 ) {
					a = metros - 80;
				comercial=500 + (a * 0.25);
				
				} else {
				comercial=500;
				}
				
				printf("A taxa de gastos de residencial foi de: %f ",comercial);
			case 3: 
				printf("");
			
		}
		
		
		
		return 0; 
	}

#include <stdio.h>
#include <stdlib.h>

	int main (){
    // Exercicio 6 da lista 1 -- Aluno Gustavo Abreu da Silva //
    
    char nome [40];
    float aumento,salariof,salario;
    
    	printf("Digite o nome do jogador: ");
    	scanf("%s",&nome);
    
    	printf("Digite o atual salario do jogador: ");
    	scanf("%f",&salario);
    	
    	
	if (salario <= 900 ){
	aumento= salario *0.20;			
	}
	 if (salario >900 && salario <= 1300 ){
	aumento= salario*0.15;
	 }
	 if (salario >1300 && salario <=1800 ){
	aumento= salario*0.10;
	 }
	 if (salario >1800){
	aumento=salario*0.05;
	 }
		
		salariof= salario+aumento;
		
		printf("O jogador %s tera aumento de R$: %.2f  e passara a receber R$: %.2f.",nome,aumento,salariof);
		
		return 0;
	}

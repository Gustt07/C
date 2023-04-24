#include <stdio.h>
#include <stdlib.h>

	int main (){
    // Exercicio 9 da lista 1 -- Aluno Gustavo Abreu da Silva //
    
    int a,b,opcao,resultado;
    
    printf("Digite o primeiro valor: ");
    scanf("%d",&a);
    
    printf("Digite o segundo valor: ");
    scanf("%d",&b);
    
    
    printf("Escolha de 1 a 5 a opção a ser utilizada: \n");
    printf("Caso 1: quociente da divisão \n");
    printf("Caso 2: multiplicação \n");
    printf("Caso 3: soma dos valores \n");
    printf("Caso 4: subtração dos valores \n");
    printf("Caso 5: opção invalida \n ");
    scanf ("%d",&opcao);
    
    switch (opcao){
    	case 1:
    	resultado = a / b;
    	printf("O resultado da divisão eh: %d ",resultado);
    	break;
    	
    	case 2:
    		resultado= a*b;
    		printf("O resultado da multiplicação eh: %d",resultado);
    		break;
    		
    	case 3:
    		resultado=a+b;
    		printf("O resultado da soma eh: %d ",resultado);
    		break;
    	
    	case 4:
    		resultado= a-b;
    		printf("A subtração dos valores eh: %d ",resultado);
    		break;
    	
    	case 5: 
    		printf("ERRO_404 \n");
    	
    
		}
    	return 0;
	}
    	

// Aluno Gustavo Abreu - lista refeita 11/06
/* 1 � Fa�a um programa que receba como entrada o nome e o sal�rio de um funcion�rio de uma empresa e que
calcule o novo valor do sal�rio do funcion�rio levando em conta que esse teve um aumento de 25%. O
programa deve exibir na sa�da a seguinte frase: */

#include <stdio.h>
#include <stdlib.h>

    int main (){

        char nome[30];
        float salario,aumento,a;

        printf("Digite o seu nome: ");
        scanf("%s", &nome);

        printf("Digite o seu salario: ");
        scanf("%f", &salario); 

        //processamento
		
        aumento= salario*0.25;
        a= aumento+salario;

        printf("O funcionario %s teve um aumento de R$ %.2f e passara a receber um salario de R$ %.2f .",nome,aumento,a); 

    
		return 0;
    }

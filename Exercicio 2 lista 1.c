// Gustavo Abreu 11/06 
/* 2 � No col�gio, �Minha Escolinha�, a nota bimestral de um aluno em uma disciplina � a m�dia ponderada das
notas parciais. A primeira nota parcial tem peso 2 e a segunda nota parcial tem peso 3. Fa�a um programa
para obter o nome e as notas de um aluno em uma determinada disciplina e calcular sua m�dia. O programa
dever� exibir a seguinte frase: */

#include <stdio.h>
#include <stdlib.h>

	int main () {
		
		float n1,n2,m1,m2,media;
		char nome[30];
		
		printf("Digite o nome do aluno: ");
		scanf("%s",&nome);
		
		printf("Digite a primeira nota: ");
		scanf("%f",&n1);
		
		printf("Digite a segunda nota: ");
		scanf("%f",&n2);
		
		media=(n1*2+n2*3)/5;
		
		printf("O aluno %s obteve media %.2f",nome,media);
		
		 
	}

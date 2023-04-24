// Gustavo Abreu 15/06
/* 7- No curso de Programação, a nota final de um estudante é calculada a partir de seu desempenho em três
avaliações: um exame intermediário que vale 30% da nota final, um trabalho prático que corresponde a 20%
da nota final e um exame final que completa os 50% restantes. Faça um programa para ler o nome de um
aluno e suas notas nas três avaliações. O programa deve calcular sua nota final e exibir a seguinte frase:*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int n1,n2,n3,exfinal,a,b,c;
	char nome[30];
	
	printf("Digite o nome do aluno: ");
	scanf("%s",&nome);
	
	printf("Digite a nota do primeiro exame: ");
	scanf("%d",&n1);
	
	printf("Digite a nota do trabalho : ");
	scanf("%d",&n2);
	
	printf("Digite a nota do exame final : ");
	scanf("%d",&n3);
	
	a=n1*0.30 ;
	b=n2*0.20 ;
	c=n3*0.50 ;
	

	exfinal= a+b+c;
	
	printf ("O aluno %s obteve a nota final de: %d ",nome,exfinal);
	
	
}

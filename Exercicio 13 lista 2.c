// Gustavo Abreu 26/06 

/* 13 - Escrever um algoritmo que l� o p�blico total de futebol e forne�a a renda do jogo, sabendo-se que havia 4 tipos de ingressos
assim distribu�dos: popular - 10% a R$1,00, geral - 50% a R$5,00, arquibancada - 30% a R$10,00 e cadeiras - 10% a R$20,00.*/

#include <stdio.h>
#include <math.h>

	int main (){
		
int publico;
float popular,geral,arquibancada,cadeira,renda;
		
	printf("Digite o publico total: ");
	scanf("%d",&publico);
	
	popular=0.1* publico;
	geral=0.5* publico;
	arquibancada=0.3* publico;
	cadeira= 0.1* publico;

	renda=(popular*1)+(geral*5)+(arquibancada*10)+(cadeira*20);
	                                    
	printf("A renda do jogo foi de : %2.f ",renda);

}

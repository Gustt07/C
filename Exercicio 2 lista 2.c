// Gustavo Abreu 17/06
/* 02 - Muitos países estão passando a utilizar o sistema métrico. Fazer um algoritmo para executar as seguintes conversões:
• Ler uma temperatura dada em graus Fahrenheit e imprimir o equivalente em Celsius */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main (){
		
		float celsius,fahrenheit,polegada,chuva,f,milimetroch,valor;
		
		
		printf("Digite uma temperatura em fahrenheit: ");
		scanf("%f",&f);
		
		printf("Digite a quantidade de chuva em polegadas: ");
		scanf("%f",&polegada);
		
		
		milimetroch= 25.4;
	
		celsius =(f-32) *5/9;
		
		valor= celsius; 
		 
		chuva= polegada * milimetroch;
		
		printf("A temperatura em celsius vai ser de :%.1f° , e a quantidade de chuva em milimetros foi de :%.2f",valor,chuva);
	}

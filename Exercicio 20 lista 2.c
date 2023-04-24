// Gustavo Abreu 27/06 

/* 20 - Fazer um algoritmo que calcule e escreva a quantidade de dinheiro a ser gasto em uma viagem. Sabe-se que o veículo a ser usado
faz 12 Km por litro de gasolina e que o litro de gasolina custa R$ 2,90. O usuário ira fornecer o tempo de viagem e a velocidade média
do veículo.*/

#include <stdio.h>
#include <stdlib.h>

	int main (){
		
		float distancia,litros,pagamento,t,vm,ql;
		
		printf("Digite o tempo de viagem: ");
		scanf("%f",&t);
		
		printf("Digite a velocidade media do veiculo: ");
		scanf("%f",&vm);
		
		litros=2.90;
		distancia=t*vm;
		ql=distancia/12;
		pagamento= ql*litros;
	
	printf("O total a ser pago depois da viagem sera de R$%.2f",pagamento);
	}

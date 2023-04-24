// Gustavo Abreu 25/06 

/*11 - Um hotel com 42 apartamentos resolveu fazer promoções para os fins de semana fora da alta temporada, isto é, nos meses de
abril, maio, junho, agosto, setembro, outubro e novembro. A taxa da promoção é de 22% da diária normal. A ocupação média do hotel
sem promoção é de 40%. A expectativa é aumentar a taxa de ocupação para 70%. Supondo que as expectativas se confirmem, escrever
um algoritmo que lê a diária normal, que calcule e escreva as seguintes informações:
(a) O valor da diária no período da promoção;
(b) O valor médio arrecadado sem a promoção, durante um mês;
(c) O valor médio arrecadado com a promoção, durante um mês;
(d) O lucro ou prejuízo mensal com a promoção. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

	int main (){
		
		float Pdiaria,Marrecadado,Mnopromo,diaria,prejuizo_lucro;
		
		printf("Digite a diaria : ");
		scanf("%f",&diaria);
		
		Pdiaria= 0.22 * diaria;
		Mnopromo= (42 * 0.4) * 8 * diaria;
		Marrecadado=(42 * 0.7) *8* diaria;
		
		prejuizo_lucro= Marrecadado - Mnopromo;
		
		printf("O valor medio da diaria na promoção foi de %.2.f ",Pdiaria);
		
		printf("O valor medio arrecadado na promoção foi de %.2.f e sem promoção %.2.f.",Marrecadado,Mnopromo);
		
		printf("O lucro/prejuizo foi de: %.2f",prejuizo_lucro);
		
		
	}

// Gustavo Abreu 25/06 

/*11 - Um hotel com 42 apartamentos resolveu fazer promo��es para os fins de semana fora da alta temporada, isto �, nos meses de
abril, maio, junho, agosto, setembro, outubro e novembro. A taxa da promo��o � de 22% da di�ria normal. A ocupa��o m�dia do hotel
sem promo��o � de 40%. A expectativa � aumentar a taxa de ocupa��o para 70%. Supondo que as expectativas se confirmem, escrever
um algoritmo que l� a di�ria normal, que calcule e escreva as seguintes informa��es:
(a) O valor da di�ria no per�odo da promo��o;
(b) O valor m�dio arrecadado sem a promo��o, durante um m�s;
(c) O valor m�dio arrecadado com a promo��o, durante um m�s;
(d) O lucro ou preju�zo mensal com a promo��o. */

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
		
		printf("O valor medio da diaria na promo��o foi de %.2.f ",Pdiaria);
		
		printf("O valor medio arrecadado na promo��o foi de %.2.f e sem promo��o %.2.f.",Marrecadado,Mnopromo);
		
		printf("O lucro/prejuizo foi de: %.2f",prejuizo_lucro);
		
		
	}

// Gustavo Abreu 17/06

/*04 - Dados os pontos A e B, cujas coordenadas A(x1,y1) e B (x2,y2) serão informadas via teclado, desenvolver um algoritmo que
calcule a distância entre A e B. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int x1,x2,y1,y2,A,B;
	float distancia;
	
	printf("Digite o valor de x1 : ");
	scanf ("%d",&x1);
	
	printf("Digite o valor de y1:");
	scanf("%d",&y1);
	
	printf("Digite o valor de x2: ");
	scanf("%d",&x2);
	
	printf("Digite o valor de y2: ");
	scanf("%d",&y2);
	
	
	distancia= sqrt (pow (x2-x1 ,2) + pow (y2-y1,2));
	
	printf("A distancia percorrida foi de : %.2f ",distancia);

}

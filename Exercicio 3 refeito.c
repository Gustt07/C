//Gustavo Abreu 11/06
/*3 –Um sistema de equações lineares da forma
ax + by = c
dx + ey = f
pode ser resolvido utilizando-se as seguintes fórmulas: */

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float x,y,a,b,c,d,e,f;
	
	printf("Digite o valor de a: ");
	scanf("%f",&a);
	
	printf("Digite o valor de b: ");
	scanf("%f",&b);
	
	printf("Digite o valor de c: ");
	scanf("%f",&c);
	
	printf("Digite o valor de d: ");
	scanf("%f",&d);
	
	printf("Digite o valor de e: ");
	scanf("%f",&e);
	
	printf("Digite o valor de f: ");
	scanf("%f",&f);
	
	x=(c*e)-(b*f)/(a*e)-(b*d);
	y=(a*f)-(c*d)/(a*e)-(b*d);
	
	printf("Os valores de x em y foram %.2f e %.2f",x,y);
	
	
	
}

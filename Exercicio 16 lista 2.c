// Gustavo Abreu 26/06 

/*16 - Fazer um algoritmo que dado 4 notas de provas, a b, c, e d calcule e escreva o valor das seguintes médias: */

#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

	int main (){
		
		int a,b,c,d;
		float aritmetica,harmonica,geometrica,quadratica,q;
		
		printf("Digite a nota a: ");
		scanf("%d",&a);
		
		printf("Digite a nota b: ");
		scanf("%d",&b);
		
		printf("Digite a nota c : ");
		scanf("%d",&c);
		
		printf("Digite a nota d: ");
		scanf("%d",&d);
		
		aritmetica=(a+b+c+d)/4;
		harmonica=4/(pow(1,a)+ pow(a,b)+pow(1,c)+pow(1,d));
		geometrica=pow(a*b*c*d, 1.0/4.0);
		
		q=sqrt(pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2));
		quadratica=q/4;
		//2.50
		printf("\nO valor da raiz aritmetica vai ser:%.2f ",aritmetica);
		
			printf("\nO valor da raiz harmonica vai ser: %.2f",harmonica);
			
				printf("\nO valor da raiz geometrica vai ser: %.2f",geometrica);
				
					printf("\nO valor da raiz quadratica vai ser: %.2f",quadratica);
		
	}

// Gustavo Abreu 16/06

/*8- Sabe-se que para iluminar de maneira correta os c�modos de uma casa, para cada m2, deve-se utilizar
18W de pot�ncia. Fa�a um programa que receba as duas dimens�es de um c�modo (em metros), calcule a sua
�rea (em m2) e a pot�ncia de ilumina��o que dever� ser utilizada. */

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float area,larg,comp,iluminacao;
	
	printf("Digite a largura do comodo em metros: ");
	scanf("%f",&larg);
	
	printf("Digite o comprimento do comodo em metros: ");
	scanf("%f",&comp);
	
	area= comp*larg;
	iluminacao= area /18;
	
	printf("O tamanho da area do comodo eh de %.1f metros quadrados, gastando uma energia de %.1f w de potencia",area,iluminacao);
	
}

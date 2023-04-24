// Gustavo Abreu 16/06

/*8- Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se utilizar
18W de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule a sua
área (em m2) e a potência de iluminação que deverá ser utilizada. */

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

#include<stdio.h>
#include<math.h>

    int main()

    {
        int publicototal;
        float rendajogo, ing_pop, ing_geral, ing_arq, ing_cadeira;

		printf("Digite o publico total: ");
        scanf("%d",&publicototal);

        ing_pop = 0.1 * publicototal;
        ing_geral = 0.5 * publicototal;
        ing_arq = 0.3 * publicototal;
        ing_cadeira = 0.1 * publicototal;
        rendajogo = (ing_pop * 1) + (ing_geral * 5) + (ing_arq * 10) + (ing_cadeira * 20);

        printf("A RENDA DO JOGO = %.2f\n",rendajogo);


    }

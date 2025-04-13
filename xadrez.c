#include <stdio.h>

int main () {
    // Mover a Torre 5 casas para a direita

    printf("Torre\n");
    for (int t = 0; t < 5; t++) {
        printf("Direita\n"); //Iprime a direção do movimento e quantas casas        
    }

    printf("\n");


    // Mover o Bispo 5 casas na diagonal para cima e a direita

    int b = 0;

    printf("Bispo\n");
    while (b < 5)
    {
        printf("Cima -");
        printf(" Direita\n");
        b++;
    }

    printf("\n");

    // Mover a Rainha 8 casas para a esquerda

    int r = 0;

    printf("Rainha\n");
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    printf("\n");

    // Mover o Cavalo duas casas para baixo e uma casa para a esquerda

    int a = 0;

    printf("Cavalo\n");
    for (int c = 0; c < 1; c++)
    {
        while (a < 2)
        {
            printf("baixo\n");
            a++;
        }
        printf("Esquerda");
        printf("\n");
    }
    
    
    return 0;
}
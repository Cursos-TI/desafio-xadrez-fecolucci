#include <stdio.h>

int main () {
    // Mover a Torre 5 casas para a direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); //Iprime a direção do movimento e quantas casas
    }


    // Mover o Bispo 5 casas na diagonal para cima e a direita

    int i = 0;

    while (i < 5)
    {
        printf("Cima -");
        printf(" Direita\n");
        i++;
    }

    // Mover a Rainha 8 casas para a esquerda

    int x = 0;

    do {
        printf("Esquerda\n");
        x++;
    } while (x < 8);
    
    return 0;
}

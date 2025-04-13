#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }

}

void moverBispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) { //Vertical cima
            printf("Cima -");
            for (int j = 0; j < 1; j++) { // Horizontal direita
                printf(" Direita\n");
            }            
        }
        moverBispo(casas - 1); //Chamada recursiva
    }
}

void moverRainha (int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas -1);
    }
}

int main () {

    // Mover a Torre 5 casas para a direita
    
    printf("Torre\n");
    moverTorre(5);
    printf("\n");


    // Mover o Bispo 5 casas na diagonal para cima e a direita

    printf("Bispo\n");
    moverBispo(5);
    printf("\n");


    // // Mover a Rainha 8 casas para a esquerda

    printf("Rainha\n");
    moverRainha(8);
    printf("\n");



    // // Mover o Cavalo duas casas para baixo e uma casa para a esquerda

        // printf("Cavalo\n");
    // for (int c = 0, a = 0; c < 1 || a < 2; c++, a++)
    // {
    // printf("Baixo\n");          
    // }
    // printf("Esquerda");
    // printf("\n");

    printf("Cavalo\n");

    for (int i = 0; i < 3; i++) {
        (i < 2) ? printf("Cima\n") : printf("Direita\n");
    }

    
    return 0;
}
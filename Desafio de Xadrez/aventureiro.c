
#include <stdio.h>

#define PASSOS_L1 2  // para Baixo
#define PASSOS_L2 1  // para Esquerda

void moverCavalo() {
    printf("Movimentação do Cavalo (L invertido - baixo e esquerda):\n");

    for (int i = 0; i < PASSOS_L1; i++) {
        printf("Baixo\n");
        int j = 0;
        while (j < PASSOS_L2) {
            printf("Esquerda\n");
            j++;
        }
    }

    printf("\n");
}

int main() {
    moverCavalo();
    return 0;
}

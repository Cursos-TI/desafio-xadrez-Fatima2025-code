#include <stdio.h>

#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

void moverBispo() {
    printf("Movimentação do Bispo:\n");
    for(int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");
}

void moverTorre() {
    printf("Movimentação da Torre:\n");
    int i = 0;
    while(i < MOV_TORRE) {
        printf("Direita\n");
        i++;
    }
    printf("\n");
}

void moverRainha() {
    printf("Movimentação da Rainha:\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < MOV_RAINHA);
    printf("\n");
}

int main() {
    moverBispo();
    moverTorre();
    moverRainha();
    return 0;
}

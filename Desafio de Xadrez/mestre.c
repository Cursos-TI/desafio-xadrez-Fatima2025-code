#include <stdio.h>

#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

// Recursiva - Bispo
void moverBispoRecursivo(int passo) {
    if (passo == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(passo - 1);
}

// Recursiva - Torre
void moverTorreRecursiva(int passo) {
    if (passo == 0) return;
    printf("Direita\n");
    moverTorreRecursiva(passo - 1);
}

// Recursiva - Rainha
void moverRainhaRecursiva(int passo) {
    if (passo == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursiva(passo - 1);
}

// Cavalo com múltiplas condições e break/continue
void moverCavaloAvancado() {
    printf("Movimentação avançada do Cavalo (1 vez em L para cima e direita):\n");

    for (int i = 0; i < 3; i++) {
        if (i == 1) continue; // Pular iteração 1 (exemplo de uso do continue)
        for (int j = 0; j < 3; j++) {
            if (i == 2 && j == 1) break; // Exemplo de uso do break
            if (i == 0 && j < 2) {
                printf("Cima\n");
            }
            if (i == 2 && j == 0) {
                printf("Direita\n");
            }
        }
    }

    printf("\n");
}

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispoRecursivo(MOV_BISPO);

    printf("\nMovimentação da Torre:\n");
    moverTorreRecursiva(MOV_TORRE);

    printf("\nMovimentação da Rainha:\n");
    moverRainhaRecursiva(MOV_RAINHA);

    moverCavaloAvancado();

    return 0;
}

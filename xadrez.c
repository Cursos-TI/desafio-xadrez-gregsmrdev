#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimentação do Bispo utilizando loops aninhados
void moverBispo(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima Direita\n");
    }
}

// Movimentação do Cavalo utilizando loops aninhados
void moverCavalo() {
    for (int i = 0; i < 1; i++) { // Primeiro movimento
        printf("Cima\n");
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) { // Segundo movimento
        printf("Direita\n");
    }
}

int main() {
    printf("Movimentação da Torre:\n");
    moverTorre(5);
    
    printf("\nMovimentação da Rainha:\n");
    moverRainha(8);
    
    printf("\nMovimentação do Bispo:\n");
    moverBispo(5);
    
    printf("\nMovimentação do Cavalo:\n");
    moverCavalo();
    
    return 0;
}


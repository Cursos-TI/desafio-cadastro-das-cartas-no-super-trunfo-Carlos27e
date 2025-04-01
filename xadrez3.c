#include <stdio.h>

// Função recursiva para a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o Bispo
void moverBispoRecursivo(int casas, int x, int y) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1, x + 1, y + 1);
}

// Função recursiva para a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Cavalo usando loops aninhados
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

// Bispo usando loops aninhados
void moverBispoLoop(int casas) {
    for (int i = 1; i <= casas; i++) {
        printf("Cima, Direita\n");
    }
}

int main() {
    printf("Torre:\n");
    moverTorre(5);
    
    printf("\nBispo (recursivo):\n");
    moverBispoRecursivo(5, 0, 0);
    
    printf("\nRainha:\n");
    moverRainha(8);
    
    printf("\nCavalo:\n");
    moverCavalo();
    
    printf("\nBispo (loops aninhados):\n");
    moverBispoLoop(5);
    
    return 0;
}

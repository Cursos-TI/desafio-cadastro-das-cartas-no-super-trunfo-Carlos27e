#include <stdio.h>

int main() {

    int tabuleiro[10][10];
    char letras_colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Inicializa o tabuleiro com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posição do navio horizontal (linha 2, coluna 3)
    int linha_h = 2;
    int coluna_h = 3;

    // Verifica se cabe e posiciona navio horizontal
    if (coluna_h + 3 <= 10) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha_h][coluna_h + i] = 3;
        }
    }

    // Posição do navio vertical (linha 5, coluna 7)
    int linha_v = 5;
    int coluna_v = 7;

    // Verifica se cabe e se não sobrepõe e posiciona navio vertical
    if (linha_v + 3 <= 10) {
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linha_v + i][coluna_v] == 0) {
                tabuleiro[linha_v + i][coluna_v] = 3;
            }
        }
    }

    printf("\n    TABULEIRO BATALHA NAVAL\n\n");

    // Imprime letras das colunas
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c", letras_colunas[j]);
    }
    printf("\n");

    // Imprime o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i); // número da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

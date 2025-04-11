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

    // NAVIO HORIZONTAL (linha 2, coluna 3)
    int linha_h = 2;
    int coluna_h = 3;

    if (coluna_h + 3 <= 10) {
        int livre = 1;
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linha_h][coluna_h + i] != 0) {
                livre = 0;
            }
        }
        if (livre) {
            for (int i = 0; i < 3; i++) {
                tabuleiro[linha_h][coluna_h + i] = 3;
            }
        }
    }

    // NAVIO VERTICAL (linha 5, coluna 7)
    int linha_v = 5;
    int coluna_v = 7;

    if (linha_v + 3 <= 10) {
        int livre = 1;
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linha_v + i][coluna_v] != 0) {
                livre = 0;
            }
        }
        if (livre) {
            for (int i = 0; i < 3; i++) {
                tabuleiro[linha_v + i][coluna_v] = 3;
            }
        }
    }

    // NAVIO DIAGONAL PRINCIPAL (\) (linha 0, coluna 0)
    int linha_d1 = 0;
    int coluna_d1 = 0;

    if (linha_d1 + 3 <= 10 && coluna_d1 + 3 <= 10) {
        int livre = 1;
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linha_d1 + i][coluna_d1 + i] != 0) {
                livre = 0;
            }
        }
        if (livre) {
            for (int i = 0; i < 3; i++) {
                tabuleiro[linha_d1 + i][coluna_d1 + i] = 3;
            }
        }
    }

    // NAVIO DIAGONAL SECUNDÁRIA (/) (linha 6, coluna 2)
    int linha_d2 = 6;
    int coluna_d2 = 2;

    if (linha_d2 + 3 <= 10 && coluna_d2 - 2 >= 0) {
        int livre = 1;
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linha_d2 + i][coluna_d2 - i] != 0) {
                livre = 0;
            }
        }
        if (livre) {
            for (int i = 0; i < 3; i++) {
                tabuleiro[linha_d2 + i][coluna_d2 - i] = 3;
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

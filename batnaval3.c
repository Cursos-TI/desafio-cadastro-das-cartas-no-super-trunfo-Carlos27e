#include <stdio.h>

#define N 10         // Tamanho do tabuleiro 10x10
#define CL 3         // Linhas do cone
#define CC 5         // Colunas do cone
#define H 5          // Tamanho das outras habilidades (5x5)

// Cria a matriz do cone com a base para baixo (formato pirâmide)
void cone(int h[CL][CC]) {
    for (int i = 0; i < CL; i++) {
        for (int j = 0; j < CC; j++) {
            if (j >= CC / 2 - i && j <= CC / 2 + i)
                h[i][j] = 1;
            else
                h[i][j] = 0;
        }
    }
}

// Cria a matriz em formato de cruz
void cruz(int h[H][H]) {
    int m = H / 2;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            h[i][j] = (i == m || j == m) ? 1 : 0;
        }
    }
}

// Cria a matriz em formato de octaedro (losango)
void octaedro(int h[H][H]) {
    int m = H / 2;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            if (abs(i - m) + abs(j - m) <= m)
                h[i][j] = 1;
            else
                h[i][j] = 0;
        }
    }
}

// Aplica habilidades de tamanho fixo HxH no tabuleiro
void aplicar(int tab[N][N], int h[H][H], int x, int y) {
    int m = H / 2;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            int a = x + i - m;
            int b = y + j - m;
            if (a >= 0 && a < N && b >= 0 && b < N && h[i][j] == 1 && tab[a][b] != 3)
                tab[a][b] = 5;
        }
    }
}

// Aplica o cone separadamente por ter dimensões diferentes (CL x CC)
void aplicar_cone(int tab[N][N], int h[CL][CC], int x, int y) {
    int mL = 0; // origem na linha 0 da matriz do cone
    int mC = CC / 2;
    for (int i = 0; i < CL; i++) {
        for (int j = 0; j < CC; j++) {
            int a = x + i - mL;
            int b = y + j - mC;
            if (a >= 0 && a < N && b >= 0 && b < N && h[i][j] == 1 && tab[a][b] != 3)
                tab[a][b] = 5;
        }
    }
}

// Exibe o tabuleiro com 0 (agua), 3 (navio), 5 (habilidade)
void mostrar(int t[N][N]) {
    char letras[] = {'A','B','C','D','E','F','G','H','I','J'};

    printf("\n     A B C D E F G H I J\n");
    for (int i = 0; i < N; i++) {
        printf("%2d  ", i);
        for (int j = 0; j < N; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tab[N][N] = {0};        // Tabuleiro inicial
    int h1[H][H];               // Habilidade cruz e octaedro
    int cone_forma[CL][CC];     // Habilidade cone

    // Colocando navios com valor 3
    tab[0][0] = 3;
    tab[8][0] = 3;

    // Gerando e aplicando habilidades
    cone(cone_forma); aplicar_cone(tab, cone_forma, 0, 2);    // Cone em (0,2)
    cruz(h1);             aplicar(tab, h1, 6, 7);              // Cruz em (6,7)
    octaedro(h1);         aplicar(tab, h1, 7, 2);              // Octaedro em (7,2)

    mostrar(tab);
    return 0;
}

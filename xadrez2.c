#include <stdio.h>

int main(){

printf("Torre:\n");

// mover a Torre 5 vezes para a direita
for (int i = 0; i < 5; i++)
{
    printf("Direita\n"); //direção do movimento
}

printf("\nBispo:\n");

// mover o Bispo cinco casas na diagonal para cima e à direita
int f = 1;

while (f <= 5){
    printf("Cima, Direita\n");
    f++;
}

printf("\nRainha:\n");

// mover a Rainha oito casas para a esquerda.
int g = 1;

do {
    printf("Esquerda.\n");
    g++;
} while (g <= 8);

printf("\nCavalo:\n");

// mover o cavalo duas casas para baixo
for (int m = 0; m < 2; m++) {
    printf("Baixo\n");
}
int n = 0;
while (n < 1) { // Move 1 casa para a esquerda
    printf("Esquerda\n");
    n++;
}

  return 0;  
}

#include <stdio.h>

int main(){

printf("Torre:\n");

// mover a --Torre-- 5 vezes para a direita
for (int i = 0; i < 5; i++)
{
    printf("Direita\n"); //direção do movimento
}

printf("\nBispo:\n");

// mover o --Bispo-- cinco casas na diagonal para cima e à direita
int f = 0;

while (f <= 4){
    printf("Cima, Direita\n");
    f++;
}

printf("\nRainha:\n");

// mover a --Rainha-- oito casas para a esquerda.
int g = 0;

do {
    printf("Esquerda.\n");
    g++;
} while (g <= 7);

  return 0;  
}

#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta:
    char estado1;
    char codigo1[4];
    char nome1[100];
    int populacao1;
    float area1, pib1;
    int pontosturisticos1;

    // Variáveis da segunda carta:
    char estado2;
    char codigo2[4];
    char nome2[100];
    int populacao2;
    float area2, pib2;
    int pontosturisticos2;

    // Entrada de dados para a primeira carta:
    printf("Digite a letra do estado (A-H) da primeira carta: \n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da primeira carta (ex: A01): \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da primeira carta: \n");
    getchar();
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite a populacao da cidade da primeira carta: \n");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade da primeira carta (km2): \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da primeira carta (bilhoes de reais): \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontosturisticos1);

    // Dados da segunda carta:
    printf("\nDigite a letra do estado (A-H) da segunda carta: \n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da segunda carta (ex: B02): \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da segunda carta: \n");
    getchar();
    fgets(nome2, sizeof(nome2), stdin); 
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite a populacao da cidade da segunda carta: \n");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade da segunda carta (km2): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da segunda carta (bilhoes de reais): \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;
}
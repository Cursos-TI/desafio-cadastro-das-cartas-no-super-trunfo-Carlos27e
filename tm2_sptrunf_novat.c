#include <stdio.h>
 
int main() {
    // Declaração das variáveis para a primeira carta:

    char estado1, codigo1[4], nome1[100];
    int populacao1, pontosturisticos1;
    float area1, pib1, densidade1, pibpercapita1;

    // Variáveis da segunda carta:

    char estado2, codigo2[4], nome2[100];
    int populacao2, pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2;

    // Entrada de dados para a primeira carta:
    printf("Digite a letra do estado (A-H) da primeira carta: \n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da primeira carta (ex: A01): \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", &nome1);
    printf("Digite a populacao da cidade da primeira carta: \n");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade da primeira carta (km2): \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da primeira carta (bilhoes de reais): \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontosturisticos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;

    // Dados da segunda carta:
    printf("\nDigite a letra do estado (A-H) da segunda carta: \n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da segunda carta (ex: B02): \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", &nome2);
    printf("Digite a populacao da cidade da segunda carta: \n");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade da segunda carta (km2): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da segunda carta (bilhoes de reais): \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;
    
    // Exibição dos dados cadastrados
    // Carta 1:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f bilhoes de reais\n", pibpercapita1);

    // Carta 2:

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f bilhoes de reais\n", pibpercapita2);

    int pontos1 = 0, pontos2 = 0;

    printf("\n-----RESULTADOS:-----\n");

    if (populacao1 > populacao2) {
        printf("No criterio populacao, a carta 1 ganhou!\n");
        pontos1 + 1;
    }   else {
        printf("No criterio populacao, a carta 2 ganhou!\n");
        pontos2 + 1;
    }

    if (area1 > area2) {
        printf("No criterio area, a carta 1 ganhou!\n");
        pontos1 + 1;
    }   else {
        printf("No criterio area, a carta 2 ganhou!\n");
        pontos2 + 1;
    }

    if (pib1 > pib2) {
        printf("No criterio pib, a carta 1 ganhou!\n");
        pontos1 + 1;
    }   else {
        printf("No criterio pib, a carta 2 ganhou!\n");
        pontos2 + 1;
    }

    if (pontosturisticos1 > pontosturisticos2) {
        printf("No criterio pontos turisticos, a carta 1 ganhou!\n");
        pontos1 + 1;
    }   else {
        printf("No criterio pontos turisticos, a carta 2 ganhou!\n");
        pontos2 + 1;
    }

    // Para Densidade Populacional, a carta com o menor valor vence.
    if (densidade1 < densidade2) {
        printf("No criterio densidade populacional, a carta 1 ganhou! (o menor vence)\n");
        pontos1 + 1;
    }   else {
        printf("No criterio densidade populacional, a carta 2 ganhou! (o menor vence)\n");
        pontos2 + 1;
    }

    if (pibpercapita1 > pibpercapita2) {
        printf("No criterio pib per capita, a carta 1 ganhou!\n");
        pontos1 + 1;
    }   else {
        printf("No criterio pib per capita, a carta 2 ganhou!\n");
        pontos2 + 1;
    }

    //resultado final:

    printf("\n---Comparação de cartas (Atributo: Pib)---\n");
    printf("Carta 1 - %s: %.2f", &nome1, &pib1);
    printf("Carta 2 - %s: %.2f", &nome2, &pib2);
    if (pib1 == pib2) {
        printf("O JOGO FICOU EMPATADO!\n");
    } else if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", &nome1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", &nome2);
    }

    return 0;
}

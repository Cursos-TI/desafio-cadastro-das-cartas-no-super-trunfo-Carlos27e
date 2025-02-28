#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta:
    char estado1, codigo1[4], nome1[100];
    int populacao1, pontosturisticos1;
    float area1, pib1, densidade1, pibpercapita1, superpoder1;

    // Declaração das variáveis para a segunda carta:
    char estado2, codigo2[4], nome2[100];
    int populacao2, pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;

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

    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + densidade1 + pibpercapita1;

    // Entrada de dados para a segunda carta:
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

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + densidade2 + pibpercapita2;

    // Exibição dos dados cadastrados
    printf("\n=== Comparacao de Cartas ===\n");

    #define VENCEDOR(atributo, nome) printf("%s: Carta %d venceu (%d)\n", nome, (atributo##1 > atributo##2) ? 1 : 2, (atributo##1 > atributo##2) ? 1 : 0);

    VENCEDOR(populacao, "Populacao");
    VENCEDOR(area, "Area");
    VENCEDOR(pib, "PIB");
    VENCEDOR(pontosturisticos, "Pontos Turisticos");

    // Densidade populacional: menor valor vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2) ? 1 : 0);

    VENCEDOR(pibpercapita, "PIB per Capita");
    VENCEDOR(superpoder, "Super Poder");

    return 0;
}

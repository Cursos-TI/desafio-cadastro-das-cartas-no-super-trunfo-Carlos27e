#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1, codigo1[4], nome1[100];
    int populacao1, pontosturisticos1;
    float area1, pib1, densidade1;
    
    // Declaração das variáveis para a segunda carta
    char estado2, codigo2[4], nome2[100];
    int populacao2, pontosturisticos2;
    float area2, pib2, densidade2;
    
    // Entrada de dados para a primeira carta
    printf("Digite a letra do estado (A-H) da primeira carta: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", nome1);
    printf("Digite a populacao da cidade da primeira carta: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade da primeira carta (km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da primeira carta (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da primeira cidade: ");
    scanf("%d", &pontosturisticos1);
    
    densidade1 = populacao1 / area1;
    
    // Entrada de dados para a segunda carta
    printf("\nDigite a letra do estado (A-H) da segunda carta: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da segunda carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", nome2);
    printf("Digite a populacao da cidade da segunda carta: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade da segunda carta (km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da segunda carta (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da segunda cidade: ");
    scanf("%d", &pontosturisticos2);
    
    densidade2 = populacao2 / area2;
    
    // Menu interativo
    int opcao;
    printf("\nEscolha um atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    
    printf("\nComparacao: %s vs %s\n", nome1, nome2);
    switch(opcao) {
        case 1:
            printf("Populacao: %d vs %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else if (populacao1 < populacao2)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Area: %.2f km2 vs %.2f km2\n", area1, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nome1);
            else if (area1 < area2)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("PIB: %.2f bi vs %.2f bi\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nome1);
            else if (pib1 < pib2)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Pontos turisticos: %d vs %d\n", pontosturisticos1, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2)
                printf("Vencedor: %s\n", nome1);
            else if (pontosturisticos1 < pontosturisticos2)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Densidade populacional: %.2f vs %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", nome1);
            else if (densidade1 > densidade2)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }
    
    return 0;
}

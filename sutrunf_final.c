#include <stdio.h>

int main() {
    // Declaração das variáveis
    char nome1[100], nome2[100], codigo1[10], codigo2[10];
    char estado1, estado2;
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    float area1, pib1, densidade1, area2, pib2, densidade2;
    
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
    printf("Digite o codigo da segunda carta (ex: A01): ");
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
    
    // Escolha dos atributos
    int atributo1, atributo2;
    
    printf("\nEscolha um atributo para comparacao:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de pontos turisticos\n5 - Densidade populacional (menor vence)\n");
    printf("Opcao 1: ");
    scanf("%d", &atributo1);
    
    printf("\nEscolha um segundo atributo para comparacao:\n");
    printf("Opcao 2: ");
    scanf("%d", &atributo2);
    
    if (atributo2 == atributo1) {
        printf("Erro: O segundo atributo deve ser diferente do primeiro.\n");
        return 1;
    }
    
    float valor1_attr1, valor1_attr2, valor2_attr1, valor2_attr2;
    
    float atributos1[] = {populacao1, area1, pib1, pontosturisticos1, densidade1};
    float atributos2[] = {populacao2, area2, pib2, pontosturisticos2, densidade2};
    
    valor1_attr1 = atributos1[atributo1 - 1];
    valor2_attr1 = atributos2[atributo1 - 1];
    valor1_attr2 = atributos1[atributo2 - 1];
    valor2_attr2 = atributos2[atributo2 - 1];
    
    int pontos1 = 0, pontos2 = 0;
    
    pontos1 += (atributo1 == 5) ? (valor1_attr1 < valor2_attr1) : (valor1_attr1 > valor2_attr1);
    pontos2 += (atributo1 == 5) ? (valor1_attr1 > valor2_attr1) : (valor1_attr1 < valor2_attr1);
    pontos1 += (atributo2 == 5) ? (valor1_attr2 < valor2_attr2) : (valor1_attr2 > valor2_attr2);
    pontos2 += (atributo2 == 5) ? (valor1_attr2 > valor2_attr2) : (valor1_attr2 < valor2_attr2);
    
    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;
    
    printf("\nComparacao: %s (%s) vs %s (%s)\n", nome1, codigo1, nome2, codigo2);
    printf("Atributo 1: %.2f vs %.2f\n", valor1_attr1, valor2_attr1);
    printf("Atributo 2: %.2f vs %.2f\n", valor1_attr2, valor2_attr2);
    printf("Soma dos atributos: %.2f vs %.2f\n", soma1, soma2);
    
    if (soma1 > soma2) printf("Vencedor: %s (%s)\n", nome1, codigo1);
    else if (soma1 < soma2) printf("Vencedor: %s (%s)\n", nome2, codigo2);
    else printf("Empate!\n");
    
    return 0;
}

#include <stdio.h>

int main() {

    // Declaração das variáveis da primeira Carta (1)
    char estado1[40];
    char codigo1[40];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis da segunda Carta (2)
    char estado2[40];
    char codigo2[40];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta (1)
    printf("\n=== Carta 1 ===\n");
    printf("Digite o estado 1: ");
    scanf("%39s", estado1);

    printf("Digite o codigo 1: ");
    scanf("%39s", codigo1);

    printf("Digite o nome da cidade 1:");
    scanf("%49s", cidade1);

    printf("Digite a populacao da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade 1 (em km²):");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta (2)
    printf("\n=== Carta 2 ===\n");
    printf("Digite o estado 2: ");
    scanf("%39s", estado2);

    printf("Digite o codigo 2: ");
    scanf("%39s", codigo2);

    printf("Digite o nome da cidade 2: ");
    scanf("%49s", cidade2);

    printf("Digite a populacao da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    // Saída de dados - Carta 1
    printf("\n------ Dados da Carta 1 ------\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // Saída de dados - Carta 2
    printf("\n------ Dados da Carta 2 ------\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

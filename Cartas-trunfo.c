#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    getchar();
    printf("Codigo da Carta (ex: A01):");
    getchar();
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0'; 
    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    

    float densidadePop1 = (float) populacao1 / area1;
    float inversoDensidadePop1 = (float) area1 / populacao1;
    float pibPerCapita1 = (float) pib1 / populacao1;
    float supePoder1 = ((float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 + inversoDensidadePop1);

    // Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    getchar();
    printf("Codigo da Carta (ex: B02): ");
    getchar();
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';
    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    float densidadePop2 = (float) populacao2 / area2;
    float inversoDensidadePop2 = (float) area2 / populacao2;
    float pibPerCapita2 = (float) pib2 / populacao2;
    float supePoder2 = ((float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + inversoDensidadePop2);


    // Impressao final
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePop1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePop2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    //Calculando os pontos
    int pontos1 = 0, pontos2 = 0;

    if (populacao1 > populacao2) pontos1++;
    else if (populacao1 < populacao2) pontos2++;

    if (area1 > area2) pontos1++;
    else if (area1 < area2) pontos2++;

    if (pib1 > pib2) pontos1++;
    else if (pib1 < pib2) pontos2++;

    if(pontosTuristicos1 > pontosTuristicos2) pontos1++;
    else if (pontosTuristicos1 < pontosTuristicos2) pontos2++;

    if (densidadePop1 > densidadePop2) pontos1++;
    else if (densidadePop1 < densidadePop2) pontos2++;

    if (pibPerCapita1 > pibPerCapita2) pontos1++;
    else if (pibPerCapita1 < pibPerCapita2) pontos2++;

    if(supePoder1 > supePoder2) pontos1++;
    else if(supePoder1 < supePoder2) pontos2++;

    //Vencedor
    if (pontos1 > pontos2) printf("\nCarta 1 venceu!");
    else if (pontos1 < pontos2)  printf("\nCarta 2 venceu!");

    return 0;
}



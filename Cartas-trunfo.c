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
    printf("Codigo da Carta (ex: A01): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0'; // remove o '\n' no final
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
    getchar(); // limpa o enter antes da proxima carta

    // Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    getchar();
    printf("Codigo da Carta (ex: B02): ");
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

    // Impressao
    printf("\nCarta 1:\n");
    printf("Estado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\n",
        estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\n",
        estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

    // Cadastro das Cartas:
    
    // Carta 1
    char estado1[3];
    char codigo1[10];
    char nomecidade1[25];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibpercapita1, superpoder1;
    int pontosturisticos1;
    
    // Carta 2
    char estado2[3];
    char codigo2[10];
    char nomecidade2[25];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;
    int pontosturisticos2;

    // Entrada da carta 1
    printf("\n=== Cadastre sua primeira carta ===\n");

    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = (1 / densidade1) + pib1 + pibpercapita1 + pontosturisticos1;

    // Entrada da carta 2
    printf("\n=== Cadastre sua segunda carta ===\n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = (1 / densidade2) + pib2 + pibpercapita2 + pontosturisticos2;

    // Exibição dos dados da carta 1
    printf("\n=== Primeira carta ===\n");
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Superpoder: %.2f\n", superpoder1);

    // Exibição dos dados da carta 2
    printf("\n=== Segunda carta ===\n");
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Superpoder: %.2f\n", superpoder2);

    // Comparação de População
    printf("\n=== Comparação de cartas (Atributo: População) ===\n");

    printf("Carta 1 - %s (%s): %lu habitantes\n", nomecidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", nomecidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
    




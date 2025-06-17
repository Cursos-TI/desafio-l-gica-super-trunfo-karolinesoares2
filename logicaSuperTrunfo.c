#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

#include <stdio.h>

int main() {
    // Cadastro das Cartas:
    
    // Carta 1
    char estado1[3], codigo1[10], nomecidade1[25];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibpercapita1, superpoder1;
    int pontosturisticos1;
    
    // Carta 2
    char estado2[3], codigo2[10], nomecidade2[25];
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

    if (area1 == 0) {
        printf("Erro: Área não pode ser zero.\n");
        return 1;
    }

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

    if (area2 == 0) {
        printf("Erro: Área não pode ser zero.\n");
        return 1;
    }

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = (1 / densidade2) + pib2 + pibpercapita2 + pontosturisticos2;

    // Exibição dos dados
    printf("\n=== Primeira carta ===\n");
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Superpoder: %.2f\n", superpoder1);

    printf("\n=== Segunda carta ===\n");
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Superpoder: %.2f\n", superpoder2);

    // Menu de comparação
    int opcao;
    printf("\n--------------------------------------------------\n");
    printf("=== MENU DE COMPARAÇÃO SUPER TRUNFO ===\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (MENOR vence)\n");
    printf("6 - Superpoder\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\n=== COMPARAÇÃO ===\n");
    printf("Carta 1 - %s (%s)\n", nomecidade1, estado1);
    printf("Carta 2 - %s (%s)\n\n", nomecidade2, estado2);

    switch (opcao) {
        case 1:
            printf("População\n");
            printf("%s: %lu\n", nomecidade1, populacao1);
            printf("%s: %lu\n", nomecidade2, populacao2);
            if (populacao1 > populacao2) printf("Resultado: %s venceu!\n", nomecidade1);
            else if (populacao2 > populacao1) printf("Resultado: %s venceu!\n", nomecidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Área\n");
            printf("%s: %.2f km²\n", nomecidade1, area1);
            printf("%s: %.2f km²\n", nomecidade2, area2);
            if (area1 > area2) printf("Resultado: %s venceu!\n", nomecidade1);
            else if (area2 > area1) printf("Resultado: %s venceu!\n", nomecidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("PIB\n");
            printf("%s: %.2f\n", nomecidade1, pib1);
            printf("%s: %.2f\n", nomecidade2, pib2);
            if (pib1 > pib2) printf("Resultado: %s venceu!\n", nomecidade1);
            else if (pib2 > pib1) printf("Resultado: %s venceu!\n", nomecidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos\n");
            printf("%s: %d\n", nomecidade1, pontosturisticos1);
            printf("%s: %d\n", nomecidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) printf("Resultado: %s venceu!\n", nomecidade1);
            else if (pontosturisticos2 > pontosturisticos1) printf("Resultado: %s venceu!\n", nomecidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", nomecidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomecidade2, densidade2);
            if (densidade1 < densidade2) printf("Resultado: %s venceu!\n", nomecidade1);
            else if (densidade2 < densidade1) printf("Resultado: %s venceu!\n", nomecidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 6:
            printf("Superpoder\n");
            printf("%s: %.2f\n", nomecidade1, superpoder1);
            printf("%s: %.2f\n", nomecidade2, superpoder2);
            if (superpoder1 > superpoder2) printf("Resultado: %s venceu!\n", nomecidade1);
            else if (superpoder2 > superpoder1) printf("Resultado: %s venceu!\n", nomecidade2);
            else printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida. Encerrando...\n");
            break;
    }

    return 0;
};


    




#include <stdio.h>
#include <stdlib.h>

int main() {
    char estado1;
    char codigoCarta1[10];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    char estado2;
    char codigoCarta2[10];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;
    
    int venceuPopulacao, venceuArea, venceuPIB, venceuPontos, venceuDensidade, venceuPIBPC, venceuSuperPoder;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s%*c", codigoCarta1);
    printf("Digite o Nome da Cidade: ");
    scanf("%[^\n]%*c", nomeCidade1);
    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d%*c", &pontosTuristicos1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s%*c", codigoCarta2);
    printf("Digite o Nome da Cidade: ");
    scanf("%[^\n]%*c", nomeCidade2);
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    venceuPopulacao = populacao1 > populacao2;
    venceuArea = area1 > area2;
    venceuPIB = pib1 > pib2;
    venceuPontos = pontosTuristicos1 > pontosTuristicos2;
    venceuDensidade = densidadePopulacional1 < densidadePopulacional2;
    venceuPIBPC = pibPerCapita1 > pibPerCapita2;
    venceuSuperPoder = superPoder1 > superPoder2;

    printf("\nComparação de Cartas:\n");

    if (venceuPopulacao) {
        printf("População: Carta 1 venceu (%d)\n", venceuPopulacao);
    } else {
        printf("População: Carta 2 venceu (%d)\n", venceuPopulacao);
    }

    if (venceuArea) {
        printf("Área: Carta 1 venceu (%d)\n", venceuArea);
    } else {
        printf("Área: Carta 2 venceu (%d)\n", venceuArea);
    }

    if (venceuPIB) {
        printf("PIB: Carta 1 venceu (%d)\n", venceuPIB);
    } else {
        printf("PIB: Carta 2 venceu (%d)\n", venceuPIB);
    }

    if (venceuPontos) {
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", venceuPontos);
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", venceuPontos);
    }

    if (venceuDensidade) {
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", venceuDensidade);
    } else {
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", venceuDensidade);
    }

    if (venceuPIBPC) {
        printf("PIB per Capita: Carta 1 venceu (%d)\n", venceuPIBPC);
    } else {
        printf("PIB per Capita: Carta 2 venceu (%d)\n", venceuPIBPC);
    }

    if (venceuSuperPoder) {
        printf("Super Poder: Carta 1 venceu (%d)\n", venceuSuperPoder);
    } else {
        printf("Super Poder: Carta 2 venceu (%d)\n", venceuSuperPoder);
    }

    return 0;
}
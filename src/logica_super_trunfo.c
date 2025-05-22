#include <stdio.h>

void imprimeAtributo(char *descricao)
{
    printf("Comparação de cartas (Atributo: %s)\n\n", descricao);
}

void imprimeCidades(char *cidade1, char *cidade2, int atributo1, int atributo2)
{
    printf("Carta 1 - %s: %d\n", cidade1, atributo1);
    printf("Carta 2 - %s: %d\n", cidade2, atributo2);
}

void imprimeVencendor(char *descricao, char *cidade1, char *cidade2, int atributo1, int atributo2, int vencedor)
{
    imprimeAtributo(descricao);
    imprimeCidades(cidade1, cidade2, atributo1, atributo2);

    if (vencedor == 1)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (vencedor == 0)
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
}

int main()
{
    char estado;
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", &codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeCidade);
    printf("Digite a população: ");
    scanf(" %d", &populacao);
    printf("Digite a área (em km²): ");
    scanf(" %f", &area);
    printf("Digite o PIB: ");
    scanf(" %f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numPontosTuristicos);

    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);

    densidadePopulacional = populacao / area;
    pibPerCapita = pib / populacao;

    printf("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    superPoder = populacao + area + pib + numPontosTuristicos + pibPerCapita + 1 / densidadePopulacional;

    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", &codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeCidade2);
    printf("Digite a população: ");
    scanf(" %d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB: ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numPontosTuristicos2);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    superPoder2 = populacao2 + area2 + pib2 + numPontosTuristicos2 + pibPerCapita2 + 1 / densidadePopulacional2;

    int comparaPopulacao = populacao > populacao2;
    int comparaArea = area > area2;
    int comparaPib = pib > pib2;
    int comparaNumPontosTuristicos = numPontosTuristicos > numPontosTuristicos2;
    int comparaDensidadePopulacional = densidadePopulacional < densidadePopulacional2;
    int comparaPibPerCapita = pibPerCapita > pibPerCapita2;
    int comparaSuperPoder = superPoder > superPoder2;

    int opcao;

    printf("Selecione o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");  
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        imprimeVencendor("População", nomeCidade, nomeCidade2, populacao, populacao2, comparaPopulacao);
        break;
    case 2:
        imprimeVencendor("Área", nomeCidade, nomeCidade2, area, area2, comparaArea);
        break;
    case 3:
        imprimeVencendor("PIB", nomeCidade, nomeCidade2, pib, pib2, comparaPib);

        break;
    case 4:
        imprimeVencendor("Número de Pontos Turísticos", nomeCidade, nomeCidade2, numPontosTuristicos, numPontosTuristicos2, comparaNumPontosTuristicos);

        break;
    case 5:
        imprimeVencendor("Densidade Populacional", nomeCidade, nomeCidade2, densidadePopulacional, densidadePopulacional2, comparaDensidadePopulacional);

        break;
    case 6:
        imprimeVencendor("PIB per Capita", nomeCidade, nomeCidade2, pibPerCapita, pibPerCapita2, comparaPibPerCapita);

        break;
    case 7:
        imprimeVencendor("Super Poder", nomeCidade, nomeCidade2, superPoder, superPoder2, comparaSuperPoder);

        break;
    default:
        break;
    }

    return 0;
}

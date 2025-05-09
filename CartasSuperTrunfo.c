#include <stdio.h>

// Adicionando variáveis.
char estado, estado2;
char codigo[10], codigo2[10];
char cidade[20], cidade2[20];
unsigned long int populacao, populacao2;
int pontosTuristicos, pontosTuristicos2, comparacao;
float area, area2, pib, pib2;

// Adicionando variável super poder para somar todos os valores
float superPoder1, superPoder2;
// Adicionando variáveis de calculo.
float densidadePopulacional1, densidadePopulacional2, pibPercapita1, pibPercapita2;

void entradaDados()
{

    // Adição de informações da carta 1.
    printf("Insira as informações da primeira carta.\n");

    printf("Digite uma das letras entre 'A' e 'H' representando um de oito estados: ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (01, 02, 03 ou 04): ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("Numero de habitantes: ");
    scanf("%lu", &populacao);

    printf("Área da cidade: ");
    scanf("%f", &area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Adição de informações da carta 2.
    printf("Insira as informações da segunda carta.\n");

    printf("Digite uma das letras entre 'A' e 'H' representando um de oito estados: ");
    scanf(" %c", &estado2);

    // Limpando o buffer depois de ler o estado2
    while (getchar() != '\n')
        ;

    printf("Digite o código da carta (01, 02, 03 ou 04): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Numero de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Área da cidade: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");
}

// Solução estruturada para executar os calculos.
float calculos()
{
    // Formulas para calculo da densidade populacional e PIB per capita.
    densidadePopulacional1 = (float)populacao / area;
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPercapita1 = (float)(pib * 1000000000.0) / populacao;
    pibPercapita2 = (float)(pib2 * 1000000000.0) / populacao2;
    superPoder1 = (float)populacao + area + pib + pontosTuristicos + pibPercapita1 + (1 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1 / densidadePopulacional2);
}

void exibirDados()
{
    // Resultado e informações da cartas 1
    printf("Carta 1:\nEstado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPercapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n"); // Espaço para organização e melhor entendimento do usuário.

    // Resultado e informações da cartas 2
    printf("Carta 2:\nEstado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPercapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=\n");

    //Realizando comparação dos atributos utilizando as funções if e else
    printf(" 1- População\n 2- Área\n 3- PIB\n 4- Pontos turísticos\n 5- Densidade Populacional\n 6- PIB per capita\n 7- Super poder\n Vamos comparar agora um atributo especifico, escolha um dos atributos(ENTRE OS NUMEROS DE 1 A 7): ");
    scanf("%d", &comparacao);

    if (comparacao == 1)
    {
        printf("Comparação de cartas - População:\n");
        printf("Carta 1 - %s (%c%s): %lu\n", cidade, estado, codigo, populacao);
        printf("Carta 2 - %s (%c%s): %lu\n", cidade2, estado2, codigo2, populacao2);
        if (populacao > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else if (comparacao == 2)
    {
        printf("Comparação de cartas - Área:\n");
        printf("Carta 1 - %s (%c%s): %.2f\n", cidade, estado, codigo, area);
        printf("Carta 2 - %s (%c%s): %.2f\n", cidade2, estado2, codigo2, area2);
        if (area > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else if (comparacao == 3)
    {
        printf("Comparação de cartas - PIB:\n");
        printf("Carta 1 - %s (%c%s): %.2f\n", cidade, estado, codigo, pib);
        printf("Carta 2 - %s (%c%s): %.2f\n", cidade2, estado2, codigo2, pib2);
        if (pib > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else if (comparacao == 4)
    {
        printf("Comparação de cartas - Pontos Turísticos:\n");
        printf("Carta 1 - %s (%c%s): %d\n", cidade, estado, codigo, pontosTuristicos);
        printf("Carta 2 - %s (%c%s): %d\n", cidade2, estado2, codigo2, pontosTuristicos2);
        if (pontosTuristicos > pontosTuristicos2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else if (comparacao == 5)
    {
        printf("Comparação de cartas - Densidade Populacional (MENOR vence):\n");
        printf("Carta 1 - %s (%c%s): %.2f\n", cidade, estado, codigo, densidadePopulacional1);
        printf("Carta 2 - %s (%c%s): %.2f\n", cidade2, estado2, codigo2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else if (comparacao == 6)
    {
        printf("Comparação de cartas - PIB per Capita:\n");
        printf("Carta 1 - %s (%c%s): %.2f\n", cidade, estado, codigo, pibPercapita1);
        printf("Carta 2 - %s (%c%s): %.2f\n", cidade2, estado2, codigo2, pibPercapita2);
        if (pibPercapita1 > pibPercapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else if (comparacao == 7)
    {
        printf("Comparação de cartas - Super Poder:\n");
        printf("Carta 1 - %s (%c%s): %.2f\n", cidade, estado, codigo, superPoder1);
        printf("Carta 2 - %s (%c%s): %.2f\n", cidade2, estado2, codigo2, superPoder2);
        if (superPoder1 > superPoder2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else
    {
        printf("Opção inválida! Por favor, escolha um número entre 1 e 7.\n");
    }
}

int main()
{
    entradaDados();
    calculos();
    exibirDados();
    return 0;
}
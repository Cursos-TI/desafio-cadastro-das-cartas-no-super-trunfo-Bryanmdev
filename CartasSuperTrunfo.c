#include <stdio.h>
#include <stdlib.h>

// // Variáveis globais utilizadas para armazenar dados das duas cartas
char estado, estado2;
char codigo[10], codigo2[10];
char cidade[20], cidade2[20];
unsigned long int populacao, populacao2;
int pontosTuristicos, pontosTuristicos2;
float area, area2, pib, pib2;

// Variáveis auxiliares para comparação entre atributos
int atributo1, atributo2, resultado1, resultado2, comparacao;

// Variáveis para cálculo de "super poder" (pontuação total)
float superPoder1, superPoder2;

// Variáveis para cálculos adicionais
float densidadePopulacional1, densidadePopulacional2, pibPercapita1, pibPercapita2;

void entradaDados()
{

    // Coleta dados da carta 1
    printf("Bem vindo ao Super Trunfo!\nInsira as informações da primeira carta.\n");

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

    // Coleta dados da carta 2
    printf("Insira as informações da segunda carta.\n");

    printf("Digite uma das letras entre 'A' e 'H' representando um de oito estados: ");
    scanf(" %c", &estado2);

    while (getchar() != '\n'); // Limpando o buffer para evitar erro na leitura do estado2

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

    printf("=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=\n");
}

// Função para calcular estatísticas com base nos dados inseridos
float calculos()
{
    // Densidade = população / área
    // PIB per capita = (PIB em reais) / população
    densidadePopulacional1 = (float)populacao / area;
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPercapita1 = (float)(pib * 1000000000.0) / populacao;
    pibPercapita2 = (float)(pib2 * 1000000000.0) / populacao2;

     // Super Poder é uma soma ponderada de vários atributos
    superPoder1 = (float)populacao + area + pib + pontosTuristicos + pibPercapita1 + (1 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1 / densidadePopulacional2);
}

// Exibe os dados e estatísticas de cada carta
void exibirDados()
{
    // Exibição da carta 1
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

    printf("\n"); // Espaço para separar as cartas

    // Exibição da carta 2
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
}

void comparandoAtributos()
{
    // Jogador escolhe dois atributos diferentes para comparação
    // A menor densidade populacional é melhor (condição invertida)
    // Os demais atributos usam comparação direta
    printf("Agora você deverá escolher 2 atributos.\n");
    printf(" 1- População\n 2- Área\n 3- PIB\n 4- Pontos turísticos\n 5- Densidade Populacional\n 6- PIB per capita\n 7- Super poder\n Escolha o primeiro atributo para determinarmos o vencedor(ESCOLHA ENTRE OS NUMEROS DE 1 A 7): ");
    scanf("%d", &atributo1);

    // Aplicando o Switch
    // Cada comparação atualiza `resultado1` ou `resultado2`
    // 1 se (carta 1) vence, 0 se (carta 2) vence
    switch (atributo1)
    {

    case 1:
        printf("Atributo selecionado - População\n");
        printf("Carta 1: (%c%s) %s: %d\n", estado, codigo, cidade, populacao);
        printf("Carta 2: (%c%s) %s: %d\n", estado2, codigo2, cidade2, populacao2);
        resultado1 = populacao > populacao2 ? 1 : 0;

        break;

    case 2:
        printf("Atributo selecionado - Área\n");
        resultado1 = area > area2 ? 1 : 0;
        printf("Carta 1: (%c%s) %s: %.2f\n", estado, codigo, cidade, area);
        printf("Carta 2: (%c%s) %s: %.2f\n", estado2, codigo2, cidade2, area2);

        break;

    case 3:
        printf("Atributo selecionado - PIB\n");
        resultado1 = pib > pib2 ? 1 : 0;
        printf("Carta 1: (%c%s) %s: %.2f\n", estado, codigo, cidade, pib);
        printf("Carta 2: (%c%s) %s: %.2f\n", estado2, codigo2, cidade2, pib2);

        break;

    case 4:
        printf("Atributo selecionado - Pontos Turísticos\n");
        resultado1 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
        printf("Carta 1: (%c%s) %s: %d\n", estado, codigo, cidade, pontosTuristicos);
        printf("Carta 2: (%c%s) %s: %d\n", estado2, codigo2, cidade2, pontosTuristicos2);

        break;

    case 5:
        printf("Atributo selecionado - Densidade Populacional (MENOR vence)\n");
        resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
        printf("Carta 1: (%c%s) %s: %.2f\n", estado, codigo, cidade, densidadePopulacional1);
        printf("Carta 2: (%c%s) %s: %.2f\n", estado2, codigo2, cidade2, densidadePopulacional2);

        break;

    case 6:
        printf("Atributo selecionado - PIB per Capita\n");
        resultado1 = pibPercapita1 > pibPercapita2 ? 1 : 0;
        printf("Carta 1: (%c%s) %s: %.2f\n", estado, codigo, cidade, pibPercapita1);
        printf("Carta 2: (%c%s) %s: %.2f\n", estado2, codigo2, cidade2, pibPercapita2);

        break;

    case 7:
        printf("Atributo selecionado - Super Poder\n");
        resultado1 = superPoder1 > superPoder2 ? 1 : 0;
        printf("Carta 1: (%c%s) %s: %.2f\n", estado, codigo, cidade, superPoder1);
        printf("Carta 2: (%c%s) %s: %.2f\n", estado2, codigo2, cidade2, superPoder2);

        break;

    default:
        printf("Opção inválida!");
        exit(0);
    }

    printf("=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=\n");

    printf("Escolha um segundo atributo.\n");
    printf("ATENÇÃO: Você deve escolher um atributo diferente do primeiro.\n");
    printf(" 1- População\n 2- Área\n 3- PIB\n 4- Pontos turísticos\n 5- Densidade Populacional\n 6- PIB per capita\n 7- Super poder\n Escolha o segundo atributo para determinarmos o vencedor(ESCOLHA ENTRE OS NUMEROS DE 1 A 7): ");
    scanf("%d", &atributo2);
    if (atributo1 == atributo2)
    {
        printf("Atributos iguais, OPÇÃO INVÁLIDA!");
    }
    else
    {

        switch (atributo2)
        {

        case 1:
            printf("Atributo 2 selecionado - População\n");
            resultado2 = populacao > populacao2 ? 1 : 0;
            printf("Carta 1: (%c%s) %s: %d\n", estado, codigo, cidade, populacao);
            printf("Carta 2: (%c%s) %s: %d\n", estado2, codigo2, cidade2, populacao2);

            break;

        case 2:
            printf("Atributo 2 selecionado - Área\n");
            resultado2 = area > area2 ? 1 : 0;
            printf("Carta 1: (%c%s) %s: %.2f\n", estado, codigo, cidade, area);
            printf("Carta 2: (%c%s) %s: %.2f\n", estado2, codigo2, cidade2, area2);
            break;

        case 3:
            printf("Atributo 2 selecionado - PIB\n");
            resultado2 = pib > pib2 ? 1 : 0;
            printf("Carta 1: (%c%s) %s: %.2f\n", estado, codigo, cidade, pib);
            printf("Carta 2: (%c%s) %s: %.2f\n", estado2, codigo2, cidade2, pib2);
            break;

        case 4:
            printf("Atributo 2 selecionado - Pontos Turísticos\n");
            resultado2 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
            printf("Carta 1: (%c%s) %s: %d\n", estado, codigo, cidade, pontosTuristicos);
            printf("Carta 2: (%c%s) %s: %d\n", estado2, codigo2, cidade2, pontosTuristicos2);
            break;

        case 5:
            printf("Atributo 2 selecionado - Densidade Populacional (MENOR vence)\n");
            resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
            printf("Carta 1: (%c%s) %s: %.2f\n", estado, codigo, cidade, densidadePopulacional1);
            printf("Carta 2: (%c%s) %s: %.2f\n", estado2, codigo2, cidade2, densidadePopulacional2);
            break;

        case 6:
            printf("Atributo 2 selecionado - PIB per Capita\n");
            resultado2 = pibPercapita1 > pibPercapita2 ? 1 : 0;
            printf("Carta 1: (%c%s) %s: %.2f\n", estado, codigo, cidade, pibPercapita1);
            printf("Carta 2: (%c%s) %s: %.2f\n", estado2, codigo2, cidade2, pibPercapita2);
            break;

        case 7:
            printf("Atributo 2 selecionado - Super Poder\n");
            resultado2 = superPoder1 > superPoder2 ? 1 : 0;
            printf("Carta 1: (%c%s) %s: %.2f\n", estado, codigo, cidade, superPoder1);
            printf("Carta 2: (%c%s) %s: %.2f\n", estado2, codigo2, cidade2, superPoder2);
            break;

        default:
            printf("Opção inválida!");
            exit(0);
        }

        printf("=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=\n");

        // No final, verifica-se quem venceu com base nos dois atributos escolhidos
        if (resultado1 && resultado2)
        {
            printf("A carta 1 - (%c%s) %s venceu!", estado, codigo, cidade);
        }
        else if (resultado1 != resultado2)
        {
            printf("Temos um empate!");
        }
        else
        {
            printf("A carta 2 - (%c%s) %s venceu!", estado2, codigo2, cidade2);
        }
    }
}

int main()
{
    // Executando entradas do programa em ordem.
    entradaDados();
    calculos();
    exibirDados();
    comparandoAtributos();
    return 0;
}
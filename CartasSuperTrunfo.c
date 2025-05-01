#include <stdio.h>

   //Adicionando variáveis. 
   char estado, estado2;
   char codigo[10], codigo2[10];
   char cidade[20], cidade2[20];
   unsigned long int populacao,populacao2;
   int pontosTuristicos, pontosTuristicos2;
   float area, area2, pib, pib2;

   //Adicionando variável super poder para somar todos os valores
   float superPoder1, superPoder2;
   //Adicionando variáveis de calculo.
   float densidadePopulacional1, densidadePopulacional2, pibPercapita1, pibPercapita2;

void entradaDados(){

//Adição de informações da carta 1.
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

    //Adição de informações da carta 2.
    printf("Insira as informações da segunda carta.\n");
    
    printf("Digite uma das letras entre 'A' e 'H' representando um de oito estados: ");
    scanf(" %c", &estado2);

    //Limpando o buffer depois de ler o estado2
    while(getchar() != '\n');

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

//Solução estruturada para executar os calculos.
float calculos(){
    //Formulas para calculo da densidade populacional e PIB per capita.
    densidadePopulacional1 = (float) populacao / area;
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPercapita1 = (float) (pib * 1000000000.0) / populacao;
    pibPercapita2 = (float) (pib2 * 1000000000.0) / populacao2;
    superPoder1 = (float) populacao + area + pib + pontosTuristicos + pibPercapita1 + (1 / densidadePopulacional1);
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1 / densidadePopulacional2);
}

void exibirDados(){
//Resultado e informações da cartas 1
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

printf("\n"); //Espaço para organização e melhor entendimento do usuário.

//Resultado e informações da cartas 2
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

printf("Comparação de cartas(Atenção sempre que o resultado da comparação for '1' a carta 1 vence, sempre que o resultado for '0' a carta 2 vence):\n");
printf("População: %d\n", populacao > populacao2);
printf("Área: %d\n", area > area2);
printf("PIB: %d\n", pib > pib2);
printf("Pontos Turísticos: %d\n", pontosTuristicos > pontosTuristicos2);
printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
printf("PIB per Capita: %d\n", pibPercapita1 > pibPercapita2);
printf("Super Poder: %d\n", superPoder1 > superPoder2);
}

int main(){

    entradaDados();
    calculos();
    exibirDados();
    
    return 0;
}
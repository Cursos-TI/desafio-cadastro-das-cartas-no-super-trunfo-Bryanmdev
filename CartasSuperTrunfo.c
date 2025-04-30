#include <stdio.h>

   //Adicionando variáveis. 
   char estado, estado2;
   char codigo[10], codigo2[10];
   char cidade[20], cidade2[20];
   int populacao,populacao2, pontosTuristicos, pontosTuristicos2;
   double area, area2, pib, pib2;

   //Adicionando variáveis de calculo.
   double densidadePopulacional1, densidadePopulacional2, pibPercapita1, pibPercapita2;

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
    scanf("%d", &populacao);

    printf("Área da cidade: ");
    scanf("%lf", &area);

    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &pib);

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
    scanf("%d", &populacao2);

    printf("Área da cidade: ");
    scanf("%lf", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &pib2);

    printf("numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

}

void calcularMedia(){
    //Formulas para calculo das medias.
    densidadePopulacional1 = populacao / area;
    densidadePopulacional2 = populacao2 / area2;
    pibPercapita1 = (pib * 1000000000.0) / populacao;
    pibPercapita2 = (pib2 * 1000000000.0) / populacao2;
}

void exibirDados(){
//Resultado e informações da cartas 1
printf("Carta 1:\nEstado: %c\n", estado);
printf("Código: %c%s\n", estado, codigo);
printf("Cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área: %.2f\n km²", area);
printf("PIB: %.2f bilhões de reais\n", pib);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
printf("PIB per Capita: %.2f reais\n", pibPercapita1);

printf("\n"); //Espaço para organização e melhor entendimento do usuário.

//Resultado e informações da cartas 2
printf("Carta 2:\nEstado: %c\n", estado2);
printf("Código: %c%s\n", estado2, codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n km²", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
printf("PIB per Capita: %.2f reais\n", pibPercapita2);
}

int main(){
    entradaDados();
    calcularMedia();
    exibirDados();
    return 0;
}
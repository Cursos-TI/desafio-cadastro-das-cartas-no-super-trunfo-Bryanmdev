#include <stdio.h>

int main() {
//Adicionando variáveis. 
char estado, estado2;
char codigo[10], codigo2[10];
char cidade[20], cidade2[20];
int populacao,populacao2, pontosTuristicos, pontosTuristicos2;
float area, area2, pib, pib2;

//Adição de informações da carta 1.
    printf("Insira as informações da primeira carta.\n");
    
    printf("Digite uma das letras entre 'A' e 'H' representando um de oito estados: ");
    scanf("%c", &estado);

    printf("Digite o código da carta (01, 02, 03 ou 04): ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("Numero de habitantes: ");
    scanf("%d", &populacao);

    printf("Área da cidade: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    //Adição de informações da carta 2.
    printf("Insira as informações da segunda carta.\n");
    
    printf("Digite uma das letras entre 'A' e 'H' representando um de oito estados: ");
    scanf(" %c", &estado2);

    // Limpando o buffer depois de ler o estado2
    while(getchar() != '\n');

    printf("Digite o código da carta (01, 02, 03 ou 04): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Numero de habitantes: ");
    scanf("%d", &populacao2);

    printf("Área da cidade: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

//Resultado e informações das cartas 1 e 2.
    printf("Carta 1:\nEstado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    printf("\n");

    printf("Carta 2:\nEstado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

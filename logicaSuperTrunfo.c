#include <stdio.h>


/*
Definição dos tipos das variáveis utilizadas
*/
int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    int resultado1, resultado2;
    int primeiroAtributo, segundoAtributo;
    
    /*
    Criação dos prompts de entradas para a função scanf para guardar os valores para as variáveis
    */

    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta: ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);
    printf("População: ");
    scanf(" %lu", &populacao1);
    printf("Área (km²): ");
    scanf(" %f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos1);
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0f) / populacao1;

    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf(" %lu", &populacao2);
    printf("Área (km²): ");
    scanf(" %f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0f) / populacao2;
// Trecho que imprimi todas as informações de entradas de valores das variáveis para as Cartas 1 e 2
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("O PIB per Capita é: %.2f reais\n", pibpercapita1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("O PIB per Capita é: %.2f reais\n", pibpercapita2);

    // Início do Jogo
    printf("\nBem-vindo ao jogo!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("1. Populacão\n");
    printf("2. Area\n");
    printf("3. Densidade Populacional\n");

    printf("Escolha a comparação:\n");
    scanf("%d", &primeiroAtributo);
/*
Definição dos testes lógicos para os 2 switches criados para os testes dos 2 atributos e definições do valores dos resultados
*/
    switch(primeiroAtributo) {
    case 1:
    printf("Você escolheu a opção População!\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;

    case 2:
    printf("Você escolheu a opção Area!\n");
    resultado1 = area1 > area2 ? 1 : 0;
    break;

    case 3:
    printf("Você escolheu a opção Densidade Populacional!\n");
    resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
    break;
    default :
    printf("Opção de jogo inválida\n");
    break;
    }

    printf("Escolha o segundo atributo.\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro!\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. Densidade Populacional\n");

    printf("Escolha a comparação:\n");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo){
        printf("Você escolheu o mesmo atributo\n");
    } else {
        switch (segundoAtributo) {
    case 1:
    printf("Você escolheu a opção População!\n");
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;

    case 2:
    printf("Você escolheu a opção Area!\n");
    resultado2 = area1 > area2 ? 1 : 0;
    break;

    case 3:
    printf("Você escolheu a opção Densidade Populacional!\n");
    resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
    break;
    default :
    printf("Opção de jogo inválida\n");
    break;
    }

        }
// Trecho de código demonstrativo para informar os dados finais processados e declaração de qual carta venceu o jogo !
        printf("\nComparando %s e %s...\n", cidade1, cidade2);
        printf("População: %d: x %d\n",populacao1, populacao2);
        printf("Area: %f x %f\n",area1, area2);
        printf("Densidade Populacional: %f x %f\n",densidadepopulacional1, densidadepopulacional2);
        printf("Resultado1: %d\n", resultado1);
        printf("Resultado2: %d\n", resultado2);
    if (resultado1 && resultado2 == 1){ 
    printf("\nParabéns, Carta 1 venceu!\n");
    }  else if (resultado1 != resultado2){
        printf("Empatou!\n");
    } else {
        printf("A Carta 2 venceu!\n");
    }
    
    
    return 0;
}

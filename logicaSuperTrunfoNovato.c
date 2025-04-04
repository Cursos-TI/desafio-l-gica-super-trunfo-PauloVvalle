#include <stdio.h>
#include <string.h>

int main(){
    // carta 1
    int numero_pontos_turisticios1, carta_atual1;
    char estado1[5], cidade1[50], codigo_carta1[5];
    float area1, pib1, densidade_populacional1, pib_per_capita1, populacao1, super_trunfo1, densidade_populacional1_invertida1;
    // carta 2
    int numero_pontos_turisticios2, carta_atual2;
    char estado2[5], cidade2[50], codigo_carta2[5];
    float area2, densidade_populacional2, pib2, populacao2, pib_per_capita2, super_trunfo2, densidade_populacional1_invertida2;
    // resultado
    long int resultadoP, resultadoA, resultadoPIB, resultadoPontos, resultadoD, resultadoPIBPC, resultadoSUPER;

    // entrada de dados carta 1
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a quantidade da população: \n");
    scanf("%f", &populacao1);

    printf("Digite a quantidade da área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite a quantidade do PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticios1);
    // carta 1
    carta_atual1 = 1;
    strcpy(codigo_carta1, "A01"); // usei strcpy para usar como string
    strcpy(estado1, "A"); // usei strcpy para usar como string
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) pib1 / populacao1;
    densidade_populacional1_invertida1 = (float) 1/densidade_populacional1;
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional1_invertida1);
    super_trunfo1 = (float) populacao1 + area1 + pib1 + numero_pontos_turisticios1 + densidade_populacional1_invertida1 + pib_per_capita1;

    // saida da carta 1
    printf("******************************************************\n");
    printf("carta: %d\n", carta_atual1);
    printf("carta: %s\n", codigo_carta1);
    printf("estado: %s\n", estado1);
    printf("cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f $\n", pib1);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticios1);
    printf("Densidade populacional: %.0f habitantes/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f $\n", pib_per_capita1);
    printf("super trunfo: %.2f\n", super_trunfo1);
    printf("******************************************************\n");

    printf("Agora crie sua nova carta!\n");
    // entrada carta 2
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade da população: \n");
    scanf("%f", &populacao2);

    printf("Digite a quantidade da área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite a quantidade do PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticios2);

    //carta 2
    carta_atual2 = 2;
    strcpy(codigo_carta2, "B01");
    strcpy(codigo_carta2, "B");
    densidade_populacional2 =  populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    densidade_populacional1_invertida2 = (float) 1/densidade_populacional2;
    printf("Densidade invertida: %.2f habitantes/km²\n", densidade_populacional1_invertida2);
    super_trunfo2 = (float) populacao2 + area2 + pib2 + numero_pontos_turisticios2 + densidade_populacional1_invertida2 + pib_per_capita2;

    // comparação entre as cartas
    resultadoP = populacao1 > populacao2;
    resultadoA = area1 > area2;
    resultadoPIB = pib1 > pib2;
    resultadoPontos = numero_pontos_turisticios1 > numero_pontos_turisticios2;
    resultadoD = densidade_populacional1 < densidade_populacional2;
    resultadoPIBPC = pib_per_capita1 > pib_per_capita2;
    resultadoSUPER = super_trunfo1 > super_trunfo2;


    // saida da carta 2
    printf("carta: %d\n", carta_atual2);
    printf("carta: %s\n", codigo_carta2);
    printf("estado: %s\n", estado2);
    printf("cidade: %s\n", cidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f $\n", pib2);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticios2);
    printf("Densidade populacional: %.0f habitantes/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f $\n", pib_per_capita2);
    printf("super trunfo: %.2f\n", super_trunfo2);
    printf("******************************************************\n");

    // resultado da comparação

    printf("*************** RESULTADO *****************\n");
    if (resultadoP)
    {
        printf("Carta 1 ganhou em população\n");
    } else
    {
        printf("Carta 2 ganhou em população\n");
    }
    if (resultadoA)
    {
        printf("Carta 1 ganhou em área\n");
    } else
    {
        printf("Carta 2 ganhou em área\n");
    }
    if (resultadoPIB)
    {
        printf("Carta 1 ganhou em PIB\n");
    } else
    {
        printf("Carta 2 ganhou em PIB\n");
    }
    if (resultadoPontos)
    {
        printf("Carta 1 ganhou em pontos turisticos\n");
    } else
    {
        printf("Carta 2 ganhou em pontos turisticos\n");
    } 
    if (resultadoD)
    {
        printf("Carta 1 ganhou em densidade populacional\n");
    } else
    {
        printf("Carta 2 ganhou em densidade populacional\n");
    }
    if (resultadoPIBPC)
    {
        printf("Carta 1 ganhou em PIB per capita\n");
    } else
    {
        printf("Carta 2 ganhou em PIB per capita\n");
    }
    if (resultadoSUPER)
    {
        printf("Carta 1 ganhou em super trunfo\n");
    } else
    {
        printf("Carta 2 ganhou em super trunfo\n");
    }
    printf("*******************************************\n");

    return 0;
}
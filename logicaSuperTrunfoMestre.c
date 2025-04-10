#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // carta 1
    int numero_pontos_turisticios1, carta_atual1, opcao, escolhaJogador, escolhaJogador2, escolhaComputador;
    char estado1[5], cidade1[50], codigo_carta1[5], nomeJogador[50], nomeatributo1[50], nomeatributo2[50];
    float area1, pib1, densidade_populacional1, pib_per_capita1, populacao1, super_trunfo1, densidade_populacional1_invertida1;
    float resultadoSoma1 = 0, resultadoSoma2 = 0, resultadoAtributocarta1_1, resultadoAtributocarta2_1, resultadoAtributocarta1_2, resultadoAtributocarta2_2;
    // carta 2
    int numero_pontos_turisticios2, carta_atual2;
    char estado2[5], cidade2[50], codigo_carta2[5];
    float area2, densidade_populacional2, pib2, populacao2, pib_per_capita2, super_trunfo2, densidade_populacional1_invertida2;
    // resultado atributo 1
    int resultadoP1, resultadoA1, resultadoPIB1, resultadoPontos1, resultadoD1, resultadoPIBPC1, resultadoSUPER1;
    // resultado atributo 2
    int resultadoP2, resultadoA2, resultadoPIB2, resultadoPontos2, resultadoD2, resultadoPIBPC2, resultadoSUPER2;
    // random - carta 1
    srand(time(0));
    populacao1 = rand() % 1000000 + 1;
    area1 = rand() % 1000000 + 1;
    pib1 = rand() % 1000000 + 1;
    numero_pontos_turisticios1 = rand() % 100 + 1;
    // random - carta 2
    populacao2 = rand() % 1000000 + 1;
    area2 = rand() % 1000000 + 1;
    pib2 = rand() % 1000000 + 1;
    numero_pontos_turisticios2 = rand() % 100 + 1;

    // menu jogador
    printf("*************** SUPER TRUNFO *****************\n");
    printf("*************** Menu Principal ***************\n");
    printf("1 - Jogar\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção:\n");
    printf("*********************************************\n");
    scanf("%d", &opcao);
    // menu prinicipal
    switch (opcao)
    {
    case 1:
        printf("Iniciando o game....\n");
        printf("*******************************************\n");
        getchar(); // Limpa o buffer do teclado
        printf("Digite o nome do jogador:\n");
        fgets(nomeJogador, sizeof(nomeJogador), stdin);
        printf("*******************************************\n");
        printf("Bem vindo %s", nomeJogador);
        printf("*******************************************\n");

        break;
    case 2:
        printf("********** Regras do jogo: **********\n");
        printf("1 - O jogo é jogado entre dois jogadores.\n");
        printf("2 - Cada jogador escolhe uma carta.\n");
        printf("3 - O jogador deve escolher um atributo para comparar.\n");
        printf("4 - O jogador que tiver o maior valor no atributo escolhido vence a rodada.\n");
        printf("5 - Para densidade populacional, vence a carta com menor valor.\n");
        printf("*************************************\n");
        exit(0);
        break;
    case 3:
        printf("Saindo do jogo....\n");
        printf("*******************************************\n");
        exit(0);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    // entrada de dados carta 1
    printf("*********************************************\n");
    printf("Gerando carta 1......\n");
    printf("*********************************************\n");
    // carta 1
    carta_atual1 = 1;
    strcpy(codigo_carta1, "A01");                   // usei strcpy para usar como string
    strcpy(estado1, "A");                           // usei strcpy para usar como string
    strcpy(cidade1, "Rio de janeiro");              // usei strcpy para usar como string
    nomeJogador[strcspn(nomeJogador, "\n")] = '\0'; // remove o '\n' do nome do jogador
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (float)pib1 / populacao1;
    densidade_populacional1_invertida1 = (float)1 / densidade_populacional1;
    super_trunfo1 = (float)populacao1 + area1 + pib1 + numero_pontos_turisticios1 + densidade_populacional1_invertida1 + pib_per_capita1;

    // carta 2
    carta_atual2 = 2;
    strcpy(codigo_carta2, "B01");
    strcpy(estado2, "B");
    strcpy(cidade2, "São paulo");
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (float)pib2 / populacao2;
    densidade_populacional1_invertida2 = (float)1 / densidade_populacional2;
    super_trunfo2 = (float)populacao2 + area2 + pib2 + numero_pontos_turisticios2 + densidade_populacional1_invertida2 + pib_per_capita2;

    // menu comparação
    printf("******************************************************\n");
    printf("Escolha dois atributo da carta que deseja comparar:\n");
    printf("******************************************************\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super trunfo\n");
    printf("******************************************************\n");
    scanf("%d", &escolhaJogador);
    printf("******************************************************\n");
    // switch menu comparação
    switch (escolhaJogador)
    {
    case 1:
        printf("%s - Escolheu População -\n", nomeJogador);
        resultadoP1 = populacao1 > populacao2 ? 1 : 0;
        resultadoSoma1 += populacao1, resultadoSoma2 += populacao2;
        resultadoAtributocarta1_1 = populacao1;
        resultadoAtributocarta2_1 = populacao2;
        strcpy(nomeatributo1, "População");
        break;
    case 2:
        printf("%s -Escolheu Área -\n", nomeJogador);
        resultadoA1 = area1 > area2 ? 1 : 0;
        resultadoSoma1 += area1, resultadoSoma2 += area2;
        resultadoAtributocarta1_1 = area1;
        resultadoAtributocarta2_1 = area2;
        strcpy(nomeatributo1, "Área");
        break;
    case 3:
        printf("%s -Escolheu PIB -\n", nomeJogador);
        resultadoPIB1 = pib1 > pib2 ? 1 : 0;
        resultadoSoma1 += pib1, resultadoSoma2 += pib2;
        resultadoAtributocarta1_1 = pib1;
        resultadoAtributocarta2_1 = pib2;
        strcpy(nomeatributo1, "PIB");
        break;
    case 4:
        printf("%s -Escolheu Pontos turisticos -\n", nomeJogador);
        resultadoPontos1 = numero_pontos_turisticios1 > numero_pontos_turisticios2 ? 1 : 0;
        resultadoSoma1 += numero_pontos_turisticios1, resultadoSoma2 += numero_pontos_turisticios2;
        resultadoAtributocarta1_1 = numero_pontos_turisticios1;
        resultadoAtributocarta2_1 = numero_pontos_turisticios2;
        strcpy(nomeatributo1, "Pontos turisticos");
        break;
    case 5:
        printf("%s -Escolheu Densidade populacional -\n", nomeJogador);
        resultadoD1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        resultadoSoma1 += densidade_populacional1, resultadoSoma2 += densidade_populacional2;
        resultadoAtributocarta1_1 = densidade_populacional1;
        resultadoAtributocarta2_1 = densidade_populacional2;
        strcpy(nomeatributo1, "Densidade populacional");
        break;
    case 6:
        printf("%s -Escolheu PIB per capita -\n", nomeJogador);
        resultadoPIBPC1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
        resultadoSoma1 += pib_per_capita1, resultadoSoma2 += pib_per_capita2;
        resultadoAtributocarta1_1 = pib_per_capita1;
        resultadoAtributocarta2_1 = pib_per_capita2;
        strcpy(nomeatributo1, "PIB per capita");
        break;
    case 7:
        printf("%s -Escolheu Super trunfo -\n", nomeJogador);
        resultadoSUPER1 = super_trunfo1 > super_trunfo2 ? 1 : 0;
        resultadoSoma1 += super_trunfo1, resultadoSoma2 += super_trunfo2;
        resultadoAtributocarta1_1 = super_trunfo1;
        resultadoAtributocarta2_1 = super_trunfo2;
        strcpy(nomeatributo1, "Super trunfo");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    // switch menu segundo atributo
    printf("******************************************************\n");
    printf("Escolha o segundo atributo da carta que deseja comparar:\n");
    printf("******************************************************\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super trunfo\n");
    printf("******************************************************\n");
    scanf("%d", &escolhaJogador2);
    printf("******************************************************\n");
    if (escolhaJogador == escolhaJogador2)
    {
        printf("%s - Erro! Você escolheo o mesmo atributo! -\n", nomeJogador);
    }
    else
    {
        switch (escolhaJogador2)
        {
        case 1:
            printf("%s - Escolheu População -\n", nomeJogador);
            resultadoP2 = populacao1 > populacao2 ? 1 : 0;
            resultadoSoma1 += populacao1, resultadoSoma2 += populacao2;
            resultadoAtributocarta1_2 = populacao1;
            resultadoAtributocarta2_2 = populacao2;
            strcpy(nomeatributo2, "População");
            break;
        case 2:
            printf("%s -Escolheu Área -\n", nomeJogador);
            resultadoA2 = area1 > area2 ? 1 : 0;
            resultadoSoma1 += area1, resultadoSoma2 += area2;
            resultadoAtributocarta1_2 = area1;
            resultadoAtributocarta2_2 = area2;
            strcpy(nomeatributo2, "Área");
            break;
        case 3:
            printf("%s -Escolheu PIB -\n", nomeJogador);
            resultadoPIB2 = pib1 > pib2 ? 1 : 0;
            resultadoSoma1 += pib1, resultadoSoma2 += pib2;
            resultadoAtributocarta1_2 = pib1;
            resultadoAtributocarta2_2 = pib2;
            strcpy(nomeatributo2, "PIB");
            break;
        case 4:
            printf("%s -Escolheu Pontos turisticos -\n", nomeJogador);
            resultadoPontos2 = numero_pontos_turisticios1 > numero_pontos_turisticios2 ? 1 : 0;
            resultadoSoma1 += numero_pontos_turisticios1, resultadoSoma2 += numero_pontos_turisticios2;
            resultadoAtributocarta1_2 = numero_pontos_turisticios1;
            resultadoAtributocarta2_2 = numero_pontos_turisticios2;
            strcpy(nomeatributo2, "Pontos turisticos");
            break;
        case 5:
            printf("%s -Escolheu Densidade populacional -\n", nomeJogador);
            resultadoD2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
            resultadoSoma1 += densidade_populacional1, resultadoSoma2 += densidade_populacional2;
            resultadoAtributocarta1_2 = densidade_populacional1;
            resultadoAtributocarta2_2 = densidade_populacional2;
            strcpy(nomeatributo2, "Densidade populacional");
            break;
        case 6:
            printf("%s -Escolheu PIB per capita -\n", nomeJogador);
            resultadoPIBPC2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
            resultadoSoma1 += pib_per_capita1, resultadoSoma2 += pib_per_capita2;
            resultadoAtributocarta1_2 = pib_per_capita1;
            resultadoAtributocarta2_2 = pib_per_capita2;
            strcpy(nomeatributo2, "PIB per capita");
            break;
        case 7:
            printf("%s -Escolheu Super trunfo -\n", nomeJogador);
            resultadoSUPER2 = super_trunfo1 > super_trunfo2 ? 1 : 0;
            resultadoSoma1 += super_trunfo1, resultadoSoma2 += super_trunfo2;
            resultadoAtributocarta1_2 = super_trunfo1;
            resultadoAtributocarta2_2 = super_trunfo2;
            strcpy(nomeatributo2, "Super trunfo");
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    }

    // entrada de dados carta 2
    printf("*********************************************\n");
    printf("Gerando carta 2......\n");
    printf("*********************************************\n");

    // resultado

    // saida da carta 1
    printf("********************* JOGADOR 1 ***********************\n");
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

    // saida da carta 2
    printf("********************* JOGADOR 2 ***********************\n");
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

    // vencedor
    printf("*************** VENCEDOR *****************\n");
    if ((resultadoP1 && resultadoP2) && (resultadoSoma1 > resultadoSoma2))
    {
        printf("Carta 1 Venceu\n");
        printf("O soma do primeiro é atributo: %s:%.0f\n", nomeatributo1, resultadoSoma1);
        printf("O soma do segundo atributo: %s:%.0f\n", nomeatributo2, resultadoSoma2);
    }
    else if ((resultadoP2 != resultadoP1) && (resultadoSoma1 < resultadoSoma2))
    {
        printf("Carta 2 ganhou\n");
        printf("O soma do primeiro é atributo: %s:%.0f\n", nomeatributo1, resultadoSoma1);
        printf("O soma do segundo atributo: %s:%.0f\n", nomeatributo2, resultadoSoma2);
    }
    else
    {
        printf("Empate!!\n");
    };

    // jogador
    printf("*******************************************\n");
    printf("%s escolheu: \n", nomeJogador, nomeatributo1, nomeatributo2);
    printf("*******************************************\n");
    // resultado carta 1
    printf("####### Carta 1 #######\n");
    printf("cidade: %s\n", cidade1);
    printf("Resultado primeiro atributo: %s:%.0f\n", nomeatributo1, resultadoAtributocarta1_1);
    printf("Resultado segundo atributo: %s:%.0f\n", nomeatributo1, resultadoAtributocarta1_2);
    printf("Resultado soma dos atributos: %s:%.0f\n", nomeatributo1, resultadoSoma1);
    printf("#######################\n");
    // resultado carta 2
    printf("####### Carta 2 #######\n");
    printf("cidade: %s\n", cidade2);
    printf("Resultado primeiro atributo: %s:%.0f\n", nomeatributo2, resultadoAtributocarta2_1);
    printf("Resultado segundo atributo: %s:%.0f\n", nomeatributo2, resultadoAtributocarta2_2);
    printf("Resultado soma dos atributo: %s:%.0f\n", nomeatributo2, resultadoSoma2);
    printf("#######################\n");
    printf("*********************************************\n");
    printf("Obrigado %s por jogar o meu jogo!\n", nomeJogador);
    printf("*************** FIM DO JOGO *****************\n");

    return 0;
};
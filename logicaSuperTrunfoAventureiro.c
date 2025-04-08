#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // carta 1
    int numero_pontos_turisticios1, carta_atual1, opcao, escolhaJogador, escolhaComputador;
    char estado1[5], cidade1[50], codigo_carta1[5], nomeJogador[50];
    float area1, pib1, densidade_populacional1, pib_per_capita1, populacao1, super_trunfo1, densidade_populacional1_invertida1;
    // carta 2
    int numero_pontos_turisticios2, carta_atual2;
    char estado2[5], cidade2[50], codigo_carta2[5];
    float area2, densidade_populacional2, pib2, populacao2, pib_per_capita2, super_trunfo2, densidade_populacional1_invertida2;
    // resultado
    int resultadoP, resultadoA, resultadoPIB, resultadoPontos, resultadoD, resultadoPIBPC, resultadoSUPER;
    // random
    srand(time(0));
    populacao1 = rand() % 1000000 + 1;
    area1 = rand() % 1000000 + 1;
    pib1 = rand() % 1000000 + 1;
    numero_pontos_turisticios1 = rand() % 100 + 1;

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
    strcpy(codigo_carta1, "A01");      // usei strcpy para usar como string
    strcpy(estado1, "A");              // usei strcpy para usar como string
    strcpy(cidade1, "Rio de janeiro"); // usei strcpy para usar como string
    nomeJogador[strcspn(nomeJogador, "\n")] = '\0'; // remove o '\n' do nome do jogador
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (float)pib1 / populacao1;
    densidade_populacional1_invertida1 = (float)1 / densidade_populacional1;
    super_trunfo1 = (float)populacao1 + area1 + pib1 + numero_pontos_turisticios1 + densidade_populacional1_invertida1 + pib_per_capita1;
    populacao2 = rand() % 1000000 + 1;
    area2 = rand() % 1000000 + 1;
    pib2 = rand() % 1000000 + 1;
    numero_pontos_turisticios2 = rand() % 100 + 1;

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

    // menu comparação
    printf("******************************************************\n");
    printf("Escolha um atributo da carta que deseja comparar:\n");
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
    // switch menu comparação computador
    switch (escolhaJogador)
    {
    case 1:
        printf("%s - Escolheu População -\n", nomeJogador);
        break;
    case 2:
        printf("%s -Escolheu Área -\n", nomeJogador);
        break;
    case 3:
        printf("%s -Escolheu PIB -\n", nomeJogador);
        break;
    case 4:
        printf("%s -Escolheu Pontos turisticos -\n", nomeJogador);
        break;
    case 5:
        printf("%s -Escolheu Densidade populacional -\n", nomeJogador);
        break;
    case 6:
        printf("%s -Escolheu PIB per capita -\n", nomeJogador);
        break;
    case 7:
        printf("%s -Escolheu Super trunfo -\n", nomeJogador);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    // entrada de dados carta 2
    printf("*********************************************\n");
    printf("Gerando carta 2......\n");
    printf("*********************************************\n");

    // carta 2
    carta_atual2 = 2;
    strcpy(codigo_carta2, "B01");
    strcpy(estado2, "B");
    strcpy(cidade2, "São paulo");
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;
    densidade_populacional1_invertida2 = (float) / densidade_populacional2;
    super_trunfo2 = (float)populacao2 + area2 + pib2 + numero_pontos_turisticios2 + densidade_populacional1_invertida2 + pib_per_capita2;

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

    // resultado da comparação
    printf("*************** VENCEDOR *****************\n");
    if (escolhaJogador == 1) {
        if (populacao1 > populacao2) {
            printf("Carta 1 ganhou em população\n");
            printf("O atributo escolhido foi: população\n");
            printf("O valor da população: %.0f\n", populacao1);
        } else if (populacao1 < populacao2) {
            printf("Carta 2 ganhou em população\n");
            printf("O atributo escolhido foi: população\n");
            printf("O valor da população: %.0f\n", populacao2);
        } else {
            printf("Empate em população\n");
        }
    } else if (escolhaJogador == 2) {
        if (area1 > area2) {
            printf("Carta 1 ganhou em área\n");
            printf("O atributo escolhido foi: área\n");
            printf("O valor da área: %.2f km²\n", area1);
        } else if (area1 < area2) {
            printf("Carta 2 ganhou em área\n");
            printf("O atributo escolhido foi: área\n");
            printf("O valor da área: %.2f km²\n", area2);
        } else {
            printf("Empate em área\n");
        }
    } else if (escolhaJogador == 3) {
        if (pib1 > pib2) {
            printf("Carta 1 ganhou em PIB\n");
            printf("O atributo escolhido foi: PIB\n");
            printf("O valor do PIB: %.2f $\n", pib1);
        } else if (pib1 < pib2) {
            printf("Carta 2 ganhou em PIB\n");
            printf("O atributo escolhido foi: PIB\n");
            printf("O valor do PIB: %.2f $\n", pib2);
        } else {
            printf("Empate em PIB\n");
        }
    } else if (escolhaJogador == 4) {
        if (numero_pontos_turisticios1 > numero_pontos_turisticios2) {
            printf("Carta 1 ganhou em pontos turisticos\n");
            printf("O atributo escolhido foi: pontos turisticos\n");
            printf("O valor dos pontos turisticos: %d\n", numero_pontos_turisticios1);
        } else if (numero_pontos_turisticios1 < numero_pontos_turisticios2) {
            printf("Carta 2 ganhou em pontos turisticos\n");
            printf("O atributo escolhido foi: pontos turisticos\n");
            printf("O valor dos pontos turisticos: %d\n", numero_pontos_turisticios2);
        } else {
            printf("Empate em pontos turisticos\n");
        }
    } else if (escolhaJogador == 5) {
        if (densidade_populacional1 < densidade_populacional2) {
            printf("Carta 1 ganhou em densidade populacional\n");
            printf("O atributo escolhido foi: densidade populacional\n");
            printf("O valor da densidade populacional: %.0f habitantes/km²\n", densidade_populacional1);
        } else if (densidade_populacional1 > densidade_populacional2) {
            printf("Carta 2 ganhou em densidade populacional\n");
            printf("O atributo escolhido foi: densidade populacional\n");
            printf("O valor da densidade populacional: %.0f habitantes/km²\n", densidade_populacional2);
        } else {
            printf("Empate em densidade populacional\n");
        }
    } else if (escolhaJogador == 6) {
        if (pib_per_capita1 > pib_per_capita2) {
            printf("Carta 1 ganhou em PIB per capita\n");
            printf("O atributo escolhido foi: PIB per capita\n");
            printf("O valor do PIB per capita: %.2f $\n", pib_per_capita1);
        } else if (pib_per_capita1 < pib_per_capita2) {
            printf("Carta 2 ganhou em PIB per capita\n");
            printf("O atributo escolhido foi: PIB per capita\n");
            printf("O valor do PIB per capita: %.2f $\n", pib_per_capita2);
        } else {
            printf("Empate em PIB per capita\n");
        }
    } else if (escolhaJogador == 7) {
        if (super_trunfo1 > super_trunfo2) {
            printf("Carta 1 ganhou em super trunfo\n");
            printf("O atributo escolhido foi: super trunfo\n");
            printf("O valor do super trunfo: %.2f\n", super_trunfo1);
        } else if (super_trunfo1 <
            super_trunfo2) {
            printf("Carta 2 ganhou em super trunfo\n");
            printf("O atributo escolhido foi: super trunfo\n");
            printf("O valor do super trunfo: %.2f\n", super_trunfo2);
        } else {
            printf("Empate em super trunfo\n");
        }
    };
    printf("*******************************************\n");
    printf("Obrigado %s por jogar o meu jogo!\n", nomeJogador);
    printf("*************** FIM DO JOGO *****************\n");

    return 0;
};
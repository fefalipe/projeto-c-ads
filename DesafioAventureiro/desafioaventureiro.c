/*
 * Meu Jogo Super Trunfo Interativo em C
 * Autor: Felipe Tavares
 * Data: 12 de agosto de 2025
 * Descrição: Este programa implementa um menu interativo com 'switch' e uma
 * lógica de comparação com 'if-else' aninhado para determinar o vencedor
 * ou um empate entre duas cartas pré-definidas.
 */

#include <stdio.h>

int main() {

    // =================================================================================
    // ETAPA 1: MEUS DADOS DAS CARTAS (PRÉ-DEFINIDOS)
    // =================================================================================
    // Vou usar os mesmos dados do desafio anterior para manter o foco na nova lógica.

    // --- Dados da minha Carta 1 (São Paulo) ---
    char  estado1[] = "SP";
    char  cidade1[] = "Sao Paulo";
    int   populacao1 = 12396372;
    float area1 = 1521.11;
    float pib1 = 763.8;
    int   pontosTuristicos1 = 50;

    // --- Dados da minha Carta 2 (Rio de Janeiro) ---
    // Para testar o empate, vou deixar a população da carta 2 igual à da carta 1.
    char  estado2[] = "RJ";
    char  cidade2[] = "Rio de Janeiro";
    int   populacao2 = 12396372; // Alterado para testar o empate!
    float area2 = 1200.32;
    float pib2 = 356.9;
    int   pontosTuristicos2 = 30;


    // =================================================================================
    // ETAPA 2: MEUS CÁLCULOS DOS ATRIBUTOS DERIVADOS
    // =================================================================================
    // Vou calcular a densidade e o pib per capita como antes.
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;


    // =================================================================================
    // ETAPA 3: MEU MENU INTERATIVO E LEITURA DA ESCOLHA
    // =================================================================================
    // Agora vou criar a interface para que o jogador possa interagir.

    printf("=======================================\n");
    printf("--- Batalha Super Trunfo ---\n");
    printf("=======================================\n\n");
    printf("Escolha o atributo para a batalha:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica (menor valor vence)\n");
    printf("\nDigite sua escolha (1-5): ");

    // Vou criar uma variável para guardar a escolha do usuário.
    int escolha;
    // E usar o scanf para ler o número que ele digitar.
    scanf("%d", &escolha);

    printf("\n---------------------------------------\n");


    // =================================================================================
    // ETAPA 4: MINHA LÓGICA DE DECISÃO COM SWITCH
    // =================================================================================
    // O 'switch' vai olhar o valor da minha variável 'escolha' e pular para o
    // 'case' correspondente.

    switch (escolha) {
        // Se o usuário digitou 1, o código deste bloco será executado.
        case 1:
            printf("Atributo escolhido: Populacao\n\n");
            printf("Carta 1 (%s): %d\n", cidade1, populacao1);
            printf("Carta 2 (%s): %d\n\n", cidade2, populacao2);

            // Aqui uso a lógica if/else if/else para os 3 resultados possíveis.
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break; // O 'break' é crucial, ele impede a execução dos próximos 'case'.

        // Se o usuário digitou 2, este bloco será executado.
        case 2:
            printf("Atributo escolhido: Area\n\n");
            printf("Carta 1 (%s): %.2f km2\n", cidade1, area1);
            printf("Carta 2 (%s): %.2f km2\n\n", cidade2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        // E assim por diante para os outros atributos...
        case 3:
            printf("Atributo escolhido: PIB\n\n");
            printf("Carta 1 (%s): %.2f bilhoes\n", cidade1, pib1);
            printf("Carta 2 (%s): %.2f bilhoes\n\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turisticos\n\n");
            printf("Carta 1 (%s): %d\n", cidade1, pontosTuristicos1);
            printf("Carta 2 (%s): %d\n\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        // Este é o caso especial da Densidade, onde a regra é invertida.
        case 5:
            printf("Atributo escolhido: Densidade Demografica (menor vence)\n\n");
            printf("Carta 1 (%s): %.2f hab/km2\n", cidade1, densidade1);
            printf("Carta 2 (%s): %.2f hab/km2\n\n", cidade2, densidade2);

            // Vou inverter os operadores na minha condição.
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        // O 'default' é o bloco executado se a minha variável 'escolha' não
        // corresponder a nenhum dos 'case' acima. É meu tratamento de erro.
        default:
            printf("Opcao invalida! Por favor, execute novamente e escolha um numero de 1 a 5.\n");
            break;
    }

    printf("\n---------------------------------------\n");

    return 0; // Fim do meu programa.
}
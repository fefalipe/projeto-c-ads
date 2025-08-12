/*
 * Meu Jogo Super Trunfo - Versão Mestre
 * Autor: Felipe Tavares
 * Data: 12 de agosto de 2025
 * Descrição: Versão final do jogo que permite ao jogador escolher dois atributos
 * para uma batalha. O programa usa menus dinâmicos, switch, if-else aninhado
 * e o operador ternário para determinar o vencedor pela soma dos atributos.
 */

#include <stdio.h>
#include <string.h> // Vou precisar para copiar strings (strcpy)

int main() {

    // =================================================================================
    // ETAPA 1: MEUS DADOS E CÁLCULOS INICIAIS
    // =================================================================================
    // Vou partir dos mesmos dados e cálculos de atributos do nível anterior.

    // --- Dados da minha Carta 1 (São Paulo) ---
    char  estado1[] = "SP", cidade1[] = "Sao Paulo";
    int   populacao1 = 12396372;
    float area1 = 1521.11, pib1 = 763.8;
    int   pontosTuristicos1 = 50;

    // --- Dados da minha Carta 2 (Rio de Janeiro) ---
    char  estado2[] = "RJ", cidade2[] = "Rio de Janeiro";
    int   populacao2 = 6775561;
    float area2 = 1200.32, pib2 = 356.9;
    int   pontosTuristicos2 = 50; // Alterado para testar empate

    // --- Cálculos Derivados ---
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;


    // =================================================================================
    // ETAPA 2: MINHA INTERAÇÃO COM O JOGADOR
    // =================================================================================
    // Vou declarar todas as variáveis que preciso para a lógica da rodada.
    int escolha1, escolha2;
    char nome_attr1[30], nome_attr2[30]; // Para guardar o nome dos atributos escolhidos
    float valor_attr1_c1, valor_attr1_c2; // Valores do primeiro atributo para as cartas 1 e 2
    float valor_attr2_c1, valor_attr2_c2; // Valores do segundo atributo para as cartas 1 e 2

    // --- Escolha do Primeiro Atributo ---
    printf("=======================================\n");
    printf("--- Batalha Mestre Super Trunfo ---\n");
    printf("=======================================\n\n");
    printf("Jogador, escolha o PRIMEIRO atributo para a batalha:\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
    printf("\nDigite sua escolha (1-5): ");
    scanf("%d", &escolha1);

    // --- Escolha do Segundo Atributo (Menu Dinâmico) ---
    printf("\nAgora, escolha o SEGUNDO atributo (diferente do primeiro):\n");
    // Aqui está minha lógica de menu dinâmico: vou usar 'if' para não mostrar a opção já escolhida.
    if (escolha1 != 1) { printf("1. Populacao\n"); }
    if (escolha1 != 2) { printf("2. Area\n"); }
    if (escolha1 != 3) { printf("3. PIB\n"); }
    if (escolha1 != 4) { printf("4. Pontos Turisticos\n"); }
    if (escolha1 != 5) { printf("5. Densidade Demografica\n"); }
    printf("\nDigite sua escolha: ");
    scanf("%d", &escolha2);

    // Validação para garantir que as escolhas são diferentes.
    if (escolha1 == escolha2) {
        printf("\nErro: Voce escolheu o mesmo atributo duas vezes! Fim de jogo.\n");
        return 1; // Termino o programa com um código de erro.
    }

    // =================================================================================
    // ETAPA 3: MINHA BUSCA PELOS VALORES DOS ATRIBUTOS
    // =================================================================================
    // Vou usar 'switch' para pegar os valores e nomes corretos com base nas escolhas.

    // Switch para a primeira escolha
    switch (escolha1) {
        case 1: strcpy(nome_attr1, "Populacao"); valor_attr1_c1 = (float)populacao1; valor_attr1_c2 = (float)populacao2; break;
        case 2: strcpy(nome_attr1, "Area"); valor_attr1_c1 = area1; valor_attr1_c2 = area2; break;
        case 3: strcpy(nome_attr1, "PIB"); valor_attr1_c1 = pib1; valor_attr1_c2 = pib2; break;
        case 4: strcpy(nome_attr1, "Pontos Turisticos"); valor_attr1_c1 = (float)pontosTuristicos1; valor_attr1_c2 = (float)pontosTuristicos2; break;
        case 5: strcpy(nome_attr1, "Densidade"); valor_attr1_c1 = densidade1; valor_attr1_c2 = densidade2; break;
        default: printf("Primeira escolha invalida!\n"); return 1;
    }

    // Switch para a segunda escolha
    switch (escolha2) {
        case 1: strcpy(nome_attr2, "Populacao"); valor_attr2_c1 = (float)populacao1; valor_attr2_c2 = (float)populacao2; break;
        case 2: strcpy(nome_attr2, "Area"); valor_attr2_c1 = area1; valor_attr2_c2 = area2; break;
        case 3: strcpy(nome_attr2, "PIB"); valor_attr2_c1 = pib1; valor_attr2_c2 = pib2; break;
        case 4: strcpy(nome_attr2, "Pontos Turisticos"); valor_attr2_c1 = (float)pontosTuristicos1; valor_attr2_c2 = (float)pontosTuristicos2; break;
        case 5: strcpy(nome_attr2, "Densidade"); valor_attr2_c1 = densidade1; valor_attr2_c2 = densidade2; break;
        default: printf("Segunda escolha invalida!\n"); return 1;
    }


    // =================================================================================
    // ETAPA 4: MINHA LÓGICA DE SOMA E DECISÃO FINAL
    // =================================================================================
    // A regra da Densidade (menor é melhor) precisa ser aplicada antes da soma.
    // Onde posso usar o operador ternário de forma elegante? Aqui!

    // Se o primeiro atributo for Densidade, vou inverter o valor para que maior seja melhor na soma.
    valor_attr1_c1 = (escolha1 == 5) ? (100000 - valor_attr1_c1) : valor_attr1_c1;
    valor_attr1_c2 = (escolha1 == 5) ? (100000 - valor_attr1_c2) : valor_attr1_c2;

    // Faço o mesmo para o segundo atributo.
    valor_attr2_c1 = (escolha2 == 5) ? (100000 - valor_attr2_c1) : valor_attr2_c1;
    valor_attr2_c2 = (escolha2 == 5) ? (100000 - valor_attr2_c2) : valor_attr2_c2;
    // (Usei um número grande como 100000 para a inversão, assumindo que a densidade não passará disso).

    // Agora, vou calcular a soma final para cada carta.
    float soma_carta1 = valor_attr1_c1 + valor_attr2_c1;
    float soma_carta2 = valor_attr1_c2 + valor_attr2_c2;

    // Exibição final e clara dos resultados.
    printf("\n---------------------------------------\n");
    printf("--- Resultado da Batalha ---\n\n");
    printf("                     %s (%s) vs. %s (%s)\n", cidade1, estado1, cidade2, estado2);
    printf("Atributo 1: %-15s | %.2f vs %.2f\n", nome_attr1, valor_attr1_c1, valor_attr1_c2);
    printf("Atributo 2: %-15s | %.2f vs %.2f\n", nome_attr2, valor_attr2_c1, valor_attr2_c2);
    printf("---------------------------------------\n");
    printf("SOMA CARTA 1: %.2f\n", soma_carta1);
    printf("SOMA CARTA 2: %.2f\n", soma_carta2);
    printf("---------------------------------------\n\n");

    // Decisão final com if / else if / else.
    if (soma_carta1 > soma_carta2) {
        printf("VENCEDOR: Carta 1 (%s) vence a rodada!\n", cidade1);
    } else if (soma_carta2 > soma_carta1) {
        printf("VENCEDOR: Carta 2 (%s) vence a rodada!\n", cidade2);
    } else {
        printf("VENCEDOR: Empate!\n");
    }
    printf("\n");

    return 0; // Missão cumprida!
}
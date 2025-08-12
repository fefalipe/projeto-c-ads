/*
 * Meu Primeiro Desafio de Lógica de Jogo em C
 * Autor: Felipe Tavares
 * Data: 12 de agosto de 2025
 * Descrição: Este programa implementa a lógica de comparação do jogo Super Trunfo
 * para duas cartas com dados pré-definidos, focando no uso de if-else.
 */

// Para começar, vou incluir as bibliotecas que sei que vou precisar.
// A 'stdio.h' é para as funções de entrada e saída, como a printf, que vou usar bastante para mostrar os resultados.
#include <stdio.h>
// A 'string.h' me dá acesso a funções úteis para trabalhar com texto (strings).
#include <string.h>


// Todo programa em C começa pela função 'main'. Vou declarar a minha aqui.
// O 'int' indica que ela retornará um número inteiro, e o 'return 0;' no final
// será meu jeito de dizer ao sistema operacional que meu programa rodou sem erros.
int main() {

    // =================================================================================
    // ETAPA 1: MINHA DEFINIÇÃO DAS CARTAS (DADOS PRÉ-DEFINIDOS)
    // =================================================================================
    // O desafio pediu para usar dados pré-definidos para que eu possa focar 100%
    // no aprendizado da lógica 'if-else', sem me preocupar com a entrada de dados (scanf).
    // Então, vou declarar minhas variáveis e já inicializá-las com os valores das cartas.

    // --- Dados da minha Carta 1 (São Paulo) ---
    // Vou criar um conjunto completo de variáveis para cada atributo desta carta.
    char  estado1[] = "SP";                   // Uso 'char[]' para armazenar texto (string).
    char  cidade1[] = "Sao Paulo";
    int   populacao1 = 12396372;               // 'int' é perfeito para números inteiros como população.
    float area1 = 1521.11;                    // Para números com casas decimais, como área, vou usar 'float'.
    float pib1 = 763.8;                        // O PIB também tem decimais, então será float.
    int   pontosTuristicos1 = 50;

    // --- Dados da minha Carta 2 (Rio de Janeiro) ---
    // Agora, vou fazer exatamente o mesmo para a segunda carta.
    char  estado2[] = "RJ";
    char  cidade2[] = "Rio de Janeiro";
    int   populacao2 = 6775561;
    float area2 = 1200.32;
    float pib2 = 356.9;
    int   pontosTuristicos2 = 30;


    // =================================================================================
    // ETAPA 2: MEUS CÁLCULOS DOS ATRIBUTOS DERIVADOS
    // =================================================================================
    // Assim como no desafio anterior, preciso calcular a densidade e o pib per capita
    // antes de poder usá-los na comparação.

    // Vou declarar as variáveis para guardar os resultados dos meus cálculos.
    float densidade1, pibPerCapita1;
    float densidade2, pibPerCapita2;

    // A fórmula da densidade é População / Área. Vou usar um '(float)' para ter certeza
    // que a divisão será feita com precisão decimal, mesmo que a população seja um 'int'.
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // A fórmula do PIB per Capita é PIB / População. O desafio informa que o PIB está em bilhões.
    // Para ter o valor real, preciso multiplicar o PIB por 1.000.000.000 antes de dividir.
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;


    // =================================================================================
    // ETAPA 3: HORA DA BATALHA! MINHA LÓGICA DE COMPARAÇÃO COM IF-ELSE
    // =================================================================================
    // Aqui está a parte principal do desafio. Vou escolher um atributo para a batalha.
    // Começarei pela POPULAÇÃO, seguindo o exemplo.

    printf("=======================================\n");
    printf("--- Batalha Super Trunfo ---\n");
    printf("=======================================\n\n");

    // Para o resultado ficar claro, primeiro vou imprimir qual atributo estou comparando e os valores de cada carta.
    printf("Comparacao de cartas (Atributo: Populacao):\n\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", cidade2, estado2, populacao2);

    // Agora, vou usar o 'if' para tomar uma decisão. A condição que vou testar é se a população da minha carta 1 é maior que a da carta 2.
    if (populacao1 > populacao2) {
        // Se a condição (populacao1 > populacao2) for VERDADEIRA, o código dentro deste bloco será executado.
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        // Se a condição for FALSA (ou seja, se populacao1 não for maior que populacao2), o programa executa o bloco 'else'.
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Vou adicionar uma linha de separação para organizar melhor a saída.
    printf("\n---------------------------------------\n\n");

    // --- MEU SEGUNDO EXEMPLO: Comparando por Densidade Populacional ---
    // Vou fazer uma segunda comparação para praticar a regra inversa. Para a densidade, o MENOR valor vence.
    printf("Comparacao de cartas (Atributo: Densidade Populacional):\n\n");
    printf("Carta 1 - %s (%s): %.2f hab/km2\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f hab/km2\n\n", cidade2, estado2, densidade2);

    // A lógica é a mesma, mas agora vou inverter o operador de comparação.
    // Vou testar se a densidade da minha carta 1 é MENOR ('<') que a da carta 2.
    if (densidade1 < densidade2) {
        // Se for verdade que a densidade da Carta 1 é menor, ela vence.
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        // Caso contrário, a Carta 2 é a vencedora.
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Meu programa termina aqui, então retorno 0 para indicar que foi um sucesso.
    return 0;
}
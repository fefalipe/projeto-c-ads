// Incluímos as bibliotecas necessárias.
#include <stdio.h>
#include <string.h>

// A função 'getchar()' será usada para limpar o buffer de entrada.

int main() {

    // =================================================================
    // ETAPA 1: DECLARAÇÃO DE VARIÁVEIS
    // =================================================================
    // A variável 'populacao' foi alterada para 'unsigned long int'.
    // Adicionamos variáveis para o Super Poder e para os resultados das vitórias.

    // --- Variáveis da Carta 1 ---
    char  estado1;
    char  codigo1[5];
    char  cidade1[50];
    unsigned long int populacao1; // MODIFICADO para suportar números maiores
    float area1;
    float pib1;
    int   pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1; // NOVO

    // --- Variáveis da Carta 2 ---
    char  estado2;
    char  codigo2[5];
    char  cidade2[50];
    unsigned long int populacao2; // MODIFICADO
    float area2;
    float pib2;
    int   pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2; // NOVO

    // --- Variáveis para armazenar o resultado das comparações ---
    int vitoriaPopulacao;
    int vitoriaArea;
    int vitoriaPib;
    int vitoriaPontos;
    int vitoriaDensidade;
    int vitoriaPibPerCapita;
    int vitoriaSuperPoder;


    // =================================================================
    // ETAPA 2: CADASTRO DAS CARTAS (ENTRADA DE DADOS)
    // =================================================================
    // A única mudança aqui é o uso de '%lu' para ler a população.

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (uma letra de A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar(); // Limpa o buffer
    printf("Digite o nome da cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1); // MODIFICADO para ler unsigned long int
    printf("Digite a area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (uma letra de A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    getchar(); // Limpa o buffer
    printf("Digite o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2); // MODIFICADO para ler unsigned long int
    printf("Digite a area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // =================================================================
    // ETAPA 3: REALIZAR OS CÁLCULOS
    // =================================================================
    // Mantemos os cálculos do nível anterior e adicionamos o do Super Poder. 

    // Cálculos para a Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    // O Super Poder soma todos os atributos numéricos. 
    // Para a densidade, usamos o inverso (1/densidade), pois menor é melhor. 
    // Usamos (float) para garantir que todos os tipos sejam somados como float.
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Cálculos para a Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);


    // =================================================================
    // ETAPA 4: LÓGICA DE COMPARAÇÃO (NOVO)
    // =================================================================
    // Aqui acontece a "batalha". Cada expressão relacional resulta em 1 (verdadeiro)
    // ou 0 (falso), que é armazenado na variável de vitória correspondente. 

    vitoriaPopulacao    = populacao1 > populacao2;
    vitoriaArea         = area1 > area2;
    vitoriaPib          = pib1 > pib2;
    vitoriaPontos       = pontosTuristicos1 > pontosTuristicos2;
    vitoriaPibPerCapita = pibPerCapita1 > pibPerCapita2;
    vitoriaSuperPoder   = superPoder1 > superPoder2;
    // Atenção para a regra da densidade: menor é melhor, então invertemos o operador. 
    vitoriaDensidade    = densidade1 < densidade2;


    // =================================================================
    // ETAPA 5: EXIBIÇÃO FINAL DOS RESULTADOS
    // =================================================================
    // Exibimos apenas os resultados das comparações, como pedido no exemplo. 

    printf("\n\n===========================\n");
    printf("--- Batalha de Cartas ---\n");
    printf("===========================\n\n");
    printf("Comparacao de Cartas:\n");
    // Ao imprimir a variável de vitória (que contém 1 ou 0), obtemos a saída exata do desafio.
    printf("Populacao: Carta 1 venceu (%d)\n", vitoriaPopulacao);
    printf("Area: Carta 1 venceu (%d)\n", vitoriaArea);
    printf("PIB: Carta 1 venceu (%d)\n", vitoriaPib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", vitoriaPontos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", vitoriaDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vitoriaPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", vitoriaSuperPoder);

    printf("\n");

    return 0;
}
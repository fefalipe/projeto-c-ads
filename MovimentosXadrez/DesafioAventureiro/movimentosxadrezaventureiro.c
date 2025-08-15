/*
 * Meu Desafio de Movimentação de Peças de Xadrez
 * Autor: Felipe Tavares
 * Data: 15 de agosto de 2025
 * Descrição: Este programa simula o movimento de peças de xadrez.
 * Nível Novato: Torre (for), Bispo (while), Rainha (do-while).
 * Nível Aventureiro: Cavalo (loops aninhados).
 */

#include <stdio.h>

int main() {

    // =================================================================================
    // NÍVEL NOVATO - MOVIMENTAÇÃO DE PEÇAS COM LOOPS SIMPLES
    // =================================================================================
    // Vou manter meu código do nível anterior como base.
    const int movimentos_torre = 5;
    const int movimentos_bispo = 5;
    const int movimentos_rainha = 8;

    printf("=======================================\n");
    printf("--- Simulador de Movimento de Xadrez ---\n");
    printf("=======================================\n\n");

    // --- 1. Movimento da Torre com o loop 'for' ---
    printf("--- Movimento da Torre (usando for) ---\n");
    for (int i = 1; i <= movimentos_torre; i++) {
        printf("Passo %d: Direita\n", i);
    }

    // --- 2. Movimento do Bispo com o loop 'while' ---
    printf("\n--- Movimento do Bispo (usando while) ---\n");
    int passo_bispo = 1;
    while (passo_bispo <= movimentos_bispo) {
        printf("Passo %d: Cima, Direita\n", passo_bispo);
        passo_bispo++;
    }

    // --- 3. Movimento da Rainha com o loop 'do-while' ---
    printf("\n--- Movimento da Rainha (usando do-while) ---\n");
    int passo_rainha = 1;
    do {
        printf("Passo %d: Esquerda\n", passo_rainha);
        passo_rainha++;
    } while (passo_rainha <= movimentos_rainha);


    // =================================================================================
    // NÍVEL AVENTUREIRO - MOVIMENTO DO CAVALO COM LOOPS ANINHADOS
    // =================================================================================
    // Agora vou adicionar a lógica para o Cavalo, como pedido no novo desafio.

    // Primeiro, vou definir as constantes para o movimento em "L" do Cavalo.
    const int movimentos_cavalo_vertical = 2;   // Duas casas para baixo
    const int movimentos_cavalo_horizontal = 1; // Uma casa para a esquerda

    // Vou separar a saída com uma linha em branco, conforme o requisito. 
    printf("\n--- Movimento do Cavalo (usando loops aninhados) ---\n");

    // Vou usar um loop 'while' como o loop externo.
    // A ideia é que ele represente o movimento em "L" como uma ação única,
    // então vou fazê-lo rodar apenas uma vez.
    int movimento_l_completo = 1;
    while (movimento_l_completo > 0) {

        // Dentro do 'while', vou colocar meu loop 'for' aninhado.
        // Este loop 'for' será responsável pelos dois passos verticais ("para baixo").
        // Ele vai repetir 'movimentos_cavalo_vertical' as vezes definidas para o movimento (ou seja, 2 vezes).
        for (int i = 1; i <= movimentos_cavalo_vertical; i++) {
            printf("Baixo\n");
        }

        // Após o loop 'for' interno terminar, ainda dentro do 'while',
        // eu executo o passo horizontal ("para a esquerda").
        // Como é apenas um passo, um simples printf é suficiente.
        for (int i = 1; i <= movimentos_cavalo_horizontal; i++) {
            printf("Esquerda\n");
        }

        // Para que o meu loop 'while' externo não seja infinito,
        // eu preciso atualizar sua variável de controle.
        movimento_l_completo--;
    }


    printf("\n--- Fim da Simulacao ---\n");

    return 0; // Meu programa termina com sucesso.
}
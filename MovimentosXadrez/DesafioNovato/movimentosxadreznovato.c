/*
 * Meu Desafio de Movimentação de Peças de Xadrez
 * Autor: Felipe Tavares
 * Data: 13 de agosto de 2025
 * Descrição: Este programa simula o movimento de três peças de xadrez (Torre, Bispo e Rainha),
 * cada uma utilizando uma estrutura de repetição diferente (for, while, do-while)
 * para praticar os conceitos fundamentais de loops em C.
 */

// Para começar, como sempre, vou incluir a biblioteca padrão de Entrada e Saída
// para poder usar a função printf e mostrar os movimentos na tela.
#include <stdio.h>

int main() {

    // =================================================================================
    // NÍVEL NOVATO - MOVIMENTAÇÃO DE PEÇAS COM LOOPS SIMPLES
    // =================================================================================

    /*O desafio pede para definir os valores no código, então vou criar minhas constantes para o número de movimentos de cada peça.*/ 
    const int movimentos_torre = 5;
    const int movimentos_bispo = 5;
    const int movimentos_rainha = 8;


    printf("=======================================\n");
    printf("--- Simulador de Movimento de Xadrez ---\n");
    printf("=======================================\n\n");


    /*--- 1. Movimento da Torre com o loop 'for' ---
    O desafio pede para a Torre se mover 5 casas para a direita. 
    O 'for' é perfeito para isso, pq a informação já é dita quantas vezes exatamente o loop precisa se repetir (5 vezes).*/

    printf("--- Movimento da Torre (usando for) ---\n");
    // Vou declarar minha variável de controle 'i' dentro do próprio for.
    /*O loop vai começar com i=1 e continuar enquanto i for menor ou igual ao número de movimentos definidos para a torre.*/
    // A cada passo, 'i' será incrementado em 1 (i++).
    for (int i = 1; i <= movimentos_torre; i++) {
        // Dentro do loop, a cada repetição, vou imprimir o passo e a direção.
        printf("Passo %d: Direita\n", i);
    }


    // --- 2. Movimento do Bispo com o loop 'while' ---
    /*Agora, vou simular o Bispo se movendo 5 casas na diagonal, para cima e à direita.  Vou usar o 'while' para praticar.*/
    // O 'while' executa o bloco de código ENQUANTO uma condição for verdadeira. 

    printf("\n--- Movimento do Bispo (usando while) ---\n");
    // Para o 'while', preciso declarar e inicializar minha variável de controle ANTES do loop.
    int passo_bispo = 1;

    // A condição (passo_bispo <= movimentos_bispo) será verificada antes de cada execução.
    while (passo_bispo <= movimentos_bispo) {
        // O desafio especifica que para a diagonal, devo imprimir as duas direções.
        printf("Passo %d: Cima, Direita\n", passo_bispo);

        // É CRUCIAL que eu incremente minha variável de controle dentro do loop 'while'.
        // Se eu esquecer, a condição será sempre verdadeira e criarei um loop infinito!
        passo_bispo++;
    }


    // --- 3. Movimento da Rainha com o loop 'do-while' ---
    /*Por último, vou simular a Rainha se movendo 8 casas para a esquerda, usando a estrutura 'do-while'.*/
    /*A principal característica do 'do-while' é que ele executa o bloco de código PELO MENOS UMA VEZ antes de verificar a condição.*/

    printf("\n--- Movimento da Rainha (usando do-while) ---\n");
    // Assim como no 'while', preciso inicializar minha variável de controle antes.
    int passo_rainha = 1;

    // O bloco 'do' contém o código que será executado.
    do {
        printf("Passo %d: Esquerda\n", passo_rainha);

        // E aqui também preciso incrementar a variável de controle.
        passo_rainha++;

    // A condição só é verificada no final.
    } while (passo_rainha <= movimentos_rainha);


    printf("\n--- Fim da Simulacao ---\n");

    // Vou retornar 0 para indicar que meu programa terminou com sucesso.
    return 0;
}
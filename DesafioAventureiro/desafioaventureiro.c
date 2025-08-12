#include <stdio.h>
#include <string.h> /*Adicionado para ativar a função strcspn no código*/

int main(){
    char estado1, estado2, codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, pib1, area2, pib2, densidade1, pibPerCapita1, densidade2, pibPerCapita2;

    printf("---Cadastro da Carta 1 ---\n");

    printf("Digite o estado (uma letra de A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta seguido da letra escolhida (ex: A01): \n");
    scanf("%s", &codigo1);

    // A função scanf, ao ler o código acima, deixa o caractere '\n' (do Enter)
    // no buffer de entrada. A próxima função (fgets) leria esse '\n' e pularia
    // a vez do usuário. O getchar() abaixo 'consome' esse caractere de nova
    // linha que ficou sobrando, limpando o caminho para o fgets.
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
 /* Usei fgets para ler o nome da cidade, porque ele consegue ler nomes com espaços (ex: "Rio de Janeiro"). Ele é mais seguro para isso. 'stdin' significa que a leitura virá da entrada padrão (standard input), o teclado. 'strcspn' encontra a posição do \n, e substituímos por '\0', que é o caractere que finaliza uma string em C.*/
    
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

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

    getchar(); // Limpamos o buffer novamente para a leitura do nome da cidade 2.

    printf("Digite o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\n\n================================\n");
    printf("--- Cartas Cadastradas com Sucesso ---\n");
    printf("================================\n");

    printf("\n# CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);

    /*Uso do "%.2f" para formatar os números 'float' com exatamente duas casas decimais, como pedido no exemplo.*/
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n# CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);    
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n"); /*Uma linha em branco no final para melhor organização.*/

    return 0; // Finaliza o programa com sucesso.

}
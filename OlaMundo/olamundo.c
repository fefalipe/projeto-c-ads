#include <stdio.h>

int main(){
    printf("Olá, Mundo!\n");
    int idade;
    int quantidade;
    float altura;/*valores menores*/
    double peso;/*valores maiores*/
    char letra;
    char nome[20];
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A idade é: %.2f\n", altura);

    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("O seu nome é: %s", nome);

}
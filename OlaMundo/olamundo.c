#include <stdio.h>

int main(){
    printf("Olá, Mundo!\n");
    int idade = 33;
    int quantidade = 1;
    float altura = 1.71;/*valores menores*/
    double peso = 90.3;/*valores maiores*/
    char letra = 'F';
    char nome[20] = "Felipe";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A letra é: %c\n", letra);
    
}
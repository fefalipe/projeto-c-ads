#include <stdio.h>

int main(){
    int idade, matricula;
    char nome[50];
    float nota1, nota2, nota3, media;

    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: \n");
    scanf("%f", &nota3);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Nome do aluno: %s - Idade: %d\n", nome, idade);
    printf("A matrícula do aluno: %d - Média: %.1f\n", matricula, media);

    return 0;

}
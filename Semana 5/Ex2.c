/*
    Escreva um programa que receba o cadastro de um aluno.
    O aluno possui Nome, Idade e 2 notas de uma disciplina.
    O programa deverá calcular a média do aluno.

    A saída deverá ser o nome, idade e a média do aluno.
*/

#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[20];
    int idade;
    float nota1, nota2;
};

int main() {
    struct Aluno cadastro;

    printf("Informe o nome: ");
    fgets( cadastro.nome , sizeof(cadastro.nome) , stdin );
    cadastro.nome[ strcspn( cadastro.nome , "\n" ) ] = '\0';

    printf("Informe a idade: ");
    scanf("%d", &cadastro.idade);
    getchar();
    printf("Informe a nota 1: ");
    scanf("%f", &cadastro.nota1);
    getchar();
    printf("Informe a nota 2: ");
    scanf("%f", &cadastro.nota2);
    getchar();

    printf("Dados do Aluno:\n");
    printf("Nome: %s\n", cadastro.nome);
    printf("Idade: %d\n", cadastro.idade);
    float media = (cadastro.nota1 + cadastro.nota2)/2;
    printf("Média: %.2f\n", media);

    return 0;
}
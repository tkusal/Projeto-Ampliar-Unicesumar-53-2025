/*
    Escreva um programa que receba o nome e a idade de uma pessoa e informe na tela se ela é maior de idade.
    Exemplo: "João tem 19 anos e é maior de idade."
*/

#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char nome[50];

    printf("Informe a idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Informe o nome: ");
    //scanf("%49[^\n]s", nome);
    fgets( nome , sizeof(nome) , stdin );
    nome[ strcspn( nome , "\n" ) ] = '\0';

    printf("%s tem %d anos e ", nome , idade);
    if ( idade >= 18 ) {
        printf("é maior de idade.");
    } else {
        printf("é menor de idade");
    }

    return 0;
}
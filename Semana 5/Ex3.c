/*
    Escreva um programa que receba o nome e idade de 5 pessoas.
    O programa deverá informar qual a pessoa mais velha.
*/

#include <stdio.h>
#include <string.h>

struct Cadastro {
    char nome[20];
    int idade;
};

int main(){
    struct Cadastro pessoas[5];
    int maiorIdade = 0, indice;

    for (int i = 0; i < 5; i++) {
        printf("Informe o nome %d: ", i);
        fgets( pessoas[i].nome , sizeof(pessoas[i].nome) , stdin );
        pessoas[i].nome[ strcspn ( pessoas[i].nome , "\n" ) ] = '\0';

        printf("Informe a idade %d:", i);
        scanf("%d", &pessoas[i].idade);
        getchar();

        if (pessoas[i].idade > maiorIdade) {
            maiorIdade = pessoas[i].idade;
            indice = i;
        }
    }

    printf("A pessoa mais velha é %s com %d anos.", pessoas[indice].nome, maiorIdade);

    return 0;
}
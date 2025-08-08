/*
    Escreva um programa que apresente o seguinte menu pro usuário:

    1. Cadastrar Idade
    2. Validar Idade
    3. Sair

     - 1. Vai solicitar uma idade pro usuário.
     - 2. Vai validar se a idade é igual ou maior de 18.
     - 3. Vai encerrar o programa.

     Obs.: O programa só poderá ser encerrado se o usuário escolher a opção de Sair.
*/

#include <stdio.h>

int main() {
    int idade, opcao;

    do {
        printf("Escolha uma opção: \n1. Cadastrar Idade \n2. Validar Idade \n3. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Informe a idade: ");
                scanf("%d", &idade);
                break;
            case 2:
                if (idade >= 18) {
                    printf("Maior ou igual a 18 anos.\n");
                } else {
                    printf("Menor de 18 anos.\n");
                }
                break;
            case 3:
                printf("Encarrando...");
                return 0;
                break;
            default:
                printf("Opção inválida. Escolha outra por favor.\n");
                break;
        }
    } while (1); //(opcao != 3);

}
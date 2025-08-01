/*
    Escreva um programa que receba o cadastro de uma pessoa, contendo: Idade, CPF e código.

    Se o código for 1, a pessoa é do sexo masculino.
    Se o código for 2, a pessoa é do sexo feminino.
    Se o código for 3, a pessoa optou por não informar.

    O programa deverá escrever na tela a idade, o CPF e o sexo da pessoa.

*/

#include <stdio.h>

int main() {
    int idade, cpf, cod;

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe seu CPF: ");
    scanf("%d", &cpf);
    printf("Informe seu código: ");
    scanf("%d", &cod);

    printf("Idade: %d \nCPF: %d \n", idade, cpf);

    /*
        if (cod == 1) {
        
        } else if (cod == 2) {
        
        } else if (cod == 3) {
         
        } else {
        
        }    
    */

    switch (cod) {
        case 1:
            printf("Sexo: Masculino\n");
            break;
        case 2:
            printf("Sexo: Feminino\n");
            break;  
        case 3:
            printf("Sexo: Não informou\n");
            break;
        default:
            printf("O Código informado é inválido.\n");
            break;
    }

    return 0;
}
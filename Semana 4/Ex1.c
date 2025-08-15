/*
    Escreva um programa que receba a idade de 6 pessoas e informe quem é a mais velha.
*/

#include <stdio.h>

int main() {
    int idades[6];

    for ( int i = 0 ; i < 6 ; i++ ) {
        printf("Informe uma idade: ");
        scanf("%d", &idades[i]);
    }

    int maiorIdade = idade[0];
    for ( int i = 1 ; i < 6 ; i++ ) {
        if (idades[i] > maiorIdade) {
            maiorIdade = idades[i];
        }
    }

    printf("A maior idade é %d", maiorIdade);

    return 0;
}
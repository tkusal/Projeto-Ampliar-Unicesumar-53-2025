/*
A sequência de Collatz é uma sequência matemática que começa com um NÚMERO INTEIRO POSITIVO e 
gera os termos seguintes usando duas regras simples: DIVIDIR POR 2 SE O NÚMERO FOR PAR, ou MULTIPLICAR POR 3 E SOMAR 1 SE FOR ÍMPAR.]
A conjectura, proposta pelo matemático alemão Lothar Collatz, afirma que, independentemente do número inicial 
escolhido, a sequência sempre terminará no ciclo 4, 2, 1. 

Faça um programa em C que solicite um numero inteiro decimal ao usuário.
A partir deste número, gere a sequência de Collatz até chegar em 1.

*/

#include <stdio.h>

int main() {
    int num;

    do {
        printf("Informe um número inteiro positivo e diferente de zero: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Valor inválido.\n");
        }
    }while (num <= 0);

    printf("A sequencia de Collatz é: %d ", num);

    while (num != 1) {
        if (num % 2 ==0) {
            num = num/2;
        } else {
            num = num*3+1;
        }
        printf(" %d ",num);
    }    

    return 0;
}
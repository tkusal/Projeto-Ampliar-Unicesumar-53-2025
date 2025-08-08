/*
    Escreva um programa que receba um valor de investimento inicial e calcule qual será o saldo final
    após 12 meses com rendimento de 10% ao mês.

    M = C * (1 + i)¹²

    M = montante final = ???
    C = Investimento inicial = 1000
    i = Taxa de juros = 10%
    ¹² = tempo de aplicação = 12
*/

#include <stdio.h>

int main() {
    float saldo;

    printf("Qual o valor de investimento? ");
    scanf("%f", &saldo);

    for (int i = 1; i <= 12; i++) {
        saldo += saldo * 0.10;
    }

    printf("O saldo final é de %.2f", saldo);

    return 0;
}


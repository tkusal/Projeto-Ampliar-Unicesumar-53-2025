/*
    Escreva um programa que calcule o fatorial de um numero informado pelo usuário.

    Exemplo: Fatorial de 5 = 5x4x3x2x1
*/

#include <stdio.h>

int main() {
    int n, fatorial;

    printf("Informe um número: ");
    scanf("%d", &n);

    fatorial = n;

    if ( n > 0) {
        for ( int i = 1 ; i < n ; i++ ) {
            fatorial *= i;  // fatorial = fatorial * i;
        }
        printf("Fatorial de %d é %d", n, fatorial);
    }
    else {
        printf("Não é possível calcular fatorial de números negativos ou zero.\n");
    }

    return 0;
}
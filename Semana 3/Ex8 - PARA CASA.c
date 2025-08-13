/*
    Escreva um programa que calcule a quantidade de números ímpares entre 2 valores informados pelo usuário.
*/

#include <stdio.h>

int main() {
    int num1, num2, qtd = 0;

    printf("Informe o número inicial: ");
    scanf("%d", &num1);
    printf("Informe o número final: ");
    scanf("%d", &num2);

    for (int i = num1; i <= num2; i++ ) {
        if ( i % 2 != 0 ) {
            qtd = qtd+1; //qtd++;   qtd += 1;
        }
    }

    printf("Quantidade de numeros impares entre %d e %d é de %d\n", num1, num2, qtd);

    return 0;
}
/*
    Escreva um algoritmo que receba 2 números e multiplique-os
*/

#include <stdio.h>

int main() {
    float n1, n2, result;

    //Entrada de dados
    printf("Digite um número: ");
    scanf("%f", &n1);
    
    printf("Digite um número: ");
    scanf("%f", &n2);

    //Processamento
    result = n1 * n2;

    //Saída
    printf("Resultado = %.2f", result);
    //printf("Resultado = %.2f", n1 * n2);

    return 0;
}
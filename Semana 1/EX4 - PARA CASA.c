/*
    Escreva um programa que calcule a área de um retângulo.
    A = B * H
*/

#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Informe o valor da base em centimetros: ");
    scanf("%f", &base);

    printf("Informe o valor da altura em centimetros: ");
    scanf("%f", &altura);

    area = base*altura;

    printf("O valor da área é: %.1f", area);

    return 0;
}
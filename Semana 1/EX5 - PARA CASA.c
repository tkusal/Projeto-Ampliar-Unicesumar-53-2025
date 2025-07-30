/*
    Escreva um programa que receba uma temperatura em Celsius e converta para Fahrenheit.

    F = (C * 1.8) + 32    ||   F = (9/5 * C) + 32    ||    F = (C * (9/5)) + 32 
*/

#include <stdio.h>  //STanDard Input Output . Header

int main() {
    float C, F;

    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &C);

    F = C * 1.8 + 32;

    printf("Temperatura é: %.2f F", F);

    return 0;
}
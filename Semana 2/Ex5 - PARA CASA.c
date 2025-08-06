/*
    Escreva um pograma que calcule o IMC de uma pessoa.

    IMC = peso / altura²

    E informe a classificação da pessoa:

    Se IMC for menor que 18,5, magreza
    Se IMC de 18,5 a 24,9, peso normal
    Se IMC de 25 a 29,9, sobrepeso
    De 30 pra cima, obesidade
*/

#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Informe seu peso (Kg): ");
    scanf("%f", &peso);

    printf("Informe sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5)
    {
        printf("IMC: %.2f - Abaixo do Peso", imc);
    }
    else if (imc <= 24.9)
    {
        printf("IMC: %.2f - Peso normal", imc);
    }
    else if (imc <= 29.9) {
        printf("IMC: %.2f - Sobrepeso", imc);
    }
    else {
        printf("IMC: %.2f - Obesidade", imc);
    }

    return 0;
}
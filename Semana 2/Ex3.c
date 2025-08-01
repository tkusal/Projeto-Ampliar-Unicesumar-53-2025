/*
    Escreva um programa que receba a idade de uma pessoa.
    Esse programa controla a entrada em piscinas.
    Se a pessoa possuir mais de 18 anos, pode entrar na piscina olimpica.
    Se possuir entre 12 e 18 anos, pode entrar na semi-olimpica.
    Se possuir menos de 12 anos, pode entrar apenas na infantil.
*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (idade > 18)
    {
        printf("Idade: %d - Olimpica", idade);
    }
    else if (idade > 12 && idade <= 18)
    {
        printf("Idade: %d - Semi-Olimpica", idade);
    }
    else
    {
        printf("Idade: %d - Infantil", idade);
    }

    return 0;
}
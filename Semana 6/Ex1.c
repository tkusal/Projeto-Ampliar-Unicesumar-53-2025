/*
    Escreva um algoritmo que calcule a idade de uma pessoa a partir de sua data de nascimento.
*/

#include <stdio.h>

int Entrada(){
    int anoNascimento;

    printf("Informe o ano de seu nascimento: ");
    scanf("%d", &anoNascimento);
    return anoNascimento;
}

void CalculaIdade(int nascimento){
    int idade = 2025 - nascimento;
    printf("A idae é: %d", idade);
}

int main() {
    int ano;

    ano = Entrada();
    CalculaIdade(ano);

    return 0;
}
/*
    Escreva um programa one o usuário tem que adivinhar qual núemro está armazenado na memória.
    O programa só poderá ser encerrado quando o usuário acertar o número.
*/

#include <stdio.h>

int main() {
    int num = 8973;
    int resposta;

    do {
        printf("Adivinhe o núemro para encerrar o programa: ");
        scanf("%d", &resposta);

    } while(resposta != num);

    printf("Parabéns! Você acertou.");
    return 0;
}
/*
    Faça um programa que realize uma operação matemática entre 2 números.

    O programa deverá solicitar os dois numeros ao usuário e dar a opção do usuário
    escolher a operação. Exemplo:

    1. Soma
    2. Subtração
    3. Multiplicação
    4. Divisão
    5. Cancelar e Sair
*/

#include <stdio.h>

int main() {
    float num1, num2, result;
    int opcao;

    printf("Insira o primeiro número: ");
    scanf("%f", &num1);
    printf("Insira o segundo número: ");
    scanf("%f", &num2);

    printf("1. Soma \n2. Subtração \n3. Multiplicação \n4. Divisão \n5. Cancelar e Sair \nQual operação deseja realizar?\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if (num2 == 0) {
                printf("Impossível divisão por zero.");
                return 0;
            }
            result = num1 / num2;
            break;
        case 5:
            return 0;
        default:
            printf("Operação inválida.");
            return 0;
    }

    printf("Resultado = %.2f", result);

    return 0;
}
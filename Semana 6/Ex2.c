/*
    Escreva uma calculadora que realize todas as operações (+, -, *, /)
    O usuário deverá informar 2 números e o tipo de operação que deseja.
    O programa deverá apresentar um menu dado as opções pro usuário.
    Exemplo:

    1. Soma
    2. Subtração
    3. Multiplicação
    4. Divisão

    Cada operação deverá ser uma sub-rotina.
*/

#include <stdio.h>
float num1, num2;

void Entrada() {
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);
}

float Soma() {
    int result;
    result = num1 + num2;
    return result;
}
float Subtracao(){
    return num1 - num2;
}
float Multiplicacao() {
    return num1 * num2;
}
float Divisao() {
    return num1 / num2;
}

int main() {
    int opcao;
    float resultado;
    
    printf("Qual operação deseja realizar: \n");
    printf("1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        Entrada();
        resultado = Soma();
        break;
    case 2:
        Entrada();
        Subtracao();
        break;
    case 3:
        Entrada();
        resultado = Multiplicacao();
        break;    
    case 4:
        Entrada();
        if (num2 == 0) {
            printf("Impossível divisão por zero.\n");
        } else {
            resultado = Divisao();
        }
        break;    
    case 5:
        printf("Saindo...");
        return 0;
        break;    
    default:
        break;
    }

    printf("Resultado = %.1f", resultado);

    return 0;

}
/*
    Escreva um programa que exiba na tela a tabuada de multiplicação por 2
    2x0 = 0
    2x1 =
    2x2 ....
    2x10
*/

#include <stdio.h>

int main() {

    for (int i = 0; i <= 10; i++) {
         printf("2 x %d = %d \n", i, 2*i);
    }

    return 0;
}
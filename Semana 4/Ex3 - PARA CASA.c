/*
    Escreva um programa que leia 5 números e imprima-os em ordem crescente.
    - User vetor para armazenar os 5 números!!!
*/

#include <stdio.h>

int main() {
    int numeros[5];
    int aux;

    for (int i = 0; i < 5; i++) {
        printf("Informe um número: ");
        scanf("%d", &numeros[i]);
    }

    //BUBBLE SORT
    for (int i = 0; i < 5; i++) {
        for ( int j = 0 ; j < 5-1-i ; j++ ) {
            if (numeros[j] > numeros[j+1]) {
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }    
    }

    for (int i = 0; i < 5; i++) {
        printf("%d  ", numeros[i]);
    }

    return 0;
}
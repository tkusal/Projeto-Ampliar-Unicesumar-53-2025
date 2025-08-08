/*
    Faça um programa que escreva na tela todos os multiplos de 5 ente 50 e -50, em contagem regrassiva.
*/

#include <stdio.h>

int main() {

    for ( int i = 50 ; i >= -50 ; i-=5 )
    {
        printf("%d  ", i);
        /*
            if (i % 5 == 0) {
            printf("%d  ", i);
            }
        */    
    }    

    return 0;
}
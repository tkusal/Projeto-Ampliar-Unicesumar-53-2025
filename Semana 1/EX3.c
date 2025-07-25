/*
    Escreva um algoritmo que receba 4 notas de um aluno e calcule a média.
    M = (N1+N2+N3+N4) / 4
*/

#include <stdio.h>  //STanDard Input Output . Header

int main() {
    float n1, n2, n3, n4, media;

    printf("Informe uma nota: ");
    scanf("%f", &n1);
    printf("Informe uma nota: ");
    scanf("%f", &n2);
    printf("Informe uma nota: ");
    scanf("%f", &n3);
    printf("Informe uma nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) /4;
    
    printf("Média = %f  \n", media);
    printf("Média = %.2f", media);

    return 0;
}
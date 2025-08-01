/*
    Escreva um algorimo que receba 2 notas de um aluno e calcule a média.
    Se a nota for maior ou igual que 6, deverá informar que ele está aprovado.
    Senão, deverá informar que está reprovado.    
*/

#include <stdio.h> //STanDard Input Output . Header

int main() {
    float nota1, nota2, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 6) {
        printf("Média: %.2f - O aluno está aprovado.", media);
    } else {
        printf("Média: %.2f - O aluno está reprovado.", media);
    }

    return 0;
}
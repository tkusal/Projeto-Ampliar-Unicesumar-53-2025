/*
    Escreva um programa de clinica veterinária.
    O programa deverá receber o cadastro de um cachorro com Nome, Idade e peso.
    Se o cachorro tiver mais de 30kg, deverá fazer dieta.
    Se o cachorro tiver menos de 10kg, deverá fazer crossfit.

    Use subrotinas onde achar necessário.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[10];
    int idade;
    float peso;
} Doguinho;

Doguinho Entrada(){
    Doguinho dog;

    printf("Informe o nome do cachorro: ");
    fgets( dog.nome , sizeof(dog.nome), stdin);
    dog.nome[strcspn( dog.nome, "\n" )] = '\0';

    printf("Informe a idade: ");
    scanf("%d", &dog.idade);
    getchar();

    printf("Informe o peso: ");
    scanf("%f", &dog.peso);
    getchar();

    return dog;
}

void Validador(Doguinho cao){
    if (cao.peso > 30.0) {
        printf("O cachorro %s precisa de dieta.", cao.nome);
    } else if (cao.peso < 10.0) {
        printf("O cachorro %s precisa de crossfit.", cao.nome);
    } else {
        printf("Nada a ser feito.");
    }
}

int main() {
    Doguinho cachorro;

    cachorro = Entrada();
    Validador(cachorro);

    return 0;
}
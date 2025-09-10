#include <stdio.h>
#include <string.h>

/*
    typedef struct {
    char nome [10];
    int idade;
    float saldo;
} Pessoa;
*/

struct Pessoa {
    char nome [10];
    int idade;
    float saldo; 
};

int main() {
    //Pessoa individuo;
    struct Pessoa individuo;

    strcpy(individuo.nome, "Joaquim");
    individuo.idade = 53;
    individuo.saldo = 5300.00;

    printf("Nome: %s\n", individuo.nome);
    printf("Idade: %d\n", individuo.idade);
    printf("Saldo: %.2f\n", individuo.saldo);

    return 0;
}
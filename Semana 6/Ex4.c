/*
    Escreva um programa que receba o cadastro de ATÉ 10 pessoas.
    Cada pessoa possui:
    - Nome
    - Endereço
    - Matricula

    Cada endereço possui:
    - Rua
    - Numero
    - CEP

    O programa deve permitir:
    1. Cadastrar Pessoa
    2. Listar Pessoas
    3. Buscar pessoa por matrícula
    4. Sair

    Divida as operações em subrotinas conforme julgar mais adequado.
    O programa só poderá ser encerrado, quando o usuário escolher a opção de sair.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char rua[30];
    int numero;
    int cep;
} tipoEndereco;

typedef struct {
    char nome[30];
    int matricula;
    tipoEndereco endereco;
} tipoPessoa;

tipoPessoa pessoas[10];

void cadastrarPessoa(int i) {
    
    printf("Informe o nome: ");
    fgets( pessoas[i].nome , sizeof(pessoas[i].nome) , stdin );
    pessoas[i].nome[ strcspn(pessoas[i].nome, "\n") ] = '\0';

    pessoas[i].matricula = i+10000;
    /*
    printf("Informe a matricula: ");
    scanf("%d", &pessoas[i].matricula);
    getchar();
    */

    printf("Informe a rua do endereço: ");
    fgets( pessoas[i].endereco.rua , sizeof(pessoas[i].endereco.rua) , stdin );
    pessoas[i].endereco.rua[ strcspn(pessoas[i].endereco.rua, "\n") ] = '\0';

    printf("Informe o número do endereço: ");
    scanf("%d", &pessoas[i].endereco.numero);

    printf("Informe o CEP do endereço: ");
    scanf("%d", &pessoas[i].endereco.cep);
    
 }

void listarPessoas(int X) {
    for(int i = 0; i < X; i++) {
        printf("----- Pessoa %d -----\n", i+1);
        printf("Matricula: %d\n", pessoas[i].matricula);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereço: %s, %d, CEP: %d\n", pessoas[i].endereco.rua, pessoas[i].endereco.numero, pessoas[i].endereco.cep);
    }
}

void buscarMatricula(int X){
    int busca;
    int encontrado = 0;
    printf("Informe a matricula que deseja: ");
    scanf("%d", &busca);
    getchar();

    for(int i = 0; i < X; i++){
        if (busca == pessoas[i].matricula) {
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Endereço: %s, %d, CEP: %d\n", pessoas[i].endereco.rua, pessoas[i].endereco.numero, pessoas[i].endereco.cep);
            encontrado = 1;
            break;
        }
    }

    if ( encontrado == 0 ){
        printf("Não existe a matricula informada.\n");
    }    
}

int main() {
    int opcao, contadorPessoas = 0;
    
    do {
        printf("1. Cadastrar Pessoa\n2. Listar Pessoa\n3. Buscar por matricula\n4. Sair\n");
        printf("Informe uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
            case 1:
                if (contadorPessoas < 10) {
                    cadastrarPessoa(contadorPessoas);
                    contadorPessoas++;
                } else {
                    printf("Limite de cadastro atigindo.\n");
                }    
                break;
            case 2:
                listarPessoas(contadorPessoas);
                printf("----- Fim da lista -----\n");
                break;
            case 3:
                buscarMatricula(contadorPessoas);
                break;
            case 4:
                printf("Saindo...");
                return 0;
                break;        
            default:
                printf("Opção inválida.\n");
                break;
        }

    } while(1);
}
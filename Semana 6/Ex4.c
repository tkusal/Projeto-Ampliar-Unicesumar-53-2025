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

    printf("Informe a matricula: ");
    scanf("%d", &pessoas[i].matricula);
    getchar();

    printf("Informe a rua do endereço: ");
    fgets( pessoas[i].endereco.rua , sizeof(pessoas[i].endereco.rua) , stdin );
    pessoas[i].endereco.rua[ strcspn(pessoas[i].endereco.rua, "\n") ] = '\0';

    printf("Informe o número do endereço: ");
    scanf("%d", &pessoas[i].endereco.numero);

    printf("Informe o CEP do endereço: ");
    scanf("%d", &pessoas[i].endereco.cep);
    
 }

int main() {
    int opcao, contadorPessoas = 0;
    
    do {
        printf("1. Cadastrar Pessoa\n2. Listar Pessoa\n3. Biscar por matricula\n4. Sair\n");
        printf("Informe uma opção: ");
        scanf("%d", &opcao);

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
                break;
            case 3:
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
/*
    Crie um programa em C que gerencie as notas de vários alunos em uma turma. O sistema deve
    - Solicitar ao usuário:
        Quantidade de alunos.
        Quantidade de disciplinas, sendo 2 notas por disciplina.
    - Usar uma struct Aluno contendo:
        Nome do aluno (string).
        Um vetor/matriz de notas de cada disciplina.
        A média final de cada disciplina
    - Implementar sub-rotinas para:
        Ler os dados de todos os alunos.
        Calcular a média de cada aluno.
        Exibir um boletim completo com:
            Nome do aluno.
            Todas as notas por disciplina.
            Média de cada disciplina.
            Situação (Aprovado se média ≥ 7, caso contrário Reprovado).
    - O programa deve permitir ao usuário escolher, em um menu:
        [1] Cadastrar alunos e notas
        [2] Mostrar boletim
        [3] Mostrar aluno com maior média
        [0] Sair

        Lembrando que só poderá ser encerrado se o usuário escolher a opção [0] Sair
*/

#include <stdio.h>
#include <string.h>

int qtdDisciplinas, qtdAlunos;

typedef struct {
    char nome[50];
    float notas[100][2];
    float medias[100];
} tipoAluno;

tipoAluno cadastroAluno() {
    tipoAluno cadastro;
    printf("Informe o nome do aluno: ");
    fgets(cadastro.nome, sizeof(cadastro.nome), stdin);
    cadastro.nome[ strcspn(cadastro.nome, "\n") ] = '\0';

    for (int i = 0; i < qtdDisciplinas; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Insira a nota %d da disciplina %d: ", j+1, i+1);
            scanf("%f", &cadastro.notas[i][j]);
        }
    }

    getchar();

    for (int i = 0; i < qtdDisciplinas; i++) {
        cadastro.medias[i] = (cadastro.notas[i][0] + cadastro.notas[i][1]) / 2;
    }

    return cadastro;
}

void mostrarBoletim(tipoAluno alunos[]) {
    for (int i = 0; i < qtdAlunos; i++) {
        printf("### Boletim do aluno %s ####\n", alunos[i].nome);
        for (int j = 0; j < qtdDisciplinas; j++) {
            printf("------ Disciplina %d ------\nNota 1: %.2f   Nota 2: %.2f   Média: %.2f\n", j+1, alunos[i].notas[j][0], alunos[i].notas[j][1], alunos[i].medias[j]);
            printf("Situação: %s\n", (alunos[i].medias[j] >= 7 ? "Aprovado" : "Reprovado"));
            /*
            if (alunos[i].medias[j] >= 7) {
                printf("Situação: Aprovado");
            } else {
                printf("Situação: Reprovado");
            }
            */
        }
    }
}

void maiorMedia(tipoAluno alunos[]) {
    for (int i = 0; i < qtdDisciplinas; i++) {
        int melhorAluno = 0;
        float maiorMedia = alunos[melhorAluno].medias[i];

        for (int j = 1; j < qtdAlunos; j++) {
            if (alunos[j].medias[i] > maiorMedia) {
                maiorMedia = alunos[j].medias[i];
                melhorAluno = j;
            }
        }

        printf("### Disciplina %d ###\nMelhor aluno: %s | Média: %.2f\n", i+1, alunos[melhorAluno].nome, maiorMedia);
    }
}

void coletaQuantidade() {
    do {
        printf("Informe a quantidade de alunos: ");
        scanf("%d", &qtdAlunos);

        if (qtdAlunos > 100 || qtdAlunos <= 0) {
            printf("Valor inválido. Informe um valor de 1 a 100.\n");
        }
    } while (qtdAlunos > 100 || qtdAlunos <= 0);

    do {
        printf("Informe a quantidade de disciplinas: ");
        scanf("%d", &qtdDisciplinas);
        if (qtdDisciplinas > 100 || qtdDisciplinas <= 0) {
            printf("Valor inválido. Informe um valor de 1 a 100.\n");
        }
    } while (qtdDisciplinas > 100 || qtdDisciplinas <= 0);

    getchar();
}

int main() {
    coletaQuantidade();
    tipoAluno alunos[qtdAlunos];

    int opcao;
    do {
        printf("[1] Cadastrar alunos e notas\n[2] Mostrar boletim\n[3] Mostrar aluno com maior média\n[0] Sair\nEscolha uma opção:  ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 0:
            printf("Saindo...\n");
            return 0;
            break;
        case 1:            
            for (int i = 0; i < qtdAlunos; i++) {
                alunos[i] = cadastroAluno();
            }
            break;
        case 2:
            mostrarBoletim(alunos);
            break;
        case 3:
            maiorMedia(alunos);
            break;        
        default:
            printf("Opção inválida.\n");
            break;
        }

    } while(1);
}
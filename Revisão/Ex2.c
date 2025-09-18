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
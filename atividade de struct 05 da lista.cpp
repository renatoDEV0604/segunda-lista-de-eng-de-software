#include <stdio.h>

// Definindo a estrutura para armazenar informações sobre um aluno
struct Aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

int main() {
    // Criando um vetor de estruturas Aluno para armazenar as informações de 5 alunos
    struct Aluno alunos[5];

    // Entrada de dados para os 5 alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; // Remover o caractere de nova linha

        printf("Digite o numero de matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        // Limpar o buffer do teclado após usar scanf para evitar problemas com fgets
        while (getchar() != '\n');

        printf("Digite o curso do aluno %d: ", i + 1);
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
        alunos[i].curso[strcspn(alunos[i].curso, "\n")] = '\0'; // Remover o caractere de nova linha

        printf("\n");
    }

    // Imprimindo os dados dos alunos
    printf("Dados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
        printf("\n");
    }

    return 0;
}


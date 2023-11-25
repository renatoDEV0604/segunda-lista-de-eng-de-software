#include <stdio.h>

// Definindo a estrutura para armazenar informações sobre um aluno
struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    // Criando um vetor de estruturas Aluno para armazenar as informações de 5 alunos
    struct Aluno alunos[5];

    // (a) Entrada de dados para os 5 alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        // Limpar o buffer do teclado após usar scanf para evitar problemas com fgets
        while (getchar() != '\n');

        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; // Remover o caractere de nova linha

        printf("Digite a nota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        printf("Digite a nota da terceira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);

        printf("\n");
    }

    // (b) Encontrar o aluno com maior nota da primeira prova
    int indiceMaiorNota1 = 0;
    for (int i = 1; i < 5; i++) {
        if (alunos[i].nota1 > alunos[indiceMaiorNota1].nota1) {
            indiceMaiorNota1 = i;
        }
    }
    printf("Aluno com maior nota na primeira prova:\n");
    printf("Matricula: %d\n", alunos[indiceMaiorNota1].matricula);
    printf("Nome: %s\n", alunos[indiceMaiorNota1].nome);
    printf("Nota da primeira prova: %.2f\n", alunos[indiceMaiorNota1].nota1);
    printf("\n");

    // (c) Encontrar o aluno com maior média geral
    int indiceMaiorMedia = 0;
    for (int i = 1; i < 5; i++) {
        float mediaAtual = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        float mediaMaior = (alunos[indiceMaiorMedia].nota1 + alunos[indiceMaiorMedia].nota2 + alunos[indiceMaiorMedia].nota3) / 3.0;
        if (mediaAtual > mediaMaior) {
            indiceMaiorMedia = i;
        }
    }
    printf("Aluno com maior media geral:\n");
    printf("Matricula: %d\n", alunos[indiceMaiorMedia].matricula);
    printf("Nome: %s\n", alunos[indiceMaiorMedia].nome);
    printf("Media geral: %.2f\n", (alunos[indiceMaiorMedia].nota1 + alunos[indiceMaiorMedia].nota2 + alunos[indiceMaiorMedia].nota3) / 3.0);
    printf("\n");

    // (d) Encontrar o aluno com menor média geral
    int indiceMenorMedia = 0;
    for (int i = 1; i < 5; i++) {
        float mediaAtual = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        float mediaMenor = (alunos[indiceMenorMedia].nota1 + alunos[indiceMenorMedia].nota2 + alunos[indiceMenorMedia].nota3) / 3.0;
        if (mediaAtual < mediaMenor) {
            indiceMenorMedia = i;
        }
    }
    printf("Aluno com menor media geral:\n");
    printf("Matricula: %d\n", alunos[indiceMenorMedia].matricula);
    printf("Nome: %s\n", alunos[indiceMenorMedia].nome);
    printf("Media geral: %.2f\n", (alunos[indiceMenorMedia].nota1 + alunos[indiceMenorMedia].nota2 + alunos[indiceMenorMedia].nota3) / 3.0);
    printf("\n");

    // (e) Verificar se cada aluno foi aprovado ou reprovado
    printf("Situacao dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        if (media >= 6.0) {
            printf("Aluno %d (%s) foi aprovado.\n", alunos[i].matricula, alunos[i].nome);
        } else {
            printf("Aluno %d (%s) foi reprovado.\n", alunos[i].matricula, alunos[i].nome);
        }
    }

    return 0;
}


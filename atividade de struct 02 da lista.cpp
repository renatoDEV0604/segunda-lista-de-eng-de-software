#include <stdio.h>

// Definindo a estrutura para armazenar informações sobre um aluno
struct Aluno {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
};

int main() {
    // Criando um array de estruturas Aluno para armazenar as informações de até 10 alunos
    struct Aluno alunos[10];

    // Entrada de dados para os alunos
    for (int i = 0; i < 10; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite o codigo da disciplina do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].codigoDisciplina);

        printf("Digite a nota1 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota2 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        printf("\n");
    }

    // Calculando a média ponderada e exibindo a listagem final dos alunos
    printf("Listagem final dos alunos:\n");
    for (int i = 0; i < 10; i++) {
        float media = (alunos[i].nota1 + 2.0 * alunos[i].nota2) / 3.0;

        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Codigo da Disciplina: %d\n", alunos[i].codigoDisciplina);
        printf("Nota1: %.2f\n", alunos[i].nota1);
        printf("Nota2: %.2f\n", alunos[i].nota2);
        printf("Media Final: %.2f\n", media);
        printf("\n");
    }

    return 0;
}


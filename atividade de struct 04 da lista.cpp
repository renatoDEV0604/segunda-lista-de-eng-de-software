#include <stdio.h>

// Definindo a estrutura para armazenar informações sobre uma pessoa
struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    // Criando uma variável do tipo Pessoa para armazenar os dados
    struct Pessoa pessoa;

    // Entrada de dados
    printf("Digite o nome da pessoa: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0'; // Remover o caractere de nova linha

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);

    // Limpar o buffer do teclado após usar scanf para evitar problemas com fgets
    while (getchar() != '\n');

    printf("Digite o endereco da pessoa: ");
    fgets(pessoa.endereco, sizeof(pessoa.endereco), stdin);
    pessoa.endereco[strcspn(pessoa.endereco, "\n")] = '\0'; // Remover o caractere de nova linha

    // Exibindo os dados armazenados na estrutura
    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s\n", pessoa.endereco);

    return 0;
}


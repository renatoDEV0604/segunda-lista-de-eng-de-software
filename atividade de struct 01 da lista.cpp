#include <stdio.h>
#include <string.h>

// Definindo a estrutura para armazenar informa��es sobre uma pessoa
struct Pessoa {
    char nome[50];
    char endereco[100];
    char telefone[15];
};

// Fun��o para comparar duas pessoas para ordena��o alfab�tica
int compararPessoas(const void *a, const void *b) {
    return strcmp(((struct Pessoa *)a)->nome, ((struct Pessoa *)b)->nome);
}

int main() {
    // Criando um array de estruturas Pessoa para armazenar as informa��es de 10 pessoas
    struct Pessoa pessoas[10];

    // Entrada de dados para as 10 pessoas
    for (int i = 0; i < 10; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0'; // Remover o caractere de nova linha

        printf("Digite o endereco da pessoa %d: ", i + 1);
        fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
        pessoas[i].endereco[strcspn(pessoas[i].endereco, "\n")] = '\0'; // Remover o caractere de nova linha

        printf("Digite o telefone da pessoa %d: ", i + 1);
        fgets(pessoas[i].telefone, sizeof(pessoas[i].telefone), stdin);
        pessoas[i].telefone[strcspn(pessoas[i].telefone, "\n")] = '\0'; // Remover o caractere de nova linha

        printf("\n");
    }

    // Ordenando as pessoas em ordem alfab�tica usando a fun��o qsort
    qsort(pessoas, 10, sizeof(struct Pessoa), compararPessoas);

    // Imprimindo as pessoas em ordem alfab�tica
    printf("Pessoas em ordem alfabetica:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereco: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
        printf("\n");
    }

    return 0;
}


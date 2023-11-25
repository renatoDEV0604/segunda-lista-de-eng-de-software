#include <stdio.h>
#include <string.h>

#define TAMANHO 10
#define TAM_NOME 50

int main() {
    // Declarando o vetor de nomes
    char nomes[TAMANHO][TAM_NOME];

    // Lendo os 10 nomes de pessoas
    printf("Digite 10 nomes de pessoas:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    // Pedindo ao usuário para digitar um nome
    char nomeDigitado[TAM_NOME];
    printf("\nDigite um nome qualquer: ");
    scanf("%s", nomeDigitado);

    // Verificando se o nome está no vetor
    int encontrado = 0;
    for (int i = 0; i < TAMANHO; i++) {
        if (strcmp(nomeDigitado, nomes[i]) == 0) {
            encontrado = 1;
            break;
        }
    }

    // Imprimindo o resultado
    if (encontrado) {
        printf("\nACHEI\n");
    } else {
        printf("\nNÃO ACHEI\n");
    }

    return 0;
}


#include <stdio.h>

// Fun��o para verificar se dois vetores t�m conte�do igual
int saoIguais(int vetor1[], int vetor2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor1[i] != vetor2[i]) {
            return 0; // Retorna 0 se algum elemento for diferente
        }
    }
    return 1; // Retorna 1 se todos os elementos forem iguais
}

int main() {
    // Definindo o tamanho dos vetores
    int tamanho;

    // Lendo o tamanho dos vetores do usu�rio
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    // Declarando os vetores
    int vetor1[tamanho], vetor2[tamanho];

    // Lendo os elementos do primeiro vetor
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Lendo os elementos do segundo vetor
    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Verificando se os vetores t�m conte�do igual
    if (saoIguais(vetor1, vetor2, tamanho)) {
        printf("\nOs vetores t�m conte�do igual.\n");
    } else {
        printf("\nOs vetores t�m conte�do diferente.\n");
    }

    return 0;
}


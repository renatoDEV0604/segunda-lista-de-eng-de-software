#include <stdio.h>

int main() {
    // Definindo o tamanho dos vetores
    int tamanho = 20;

    // Declarando os vetores
    int vetor1[tamanho], vetor2[tamanho], vetorDiferenca[tamanho], vetorSoma[tamanho], vetorMultiplicacao[tamanho];

    // Lendo e montando os dois vetores
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Gerando o vetor de diferença
    for (int i = 0; i < tamanho; i++) {
        vetorDiferenca[i] = vetor1[i] - vetor2[i];
    }

    // Gerando o vetor de soma
    for (int i = 0; i < tamanho; i++) {
        vetorSoma[i] = vetor1[i] + vetor2[i];
    }

    // Gerando o vetor de multiplicação
    for (int i = 0; i < tamanho; i++) {
        vetorMultiplicacao[i] = vetor1[i] * vetor2[i];
    }

    // Imprimindo os resultados
    printf("\nVetor de Diferença:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorDiferenca[i]);
    }

    printf("\nVetor de Soma:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorSoma[i]);
    }

    printf("\nVetor de Multiplicação:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorMultiplicacao[i]);
    }

    return 0;
}


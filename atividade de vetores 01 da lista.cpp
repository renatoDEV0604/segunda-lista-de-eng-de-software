#include <stdio.h>

int main() {
    // Definindo o tamanho do vetor
    int tamanho = 15;

    // Declarando o vetor
    int vetor[tamanho];

    // Lendo os 15 números inteiros e armazenando no vetor
    printf("Digite 15 números inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Imprimindo o vetor armazenado
    printf("\nVetor armazenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}





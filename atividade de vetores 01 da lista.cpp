#include <stdio.h>

int main() {
    // Definindo o tamanho do vetor
    int tamanho = 15;

    // Declarando o vetor
    int vetor[tamanho];

    // Lendo os 15 n�meros inteiros e armazenando no vetor
    printf("Digite 15 n�meros inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Imprimindo o vetor armazenado
    printf("\nVetor armazenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}





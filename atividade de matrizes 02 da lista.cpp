#include <stdio.h>

int main() {
    // Definindo o tamanho da matriz
    int tamanho = 50;

    // Declarando a matriz e o vetor
    float matriz[tamanho][tamanho];
    float vetorDiagonal[tamanho];

    // Preenchendo a matriz com números reais
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("Matriz[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Extraindo a diagonal principal para o vetor
    for (int i = 0; i < tamanho; i++) {
        vetorDiagonal[i] = matriz[i][i];
    }

    // Imprimindo o vetor resultante
    printf("\nVetor da diagonal principal:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorDiagonal[i]);
    }

    return 0;
}


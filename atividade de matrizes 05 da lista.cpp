#include <stdio.h>

int main() {
    // Definindo as dimensões das matrizes
    int linhas, colunas;

    // Lendo as dimensões da matriz do usuário
    printf("Digite o número de linhas das matrizes: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas das matrizes: ");
    scanf("%d", &colunas);

    // Declarando as matrizes
    int matrizA[linhas][colunas];
    int matrizB[linhas][colunas];
    int matrizSoma[linhas][colunas];

    // Lendo os elementos da matriz A
    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Matriz A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Lendo os elementos da matriz B
    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Matriz B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Realizando a soma de matrizes
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Imprimindo a matriz resultado
    printf("\nMatriz Soma:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matrizSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}


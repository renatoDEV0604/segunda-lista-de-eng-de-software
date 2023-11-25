#include <stdio.h>

int main() {
    // Definindo a ordem da matriz
    int ordem = 4;

    // Declarando a matriz
    int matriz[ordem][ordem];

    // Lendo os elementos da matriz do usuário
    printf("Digite os elementos da matriz (%dx%d):\n", ordem, ordem);
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("Matriz[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimindo a matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Calculando e imprimindo a soma dos quadrados de todos os elementos da primeira coluna
    int somaQuadradosPrimeiraColuna = 0;
    for (int i = 0; i < ordem; i++) {
        somaQuadradosPrimeiraColuna += matriz[i][0] * matriz[i][0];
    }
    printf("\nSoma dos quadrados da primeira coluna: %d\n", somaQuadradosPrimeiraColuna);

    // Calculando e imprimindo a soma de todos os elementos da terceira linha
    int somaTerceiraLinha = 0;
    for (int j = 0; j < ordem; j++) {
        somaTerceiraLinha += matriz[2][j];
    }
    printf("\nSoma da terceira linha: %d\n", somaTerceiraLinha);

    // Calculando e imprimindo a soma dos elementos da diagonal principal
    int somaDiagonalPrincipal = 0;
    for (int i = 0; i < ordem; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }
    printf("\nSoma da diagonal principal: %d\n", somaDiagonalPrincipal);

    // Calculando e imprimindo a soma dos elementos de índice par da segunda linha
    int somaElementosIndiceParSegundaLinha = 0;
    for (int j = 0; j < ordem; j += 2) {
        somaElementosIndiceParSegundaLinha += matriz[1][j];
    }
    printf("\nSoma dos elementos de índice par da segunda linha: %d\n", somaElementosIndiceParSegundaLinha);

    return 0;
}


#include <stdio.h>

int main() {
    // Definindo o tamanho da matriz
    int linhas = 10;
    int colunas = 15;

    // Declarando a matriz
    int MAT[linhas][colunas];

    // Lendo e preenchendo a matriz com números inteiros
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("MAT[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &MAT[i][j]);
        }
    }

    // Calculando e imprimindo a soma dos elementos de cada linha e se é par ou ímpar
    printf("\nSoma dos elementos por linha e se é par ou ímpar:\n");
    for (int i = 0; i < linhas; i++) {
        int somaLinha = 0;
        for (int j = 0; j < colunas; j++) {
            somaLinha += MAT[i][j];
        }

        printf("Linha %d: Soma = %d, ", i + 1, somaLinha);
        if (somaLinha % 2 == 0) {
            printf("Par\n");
        } else {
            printf("Ímpar\n");
        }
    }

    // Calculando e imprimindo a soma dos elementos de cada coluna e se é par ou ímpar
    printf("\nSoma dos elementos por coluna e se é par ou ímpar:\n");
    for (int j = 0; j < colunas; j++) {
        int somaColuna = 0;
        for (int i = 0; i < linhas; i++) {
            somaColuna += MAT[i][j];
        }

        printf("Coluna %d: Soma = %d, ", j + 1, somaColuna);
        if (somaColuna % 2 == 0) {
            printf("Par\n");
        } else {
            printf("Ímpar\n");
        }
    }

    return 0;
}


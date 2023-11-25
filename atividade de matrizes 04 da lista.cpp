#include <stdio.h>

int main() {
    // Definindo as dimens�es das matrizes
    int linhasA, colunasA, linhasB, colunasB;

    // Lendo as dimens�es da primeira matriz do usu�rio
    printf("Digite o n�mero de linhas da matriz A: ");
    scanf("%d", &linhasA);
    printf("Digite o n�mero de colunas da matriz A: ");
    scanf("%d", &colunasA);

    // Lendo as dimens�es da segunda matriz do usu�rio
    printf("Digite o n�mero de linhas da matriz B: ");
    scanf("%d", &linhasB);
    printf("Digite o n�mero de colunas da matriz B: ");
    scanf("%d", &colunasB);

    // Verificando se as matrizes podem ser multiplicadas
    if (colunasA != linhasB) {
        printf("As matrizes n�o podem ser multiplicadas. O n�mero de colunas de A deve ser igual ao n�mero de linhas de B.\n");
        return 1; // C�digo de erro
    }

    // Declarando as matrizes
    int matrizA[linhasA][colunasA];
    int matrizB[linhasB][colunasB];
    int matrizResultado[linhasA][colunasB];

    // Lendo os elementos da matriz A
    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasA; j++) {
            printf("Matriz A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Lendo os elementos da matriz B
    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < linhasB; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("Matriz B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Inicializando a matriz resultado com zeros
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            matrizResultado[i][j] = 0;
        }
    }

    // Realizando a multiplica��o de matrizes
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            for (int k = 0; k < colunasA; k++) {
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // Imprimindo a matriz resultado
    printf("\nMatriz Resultado:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%d\t", matrizResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}


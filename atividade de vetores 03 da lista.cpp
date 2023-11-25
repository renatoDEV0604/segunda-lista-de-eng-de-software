#include <stdio.h>

int main() {
    // Definindo o tamanho do vetor
    int tamanho = 12;

    // Declarando os vetores
    int vetorOriginal[tamanho];
    float vetorTransformado[tamanho];

    // Lendo os 12 elementos inteiros e positivos e armazenando no vetorOriginal
    printf("Digite 12 elementos inteiros e positivos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorOriginal[i]);

        // Verificando se o elemento é positivo; caso contrário, pede novamente
        while (vetorOriginal[i] <= 0) {
            printf("Por favor, digite um número inteiro e positivo para o elemento %d: ", i + 1);
            scanf("%d", &vetorOriginal[i]);
        }
    }

    // Criando o vetorTransformado conforme as condições especificadas
    for (int i = 0; i < tamanho; i++) {
        if (i % 2 == 0) {
            // Elementos de índice par: dividir por 2
            vetorTransformado[i] = vetorOriginal[i] / 2.0;
        } else {
            // Elementos de índice ímpar: multiplicar por 3
            vetorTransformado[i] = vetorOriginal[i] * 3.0;
        }
    }

    // Imprimindo o vetorOriginal
    printf("\nVetor Original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorOriginal[i]);
    }

    // Imprimindo o vetorTransformado
    printf("\nVetor Transformado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorTransformado[i]);
    }

    return 0;
}


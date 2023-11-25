#include <stdio.h>

int main() {
    // Definindo o tamanho do vetor
    int tamanho = 10;

    // Declarando os vetores
    float vetorOriginal[tamanho];
    float vetorInverso[tamanho];

    // Lendo os 10 elementos reais e armazenando no vetorOriginal
    printf("Digite 10 elementos reais:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetorOriginal[i]);
    }

    // Criando o vetorInverso com os elementos na ordem inversa
    for (int i = 0; i < tamanho; i++) {
        vetorInverso[i] = vetorOriginal[tamanho - 1 - i];
    }

    // Imprimindo o vetorOriginal
    printf("\nVetor Original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorOriginal[i]);
    }

    // Imprimindo o vetorInverso
    printf("\nVetor Inverso:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorInverso[i]);
    }

    return 0;
}


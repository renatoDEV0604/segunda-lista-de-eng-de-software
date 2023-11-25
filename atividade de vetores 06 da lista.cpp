#include <stdio.h>

// Função para comparar dois números inteiros (usada na função de ordenação)
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    // Definindo o tamanho do vetor
    int tamanho;

    // Lendo a quantidade de números do usuário
    printf("Digite a quantidade de números: ");
    scanf("%d", &tamanho);

    // Declarando o vetor
    int numeros[tamanho];

    // Lendo os números do usuário
    printf("Digite os números:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Separando os números pares e ímpares
    int numerosPares[tamanho], numerosImpares[tamanho];
    int qtdPares = 0, qtdImpares = 0;

    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] % 2 == 0) {
            numerosPares[qtdPares++] = numeros[i];
        } else {
            numerosImpares[qtdImpares++] = numeros[i];
        }
    }

    // Ordenando os números pares em ordem crescente
    qsort(numerosPares, qtdPares, sizeof(int), comparar);

    // Ordenando os números ímpares em ordem decrescente
    qsort(numerosImpares, qtdImpares, sizeof(int), comparar);
    for (int i = 0; i < qtdImpares / 2; i++) {
        int temp = numerosImpares[i];
        numerosImpares[i] = numerosImpares[qtdImpares - 1 - i];
        numerosImpares[qtdImpares - 1 - i] = temp;
    }

    // Imprimindo os resultados
    printf("\nNúmeros organizados:\n");
    for (int i = 0; i < qtdPares; i++) {
        printf("%d ", numerosPares[i]);
    }

    for (int i = 0; i < qtdImpares; i++) {
        printf("%d ", numerosImpares[i]);
    }

    return 0;
}


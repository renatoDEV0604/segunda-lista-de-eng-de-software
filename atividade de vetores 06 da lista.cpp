#include <stdio.h>

// Fun��o para comparar dois n�meros inteiros (usada na fun��o de ordena��o)
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    // Definindo o tamanho do vetor
    int tamanho;

    // Lendo a quantidade de n�meros do usu�rio
    printf("Digite a quantidade de n�meros: ");
    scanf("%d", &tamanho);

    // Declarando o vetor
    int numeros[tamanho];

    // Lendo os n�meros do usu�rio
    printf("Digite os n�meros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Separando os n�meros pares e �mpares
    int numerosPares[tamanho], numerosImpares[tamanho];
    int qtdPares = 0, qtdImpares = 0;

    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] % 2 == 0) {
            numerosPares[qtdPares++] = numeros[i];
        } else {
            numerosImpares[qtdImpares++] = numeros[i];
        }
    }

    // Ordenando os n�meros pares em ordem crescente
    qsort(numerosPares, qtdPares, sizeof(int), comparar);

    // Ordenando os n�meros �mpares em ordem decrescente
    qsort(numerosImpares, qtdImpares, sizeof(int), comparar);
    for (int i = 0; i < qtdImpares / 2; i++) {
        int temp = numerosImpares[i];
        numerosImpares[i] = numerosImpares[qtdImpares - 1 - i];
        numerosImpares[qtdImpares - 1 - i] = temp;
    }

    // Imprimindo os resultados
    printf("\nN�meros organizados:\n");
    for (int i = 0; i < qtdPares; i++) {
        printf("%d ", numerosPares[i]);
    }

    for (int i = 0; i < qtdImpares; i++) {
        printf("%d ", numerosImpares[i]);
    }

    return 0;
}


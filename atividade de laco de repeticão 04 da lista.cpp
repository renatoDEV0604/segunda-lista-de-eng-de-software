#include <stdio.h>

int main() {
    int quantidadeNegativos = 0;
    int valor;

    printf("Digite 5 valores, um de cada vez:\n");

    for (int i = 0; i < 5; i++) {
        // Entrada de dados
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        // Verifica se o valor é negativo
        if (valor < 0) {
            quantidadeNegativos++;
        }
    }

    // Exibe a quantidade de valores negativos
    printf("A quantidade de valores negativos digitados e: %d\n", quantidadeNegativos);

    return 0;
}


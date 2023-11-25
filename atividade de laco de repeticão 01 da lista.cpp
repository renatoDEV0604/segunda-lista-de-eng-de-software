#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;

    do {
        // Entrada de dados
        printf("Digite um numero (ou 0 para encerrar): ");
        scanf("%d", &numero);

        // Verifica se o número é par e diferente de zero
        if (numero % 2 == 0 && numero != 0) {
            soma += numero;
            quantidade++;
        }

    } while (numero != 0);

    // Verifica se foram digitados números pares antes de calcular a média
    if (quantidade > 0) {
        double media = (double)soma / quantidade;
        printf("A media dos numeros pares digitados e: %.2lf\n", media);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }

    return 0;
}


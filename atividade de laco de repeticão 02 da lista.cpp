#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;

    do {
        // Entrada de dados
        printf("Digite um numero positivo (ou negativo para encerrar): ");
        scanf("%d", &numero);

        // Verifica se o número é positivo
        if (numero >= 0) {
            soma += numero;
            quantidade++;
        }

    } while (numero >= 0);

    // Verifica se foram digitados números positivos antes de calcular a média
    if (quantidade > 0) {
        double media = (double)soma / quantidade;
        printf("A media dos numeros positivos digitados e: %.2lf\n", media);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}


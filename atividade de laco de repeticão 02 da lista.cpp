#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;

    do {
        // Entrada de dados
        printf("Digite um numero positivo (ou negativo para encerrar): ");
        scanf("%d", &numero);

        // Verifica se o n�mero � positivo
        if (numero >= 0) {
            soma += numero;
            quantidade++;
        }

    } while (numero >= 0);

    // Verifica se foram digitados n�meros positivos antes de calcular a m�dia
    if (quantidade > 0) {
        double media = (double)soma / quantidade;
        printf("A media dos numeros positivos digitados e: %.2lf\n", media);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}


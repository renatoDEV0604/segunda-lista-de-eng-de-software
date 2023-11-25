#include <stdio.h>

// Fun��o recursiva para calcular o fatorial de um n�mero
unsigned long long int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero;

    // Entrada de dados
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);

    // Verifica��o se o n�mero � n�o-negativo
    if (numero < 0) {
        printf("O fatorial n�o est� definido para n�meros negativos.\n");
    } else {
        // Chamada da fun��o recursiva e exibi��o do resultado
        unsigned long long int resultado = fatorial(numero);
        printf("O fatorial de %d � %llu.\n", numero, resultado);
    }

    return 0;
}


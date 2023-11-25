#include <stdio.h>

// Função recursiva para calcular o fatorial de um número
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

    // Verificação se o número é não-negativo
    if (numero < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        // Chamada da função recursiva e exibição do resultado
        unsigned long long int resultado = fatorial(numero);
        printf("O fatorial de %d é %llu.\n", numero, resultado);
    }

    return 0;
}


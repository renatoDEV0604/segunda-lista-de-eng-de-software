#include <stdio.h>

// Função recursiva para contar os dígitos de um número
int contarDigitos(int numero) {
    // Caso base: se o número tem um único dígito
    if (numero < 10) {
        return 1;
    } else {
        // Chamada recursiva para contar os dígitos do número sem o último dígito
        return 1 + contarDigitos(numero / 10);
    }
}

int main() {
    int numero;

    // Entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Chamada da função recursiva e exibição do resultado
    int resultado = contarDigitos(numero);
    printf("O numero digitado possui %d digito(s).\n", resultado);

    return 0;
}


#include <stdio.h>

// Fun��o recursiva para contar os d�gitos de um n�mero
int contarDigitos(int numero) {
    // Caso base: se o n�mero tem um �nico d�gito
    if (numero < 10) {
        return 1;
    } else {
        // Chamada recursiva para contar os d�gitos do n�mero sem o �ltimo d�gito
        return 1 + contarDigitos(numero / 10);
    }
}

int main() {
    int numero;

    // Entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Chamada da fun��o recursiva e exibi��o do resultado
    int resultado = contarDigitos(numero);
    printf("O numero digitado possui %d digito(s).\n", resultado);

    return 0;
}


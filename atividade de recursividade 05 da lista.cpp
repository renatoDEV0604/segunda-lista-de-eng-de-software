#include <stdio.h>

// Função recursiva para calcular a^b
int potencia(int a, int b) {
    // Caso base: a^0 é sempre 1
    if (b == 0) {
        return 1;
    } else {
        // Chamada recursiva para calcular a^(b-1)
        return a * potencia(a, b - 1);
    }
}

int main() {
    int base, expoente;

    // Entrada de dados
    printf("Digite a base (a): ");
    scanf("%d", &base);

    printf("Digite o expoente (b): ");
    scanf("%d", &expoente);

    // Chamada da função recursiva e exibição do resultado
    int resultado = potencia(base, expoente);
    printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

    return 0;
}


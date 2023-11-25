#include <stdio.h>

// Fun��o recursiva para calcular a soma de dois n�meros
float soma(float num1, float num2) {
    return num1 + num2;
}

// Fun��o recursiva para calcular a multiplica��o de dois n�meros
float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

// Fun��o recursiva para calcular a subtra��o de dois n�meros
float subtracao(float num1, float num2) {
    return num1 - num2;
}

// Fun��o recursiva para calcular a divis�o de dois n�meros
float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0; // Retornar 0 em caso de divis�o por zero
    }
}

int main() {
    float numero1, numero2;

    // Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    // C�lculos utilizando fun��es recursivas
    printf("Soma: %.2f\n", soma(numero1, numero2));
    printf("Multiplicacao: %.2f\n", multiplicacao(numero1, numero2));
    printf("Subtracao: %.2f\n", subtracao(numero1, numero2));
    printf("Divisao: %.2f\n", divisao(numero1, numero2));

    return 0;
}


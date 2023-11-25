#include <stdio.h>

// Função recursiva para calcular a soma de dois números
float soma(float num1, float num2) {
    return num1 + num2;
}

// Função recursiva para calcular a multiplicação de dois números
float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

// Função recursiva para calcular a subtração de dois números
float subtracao(float num1, float num2) {
    return num1 - num2;
}

// Função recursiva para calcular a divisão de dois números
float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0; // Retornar 0 em caso de divisão por zero
    }
}

int main() {
    float numero1, numero2;

    // Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    // Cálculos utilizando funções recursivas
    printf("Soma: %.2f\n", soma(numero1, numero2));
    printf("Multiplicacao: %.2f\n", multiplicacao(numero1, numero2));
    printf("Subtracao: %.2f\n", subtracao(numero1, numero2));
    printf("Divisao: %.2f\n", divisao(numero1, numero2));

    return 0;
}


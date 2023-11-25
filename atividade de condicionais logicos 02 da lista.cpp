#include <stdio.h>
#include <math.h>

int main() {
    int numLados;
    double medidaLado, area;

    // Entrada de dados
    printf("Informe o numero de lados do poligono: ");
    scanf("%d", &numLados);

    printf("Informe a medida do lado (em cm): ");
    scanf("%lf", &medidaLado);

    // Verificações e cálculos
    if (numLados == 3) {
        // Triângulo
        area = (sqrt(3) / 4) * pow(medidaLado, 2);  // Fórmula da área de um triângulo equilátero
        printf("TRIANGULO\n");
        printf("Area: %.2lf cm²\n", area);
    } else if (numLados == 4) {
        // Quadrado
        area = pow(medidaLado, 2);
        printf("QUADRADO\n");
        printf("Area: %.2lf cm²\n", area);
    } else if (numLados == 5) {
        // Pentágono
        printf("PENTAGONO\n");
    } else {
        // Polígono com número de lados diferente de 3, 4 ou 5
        printf("Poligono com numero de lados nao suportado.\n");
    }

    return 0;
}


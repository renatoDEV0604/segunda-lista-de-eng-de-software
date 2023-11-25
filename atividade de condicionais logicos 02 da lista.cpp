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

    // Verifica��es e c�lculos
    if (numLados == 3) {
        // Tri�ngulo
        area = (sqrt(3) / 4) * pow(medidaLado, 2);  // F�rmula da �rea de um tri�ngulo equil�tero
        printf("TRIANGULO\n");
        printf("Area: %.2lf cm�\n", area);
    } else if (numLados == 4) {
        // Quadrado
        area = pow(medidaLado, 2);
        printf("QUADRADO\n");
        printf("Area: %.2lf cm�\n", area);
    } else if (numLados == 5) {
        // Pent�gono
        printf("PENTAGONO\n");
    } else {
        // Pol�gono com n�mero de lados diferente de 3, 4 ou 5
        printf("Poligono com numero de lados nao suportado.\n");
    }

    return 0;
}


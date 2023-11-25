#include <stdio.h>

int main() {
    int codigoVoto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosBrancos = 0;

    printf("Informe o codigo do voto (ou um numero negativo para encerrar): ");

    while (1) {
        // Entrada de dados
        scanf("%d", &codigoVoto);

        // Verifica o código de votação
        switch (codigoVoto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBrancos++;
                break;
            default:
                // Se o código de votação for negativo, encerra o loop
                if (codigoVoto < 0) {
                    break;
                }
                printf("Codigo de voto invalido. Tente novamente.\n");
                continue;
        }

        printf("Voto computado com sucesso! Informe o proximo codigo de voto (ou um numero negativo para encerrar): ");
    }

    // Exibição dos resultados
    printf("\nResultado da eleicao:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Votos Nulos: %d\n", votosNulos);
    printf("Votos em Branco: %d\n", votosBrancos);

    return 0;
}


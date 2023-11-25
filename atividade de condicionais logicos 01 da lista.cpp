#include <stdio.h>

void fazerCheckIn() {
    char nome[50], cpf[12], telefone[15], cidade[50], estado[3];

    printf("Informe seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Informe seu CPF: ");
    scanf("%s", cpf);

    printf("Informe seu telefone: ");
    scanf("%s", telefone);

    printf("Informe sua cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Informe seu estado (sigla): ");
    scanf("%s", estado);

    printf("\nCheck-in realizado com sucesso!\n\n");
}

void chamarServicoQuarto() {
    char nome[50];
    int numeroQuarto;

    printf("Informe seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Informe o numero do quarto: ");
    scanf("%d", &numeroQuarto);

    printf("\nServico de quarto chamado para o quarto %d. Aguarde!\n\n", numeroQuarto);
}

void fazerPedido() {
    int opcao;

    do {
        printf("Menu de Pedidos:\n");
        printf("1. Comida\n");
        printf("2. Bebida\n");
        printf("3. Finalizar Pedido\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Pedido de comida realizado. Aguarde a entrega!\n");
                break;
            case 2:
                printf("Pedido de bebida realizado. Aguarde a entrega!\n");
                break;
            case 3:
                printf("Pedido finalizado. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    printf("\n");
}

int main() {
    int opcao;

    do {
        printf("Menu de Acoes:\n");
        printf("1. Fazer Check-in\n");
        printf("2. Chamar Servico de Quarto\n");
        printf("3. Fazer Pedido\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                fazerCheckIn();
                break;
            case 2:
                chamarServicoQuarto();
                break;
            case 3:
                fazerPedido();
                break;
            case 4:
                printf("Saindo do sistema. Ate mais!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}


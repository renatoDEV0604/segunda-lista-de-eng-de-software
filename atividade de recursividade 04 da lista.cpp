#include <stdio.h>
#include <string.h>

// Função recursiva para inverter uma string
void inverterString(char str[], int inicio, int fim) {
    // Caso base: quando o início ultrapassa o fim
    if (inicio < fim) {
        // Trocar os caracteres no início e no fim
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // Chamada recursiva para inverter os caracteres restantes
        inverterString(str, inicio + 1, fim - 1);
    }
}

int main() {
    char minhaString[100];

    // Entrada de dados
    printf("Digite uma string: ");
    fgets(minhaString, sizeof(minhaString), stdin);
    minhaString[strcspn(minhaString, "\n")] = '\0'; // Remover o caractere de nova linha

    // Chamada da função recursiva para inverter a string
    inverterString(minhaString, 0, strlen(minhaString) - 1);

    // Exibição do resultado
    printf("String invertida: %s\n", minhaString);

    return 0;
}


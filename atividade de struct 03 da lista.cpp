#include <stdio.h>

// Definindo o novo tipo de dado Horario
struct Horario {
    int hora;
    int minutos;
    int segundos;
};

// Definindo o novo tipo de dado Data
struct Data {
    int dia;
    int mes;
    int ano;
};

// Definindo o novo tipo de dado Compromisso
struct Compromisso {
    struct Data data;
    struct Horario horario;
    char texto[100]; // Assumindo que o texto do compromisso terá no máximo 100 caracteres
};

int main() {
    // Exemplo de uso dos novos tipos de dados
    struct Horario horaAtual = {12, 30, 0};
    printf("Hora Atual: %02d:%02d:%02d\n", horaAtual.hora, horaAtual.minutos, horaAtual.segundos);

    struct Data dataAtual = {22, 11, 2023};
    printf("Data Atual: %02d/%02d/%04d\n", dataAtual.dia, dataAtual.mes, dataAtual.ano);

    struct Compromisso compromisso1 = {{22, 11, 2023}, {14, 0, 0}, "Reuniao de Equipe"};
    printf("Compromisso 1:\n");
    printf("Data: %02d/%02d/%04d\n", compromisso1.data.dia, compromisso1.data.mes, compromisso1.data.ano);
    printf("Horario: %02d:%02d:%02d\n", compromisso1.horario.hora, compromisso1.horario.minutos, compromisso1.horario.segundos);
    printf("Texto: %s\n", compromisso1.texto);

    return 0;
}


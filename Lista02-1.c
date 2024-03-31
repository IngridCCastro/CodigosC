#include <stdio.h>

int main() {
    int hora, minuto;

    // Solicitar ao usuário o horário no formato de 24 horas
    printf("Digite o horário no formato de 24 horas (hh:mm): ");
    scanf("%d:%d", &hora, &minuto);

    // Converter o horário para o formato de 12 horas
    if (hora >= 0 && hora < 12) {
        printf("%d:%02d am\n", hora == 0 ? 12 : hora, minuto); // Se a hora for 0, exibe 12
    } else {
        printf("%d:%02d pm\n", hora == 12 ? 12 : hora - 12, minuto); // Se a hora for 12, exibe 12
    }

    return 0;
}

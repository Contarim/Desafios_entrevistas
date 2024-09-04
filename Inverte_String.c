#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;

    while (inicio < fim) {

        // Troca dos caracteres
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // Move os indices
        inicio++;
        fim--;
    }
}

int main() {
    char str[100];

    printf("Digite uma string para invertermos: ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha caso precise
    str[strcspn(str, "\n")] = '\0';

    // Chama a função de inversão
    inverter(str);

    printf("\nString invertida: %s\n", str);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int num) {

    if (num < 0) return 0;  //Fibonacci nao funciona em nsmeros negativos
    if (num == 0 || num == 1);  // 0 e 1 sao a base da sequencia

    int a = 0, b = 1, c = a + b; // Inicializa os primeiros valores da sequencia

    while (c < num) {
        a = b;
        b = c;
        c = a + b;
    }

    return (c == num);
}

int main() {
    int numero;

    printf("Digite o numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &numero);

    // Verifica se o numero pertence a sequencia de Fibonacci
    if (Fibonacci(numero) >= 0) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d não pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}


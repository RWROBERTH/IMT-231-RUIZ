#include <stdio.h>
// Retornar si es par o impar
int esPar(int n) {
    return n % 2 == 0;
}

int main() {
    int numero;

    while (1) { // Bucle infinito
        printf("Ingresa un número (-1 para salir): ");
        scanf("%d", &numero);

        if (numero == -1) {
            break; // Salir del bucle
        }

        if (esPar(numero)) {
            printf("Es par\n");
        } else {
            printf("Es impar\n");
        }
    }

    printf("Programa terminado.\n");
    return 0;
}

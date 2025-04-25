#include <stdio.h>
#include "funciones.h"

int main(void) {
    int numero;

    while (1) {
        printf("Ingresa un número entero positivo (0 o negativo para salir): ");
        scanf("%d", &numero);

        if (numero <= 0) {
            break;
        }

        int resultado = factorial(numero);
        printf("El factorial de %d es: %d\n", numero, resultado);
    }

    printf("Programa terminado.\n");
    return 0;
}

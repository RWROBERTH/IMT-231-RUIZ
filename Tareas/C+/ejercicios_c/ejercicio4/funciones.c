#include <stdio.h>
#include "funciones.h"

int acumular_valores(void) {
    int numero, suma = 0;

    while (1) {
        printf("Ingresa un número positivo (negativo para terminar): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        suma += numero;
    }

    return suma;
}

#include <stdio.h>
#include "funciones.h"

int main(void) {
    int numero;

    while (1) {
        printf("Ingresa un numero entero postivo (0 para salir): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero < 0) {
            printf("Por favor ingresa solo números positivos.\n");
            continue;
        }

        int digitos = contar_digitos(numero);
        printf("El número tiene %d dígito(s).\n", digitos);
    }

    printf("Programa terminado.\n");
    return 0;
}

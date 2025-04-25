#include <stdio.h>
#include "funciones.h"

int main(void) {
    int numero;

    while (1) {
        printf("Ingresa un número entero positivo (termina si tiene un solo dígito): ");
        scanf("%d", &numero);

        if (numero >= 0 && numero < 10) {
            break;
        }

        int invertido = invertir_numero(numero);
        printf("Número invertido: %d\n", invertido);
    }

    printf("Programa terminado.\n");
    return 0;
}

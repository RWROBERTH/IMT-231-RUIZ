#include <stdio.h>
#include "funciones.h"

int main(void) {
    int a, b;

    while (1) {
        printf("Ingresa dos números (0 0 para salir): ");
        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0) {
            break;
        }

        comparar_numeros(a, b);
    }

    printf("Programa terminado.\n");
    return 0;
}

#include <stdio.h>
#include "funciones.h"

void comparar_numeros(int a, int b) {
    if (a > b) {
        printf("El primer número (%d) es mayor.\n", a);
    } else if (b > a) {
        printf("El segundo número (%d) es mayor.\n", b);
    } else {
        printf("Ambos números son iguales.\n");
    }
}

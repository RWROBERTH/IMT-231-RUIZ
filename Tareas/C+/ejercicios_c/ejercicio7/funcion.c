#include <stdio.h>
#include "funciones.h"

int main(void) {
    int numero, contador = 0;

    while (1) {
        printf("Ingresa un número (-1 para terminar): ");
        scanf("%d", &numero);

        if (numero == -1) {
            break;
        }

        if (es_multiplo_de_3(numero)) {
            contador++;
        }
    }

    printf("Total de múltiplos de 3 ingresados: %d\n", contador);
    return 0;
}

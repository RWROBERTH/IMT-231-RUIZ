#include <stdio.h>
#include "funciones.h"

int main(void) {
    int opcion, a, b;
    while (1) {
        printf("\n=== Menú ===\n");
        printf("1. Sumar dos números\n");
        printf("2. Restar dos números\n");
        printf("3. Multiplicar dos números\n");
        printf("4. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);
        if (opcion == 4) {
            break;
        }
        printf("Ingresa el primer número: ");
        scanf("%d", &a);
        printf("Ingresa el segundo número: ");
        scanf("%d", &b);

        switch (opcion) {
            case 1:
                printf("Resultado: %d\n", suma(a, b));
                break;
            case 2:
                printf("Resultado: %d\n", resta(a, b));
                break;
            case 3:
                printf("Resultado: %d\n", multiplicacion(a, b));
                break;




                
            default:
                printf("Opción inválida.\n");
        }
    }
    printf("Programa terminado.\n");
    return 0;
}

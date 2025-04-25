#include <stdio.h>
#include "funciones.h"

int main(void) {
    int opcion, a, primo = 0;
    while (1) {
        printf("\n=== Menú ===\n");
        printf("1. Verificar si un número es primo\n");
        printf("2. Calcular el factorial de un número\n");
        printf("3. Contar números pares e impares entre 1 y N\n");
        printf("4. Mostrar múltiplos de 3 entre 1 y N.\n");
        printf("5. Salir del programa.\n");
        printf("Seleccione una opción:  \n");
        scanf("%d",&opcion);

        if (opcion == 5 ) {
            break;
        }

        printf("Ingrese un número entero positivo:  ");
        scanf("%d", & a);

        if (a < 0) {
            printf("Por favor ingresa solo números positivos.\n");
            continue;
        }


        switch (opcion) {
            case 1:
                int primo = esPrimo(a);
                printf("sfnsd %d", primo);
                if (primo = 2){
                    printf("El número %d es primo.\n", a);
                }else{
                    printf("El número %d no es primo.\n", a);
                }
                break;
            case 2:
                int resultado2 = factorial(a);
                printf("El factorial de %d es: %d\n", a, resultado2);
                break;
            case 3:
                int resultado = contarDigitos(a);
                printf("el numero %d tiene: \n", a);
                printf("%d numeros pares, y  numeros impares.\n", a);
                break;
            case 4:
                break;











            
        }
    }
    printf("Programa terminado.\n");
    return 0;
}




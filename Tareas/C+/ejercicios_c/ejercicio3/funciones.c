#include <stdio.h>
#include "funciones.h"

void mostrar_estado(Semaforo estado) {
    switch (estado) {
        case ROJO:
            printf("Estado: ROJO - Detente.\n");
            break;
        case VERDE:
            printf("Estado: VERDE - Avanza.\n");
            break;
        case AMARILLO:
            printf("Estado: AMARILLO - Precaución.\n");
            break;
    }
}

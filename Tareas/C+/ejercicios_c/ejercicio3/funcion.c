#include <stdio.h>
#include "funciones.h"

int main(void) {
    Semaforo estado = ROJO;
    int ciclos = 0;

    while (ciclos < 10) {
        mostrar_estado(estado);

        // Cambiar el semaforo
        if (estado == ROJO) {
            estado = VERDE;
        } else if (estado == VERDE) {
            estado = AMARILLO;
        } else if (estado == AMARILLO) {
            estado = ROJO;
        }

        ciclos++;
    }

    printf("Simulación finalizada tras 10 ciclos.\n");
    return 0;
}

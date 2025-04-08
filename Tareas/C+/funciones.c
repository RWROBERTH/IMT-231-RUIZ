#include <stdio.h>
#include "funciones.h"

void saludo(void){
	printf("hola desde la funcion\n");
}
int suma(int numero1, int numero2){
	int respuesta = numero1 + numero2;
	return respuesta;
}
int resta(int numero1, int numero2){
	int respuesta = numero1 - numero2;
	return respuesta;
}
int multiplicacion(int numero1, int numero2){
	int respuesta = numero1 * numero2;
	return respuesta;
}


#include <stdio.h>
#include "funciones.h"


#include <stdio.h>

int main(void){
    int number;
	for (;;){
		printf("ingrese un numero\n");
        scanf("%d", &number);
        if(number % 2 == 0 ){
		printf("El numero ingresado es par\n");
		}else{
		printf("El numero ingresado es impar\n");
		}
		if (number == -1){
			break;
		}
	}
	
        return 0;
}









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


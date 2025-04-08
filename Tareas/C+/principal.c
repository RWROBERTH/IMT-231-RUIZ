#include <stdio.h>
#include "funciones.h"
#define  MENU "1. suma\n2. resta\n3. multiplicacion\n4. salir\n"
#define msj1 "Introduce el primer numero:\n"
#define msj2 "Introduce el segundo numero:\n"

int main(void){
	saludo();
	int a = 0;
	int b = 0;
	int opcion = 0;
	for (;;){
		printf(MENU);
		scanf("%d",&opcion);

		if (opcion == 1){
			printf(msj1);
			scanf("%d", &a);
			printf(msj2);
			scanf("%d", &b);
			int resultado = suma(a, b);
			printf("La suma de %d y %d es: %d\n", a, b, resultado);
		}else{
			if(opcion == 2){
				printf(msj1);
			scanf("%d", &a);
			printf(msj2);
			scanf("%d", &b);
				int resultado2 = resta(a, b);
				printf("La resta de %d y %d es: %d\n", a, b, resultado2);
			}else{
				if(opcion == 3){
					printf(msj1);
					scanf("%d", &a);
					printf(msj2);
					scanf("%d", &b);
					int resultado3 = multiplicacion(a, b);
					printf("La multiplicacion de %d y %d es: %d\n", a, b, resultado3);
				}else{
					break;
				}
			}
		}
	}
	return 0;
}

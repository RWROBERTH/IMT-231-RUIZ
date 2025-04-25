#include <stdio.h>
#include "funciones.h"




int parimpar(int a){
	return a % 2 == 0;
}





void saludo(void);
int main(void){
	saludo();
	return 0;
}
void saludo(void){
printf("hola desde la funcion\n");
}


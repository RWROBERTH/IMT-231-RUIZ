#include <stdio.h>

int main(void){
	int bisiesto=0;;
	printf("ingrese primer numero\n");
	scanf("%d", &bisiesto);
	if ((bisiesto % 4 == 0) && (bisiesto % 100 != 0 || bisiesto % 400 == 0)){
		printf("el año ingresado es bisiesto");
	}else{
		printf("el año ingresado no es bisiesto");
	}
	return 0;
}

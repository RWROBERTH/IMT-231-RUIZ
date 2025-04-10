#include <stdio.h>

int main(void){
        int numberA=0;
	int suma = 0;
        printf("ingrese un numero\n");
        scanf("%d", &numberA);
	printf("La suma de los numeros naturales hasta %d es\n",numberA);
        for (int i = 1; i <= numberA; i++){
		suma = suma + i;
	}
	printf("%d\n", suma);
        return 0;
}

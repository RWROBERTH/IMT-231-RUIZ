#include <stdio.h>

int main(void){
        int number=0;
        printf("ingrese un numero\n");
        scanf("%d", &number);
        if(number % 2 == 0 ){
		printf("El numero ingresado es par\n");
	}else{
		printf("El numero ingresado es impar\n");
	}
        return 0;
}

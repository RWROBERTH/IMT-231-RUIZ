#include <stdio.h>

int main(void){
        int numberA=0;
        printf("ingrese un numero\n");
        scanf("%d", &numberA);
        if(numberA < 0 ){
                printf("el numero ingresado es negativo");
        }else{
                if(numberA == 0){
                        printf("el numero ingresado es cero");
                }else{
                        if(numberA > 0 ){
                                printf("El numero ingresado es positivo");
                        }
                }
        }
        return 0;
}


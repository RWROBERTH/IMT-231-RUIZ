#include <stdio.h>

int main(void){
        int edad=0;
        printf("ingrese su edad\n");
        scanf("%d", &edad);
	printf("El usuario se encuentra en la ");
        if(edad < 13 ){
                printf("infancia\n");
        }else{
		if(edad > 13 && edad < 17){
			printf("adolesencia\n");
		}else{
			if(edad >= 18){
				printf("adultez\n");
			}
		}
	}
        return 0;
}

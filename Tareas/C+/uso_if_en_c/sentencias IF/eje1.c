#include <stdio.h>

int main(void){
	int numberA=0;
	int numberB=0;
	printf("ingrese primer numero\n");
	scanf("%d", &numberA);
	printf("ingrese segundo numero\n");
	scanf("%d", &numberB);
	if(numberA > numberB){
		printf("el numero mayor es el %d\n",numberA);
	}else{
		if(numberB > numberA){
			printf("el numero mayor es el %d\n",numberB);
		}else{
			if(numberA == numberB){
				printf("Los dos numeros son iguales");
			}
		}
	}
	return 0;
}

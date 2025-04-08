#include <stdio.h>

int main(void){
        int numberA=0;
        printf("ingrese un numero\n");
        scanf("%d", &numberA);
        for (int i = 1; i <= numberA; i++){
		printf("%d\n", i);
	}
        return 0;
}

#include <stdio.h>

int main(void){
        int x = 0;
	int multiplicacion = 0;
        printf("ingrese un numero\n");
        scanf("%d", &x);
        for (int i = 1; i <= 10; i++){
		multiplicacion = i * x;
		printf("%d * ", x);
		printf("%d = ", i);
		printf("%d\n",multiplicacion);
	}
        return 0;
}

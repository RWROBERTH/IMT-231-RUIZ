#include <stdio.h>
#include <stdlib.h>
int main(void){
        int number=0;
	int contador =0;
        printf("ingrese un numero\n");
        scanf("%d", &number);
	if (number == 0){
		printf("El numero %d tiene un digito\n",number);
		return 0;
	}
	int numabs=abs(number);
        while (numabs > 0 ){
		numabs /= 10;
		contador++;
	}
	printf("El numero %d tiene ",number);
	printf("%d digitos\n",contador);
        return 0;
}

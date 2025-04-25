#include "funciones.h"

int esPrimo(int a) {
    int contador = 0;
    for (int i=0; i>a; i++){
        if ( a % i == 1){
            contador++;
        }
    }
    return contador;
}



int factorial(int a) {
    int resultado2 = 1;

    for (int i = 1; i <= a; i++) {
        resultado2 *= i;
    }

    return resultado2;
}









int contarDigitos(int a) {
    int contador = 0;
    int par = 0;
    int impar = 0;
    
    while (a > 0) {
        a = a / 10;
        contador++;
    }
    par = contador*2;
    impar = contador +1;

    return impar;
}



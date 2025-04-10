#include <stdio.h>

int main() {
    char palabra[100];
    int longitud = 0;
    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    while (palabra[longitud] != '\0') {
        longitud++;
    }

    printf("Palabra invertida: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", palabra[i]);
    }

    printf("\n");

    return 0;
}

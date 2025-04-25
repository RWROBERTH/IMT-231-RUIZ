int contar_digitos(int n) {
    int contador = 0;
    if (n == 0) return 1; // el número 0 tiene 1 dígito

    while (n > 0) {
        n = n / 10;
        contador++;
    }


    return contador;
}

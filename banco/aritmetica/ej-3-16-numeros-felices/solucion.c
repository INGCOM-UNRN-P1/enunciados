#include "ej-3-16-numeros-felices.h"

static int suma_cuadrados_digitos(int n) {
    int suma = 0;
    while (n > 0) { int d = n % 10; suma += d * d; n /= 10; }
    return suma;
}
int es_feliz(int n) {
    if (n <= 0) return 0;
    while (n != 1 && n != 4) n = suma_cuadrados_digitos(n);
    return n == 1;
}

/*
 * Entrega 4 - Ejercicio 6
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include "ejercicio6.h"

long long potencia(int base, int exponente) {
    if (exponente < 0) {
        return -1;
    }
    long long res = 1;
    for (int i = 0; i < exponente; i++) {
        res *= base;
    }
    return res;
}

int raiz_cuadrada_entera(int numero) {
    if (numero < 0) {
        return -1;
    }
    if (numero == 0 || numero == 1) {
        return numero;
    }
    int r = 1;
    while ((long long)(r + 1) * (r + 1) <= numero) {
        r++;
    }
    return r;
}

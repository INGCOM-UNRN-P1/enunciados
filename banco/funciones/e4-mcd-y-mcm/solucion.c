/*
 * Entrega 4 - Ejercicio 4
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include "ejercicio4.h"

static int abs_val(int x) {
    return (x < 0) ? -x : x;
}

int maximo_comun_divisor(int a, int b) {
    a = abs_val(a);
    b = abs_val(b);
    if (a == 0 && b == 0) {
        return -1;
    }
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int minimo_comun_multiplo(int a, int b) {
    if (a <= 0 || b <= 0) {
        return -1;
    }
    int mcd = maximo_comun_divisor(a, b);
    if (mcd <= 0) {
        return -1;
    }
    return (a / mcd) * b;
}

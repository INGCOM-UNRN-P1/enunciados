/*
 * Entrega 4 - Ejercicio 2
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include "ejercicio2.h"

int fibonacci(int n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int prev2 = 0;
    int prev1 = 1;
    int actual = 0;
    for (int i = 2; i <= n; i++) {
        actual = prev1 + prev2;
        prev2 = prev1;
        prev1 = actual;
    }
    return actual;
}

int suma_fibonacci(int n) {
    if (n < 0) {
        return -1;
    }
    int suma = 0;
    for (int i = 0; i <= n; i++) {
        suma += fibonacci(i);
    }
    return suma;
}

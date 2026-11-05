/*
 * Entrega 4 - Ejercicio 2
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include <assert.h>
#include "ejercicio2.h"

int main(void) {
    /* Fibonacci */
    assert(fibonacci(-1) == -1);
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(2) == 1);
    assert(fibonacci(3) == 2);
    assert(fibonacci(4) == 3);
    assert(fibonacci(5) == 5);
    assert(fibonacci(6) == 8);
    assert(fibonacci(7) == 13);

    assert(fibonacci(45) == 1134903170);
    assert(fibonacci(46) == 1836311903);
    assert(fibonacci(47) == -1);

    /* Sumas inclusivas */
    assert(suma_fibonacci(-1) == -1);
    assert(suma_fibonacci(0) == 0);
    assert(suma_fibonacci(1) == 1);
    assert(suma_fibonacci(4) == 7);
    assert(suma_fibonacci(44) == 1836311902);
    assert(suma_fibonacci(45) == -1);
    return 0;
}

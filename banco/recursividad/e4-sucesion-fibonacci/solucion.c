/*
 * Entrega 4 - Ejercicio 2
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include "ejercicio2.h"

typedef struct {
    long long actual;
    long long siguiente;
} par_fibonacci_t;

/* Retorna (F(n), F(n + 1)) en tiempo lineal y con profundidad O(n). */
static par_fibonacci_t par_fibonacci(int n) {
    if (n == 0) {
        return (par_fibonacci_t){0, 1};
    }
    par_fibonacci_t previo = par_fibonacci(n - 1);
    return (par_fibonacci_t){previo.siguiente,
                             previo.actual + previo.siguiente};
}

int fibonacci(int n) {
    /* F(47) no cabe en int; -1 extiende el error ya usado para n negativo. */
    if (n < 0 || n > 46) {
        return -1;
    }
    return (int)par_fibonacci(n).actual;
}

int suma_fibonacci(int n) {
    /* La suma hasta F(45) excede INT_MAX. */
    if (n < 0 || n > 44) {
        return -1;
    }
    return (int)(par_fibonacci(n + 2).actual - 1);
}

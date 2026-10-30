/*
 * Entrega 4 - Ejercicio 3
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include "ejercicio3.h"

long long factorial(int n) {
    if (n < 0) {
        return -1;
    }
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

long long combinatorio(int n, int k) {
    if (n < 0 || k < 0 || k > n) {
        return -1;
    }
    if (k == 0 || k == n) {
        return 1;
    }
    if (k > n - k) {
        k = n - k;
    }
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

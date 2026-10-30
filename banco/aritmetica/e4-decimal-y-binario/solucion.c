/*
 * Entrega 4 - Ejercicio 7
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include "ejercicio7.h"

long long decimal_a_binario(int numero) {
    if (numero < 0) {
        return -1;
    }
    if (numero == 0) {
        return 0;
    }
    long long binario = 0;
    long long factor = 1;
    while (numero > 0) {
        int rem = numero % 2;
        binario += rem * factor;
        factor *= 10;
        numero /= 2;
    }
    return binario;
}

int binario_a_decimal(long long binario) {
    if (binario < 0) {
        return -1;
    }
    int decimal = 0;
    int base = 1;
    while (binario > 0) {
        int ultimo_digito = binario % 10;
        if (ultimo_digito != 0 && ultimo_digito != 1) {
            return -1; // No es binario válido
        }
        decimal += ultimo_digito * base;
        base *= 2;
        binario /= 10;
    }
    return decimal;
}

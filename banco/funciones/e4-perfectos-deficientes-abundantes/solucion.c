/*
 * Entrega 4 - Ejercicio 8
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include "ejercicio8.h"

int suma_divisores_propios(int numero) {
    if (numero <= 0) {
        return -1;
    }
    int suma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int clasificar_numero(int numero) {
    if (numero <= 0) {
        return -1;
    }
    int suma = suma_divisores_propios(numero);
    if (suma == numero) {
        return 1; // Perfecto
    } else if (suma < numero) {
        return 0; // Deficiente
    } else {
        return 2; // Abundante
    }
}

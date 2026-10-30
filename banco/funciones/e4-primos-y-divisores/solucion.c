/*
 * Entrega 4 - Ejercicio 1
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include "ejercicio1.h"

int es_primo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int proximo_primo(int numero) {
    int candidato = (numero < 2) ? 2 : numero + 1;
    while (!es_primo(candidato)) {
        candidato++;
    }
    return candidato;
}

int cantidad_divisores(int numero) {
    if (numero <= 0) {
        return 0;
    }
    int cont = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cont++;
        }
    }
    return cont;
}

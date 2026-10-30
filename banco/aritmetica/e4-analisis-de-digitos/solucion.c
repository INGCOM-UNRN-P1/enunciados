/*
 * Entrega 4 - Ejercicio 5
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include "ejercicio5.h"

int contar_digitos(int numero) {
    if (numero == 0) {
        return 1;
    }
    if (numero < 0) {
        numero = -numero;
    }
    int cont = 0;
    while (numero > 0) {
        cont++;
        numero /= 10;
    }
    return cont;
}

int sumar_digitos(int numero) {
    if (numero < 0) {
        numero = -numero;
    }
    int suma = 0;
    while (numero > 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

int invertir_numero(int numero) {
    int signo = (numero < 0) ? -1 : 1;
    if (numero < 0) {
        numero = -numero;
    }
    int invertido = 0;
    while (numero > 0) {
        invertido = invertido * 10 + (numero % 10);
        numero /= 10;
    }
    return invertido * signo;
}

int es_capicua(int numero) {
    if (numero < 0) {
        numero = -numero;
    }
    return numero == invertir_numero(numero);
}

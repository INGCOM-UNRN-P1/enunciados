/*
 * Entrega 4 - Ejercicio 7
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include <stdio.h>
#include <assert.h>
#include "ejercicio7.h"

int main(void) {
    printf("Ejecutando pruebas de Ejercicio 7...\n");

    // Pruebas decimal_a_binario
    assert(decimal_a_binario(-5) == -1);
    assert(decimal_a_binario(0) == 0);
    assert(decimal_a_binario(1) == 1);
    assert(decimal_a_binario(2) == 10);
    assert(decimal_a_binario(5) == 101);
    assert(decimal_a_binario(13) == 1101);
    assert(decimal_a_binario(25) == 11001);

    // Pruebas binario_a_decimal
    assert(binario_a_decimal(-1) == -1);
    assert(binario_a_decimal(120) == -1); // contiene '2'
    assert(binario_a_decimal(0) == 0);
    assert(binario_a_decimal(1) == 1);
    assert(binario_a_decimal(10) == 2);
    assert(binario_a_decimal(101) == 5);
    assert(binario_a_decimal(1101) == 13);
    assert(binario_a_decimal(11001) == 25);

    printf("Todas las pruebas del Ejercicio 7 pasaron con exito.\n");
    return 0;
}

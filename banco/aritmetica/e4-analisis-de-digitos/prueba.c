/*
 * Entrega 4 - Ejercicio 5
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include <stdio.h>
#include <assert.h>
#include "ejercicio5.h"

int main(void) {
    printf("Ejecutando pruebas de Ejercicio 5...\n");

    // Pruebas contar_digitos
    assert(contar_digitos(0) == 1);
    assert(contar_digitos(7) == 1);
    assert(contar_digitos(12345) == 5);
    assert(contar_digitos(-987) == 3);

    // Pruebas sumar_digitos
    assert(sumar_digitos(0) == 0);
    assert(sumar_digitos(123) == 6);
    assert(sumar_digitos(-456) == 15);

    // Pruebas invertir_numero
    assert(invertir_numero(0) == 0);
    assert(invertir_numero(1234) == 4321);
    assert(invertir_numero(-560) == -65);

    // Pruebas es_capicua
    assert(es_capicua(0) == 1);
    assert(es_capicua(121) == 1);
    assert(es_capicua(12321) == 1);
    assert(es_capicua(1234) == 0);
    assert(es_capicua(-121) == 1);

    printf("Todas las pruebas del Ejercicio 5 pasaron con exito.\n");
    return 0;
}

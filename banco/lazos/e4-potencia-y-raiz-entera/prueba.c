/*
 * Entrega 4 - Ejercicio 6
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include <stdio.h>
#include <assert.h>
#include "ejercicio6.h"

int main(void) {
    printf("Ejecutando pruebas de Ejercicio 6...\n");

    // Pruebas potencia
    assert(potencia(2, -1) == -1);
    assert(potencia(5, 0) == 1);
    assert(potencia(2, 3) == 8);
    assert(potencia(-3, 3) == -27);
    assert(potencia(-3, 2) == 9);

    // Pruebas raiz_cuadrada_entera
    assert(raiz_cuadrada_entera(-4) == -1);
    assert(raiz_cuadrada_entera(0) == 0);
    assert(raiz_cuadrada_entera(1) == 1);
    assert(raiz_cuadrada_entera(4) == 2);
    assert(raiz_cuadrada_entera(8) == 2);
    assert(raiz_cuadrada_entera(9) == 3);
    assert(raiz_cuadrada_entera(15) == 3);
    assert(raiz_cuadrada_entera(16) == 4);

    printf("Todas las pruebas del Ejercicio 6 pasaron con exito.\n");
    return 0;
}

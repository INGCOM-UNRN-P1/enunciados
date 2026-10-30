/*
 * Entrega 4 - Ejercicio 10
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include <stdio.h>
#include <assert.h>
#include "ejercicio10.h"

static int casi_igual(float a, float b) {
    float diff = a - b;
    if (diff < 0) diff = -diff;
    return diff < 0.01f;
}

int main(void) {
    printf("Ejecutando pruebas de Ejercicio 10...\n");

    // Pruebas círculo
    assert(perimetro_circulo(-1.0f) < 0.0f);
    assert(casi_igual(perimetro_circulo(0.0f), 0.0f));
    assert(casi_igual(perimetro_circulo(1.0f), 6.28318f));
    assert(area_circulo(-1.0f) < 0.0f);
    assert(casi_igual(area_circulo(2.0f), 12.56637f));

    // Pruebas triángulo
    assert(area_triangulo(0.0f, 5.0f) < 0.0f);
    assert(area_triangulo(5.0f, -1.0f) < 0.0f);
    assert(casi_igual(area_triangulo(4.0f, 3.0f), 6.0f));

    // Pruebas hipotenusa
    assert(calcular_hipotenusa(0.0f, 4.0f) < 0.0f);
    assert(calcular_hipotenusa(-3.0f, 4.0f) < 0.0f);
    assert(casi_igual(calcular_hipotenusa(3.0f, 4.0f), 5.0f));

    printf("Todas las pruebas del Ejercicio 10 pasaron con exito.\n");
    return 0;
}

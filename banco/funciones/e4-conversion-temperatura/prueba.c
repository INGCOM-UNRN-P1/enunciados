/*
 * Entrega 4 - Ejercicio 9
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include <stdio.h>
#include <assert.h>
#include "ejercicio9.h"

static int casi_igual(float a, float b) {
    float diff = a - b;
    if (diff < 0) diff = -diff;
    return diff < 0.01f;
}

int main(void) {
    printf("Ejecutando pruebas de Ejercicio 9...\n");

    // Pruebas celsius_a_fahrenheit
    assert(casi_igual(celsius_a_fahrenheit(0.0f), 32.0f));
    assert(casi_igual(celsius_a_fahrenheit(100.0f), 212.0f));
    assert(casi_igual(celsius_a_fahrenheit(-40.0f), -40.0f));

    // Pruebas fahrenheit_a_celsius
    assert(casi_igual(fahrenheit_a_celsius(32.0f), 0.0f));
    assert(casi_igual(fahrenheit_a_celsius(212.0f), 100.0f));
    assert(casi_igual(fahrenheit_a_celsius(-40.0f), -40.0f));

    // Pruebas celsius_a_kelvin
    assert(celsius_a_kelvin(-300.0f) < 0.0f);
    assert(casi_igual(celsius_a_kelvin(0.0f), 273.15f));
    assert(casi_igual(celsius_a_kelvin(100.0f), 373.15f));

    printf("Todas las pruebas del Ejercicio 9 pasaron con exito.\n");
    return 0;
}

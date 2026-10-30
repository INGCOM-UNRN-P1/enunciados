/*
 * Entrega 4 - Ejercicio 9
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#include "ejercicio9.h"

float celsius_a_fahrenheit(float celsius) {
    return (celsius * 9.0f / 5.0f) + 32.0f;
}

float fahrenheit_a_celsius(float fahrenheit) {
    return (fahrenheit - 32.0f) * 5.0f / 9.0f;
}

float celsius_a_kelvin(float celsius) {
    if (celsius < -273.15f) {
        return -1.0f;
    }
    return celsius + 273.15f;
}

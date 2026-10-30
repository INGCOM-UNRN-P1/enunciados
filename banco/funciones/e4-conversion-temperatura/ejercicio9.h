/*
 * Entrega 4 - Ejercicio 9
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#ifndef EJERCICIO9_H
#define EJERCICIO9_H

/**
 * @brief Convierte grados Celsius a grados Fahrenheit (F = C * 9/5 + 32).
 * @param celsius Temperatura en Celsius.
 * @return Temperatura en Fahrenheit.
 */
float celsius_a_fahrenheit(float celsius);

/**
 * @brief Convierte grados Fahrenheit a grados Celsius (C = (F - 32) * 5/9).
 * @param fahrenheit Temperatura en Fahrenheit.
 * @return Temperatura en Celsius.
 */
float fahrenheit_a_celsius(float fahrenheit);

/**
 * @brief Convierte grados Celsius a Kelvin (K = C + 273.15).
 * @param celsius Temperatura en Celsius.
 * @return Temperatura en Kelvin, o -1.0f si está por debajo del cero absoluto (celsius < -273.15f).
 */
float celsius_a_kelvin(float celsius);

#endif

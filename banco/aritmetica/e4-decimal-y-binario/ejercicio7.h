/*
 * Entrega 4 - Ejercicio 7
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#ifndef EJERCICIO7_H
#define EJERCICIO7_H

/**
 * @brief Convierte un número decimal no negativo a su representación en binario como valor entero.
 * @param numero Entero no negativo (ej: 13).
 * @return Representación en binario (ej: 1101), o -1 si numero < 0.
 */
long long decimal_a_binario(int numero);

/**
 * @brief Convierte un valor entero que representa dígitos binarios (0 y 1) a su valor decimal.
 * @param binario Número compuesto de dígitos 0 y 1 (ej: 1101).
 * @return Equivalente decimal (ej: 13), o -1 si contiene dígitos inválidos o es negativo.
 */
int binario_a_decimal(long long binario);

#endif

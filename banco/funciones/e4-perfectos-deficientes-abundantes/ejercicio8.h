/*
 * Entrega 4 - Ejercicio 8
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#ifndef EJERCICIO8_H
#define EJERCICIO8_H

/**
 * @brief Suma todos los divisores propios positivos de un número (menores al número).
 * @param numero Entero positivo.
 * @return Suma de divisores propios, o -1 si numero <= 0.
 */
int suma_divisores_propios(int numero);

/**
 * @brief Clasifica un número según la suma de sus divisores propios:
 *        1: Perfecto (suma == numero)
 *        0: Deficiente (suma < numero)
 *        2: Abundante (suma > numero)
 * @param numero Entero positivo.
 * @return Código de clasificación (1, 0, 2), o -1 si numero <= 0.
 */
int clasificar_numero(int numero);

#endif

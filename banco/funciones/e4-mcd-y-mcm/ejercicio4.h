/*
 * Entrega 4 - Ejercicio 4
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#ifndef EJERCICIO4_H
#define EJERCICIO4_H

/**
 * @brief Calcula el Máximo Común Divisor entre dos números enteros mediante el algoritmo de Euclides.
 * @param a Primer número entero.
 * @param b Segundo número entero.
 * @return El MCD positivo entre a y b, o -1 si ambos son 0.
 */
int maximo_comun_divisor(int a, int b);

/**
 * @brief Calcula el Mínimo Común Múltiplo entre dos números enteros.
 * @param a Primer número entero.
 * @param b Segundo número entero.
 * @return El MCM positivo entre a y b, o -1 si alguno es <= 0.
 */
int minimo_comun_multiplo(int a, int b);

#endif

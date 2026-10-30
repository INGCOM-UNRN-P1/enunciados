/*
 * Entrega 4 - Ejercicio 2
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#ifndef EJERCICIO2_H
#define EJERCICIO2_H

/**
 * @brief Calcula el n-ésimo término de la sucesión de Fibonacci (F0 = 0, F1 = 1).
 * @param n Posición (base 0).
 * @return El valor del término, o -1 si n < 0.
 */
int fibonacci(int n);

/**
 * @brief Calcula la suma acumulada de los primeros n términos de Fibonacci (de F0 hasta Fn).
 * @param n Cantidad de términos inclusive.
 * @return La suma acumulada, o -1 si n < 0.
 */
int suma_fibonacci(int n);

#endif

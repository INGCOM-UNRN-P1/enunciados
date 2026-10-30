/*
 * Entrega 4 - Ejercicio 3
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#ifndef EJERCICIO3_H
#define EJERCICIO3_H

/**
 * @brief Calcula el factorial de un número entero no negativo (n!).
 * @param n Número entero.
 * @return n! como long long, o -1 si n < 0.
 */
long long factorial(int n);

/**
 * @brief Calcula el número combinatorio C(n, k) = n! / (k! * (n - k)!).
 * @param n Total de elementos.
 * @param k Elementos a seleccionar.
 * @return Valor de C(n, k), o -1 si los valores no son válidos (k < 0 o k > n).
 */
long long combinatorio(int n, int k);

#endif

/*
 * Entrega 4 - Ejercicio 1
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#ifndef EJERCICIO1_H
#define EJERCICIO1_H

/**
 * @brief Determina si un número entero positivo es primo.
 * @param numero Número entero a evaluar.
 * @return 1 si es primo, 0 si no lo es (números <= 1 no son primos).
 */
int es_primo(int numero);

/**
 * @brief Encuentra el menor número primo estrictamente mayor que el número dado.
 * @param numero Número entero base.
 * @return El siguiente número primo.
 */
int proximo_primo(int numero);

/**
 * @brief Cuenta la cantidad total de divisores positivos de un número.
 * @param numero Número entero positivo.
 * @return Cantidad de divisores positivos (o 0 si numero <= 0).
 */
int cantidad_divisores(int numero);

#endif

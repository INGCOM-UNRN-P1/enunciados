/*
 * Entrega 4 - Ejercicio 6
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#ifndef EJERCICIO6_H
#define EJERCICIO6_H

/**
 * @brief Calcula la potencia entera de una base elevada a un exponente no negativo.
 * @param base Base entera.
 * @param exponente Exponente entero (>= 0).
 * @return base^exponente como long long, o -1 si exponente < 0.
 */
long long potencia(int base, int exponente);

/**
 * @brief Calcula la parte entera de la raíz cuadrada (piso de sqrt(n)) sin usar math.h.
 * @param numero Entero no negativo.
 * @return floor(sqrt(numero)), o -1 si numero < 0.
 */
int raiz_cuadrada_entera(int numero);

#endif

/*
 * Entrega 4 - Ejercicio 5
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 */

#ifndef EJERCICIO5_H
#define EJERCICIO5_H

/**
 * @brief Cuenta la cantidad de dígitos decimales de un número entero.
 * @param numero Número entero.
 * @return Cantidad de dígitos (el 0 tiene 1 dígito).
 */
int contar_digitos(int numero);

/**
 * @brief Suma los valores absolutos de los dígitos de un número entero.
 * @param numero Número entero.
 * @return Suma de sus dígitos.
 */
int sumar_digitos(int numero);

/**
 * @brief Invierte el orden de los dígitos conservando el signo.
 * @param numero Número entero.
 * @return Número con dígitos invertidos (ej: 1230 -> 321, -45 -> -54).
 */
int invertir_numero(int numero);

/**
 * @brief Determina si un número entero es capicúa (se lee igual en ambos sentidos).
 * @param numero Número entero.
 * @return 1 si es capicúa, 0 en caso contrario.
 */
int es_capicua(int numero);

#endif

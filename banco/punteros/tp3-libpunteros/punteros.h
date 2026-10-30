/**
 * @file punteros.h
 * @brief Biblioteca de operaciones fundamentales con punteros y aritmética de punteros.
 *
 * Trabajo Práctico 3 - Programación 1
 * Universidad Nacional de Río Negro - Ingeniería en Computación
 *
 * Convenciones de Estilo y Cátedra:
 * - Toda manipulación de secuencias o arreglos debe resolverse estrictamente
 *   mediante aritmética de punteros (*p, p++, p + offset, fin - inicio),
 *   evitando el operador de indexación arreglo[i].
 * - Uso riguroso de const-correctness (const char*, const int*) en accesos
 *   de solo lectura.
 * - Validación exhaustiva de punteros nulos (NULL).
 *
 * Observación importante de diseño:
 * Recuerden que no está permitido utilizar ALV's (Arreglos de Longitud Variable / VLA),
 * pero también, este ejercicio no está pensado para utilizar memoria dinámica.
 */

#ifndef PUNTEROS_H
#define PUNTEROS_H

#include <stdbool.h>
#include <stddef.h>

/* =========================================================================
 * Función con Prototipo Completo: Intercambio de Valores por Referencia
 * =========================================================================
 * Consigna:
 * Intercambiar los contenidos de dos variables enteras recibidas por
 * referencia a través de punteros (int *primer, int *segundo).
 *
 * Requisitos y Casos Borde:
 * - Si alguno de los punteros es NULL, la función no debe producir ningún
 *   efecto ni intentar desreferenciar memoria.
 * - Si ambos punteros apuntan a la misma dirección de memoria, el valor
 *   debe preservarse intacto.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función (propósito,
 * precondiciones, postcondiciones, parámetros y valor de retorno).
 * ========================================================================= */
void intercambiar(int *primer, int *segundo);

/* =========================================================================
 * Función con Prototipo Completo: Obtención de Mínimo y Máximo por Puntero
 * =========================================================================
 * Consigna:
 * Determinar el valor mínimo y el valor máximo de un arreglo de enteros,
 * escribiendo los resultados en las variables apuntadas por 'minimo' y 'maximo'.
 *
 * Requisitos y Casos Borde:
 * - El recorrido del arreglo debe realizarse estrictamente mediante
 *   aritmética de punteros (sin usar el operador []).
 * - Retorna true si pudo determinar ambos valores con éxito.
 * - Retorna false si 'arreglo' es NULL, si 'cantidad' es 0, o si alguno de los
 *   punteros de salida ('minimo' o 'maximo') es NULL, sin provocar accesos
 *   inválidos a memoria.
 *
 * Observación:
 * Recuerden que no está permitido utilizar ALV's, pero también, este ejercicio
 * no está pensado para utilizar memoria dinámica.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función.
 * ========================================================================= */
bool obtener_min_max(const int *arreglo, size_t cantidad, int *minimo, int *maximo);

#endif /* PUNTEROS_H */

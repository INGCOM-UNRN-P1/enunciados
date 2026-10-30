/**
 * @file arreglos.h
 * @brief Biblioteca de manipulación y procesamiento de arreglos de enteros (int).
 *
 * Trabajo Práctico 2 - Programación 1
 * Universidad Nacional de Río Negro - Ingeniería en Computación
 *
 * Convenciones de Estilo y Seguridad:
 * - Nombres de variables y parámetros descriptivos, de hasta dos palabras,
 *   sin abreviaturas y con un máximo de 12 caracteres.
 * - Todo arreglo viene acompañado por su cantidad de elementos válidos (size_t cantidad).
 * - Arreglos de solo lectura (const int arreglo[]) para funciones que no modifican datos.
 * - Arreglos mutables (int arreglo[]) para funciones que modifican contenido in-place.
 */

#ifndef ARREGLOS_H
#define ARREGLOS_H

#include <stdbool.h>
#include <stddef.h>

/* =========================================================================
 * Ejercicio 1: Sumatoria de Elementos
 * =========================================================================
 * Consigna:
 * Calcular y retornar la suma algebraica de todos los elementos enteros del
 * arreglo. Si el arreglo es nulo o la cantidad es 0, debe retornar 0. Emplear
 * long long como tipo de retorno para evitar desbordamientos aritméticos.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función (propósito,
 * precondiciones, postcondiciones, parámetros y valor de retorno).
 */
long long arreglo_sumar(const int arreglo[], size_t cantidad);

/* =========================================================================
 * Ejercicio 2: Búsqueda Lineal
 * =========================================================================
 * Consigna:
 * Localizar el índice en base cero de la primera aparición del número entero
 * buscado dentro del arreglo. Retornar -1 si el valor no se encuentra en el
 * arreglo, o si el arreglo es nulo, o si la cantidad es 0.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función.
 */
int arreglo_buscar(const int arreglo[], size_t cantidad, int buscado);

/* =========================================================================
 * Ejercicio 3: Inversión In-Place
 * =========================================================================
 * Consigna:
 * Invertir el orden de los elementos del arreglo directamente sobre su misma
 * memoria (in-place), intercambiando extremos simétricos sin utilizar memoria
 * dinámica auxiliar. Si el arreglo es nulo o la cantidad es menor o igual a 1,
 * no debe realizar ninguna modificación.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función.
 */
void arreglo_invertir(int arreglo[], size_t cantidad);

/* =========================================================================
 * Ejercicio 4: Verificación de Orden Ascendente
 * =========================================================================
 * Consigna:
 * Verificar si los elementos del arreglo se encuentran ordenados de forma
 * ascendente (es decir, arreglo[posicion] <= arreglo[posicion + 1] para todo
 * par contiguo válido). Retornar true si está ordenado o si cantidad <= 1;
 * retornar false si algún par está fuera de orden o si el arreglo es nulo.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función.
 */
bool arreglo_ordenado(const int arreglo[], size_t cantidad);

/* =========================================================================
 * Ejercicio 5: Conteo de Ocurrencias
 * =========================================================================
 * Consigna:
 * Contar y retornar cuántas veces aparece el número entero buscado dentro
 * del arreglo. Retornar 0 si el arreglo es nulo o si la cantidad es 0.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función.
 */
size_t arreglo_contar(const int arreglo[], size_t cantidad, int buscado);

/* =========================================================================
 * Ejercicio 6: Compactación In-Place (Sin prototipo previo)
 * =========================================================================
 * Consigna:
 * Implementar una función que elimine in-place todas las apariciones de un
 * valor entero dentro de un arreglo, compactando los elementos restantes
 * hacia el inicio sin dejar huecos y preservando su orden relativo original.
 *
 * Tarea del estudiante:
 * 1. Diseñar y declarar el prototipo de la función (respetando la regla de
 *    nombres descriptivos, sin abreviaturas, hasta 2 palabras y hasta 12 caracteres).
 * 2. Redactar y completar su documentación formal exhaustiva.
 * 3. Implementar la función en arreglos.c y sus pruebas en prueba.c.
 *
 * Prototipo sugerido:
 * size_t arreglo_compactar(int arreglo[], size_t cantidad, int valor);
 */

/* =========================================================================
 * Ejercicio 7: Fusión Ordenada (Sin prototipo previo)
 * =========================================================================
 * Consigna:
 * Dados dos arreglos de enteros previamente ordenados ascendentemente,
 * fusionar sus elementos en un tercer arreglo destino, manteniéndolo
 * ordenado ascendentemente sin desbordar la capacidad máxima provista.
 * Debe retornar la cantidad de elementos volcados en el destino.
 *
 * Tarea del estudiante:
 * 1. Diseñar y declarar el prototipo distinguiendo entradas (const) y salida.
 * 2. Redactar y completar su documentación formal exhaustiva.
 * 3. Implementar la función en arreglos.c y sus pruebas en prueba.c.
 *
 * Prototipo sugerido:
 * size_t arreglo_fusionar(const int primero[], size_t cantidad_uno, const int segundo[], size_t cantidad_dos, int destino[], size_t capacidad);
 */

#endif /* ARREGLOS_H */

/**
 * @file vector.h
 * @brief Biblioteca libvector: manejo de bloques contiguos de enteros en heap sin structs.
 *
 * Trabajo Práctico 4 - Programación 1
 * Universidad Nacional de Río Negro - Ingeniería en Computación
 *
 * Convenciones de Estilo y Cátedra:
 * - Toda asignación dinámica con malloc/calloc/realloc debe validarse contra NULL.
 * - Toda memoria reservada debe liberarse indefectiblemente con free.
 * - No se emplean estructuras (structs); la gestión se realiza mediante punteros directos
 *   (int*), dobles punteros (int**) y tamaños pasados por parámetro.
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>
#include <stddef.h>

/* =========================================================================
 * Función con Prototipo: Creación de Bloque Dinámico de Enteros
 * =========================================================================
 * Consigna:
 * Reserva un bloque de memoria contigua en el heap para almacenar 'cantidad'
 * enteros empleando calloc (dejando la memoria inicializada en 0).
 * Retorna el puntero int* al bloque asignado, o NULL si la cantidad es 0 o
 * si calloc falla.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función.
 * ========================================================================= */
int *crear_bloque_enteros(size_t cantidad);

/* =========================================================================
 * Función con Prototipo: Liberación Segura de Bloque Dinámico
 * =========================================================================
 * Consigna:
 * Recibe un doble puntero (int **puntero_bloque), libera la memoria a la que
 * apunta (*puntero_bloque) con free, y asigna *puntero_bloque = NULL para
 * eliminar de forma segura el puntero colgante (dangling pointer).
 * Si puntero_bloque es NULL o *puntero_bloque ya es NULL, no realiza ninguna acción.
 * ========================================================================= */
void liberar_bloque_enteros(int **puntero_bloque);

/* =========================================================================
 * Función con Prototipo: Redimensionamiento de Bloque Dinámico
 * =========================================================================
 * Consigna:
 * Redimensiona el bloque apuntado por 'bloque' a 'nueva_cantidad' enteros
 * mediante realloc.
 * Si nueva_cantidad es 0, libera la memoria y retorna NULL.
 * Si realloc falla, no debe perderse el bloque original y la función retorna NULL.
 * Ante éxito, retorna el puntero a la nueva dirección de memoria.
 * ========================================================================= */
int *redimensionar_bloque_enteros(int *bloque, size_t nueva_cantidad);

/* =========================================================================
 * Función sin Prototipo 1: Fusión y Concatenación de Bloques en Heap
 * =========================================================================
 * Consigna:
 * Recibe dos bloques de enteros en memoria dinámica (o buffers contiguos)
 * junto con sus cantidades respectivas (primero, cant_primero, segundo, cant_segundo).
 * Reserva un nuevo bloque en heap para la suma exacta de elementos, copia los
 * elementos del primer bloque seguidos de los del segundo bloque y retorna el
 * puntero int* al nuevo bloque.
 * Retorna NULL si ambos son nulos o si falla la memoria.
 *
 * Tarea del estudiante:
 * 1. Diseñar y declarar el prototipo formal en este archivo cabecera.
 * 2. Redactar la documentación formal Doxygen.
 * 3. Implementar la función en vector.c y sus pruebas en prueba.c.
 *
 * Prototipo sugerido:
 * int *fusionar_bloques_enteros(const int *primero, size_t cant_primero,
 *                               const int *segundo, size_t cant_segundo);
 * ========================================================================= */

/* =========================================================================
 * Función sin Prototipo 2: Inserción Dinámica al Final con Reasignación Doble
 * =========================================================================
 * Consigna:
 * Recibe un doble puntero al bloque de enteros (int **puntero_bloque), un
 * puntero a su tamaño actual (size_t *cantidad) y el nuevo 'valor' a agregar.
 * Redimensiona el bloque en el heap para (*cantidad + 1) elementos, asigna
 * el nuevo valor en la última posición, actualiza (*cantidad)++ y actualiza
 * *puntero_bloque con la nueva dirección si realloc cambió la ubicación física.
 * Retorna true ante éxito o false si falla realloc (preservando el bloque original).
 *
 * Tarea del estudiante:
 * 1. Diseñar y declarar el prototipo formal en este archivo cabecera.
 * 2. Redactar la documentación formal Doxygen.
 * 3. Implementar la función en vector.c y sus pruebas en prueba.c.
 *
 * Prototipo sugerido:
 * bool agregar_al_bloque_enteros(int **puntero_bloque, size_t *cantidad, int valor);
 * ========================================================================= */

#endif /* VECTOR_H */

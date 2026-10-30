#ifndef PUNTERO_CADENA_H
#define PUNTERO_CADENA_H

#include <stdbool.h>
#include <stddef.h>

/* =========================================================================
 * Ejercicio 5: Copia y Concatenación con Punteros (Complementario a libcadenas TP2)
 * =========================================================================
 * Consigna:
 * El estudiante debe definir aquí los prototipos, documentación Doxygen
 * completa (propósito, precondiciones, postcondiciones, parámetros y retorno)
 * para:
 * 1. copiar_con_punteros: recibe char *destino, size_t capacidad, const char *origen.
 *    Copia origen en destino utilizando exclusivamente aritmética de punteros
 *    (desplazando punteros destino y origen con *dst++ = *src++).
 *    Garantiza terminación nula '\0' dentro del rango seguro [0, capacidad - 1].
 *    Retorna true si cupo completa, o false si hubo truncamiento o parámetros inválidos.
 * 2. concatenar_con_punteros: recibe char *destino, size_t capacidad, const char *origen.
 *    Avanza un puntero auxiliar hasta el terminador '\0' de destino y a continuación
 *    copia los caracteres de origen con punteros, respetando la capacidad máxima.
 *    Garantiza terminador nulo si capacidad > 0. Retorna true si no truncó, false si truncó.
 *
 * Complementariedad con TP2:
 * Reimplementa las operaciones clave de cadenas seguras (cadena_copiar y cadena_concatenar)
 * reemplazando toda indexación por punteros directos.
 *
 * Tarea del estudiante:
 * Diseñar prototipos en este archivo, implementar el código en puntero_cadena.c,
 * el programa demostrativo en main.c y la suite de pruebas completa en prueba.c.
 * ========================================================================= */

#endif /* PUNTERO_CADENA_H */

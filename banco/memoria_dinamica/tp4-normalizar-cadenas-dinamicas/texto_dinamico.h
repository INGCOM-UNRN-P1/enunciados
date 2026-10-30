#ifndef TEXTO_DINAMICO_H
#define TEXTO_DINAMICO_H

#include <stdbool.h>
#include <stddef.h>
#include "cadenas.h"

/* =========================================================================
 * Ejercicio 2: Normalización y Limpieza Dinámica de Cadenas (sin structs)
 * =========================================================================
 * Consigna:
 * Utilizando memoria dinámica en heap y las funciones de libcadenas_dinamicas:
 *
 * 1. cadena_recortar_espacios: recibe const char *origen.
 *    Elimina los espacios iniciales y finales (trimming), reserva un bloque
 *    exacto en heap con malloc y copia el texto limpio con su '\0'.
 *    Retorna char* al nuevo bloque o NULL si origen es NULL o solo contiene espacios.
 *
 * 2. cadena_repetir: recibe const char *origen y size_t veces.
 *    Reserva dinámicamente en el heap el espacio exacto para repetir la cadena
 *    'veces' veces y retorna el puntero char*.
 *    Si veces es 0, retorna una cadena vacía en heap ("") o NULL según error.
 * ========================================================================= */

#endif /* TEXTO_DINAMICO_H */

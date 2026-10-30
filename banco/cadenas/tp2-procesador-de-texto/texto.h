#ifndef TEXTO_H
#define TEXTO_H

#include <stdbool.h>
#include <stddef.h>

/* =========================================================================
 * Consigna:
 * Unir dos cadenas de texto intercalando un separador en un búfer destino
 * seguro de tamaño acotado por 'capacidad', utilizando las funciones de
 * copia y concatenación provistas por libcadenas.
 *
 * Tarea del estudiante:
 * Redactar y completar la documentación formal de esta función (propósito,
 * precondiciones, postcondiciones, parámetros y valor de retorno).
 * ========================================================================= */
bool unir_con_separador(char destino[],
                        size_t capacidad,
                        const char primero[],
                        const char segundo[],
                        const char separador[]);

#endif

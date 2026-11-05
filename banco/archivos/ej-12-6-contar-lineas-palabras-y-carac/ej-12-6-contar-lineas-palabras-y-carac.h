#ifndef EJERCICIO_EJ_12_6_CONTAR_LINEAS_PALABRAS_Y_CARAC_H
#define EJERCICIO_EJ_12_6_CONTAR_LINEAS_PALABRAS_Y_CARAC_H

#include <stddef.h>

int contar_archivo(const char *ruta, size_t *lineas, size_t *palabras,
                   size_t *caracteres);

#endif

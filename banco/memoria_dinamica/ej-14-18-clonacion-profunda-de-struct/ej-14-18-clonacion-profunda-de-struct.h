#ifndef EJERCICIO_EJ_14_18_CLONACION_PROFUNDA_DE_STRUCT_H
#define EJERCICIO_EJ_14_18_CLONACION_PROFUNDA_DE_STRUCT_H

#include <stddef.h>
typedef struct { char *nombre; int *notas; size_t cantidad_notas; } ficha_t;
ficha_t *ficha_clonar(const ficha_t *original);
void ficha_liberar(ficha_t *ficha);

#endif

#ifndef EJERCICIO_EJ_14_25_MANEJO_DE_ERRORES_DE_MALLOC_H
#define EJERCICIO_EJ_14_25_MANEJO_DE_ERRORES_DE_MALLOC_H

#include <stddef.h>
void *reservar_arreglo(size_t cantidad, size_t tamano);
void *reservar_arreglo_o_salir(size_t cantidad, size_t tamano);

#endif

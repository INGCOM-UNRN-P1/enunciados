#ifndef EJERCICIO_GRAFO_RED_30_H
#define EJERCICIO_GRAFO_RED_30_H
#include <stddef.h>
#include <limits.h>
int ruta_malla(size_t filas,size_t cols,const unsigned char *bloqueada,size_t inicio,size_t destino,size_t *ruta,size_t capacidad,size_t *longitud);
#endif

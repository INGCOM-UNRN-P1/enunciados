#ifndef EJERCICIO_GRAFO_RED_02_H
#define EJERCICIO_GRAFO_RED_02_H
#include <stddef.h>
int construir_listas_adyacencia(size_t n, size_t m, const size_t aristas[40][2], int listas[20][20]);
int grado_vertice(size_t n, const int listas[20][20], size_t vertice);
#endif

#ifndef EJERCICIO_GRAFO_RED_01_H
#define EJERCICIO_GRAFO_RED_01_H
#include <stdbool.h>
#include <stddef.h>
int cargar_grafo_no_dirigido(size_t n, size_t m, const size_t (*aristas)[2], int matriz[50][50]);
bool grafo_adyacente(size_t n, const int matriz[50][50], size_t origen, size_t destino);
#endif

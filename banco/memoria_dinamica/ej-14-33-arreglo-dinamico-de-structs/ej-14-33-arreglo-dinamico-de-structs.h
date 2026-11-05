#ifndef EJERCICIO_EJ_14_33_ARREGLO_DINAMICO_DE_STRUCTS_H
#define EJERCICIO_EJ_14_33_ARREGLO_DINAMICO_DE_STRUCTS_H

#include <stddef.h>
#include <stdbool.h>
typedef struct { int id; char *nombre; } producto_t;
typedef struct { producto_t *datos; size_t cantidad; size_t capacidad; } productos_t;
void productos_iniciar(productos_t *p);
bool productos_agregar(productos_t *p, int id, const char *nombre);
const producto_t *productos_buscar(const productos_t *p, int id);
void productos_liberar(productos_t *p);

#endif

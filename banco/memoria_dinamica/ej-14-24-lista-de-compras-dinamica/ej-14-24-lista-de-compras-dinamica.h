#ifndef EJERCICIO_EJ_14_24_LISTA_DE_COMPRAS_DINAMICA_H
#define EJERCICIO_EJ_14_24_LISTA_DE_COMPRAS_DINAMICA_H

#include <stddef.h>
#include <stdbool.h>
typedef struct { char **items; size_t cantidad; size_t capacidad; } lista_compras_t;
void lista_compras_iniciar(lista_compras_t *l);
bool lista_compras_agregar(lista_compras_t *l, const char *item);
bool lista_compras_eliminar(lista_compras_t *l, const char *item);
void lista_compras_liberar(lista_compras_t *l);

#endif

#ifndef EJ1435_H
#define EJ1435_H
#include <stdbool.h>
#include <stddef.h>
typedef struct { int *datos; size_t tamanio; size_t capacidad; } pila_t;
bool pila_inicializar(pila_t *p);
bool pila_push(pila_t *p, int valor);
bool pila_pop(pila_t *p, int *valor);
bool pila_peek(const pila_t *p, int *valor);
void pila_destruir(pila_t *p);
#endif

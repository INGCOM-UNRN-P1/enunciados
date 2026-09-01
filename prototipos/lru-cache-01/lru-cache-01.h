#ifndef EJERCICIO_LRU_CACHE_01_H
#define EJERCICIO_LRU_CACHE_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación lru_init */
void lru_init(t_LRUCache *c, int cap);
/* Operación lru_get */
int lru_get(t_LRUCache *c, int clave);
/* Operación lru_put */
void lru_put(t_LRUCache *c, int clave, int valor);

#endif /* EJERCICIO_LRU_CACHE_01_H */

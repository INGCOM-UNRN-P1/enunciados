#ifndef HEAP_PRIO_15_H
#define HEAP_PRIO_15_H
#include <stdbool.h>
typedef struct binomial_node binomial_node_t; typedef struct { binomial_node_t *head; } binomial_heap_t;
void binomial_init(binomial_heap_t *h); bool binomial_insert(binomial_heap_t *h,int valor); bool binomial_extract_min(binomial_heap_t *h,int *salida); bool binomial_union(binomial_heap_t *destino,binomial_heap_t *origen); bool binomial_empty(const binomial_heap_t *h); void binomial_destroy(binomial_heap_t *h);
#endif

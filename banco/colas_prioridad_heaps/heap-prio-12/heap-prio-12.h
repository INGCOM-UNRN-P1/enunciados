#ifndef HEAP_PRIO_12_H
#define HEAP_PRIO_12_H
#include <stdbool.h>
#include <stddef.h>
#define HEAP_CAPACITY 256
typedef struct { int inferiores[HEAP_CAPACITY]; size_t n_inferiores; int superiores[HEAP_CAPACITY]; size_t n_superiores; } median_stream_t;
void median_init(median_stream_t *s); bool median_add(median_stream_t *s,int valor); bool median_get(const median_stream_t *s,double *mediana);
#endif

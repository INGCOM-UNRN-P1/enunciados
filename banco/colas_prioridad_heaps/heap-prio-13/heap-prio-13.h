#ifndef HEAP_PRIO_13_H
#define HEAP_PRIO_13_H
#include <stdbool.h>
#include <stddef.h>
#define HEAP_CAPACITY 256
typedef struct { int datos[HEAP_CAPACITY]; size_t tamano; size_t d; } dheap_t;
bool dheap_init(dheap_t *h,size_t d); bool dheap_push(dheap_t *h,int valor); bool dheap_pop(dheap_t *h,int *salida);
#endif

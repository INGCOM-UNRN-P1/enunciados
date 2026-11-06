#ifndef EJERCICIO_HEAP_PRIO_24_H
#define EJERCICIO_HEAP_PRIO_24_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
typedef struct {int *a;size_t n,cap;} minmax_heap_t;
void minmax_init(minmax_heap_t*h);bool minmax_insert(minmax_heap_t*h,int v);bool minmax_min(const minmax_heap_t*h,int*out);bool minmax_max(const minmax_heap_t*h,int*out);bool minmax_pop_min(minmax_heap_t*h,int*out);bool minmax_pop_max(minmax_heap_t*h,int*out);bool minmax_valid(const minmax_heap_t*h);void minmax_destroy(minmax_heap_t*h);
#endif

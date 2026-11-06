#ifndef HEAP_PRIO_16_H
#define HEAP_PRIO_16_H
#include <stdbool.h>
#include <stddef.h>
typedef struct fib_node fib_node_t; typedef struct {fib_node_t *min; size_t n;} fib_heap_t;
void fib_init(fib_heap_t*h); bool fib_insert(fib_heap_t*h,int valor); bool fib_union(fib_heap_t*a,fib_heap_t*b); bool fib_extract_min(fib_heap_t*h,int*out); void fib_destroy(fib_heap_t*h);
#endif

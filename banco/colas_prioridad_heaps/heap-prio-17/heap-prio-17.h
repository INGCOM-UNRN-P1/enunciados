#ifndef HEAP_PRIO_17_H
#define HEAP_PRIO_17_H
#include <stdbool.h>
typedef struct skew_node skew_node_t; typedef struct {skew_node_t*root;} skew_heap_t;
void skew_init(skew_heap_t*h); bool skew_insert(skew_heap_t*h,int valor); bool skew_merge(skew_heap_t*a,skew_heap_t*b); bool skew_extract_min(skew_heap_t*h,int*out); void skew_destroy(skew_heap_t*h);
#endif

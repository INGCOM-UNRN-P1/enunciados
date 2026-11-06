#ifndef EJERCICIO_HEAP_PRIO_22_H
#define EJERCICIO_HEAP_PRIO_22_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
typedef struct {size_t from,to;uint64_t weight;} prim_edge_t;
bool prim_minimum_spanning_tree(size_t vertices,const prim_edge_t *edges,size_t edge_count,size_t root,size_t *parent,uint64_t *total_weight);
#endif

#ifndef EJERCICIO_HEAP_PRIO_21_H
#define EJERCICIO_HEAP_PRIO_21_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
typedef struct {size_t from,to;uint64_t weight;} graph_edge_t;
bool dijkstra_shortest_paths(size_t vertices,const graph_edge_t *edges,size_t edge_count,size_t source,uint64_t *distances,size_t *predecessors);
#endif

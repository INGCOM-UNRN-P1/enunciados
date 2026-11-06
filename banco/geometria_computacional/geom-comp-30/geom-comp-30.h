#ifndef EJERCICIO_GEOM_COMP_30_H
#define EJERCICIO_GEOM_COMP_30_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {double x,y;} kd_point_t;
typedef struct kd_node kd_node_t;
typedef struct {kd_node_t *root;size_t n;kd_point_t *points;} kd_tree_t;
bool kd_build(kd_tree_t *t,const kd_point_t *p,size_t n);
bool kd_query(const kd_tree_t *t,double xmin,double ymin,double xmax,double ymax,size_t *indices,size_t cap,size_t *total);
void kd_destroy(kd_tree_t *t);
#endif

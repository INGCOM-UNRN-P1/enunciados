#include "../geom-comp-09.h"
#include <assert.h>
#include <math.h>
#include <stddef.h>
int main(void) {
punto2d_t c[]={{0,0},{4,0},{4,3},{0,3}};
punto2d_t conc[]={{0,0},{4,0},{2,1},{4,4},{0,4}};
punto2d_t line[]={{0,0},{1,0},{2,0}};
assert(poligono_es_convexo(c,4)); assert(poligono_es_convexo((punto2d_t[]){{0,3},{4,3},{4,0},{0,0}},4));
assert(!poligono_es_convexo(conc,5)); assert(!poligono_es_convexo(line,3));
return 0;
}

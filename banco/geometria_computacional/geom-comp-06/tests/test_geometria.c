#include "../geom-comp-06.h"
#include <assert.h>
#include <math.h>
#include <stddef.h>
int main(void) {
assert(fabs(distancia_punto_segmento((punto2d_t){2,3},(punto2d_t){0,0},(punto2d_t){4,0})-3)<1e-9);
assert(fabs(distancia_punto_segmento((punto2d_t){-1,0},(punto2d_t){0,0},(punto2d_t){4,0})-1)<1e-9);
assert(fabs(distancia_punto_segmento((punto2d_t){3,4},(punto2d_t){0,0},(punto2d_t){0,0})-5)<1e-9);
return 0;
}

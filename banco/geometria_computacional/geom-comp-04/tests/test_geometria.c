#include "../geom-comp-04.h"
#include <assert.h>
#include <math.h>
#include <stddef.h>
int main(void) {
punto2d_t m=punto_medio((punto2d_t){-2,4},(punto2d_t){4,0});
assert(fabs(m.x-1)<1e-9 && fabs(m.y-2)<1e-9);
assert(distancia_manhattan((punto2d_t){-2,4},(punto2d_t){4,0})==10);
assert(distancia_manhattan(m,m)==0);
return 0;
}

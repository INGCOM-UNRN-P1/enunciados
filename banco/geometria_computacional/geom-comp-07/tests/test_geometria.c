#include "../geom-comp-07.h"
#include <assert.h>
#include <math.h>
#include <stddef.h>
int main(void) {
punto2d_t sq[]={{0,0},{4,0},{4,3},{0,3}};
assert(fabs(area_poligono(sq,4)-12)<1e-9);
assert(fabs(area_poligono((punto2d_t[]){{0,3},{4,3},{4,0},{0,0}},4)-12)<1e-9);
assert(area_poligono(sq,2)==0 && area_poligono(NULL,4)==0);
return 0;
}

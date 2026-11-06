#include "../geom-comp-02.h"
#include <assert.h>
#include <math.h>
#include <stddef.h>
int main(void) {
vector2d_t x={1,0}, y={0,1}, z={-1,0}; double r;
assert(producto_escalar(x,y)==0.0);
assert(angulo_entre_vectores(x,y,&r) && fabs(r-acos(-1.0)/2)<1e-9);
assert(angulo_entre_vectores(x,z,&r) && fabs(r-acos(-1.0))<1e-9);
assert(!angulo_entre_vectores((vector2d_t){0,0},x,&r));
return 0;
}

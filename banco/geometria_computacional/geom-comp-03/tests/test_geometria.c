#include "../geom-comp-03.h"
#include <assert.h>
#include <math.h>
#include <stddef.h>
int main(void) {
punto2d_t a={0,0},b={2,0};
assert(producto_vectorial_2d((punto2d_t){1,0},(punto2d_t){0,1})==1);
assert(orientacion(a,b,(punto2d_t){1,1})==GIRO_ANTIHORARIO);
assert(orientacion(a,b,(punto2d_t){1,-1})==GIRO_HORARIO);
assert(orientacion(a,b,(punto2d_t){3,0})==COLINEAL);
return 0;
}

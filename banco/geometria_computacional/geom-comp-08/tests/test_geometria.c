#include "../geom-comp-08.h"
#include <assert.h>
#include <math.h>
#include <stddef.h>
int main(void) {
punto2d_t q[]={{0,0},{4,0},{4,4},{0,4}};
assert(punto_en_poligono((punto2d_t){2,2},q,4));
assert(!punto_en_poligono((punto2d_t){5,2},q,4));
assert(punto_en_poligono((punto2d_t){4,2},q,4));
assert(!punto_en_poligono((punto2d_t){1,1},q,2));
return 0;
}

#include "../geom-comp-01.h"
#include <assert.h>
#include <math.h>
#include <stddef.h>
int main(void) {
punto2d_t v={3,4}, a={1,2}, b={4,6};
assert(fabs(norma_vectorial(v)-5.0)<1e-9);
assert(fabs(distancia_euclidiana(a,b)-5.0)<1e-9);
return 0;
}

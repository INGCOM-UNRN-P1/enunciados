#include "../geom-comp-05.h"
#include <assert.h>
#include <math.h>
#include <stddef.h>
int main(void) {
assert(segmentos_intersectan((punto2d_t){0,0},(punto2d_t){4,4},(punto2d_t){0,4},(punto2d_t){4,0}));
assert(segmentos_intersectan((punto2d_t){0,0},(punto2d_t){4,0},(punto2d_t){2,0},(punto2d_t){6,0}));
assert(!segmentos_intersectan((punto2d_t){0,0},(punto2d_t){1,0},(punto2d_t){2,0},(punto2d_t){3,0}));
return 0;
}

#include "num-linalg-27.h"
#include <assert.h>
#include <math.h>
int main(void) {
    const double p[]={2,-3,4}, c[]={7};
    assert(evaluar_horner(p,3,2)==6); assert(evaluar_horner(p,3,0)==4);
    assert(evaluar_horner(c,1,-9)==7); assert(isnan(evaluar_horner(p,0,1)));
    assert(isnan(evaluar_horner(NULL,3,1))); return 0;
}

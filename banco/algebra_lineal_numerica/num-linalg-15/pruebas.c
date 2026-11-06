#include "num-linalg-15.h"
#include <assert.h>
#include <math.h>

int main(void){double x[]={0,1,2},y[]={1,3,5},a=0,b=0; assert(minimos_cuadrados_lineales(x,y,3,&a,&b)); assert(fabs(a-2)<1e-12&&fabs(b-1)<1e-12); double c[]={2,2}; assert(!minimos_cuadrados_lineales(c,y,2,&a,&b));return 0;}

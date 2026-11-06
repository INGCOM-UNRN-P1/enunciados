#include "num-linalg-28.h"
#include <assert.h>
#include <math.h>
int main(void) {
    const double p[]={1,0,-5,0,4}; double a,b,c,d;
    assert(bairstow_par_raices(p,4,0,-1,1e-10,100,&a,&b,&c,&d));
    assert(fabs(b)<1e-10 && fabs(d)<1e-10);
    assert((fabs(a-1)<1e-8&&fabs(c+1)<1e-8)||(fabs(a+1)<1e-8&&fabs(c-1)<1e-8));
    const double q[]={1,0,1}; assert(bairstow_par_raices(q,2,0,1,1e-12,10,&a,&b,&c,&d));
    assert(fabs(a)<1e-10&&fabs(c)<1e-10&&fabs(fabs(b)-1)<1e-10&&fabs(d+b)<1e-10);
    assert(!bairstow_par_raices(p,1,0,-1,1e-8,10,&a,&b,&c,&d)); return 0;
}

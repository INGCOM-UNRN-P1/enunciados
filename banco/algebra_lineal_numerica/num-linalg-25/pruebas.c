#include "num-linalg-25.h"
#include <assert.h>
#include <math.h>
int main(void) {
    double a[]={0,-1,-1}, b[]={2,2,2}, c[]={-1,-1,0}, d[]={1,0,1}, x[]={-9,-9,-9};
    assert(resolver_thomas(a,b,c,d,3,x));
    assert(fabs(x[0]-1)<1e-12 && fabs(x[1]-1)<1e-12 && fabs(x[2]-1)<1e-12);
    double a1[]={0}, b1[]={4}, c1[]={0}, d1[]={8}, x1[]={0};
    assert(resolver_thomas(a1,b1,c1,d1,1,x1) && x1[0]==2);
    double singular[]={1,1}, aa[]={0,1}, cc[]={1,0}, rhs[]={1,2}, out[]={7,8};
    assert(!resolver_thomas(aa,singular,cc,rhs,2,out));
    assert(out[0]==7 && out[1]==8);
    assert(!resolver_thomas(a,b,c,d,0,x));
    return 0;
}

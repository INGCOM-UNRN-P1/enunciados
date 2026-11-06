#include "num-linalg-12.h"
#include <assert.h>
#include <math.h>

int main(void){double a0[]={1,1},a1[]={0,1}; double *a[]={a0,a1}; double q0[2],q1[2],r0[2],r1[2]; double *q[]={q0,q1},*r[]={r0,r1}; assert(gram_schmidt_qr(a,2,2,q,r)); assert(fabs(q0[0]*q0[0]+q1[0]*q1[0]-1)<1e-12); assert(fabs(q0[1]*q0[1]+q1[1]*q1[1]-1)<1e-12); assert(fabs(q0[0]*q0[1]+q1[0]*q1[1])<1e-12);return 0;}

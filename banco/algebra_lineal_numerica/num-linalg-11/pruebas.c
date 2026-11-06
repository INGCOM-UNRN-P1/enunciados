#include "num-linalg-11.h"
#include <assert.h>
#include <math.h>

int main(void){double a0[]={5,0},a1[]={0,2}; double *a[]={a0,a1}; double v[]={1,1}; assert(fabs(potencias_autovalor(a,v,2,1e-10,100)-5)<1e-8); double z[]={0,0}; assert(isnan(potencias_autovalor(a,z,2,1e-8,20)));return 0;}

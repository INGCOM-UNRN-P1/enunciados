#include "num-linalg-14.h"
#include <assert.h>
#include <math.h>

int main(void){double x[]={0,1,2},y[]={1,3,5}; assert(fabs(interpolar_newton(x,y,3,1.5)-4)<1e-12); double xx[]={1,1},yy[]={2,3}; assert(isnan(interpolar_newton(xx,yy,2,0)));return 0;}

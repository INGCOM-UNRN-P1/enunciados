#include "num-linalg-22.h"
#include <assert.h>
#include <math.h>
static double exp_ode(double x,double y){(void)x;return y;}
int main(void){assert(fabs(rk4_edo(exp_ode,0,1,1,10)-exp(1))<3e-6); assert(isnan(rk4_edo(exp_ode,0,1,1,0)));return 0;}

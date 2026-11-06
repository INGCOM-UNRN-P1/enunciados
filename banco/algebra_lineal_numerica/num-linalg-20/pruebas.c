#include "num-linalg-20.h"
#include <assert.h>
#include <math.h>
static double exp_ode(double x,double y){(void)x;return y;}
int main(void){assert(fabs(euler_edo(exp_ode,0,1,1,10000)-2.7181459)<1e-5); assert(isnan(euler_edo(exp_ode,0,1,1,0)));return 0;}

#include "num-linalg-21.h"
#include <assert.h>
#include <math.h>
static double exp_ode(double x,double y){(void)x;return y;}
int main(void){assert(fabs(heun_edo(exp_ode,0,1,1,1000)-exp(1))<1e-6); assert(isnan(heun_edo(exp_ode,0,1,1,0)));return 0;}

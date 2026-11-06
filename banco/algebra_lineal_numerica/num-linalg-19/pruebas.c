#include "num-linalg-19.h"
#include <assert.h>
#include <math.h>
static double cuadrado(double x){return x*x;}
int main(void){assert(fabs(derivada_central(cuadrado,3,0.001)-6)<1e-8); assert(isnan(derivada_central(cuadrado,3,0)));return 0;}

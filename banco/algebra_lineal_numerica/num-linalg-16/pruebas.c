#include "num-linalg-16.h"
#include <assert.h>
#include <math.h>
static double cuadrado(double x){return x*x;}
int main(void){assert(fabs(integrar_trapecio(cuadrado,0,1,10000)-1.0/3)<1e-8); assert(isnan(integrar_trapecio(cuadrado,0,1,0)));return 0;}

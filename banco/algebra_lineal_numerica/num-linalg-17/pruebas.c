#include "num-linalg-17.h"
#include <assert.h>
#include <math.h>
static double cuadrado(double x){return x*x;}
int main(void){assert(fabs(integrar_simpson_tercio(cuadrado,0,1,10)-1.0/3)<1e-12); assert(isnan(integrar_simpson_tercio(cuadrado,0,1,3)));return 0;}

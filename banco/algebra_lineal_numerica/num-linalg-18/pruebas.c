#include "num-linalg-18.h"
#include <assert.h>
#include <math.h>
static double cuadrado(double x){return x*x;}
int main(void){assert(fabs(integrar_simpson_tres_octavos(cuadrado,0,1,12)-1.0/3)<1e-12); assert(isnan(integrar_simpson_tres_octavos(cuadrado,0,1,2)));return 0;}

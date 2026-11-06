#include "geom-comp-21.h"
#include <math.h>
size_t triangular_fan_convexo(const punto2d_t*p,size_t n,triangulo2d_t*out,size_t cap){if(!p||!out||n<3||cap<n-2)return 0;for(size_t i=0;i<n-2;i++)out[i]=(triangulo2d_t){p[0],p[i+1],p[i+2]};return n-2;}

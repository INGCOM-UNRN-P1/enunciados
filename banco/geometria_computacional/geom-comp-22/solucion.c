#include "geom-comp-22.h"
#include <math.h>
double perimetro_poligono(const punto2d_t*p,size_t n){if(!p||n<2)return 0;double s=0;for(size_t i=0;i<n;i++){size_t j=(i+1)%n;s+=hypot(p[i].x-p[j].x,p[i].y-p[j].y);}return s;}

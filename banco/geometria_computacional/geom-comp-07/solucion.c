#include "geom-comp-07.h"
#include <math.h>

double area_poligono(const punto2d_t *v,size_t n){
 if (!v || n < 3) return 0.0;
 double s = 0;
 for(size_t i=0;i<n;i++){size_t j=(i+1)%n;s+=v[i].x*v[j].y-v[j].x*v[i].y;}
 return fabs(s)/2.0;
}

#include "geom-comp-15.h"
#include <math.h>
bool circulos_intersectan(circulo2d_t a,circulo2d_t b){if(a.radio<0||b.radio<0)return false;double r=a.radio+b.radio,x=a.centro.x-b.centro.x,y=a.centro.y-b.centro.y;return x*x+y*y<=r*r;}

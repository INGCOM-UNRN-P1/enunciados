#include "geom-comp-14.h"
#include <math.h>
bool aabb_intersectan(caja2d_t a,caja2d_t b){if(a.min_x>a.max_x||a.min_y>a.max_y||b.min_x>b.max_x||b.min_y>b.max_y)return false;return a.min_x<=b.max_x&&b.min_x<=a.max_x&&a.min_y<=b.max_y&&b.min_y<=a.max_y;}

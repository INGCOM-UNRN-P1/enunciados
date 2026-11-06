#include "geom-comp-03.h"

double producto_vectorial_2d(punto2d_t a,punto2d_t b) { return a.x*b.y-a.y*b.x; }
orientacion_t orientacion(punto2d_t a,punto2d_t b,punto2d_t c) {
 double z=(b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x);
 return z>0?GIRO_ANTIHORARIO:(z<0?GIRO_HORARIO:COLINEAL);
}

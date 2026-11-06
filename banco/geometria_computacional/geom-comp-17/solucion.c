#include "geom-comp-17.h"
bool centroide_puntos(const punto2d_t*p,size_t n,punto2d_t*out){if(!p||!n||!out)return false;long double x=0,y=0;for(size_t i=0;i<n;i++){x+=p[i].x;y+=p[i].y;}*out=(punto2d_t){(double)(x/n),(double)(y/n)};return true;}
bool centro_masa(const particula2d_t*p,size_t n,punto2d_t*out){if(!p||!n||!out)return false;long double m=0,x=0,y=0;for(size_t i=0;i<n;i++){if(p[i].masa<0)return false;m+=p[i].masa;x+=(long double)p[i].posicion.x*p[i].masa;y+=(long double)p[i].posicion.y*p[i].masa;}if(m==0)return false;*out=(punto2d_t){(double)(x/m),(double)(y/m)};return true;}

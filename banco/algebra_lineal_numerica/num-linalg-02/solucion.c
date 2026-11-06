#include "num-linalg-02.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

static double f(double x){return x*x-2.0;}
double biseccion(double a,double b,double tol,size_t max){if(!isfinite(a)||!isfinite(b)||a>b||tol<=0||!isfinite(tol)||!max||f(a)*f(b)>0)return NAN;if(f(a)==0)return a;if(f(b)==0)return b;for(size_t i=0;i<max;i++){double m=a+(b-a)/2, fm=f(m);if(fabs(fm)<tol||fabs(b-a)<=tol)return m;if((f(a)<0)==(fm<0))a=m;else b=m;}return NAN;}

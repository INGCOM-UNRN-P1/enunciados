#include "num-linalg-18.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
double integrar_simpson_tres_octavos(double(*f)(double),double a,double b,int n){if(!f||!isfinite(a)||!isfinite(b)||n<=0||n%3)return NAN;double h=(b-a)/n,s=f(a)+f(b);if(!isfinite(s))return NAN;for(int i=1;i<n;i++){double v=f(a+i*h);if(!isfinite(v))return NAN;s+=(i%3?3:2)*v;}s*=3*h/8;return isfinite(s)?s:NAN;}

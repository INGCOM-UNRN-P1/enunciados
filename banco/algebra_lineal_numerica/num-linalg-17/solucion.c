#include "num-linalg-17.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
double integrar_simpson_tercio(double(*f)(double),double a,double b,int n){if(!f||!isfinite(a)||!isfinite(b)||n<=0||n%2)return NAN;double h=(b-a)/n,s=f(a)+f(b);if(!isfinite(s))return NAN;for(int i=1;i<n;i++){double v=f(a+i*h);if(!isfinite(v))return NAN;s+=(i%2?4:2)*v;}s*=h/3;return isfinite(s)?s:NAN;}

#include "num-linalg-16.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
double integrar_trapecio(double(*f)(double),double a,double b,int n){if(!f||!isfinite(a)||!isfinite(b)||n<=0)return NAN;double h=(b-a)/n,s=(f(a)+f(b))/2;if(!isfinite(s))return NAN;for(int i=1;i<n;i++){double v=f(a+i*h);if(!isfinite(v))return NAN;s+=v;}s*=h;return isfinite(s)?s:NAN;}

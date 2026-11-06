#include "num-linalg-29.h"
#include <math.h>

double minimizar_seccion_aurea(funcion_objetivo_t f,double a,double b,double tol,size_t maxit)
{
    if(!f||!isfinite(a)||!isfinite(b)||!isfinite(tol)||a>=b||tol<=0||maxit==0) return NAN;
    const double k=0.6180339887498948482;
    double x1=b-k*(b-a), x2=a+k*(b-a), f1=f(x1), f2=f(x2);
    if(!isfinite(f1)||!isfinite(f2)) return NAN;
    for(size_t i=0;i<maxit && b-a>tol;i++) {
        if(f1<=f2) { b=x2; x2=x1; f2=f1; x1=b-k*(b-a); f1=f(x1); }
        else { a=x1; x1=x2; f1=f2; x2=a+k*(b-a); f2=f(x2); }
        if(!isfinite(f1)||!isfinite(f2)) return NAN;
    }
    if(b-a>tol) return NAN;
    return a+(b-a)/2.0;
}

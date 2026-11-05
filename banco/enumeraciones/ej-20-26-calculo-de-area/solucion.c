#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-26-calculo-de-area.h"

double calcular_area(const figura_t *f){if(!f)return -1.0;switch(f->tipo){case FIGURA_CIRCULO:return f->datos.circulo.radio>=0?3.141592653589793*f->datos.circulo.radio*f->datos.circulo.radio:-1.0;case FIGURA_RECTANGULO:return f->datos.rectangulo.base>=0&&f->datos.rectangulo.altura>=0?f->datos.rectangulo.base*f->datos.rectangulo.altura:-1.0;case FIGURA_TRIANGULO:{double a=f->datos.triangulo.lado_a,b=f->datos.triangulo.lado_b,c=f->datos.triangulo.lado_c,s=(a+b+c)/2;if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a)return -1.0;return sqrt(s*(s-a)*(s-b)*(s-c));}default:return -1.0;}}

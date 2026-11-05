#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include "ej-20-27-constructores-de-figuras.h"

static figura_t invalida(void){figura_t f={.tipo=FIGURA_CIRCULO,.datos.circulo={0},.valida=false};return f;}
figura_t crear_circulo(double r){figura_t f=invalida();if(isfinite(r)&&r>0){f.tipo=FIGURA_CIRCULO;f.datos.circulo.radio=r;f.valida=true;}return f;}
figura_t crear_rectangulo(double b,double h){figura_t f=invalida();if(isfinite(b)&&isfinite(h)&&b>0&&h>0){f.tipo=FIGURA_RECTANGULO;f.datos.rectangulo=(rectangulo_t){b,h};f.valida=true;}return f;}
figura_t crear_triangulo(double a,double b,double c){figura_t f=invalida();if(isfinite(a)&&isfinite(b)&&isfinite(c)&&a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a){f.tipo=FIGURA_TRIANGULO;f.datos.triangulo=(triangulo_t){a,b,c};f.valida=true;}return f;}

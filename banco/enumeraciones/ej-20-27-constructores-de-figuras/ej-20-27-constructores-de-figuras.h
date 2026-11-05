#ifndef EJERCICIO_EJ_20_27_H
#define EJERCICIO_EJ_20_27_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

enum tipo_figura { FIGURA_CIRCULO, FIGURA_RECTANGULO, FIGURA_TRIANGULO };
typedef struct { double radio; } circulo_t; typedef struct { double base,altura; } rectangulo_t; typedef struct { double lado_a,lado_b,lado_c; } triangulo_t;
typedef union { circulo_t circulo; rectangulo_t rectangulo; triangulo_t triangulo; } datos_figura_t;
typedef struct { enum tipo_figura tipo; datos_figura_t datos; bool valida; } figura_t;
figura_t crear_circulo(double radio); figura_t crear_rectangulo(double base,double altura); figura_t crear_triangulo(double a,double b,double c);

#endif

#ifndef NUM_LINALG_29_H
#define NUM_LINALG_29_H
#include <stddef.h>
typedef double (*funcion_objetivo_t)(double);
double minimizar_seccion_aurea(funcion_objetivo_t f, double a, double b,
                                 double tolerancia, size_t max_iter);
#endif

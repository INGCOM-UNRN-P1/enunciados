#ifndef EJERCICIO_NUM_LINALG_22_H
#define EJERCICIO_NUM_LINALG_22_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
double rk4_edo(double (*f)(double, double), double x0, double y0, double x1, int pasos);
#endif

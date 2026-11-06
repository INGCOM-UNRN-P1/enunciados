#ifndef EJERCICIO_NUM_LINALG_21_H
#define EJERCICIO_NUM_LINALG_21_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
double heun_edo(double (*f)(double, double), double x0, double y0, double x1, int pasos);
#endif

#ifndef EJERCICIO_EJ_21_47_METODO_DE_JACOBI_H
#define EJERCICIO_EJ_21_47_METODO_DE_JACOBI_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

double *metodo_jacobi(double **A, double *b, int n, double tolerancia,
                      int max_iter);

#endif /* EJERCICIO_EJ_21_47_METODO_DE_JACOBI_H */

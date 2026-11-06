#ifndef EJERCICIO_EJ_21_48_METODO_DE_GAUSS_SEIDEL_H
#define EJERCICIO_EJ_21_48_METODO_DE_GAUSS_SEIDEL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

double *metodo_gauss_seidel(double **A, double *b, int n, double tolerancia,
                            int max_iter);

#endif /* EJERCICIO_EJ_21_48_METODO_DE_GAUSS_SEIDEL_H */

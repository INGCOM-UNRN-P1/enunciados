#ifndef NUM_LINALG_28_H
#define NUM_LINALG_28_H
#include <stddef.h>
int bairstow_par_raices(const double *coeficientes, size_t grado,
                         double u_inicial, double v_inicial, double tolerancia,
                         size_t max_iter, double *r1_real, double *r1_imag,
                         double *r2_real, double *r2_imag);
#endif

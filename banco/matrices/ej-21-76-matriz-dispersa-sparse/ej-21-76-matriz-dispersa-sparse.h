#ifndef EJ_21_76_MATRIZ_DISPERSA_SPARSE_H
#define EJ_21_76_MATRIZ_DISPERSA_SPARSE_H

#include <stddef.h>

int sparse_set(double *valores, unsigned char *ocupado, size_t filas, size_t columnas, size_t fila, size_t columna, double valor);
double sparse_get(const double *valores, const unsigned char *ocupado, size_t filas, size_t columnas, size_t fila, size_t columna, int *valido);

#endif /* EJ_21_76_MATRIZ_DISPERSA_SPARSE_H */

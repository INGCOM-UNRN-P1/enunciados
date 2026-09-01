#ifndef EJERCICIO_EJ_31_15_PUNTEROS_A_FUNCIONES_Y_CALLBAC_H
#define EJERCICIO_EJ_31_15_PUNTEROS_A_FUNCIONES_Y_CALLBAC_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación es_par */
bool es_par(int n);
/* Operación es_positivo */
bool es_positivo(int n);
/* Operación duplicar */
int duplicar(int n);
/* Operación cuadrado */
int cuadrado(int n);
/* Operación contar_si */
int contar_si(const int *arr, size_t n, predicado_t predicado);
/* Operación aplicar */
void aplicar(int *arr, size_t n, operacion_t operacion);
/* Operación procesar */
void procesar(int *arr, size_t n, predicado_t filtro,
              operacion_t transformacion);

#endif /* EJERCICIO_EJ_31_15_PUNTEROS_A_FUNCIONES_Y_CALLBAC_H */

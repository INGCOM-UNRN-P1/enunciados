#ifndef EJERCICIO_EJ_3_21_RAIZ_CUADRADA_ENTERA_METODO_BA_H
#define EJERCICIO_EJ_3_21_RAIZ_CUADRADA_ENTERA_METODO_BA_H

#include <stdbool.h>
#include <stddef.h>

/* Devuelve floor(sqrt(n)), -1 para n negativo y opcionalmente informa
 * cuántas iteraciones enteras de Herón se realizaron.
 */
int raiz_cuadrada_entera(int n, unsigned *iteraciones);

#endif

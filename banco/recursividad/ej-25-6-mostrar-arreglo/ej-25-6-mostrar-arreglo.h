#ifndef EJERCICIO_EJ_25_6_MOSTRAR_ARREGLO_H
#define EJERCICIO_EJ_25_6_MOSTRAR_ARREGLO_H

#include <stddef.h>
#include <stdio.h>

/* Imprime los elementos en orden, separados por un espacio y sin salto final.
 * salida debe ser un flujo escribible; arreglo puede ser NULL si longitud es 0.
 */
void proc_25_6_mostrar_arreglo(FILE *salida, const int *arreglo,
                              size_t longitud);

#endif /* EJERCICIO_EJ_25_6_MOSTRAR_ARREGLO_H */

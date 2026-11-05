#include "ej-25-6-mostrar-arreglo.h"

void proc_25_6_mostrar_arreglo(FILE *salida, const int *arreglo,
                              size_t longitud) {
    if (salida == NULL || arreglo == NULL || longitud == 0) {
        return;
    }
    fprintf(salida, "%d", arreglo[0]);
    if (longitud > 1) {
        fputc(' ', salida);
        proc_25_6_mostrar_arreglo(salida, arreglo + 1, longitud - 1);
    }
}

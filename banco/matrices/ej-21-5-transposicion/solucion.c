/* Ejercicio: Transposición
 * Las matrices se reciben en almacenamiento contiguo por filas.
 * Los llamadores deben proporcionar espacio suficiente para filas * columnas elementos.
 */
#include "ej-21-5-transposicion.h"

int transponer_matriz(size_t filas, size_t columnas, const int *entrada, int *salida)
{
    if (filas == 0 || columnas == 0 || filas > SIZE_MAX / columnas || entrada == NULL || salida == NULL) return -1;
    for (size_t i = 0; i < filas; ++i)
        for (size_t j = 0; j < columnas; ++j)
            salida[j * filas + i] = entrada[i * columnas + j];
    return 0;
}

int main(void)
{
    return 0;
}

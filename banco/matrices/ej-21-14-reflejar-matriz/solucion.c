/* Ejercicio: Reflejar matriz
 * Las matrices se reciben en almacenamiento contiguo por filas.
 * Los llamadores deben proporcionar espacio suficiente para filas * columnas elementos.
 */
#include "ej-21-14-reflejar-matriz.h"

int reflejar_matriz_horizontal(size_t filas, size_t columnas, int *matriz)
{
    if (filas == 0 || columnas == 0 || filas > SIZE_MAX / columnas || matriz == NULL) return -1;
    for (size_t i = 0; i < filas / 2; ++i)
        for (size_t j = 0; j < columnas; ++j) {
            size_t a = i * columnas + j, b = (filas - 1 - i) * columnas + j;
            int tmp = matriz[a]; matriz[a] = matriz[b]; matriz[b] = tmp;
        }
    return 0;
}

int reflejar_matriz_vertical(size_t filas, size_t columnas, int *matriz)
{
    if (filas == 0 || columnas == 0 || filas > SIZE_MAX / columnas || matriz == NULL) return -1;
    for (size_t i = 0; i < filas; ++i)
        for (size_t j = 0; j < columnas / 2; ++j) {
            size_t a = i * columnas + j, b = i * columnas + (columnas - 1 - j);
            int tmp = matriz[a]; matriz[a] = matriz[b]; matriz[b] = tmp;
        }
    return 0;
}

int main(void)
{
    return 0;
}

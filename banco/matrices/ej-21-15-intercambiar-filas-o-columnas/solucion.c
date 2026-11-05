/* Ejercicio: Intercambiar filas o columnas
 * Las matrices se reciben en almacenamiento contiguo por filas.
 * Los llamadores deben proporcionar espacio suficiente para filas * columnas elementos.
 */
#include "ej-21-15-intercambiar-filas-o-columnas.h"

int intercambiar_filas(size_t filas, size_t columnas, int *matriz, size_t f1, size_t f2)
{
    if (filas == 0 || columnas == 0 || filas > SIZE_MAX / columnas || matriz == NULL || f1 >= filas || f2 >= filas) return -1;
    for (size_t j = 0; j < columnas; ++j) {
        size_t a = f1 * columnas + j, b = f2 * columnas + j;
        int tmp = matriz[a]; matriz[a] = matriz[b]; matriz[b] = tmp;
    }
    return 0;
}

int intercambiar_columnas(size_t filas, size_t columnas, int *matriz, size_t c1, size_t c2)
{
    if (filas == 0 || columnas == 0 || filas > SIZE_MAX / columnas || matriz == NULL || c1 >= columnas || c2 >= columnas) return -1;
    for (size_t i = 0; i < filas; ++i) {
        size_t a = i * columnas + c1, b = i * columnas + c2;
        int tmp = matriz[a]; matriz[a] = matriz[b]; matriz[b] = tmp;
    }
    return 0;
}

int main(void)
{
    return 0;
}

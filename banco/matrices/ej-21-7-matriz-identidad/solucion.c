/* Ejercicio: Matriz identidad
 * Las matrices se reciben en almacenamiento contiguo por filas.
 * Los llamadores deben proporcionar espacio suficiente para filas * columnas elementos.
 */
#include "ej-21-7-matriz-identidad.h"

int generar_identidad(size_t n, int *matriz)
{
    if (n == 0 || n > SIZE_MAX / n || matriz == NULL) return -1;
    for (size_t i = 0; i < n; ++i)
        for (size_t j = 0; j < n; ++j)
            matriz[i * n + j] = (i == j) ? 1 : 0;
    return 0;
}

int main(void)
{
    return 0;
}

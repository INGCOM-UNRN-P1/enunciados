/* Ejercicio: Matriz simétrica
 * Las matrices se reciben en almacenamiento contiguo por filas.
 * Los llamadores deben proporcionar espacio suficiente para filas * columnas elementos.
 */
#include "ej-21-9-matriz-simetrica.h"

bool es_simetrica(size_t n, const int *matriz)
{
    if (n == 0 || n > SIZE_MAX / n || matriz == NULL) return false;
    for (size_t i = 0; i < n; ++i)
        for (size_t j = i + 1; j < n; ++j)
            if (matriz[i * n + j] != matriz[j * n + i]) return false;
    return true;
}

int main(void)
{
    return 0;
}

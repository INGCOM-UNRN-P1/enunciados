/* Ejercicio: Suma de diagonales
 * Las matrices se reciben en almacenamiento contiguo por filas.
 * Los llamadores deben proporcionar espacio suficiente para filas * columnas elementos.
 */
#include "ej-21-6-suma-de-diagonales.h"

int sumar_diagonales(size_t n, const int *matriz, int *principal, int *secundaria)
{
    if (n == 0 || n > SIZE_MAX / n || matriz == NULL || principal == NULL || secundaria == NULL) return -1;
    int64_t p = 0, s = 0;
    for (size_t i = 0; i < n; ++i) {
        p += matriz[i * n + i];
        s += matriz[i * n + (n - 1 - i)];
    }
    if (p < INT_MIN || p > INT_MAX || s < INT_MIN || s > INT_MAX) return -1;
    *principal = (int)p;
    *secundaria = (int)s;
    return 0;
}

int main(void)
{
    return 0;
}

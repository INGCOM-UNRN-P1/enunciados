#include <stdbool.h>
#include <stddef.h>
// Encuentra el promedio de los números positivos en un arreglo.
double promedio_positivos(const int arreglo[], size_t n, bool *exito)
{
    double suma = 0.0; // Variable 1
    int contador = 0;  // Variable 2
    *exito = false;    // Variable 3 (a través del puntero)
    for (size_t i = 0; i < n; i++)
    { // Variable 4
        if (arreglo[i] > 0)
        {
            suma = suma + arreglo[i];
            contador++;
        }
    }
    if (contador > 0)
    {
        *exito = true;
        return suma / contador; // Variable 5 (implícita)
    }
    return 0.0;
}

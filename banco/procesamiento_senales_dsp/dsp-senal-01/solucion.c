#include "dsp-senal-01.h"

int media_movil(const int *muestras, int n, int ventana, double *salida)
{
    if (muestras == 0 || salida == 0 || n <= 0 || ventana <= 0 || ventana > n)
        return -1;

    int cantidad = n - ventana + 1;
    for (int i = 0; i < cantidad; i++)
    {
        double suma = 0;
        for (int j = 0; j < ventana; j++)
            suma += muestras[i + j];
        salida[i] = suma / ventana;
    }
    return cantidad;
}

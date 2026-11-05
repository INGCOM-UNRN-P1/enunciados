#include "ej-1-44-numero-de-la-suerte.h"
#include <stdio.h>

int es_numero_de_la_suerte(int numero)
{
    int copia = numero;
    int cantidad = 0;
    do
    {
        cantidad++;
        copia /= 10;
    } while (copia != 0);
    if (cantidad % 2 != 0)
        return 0;

    int suma_baja = 0;
    int suma_alta = 0;
    for (int i = 0; i < cantidad; i++)
    {
        int digito = numero % 10;
        if (digito < 0)
            digito = -digito;
        if (i < cantidad / 2)
            suma_baja += digito;
        else
            suma_alta += digito;
        numero /= 10;
    }
    return suma_baja == suma_alta;
}

int main(void)
{
    int numero;
    if (scanf("%d", &numero) != 1)
        return 1;
    puts(es_numero_de_la_suerte(numero) ? "Es un número de la suerte." :
                                          "No es un número de la suerte.");
    return 0;
}

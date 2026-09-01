#include <stdio.h>

void imprimir_fila_caracter(char caracter, int longitud)
{
    for (int columna = 0; columna < longitud; columna++)
    {
        putchar(caracter);
    }
    putchar('\n');
}

void imprimir_rectangulo(int ancho, int alto)
{
    if (ancho <= 0 || alto <= 0)
    {
        return;
    }
    for (int fila = 0; fila < alto; fila++)
    {
        imprimir_fila_caracter('*', ancho);
    }
}

int main(void)
{
    return 0;
}
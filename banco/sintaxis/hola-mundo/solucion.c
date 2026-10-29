/*
Ejercicio 1.1 – Hola Mundo
Escribir un programa que imprima "Hola, mundo!" en la pantalla.
Este ejercicio nos permitirá verificar que el entorno de programación funciona.
-----------------
Docente Cátedra
catedra_p1
*/

#include <stdio.h>


int ejecutar_hola_mundo(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    printf("Hola, mundo!\n");
    return 0;
}
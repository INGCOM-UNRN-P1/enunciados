/*
Ejercicio 1.3 – Par o Impar
Solicitar un número entero y determinar si es par o impar.
-----------------
Docente Cátedra
catedra_p1
*/

#include <stdio.h>


int ejecutar_par_o_impar(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    int numero = 0;

    if (scanf("%d", &numero) == 1)
    {
        if (numero % 2 == 0)
        {
            printf("Par\n");
        }
        else
        {
            printf("Impar\n");
        }
    }

    return 0;
}
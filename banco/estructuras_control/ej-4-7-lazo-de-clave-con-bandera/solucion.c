#include <stdbool.h>
#include <stdio.h>

int proc_de_clave_con_bandera(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    int clave = 0;
    int clave_correcta = 1234;
    bool clave_correcta_ingresada = false;
    while (clave_correcta_ingresada == false)
    {
        printf("Ingrese la clave de acceso: ");
        if (scanf("%d", &clave) != 1)
        {
            printf("Error al leer la clave.\n");
            return 1;
        }
        if (clave == clave_correcta)
        {
            printf("Acceso concedido.\n");
            clave_correcta_ingresada =
                true; // Se modifica el estado de la bandera
        }
        else
        {
            printf("Clave incorrecta. Intente nuevamente.\n");
        }
    }
    return 0;
}
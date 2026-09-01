#include <stdio.h>

int proc__acceso_con_do_while(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    int clave = 0;
    int clave_correcta = 1234;
    do
    {
        printf("Ingrese la clave: ");
        if (scanf("%d", &clave) != 1)
        {
            printf("Error al leer la clave.\n");
            return 1;
        }
        if (clave != clave_correcta)
        {
            printf("Clave incorrecta. Reintente.\n");
        }
    } while (clave != clave_correcta);
    printf("Acceso concedido.\n");
    return 0;
}
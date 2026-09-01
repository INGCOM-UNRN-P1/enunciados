#include <stdio.h>
#include <string.h>
void procesar_datos(int *p1, int *p2, int valor)
{
    *p1 = valor;
    *p2 = valor * 2;
    printf("p1 apunta a: %d\n", *p1);
    printf("p2 apunta a: %d\n", *p2);
}
int main(void)
{
    int x = 10;
    // Caso 1
    procesar_datos(&x, &x, 5);
    printf("Resultado x: %d\n\n", x);
    // Caso 2
    int y = 10;
    int z = 20;
    procesar_datos(&y, &z, 5);
    printf("Resultado y: %d, z: %d\n", y, z);
    return 0;
}
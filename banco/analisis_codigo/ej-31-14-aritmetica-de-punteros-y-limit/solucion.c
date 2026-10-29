#include <stdio.h>
#include <string.h>
void funcion_a(int *arr, size_t n)
{
    int *p = arr;
    int *fin = arr + n;
    while (p < fin)
    {
        *p = *p * 2;
        p++;
    }
}
void funcion_b(int *arr, size_t n)
{
    for (int *p = arr; p < arr + n; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
}
void funcion_c(char *destino, const char *origen)
{
    while (*origen != '\0')
    {
        *destino = *origen;
        destino++;
        origen++;
    }
    *destino = '\0';
}
void funcion_d(int *arr, size_t n)
{
    int *inicio = arr;
    int *fin = arr + n - 1;
    while (inicio < fin)
    {
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}
int main(void)
{
    int arreglo[5] = {1, 2, 3, 4, 5};
    funcion_a(arreglo, 5);
    funcion_b(arreglo, 5);
    char origen[] = "Hola";
    char destino[10];
    funcion_c(destino, origen);
    printf("%s\n", destino);
    funcion_d(arreglo, 5);
    funcion_b(arreglo, 5);
    return 0;
}
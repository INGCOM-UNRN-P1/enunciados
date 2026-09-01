#include <stdbool.h>
#include <stdio.h>
typedef bool (*predicado_t)(int);
typedef int (*operacion_t)(int);
bool es_par(int n)
{
    return n % 2 == 0;
}
bool es_positivo(int n)
{
    return n > 0;
}
int duplicar(int n)
{
    return n * 2;
}
int cuadrado(int n)
{
    return n * n;
}
// Función A
int contar_si(const int *arr, size_t n, predicado_t predicado)
{
    int contador = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (predicado(arr[i]))
        {
            contador++;
        }
    }
    return contador;
}
// Función B
void aplicar(int *arr, size_t n, operacion_t operacion)
{
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = operacion(arr[i]);
    }
}
// Función C
void procesar(int *arr, size_t n, predicado_t filtro,
              operacion_t transformacion)
{
    for (size_t i = 0; i < n; i++)
    {
        if (filtro(arr[i]))
        {
            arr[i] = transformacion(arr[i]);
        }
    }
}
int main(void)
{
    int numeros[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5};
    size_t n = sizeof(numeros) / sizeof(numeros[0]);
    printf("Pares: %d\n", contar_si(numeros, n, es_par));
    printf("Positivos: %d\n", contar_si(numeros, n, es_positivo));
    int copia1[] = {1, 2, 3, 4, 5};
    aplicar(copia1, 5, duplicar);
    int copia2[] = {-2, -1, 0, 1, 2};
    procesar(copia2, 5, es_positivo, cuadrado);
    return 0;
}
#include <assert.h>

int calcular_suma(const int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

int encontrar_maximo(const int arr[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int contar_negativos(const int arr[], int n)
{
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            cont++;
        }
    }
    return cont;
}

void test_funciones_atomicas(void)
{
    int datos[] = {3, -1, 8, -5, 2};
    assert(calcular_suma(datos, 5) == 7);
    assert(encontrar_maximo(datos, 5) == 8);
    assert(contar_negativos(datos, 5) == 2);
}

int main(void)
{
    return 0;
}
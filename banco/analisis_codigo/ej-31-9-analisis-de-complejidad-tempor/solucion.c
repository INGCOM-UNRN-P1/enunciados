#include <stdbool.h>
bool buscar_par_suma(int arr[], int tam, int objetivo)
{
    // Busca si existe un par de números que sumen al objetivo
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (arr[i] + arr[j] == objetivo)
            {
                return true;
            }
        }
    }
    return false;
}
bool buscar_par_suma_optimizado(int arr[], int tam, int objetivo)
{
    // Versión con array ordenado (asumimos que está ordenado)
    int izq = 0;
    int der = tam - 1;
    while (izq < der)
    {
        int suma_actual = arr[izq] + arr[der];
        if (suma_actual == objetivo)
        {
            return true;
        }
        else if (suma_actual < objetivo)
        {
            izq++;
        }
        else
        {
            der--;
        }
    }
    return false;
}

int main(void)
{
    return 0;
}
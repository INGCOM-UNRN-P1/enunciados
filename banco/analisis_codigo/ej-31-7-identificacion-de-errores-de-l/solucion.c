#include <limits.h>
#include <stdio.h>
int segundo_maximo(int arr[], int tam)
{
    int maximo = INT_MIN;
    int segundo = INT_MIN;
    for (int i = 0; i < tam; i++)
    {
        if (arr[i] > maximo)
        {
            segundo = maximo;
            maximo = arr[i];
        }
        else if (arr[i] > segundo)
        {
            segundo = arr[i];
        }
    }
    return segundo;
}

int main(void)
{
    return 0;
}
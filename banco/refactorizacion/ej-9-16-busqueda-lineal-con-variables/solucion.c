#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int pos_encontrada = -1;

void buscar(int arr[], int n, int x)
{
    pos_encontrada = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            pos_encontrada = i;
            break;
        }
    }
}
    return 0;
}
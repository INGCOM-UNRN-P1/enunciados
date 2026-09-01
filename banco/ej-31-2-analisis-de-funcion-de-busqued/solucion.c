#include <stddef.h>
#include <limits.h>
#include <stdbool.h>
int encontrar_maximo(const int arr[], size_t tam, bool *encontrado)
{
    int maximo = INT_MIN;       // Variable A
    bool hay_elementos = false; // Variable B
    *encontrado = false;        // Variable C
    for (size_t indice = 0; indice < tam; indice++)
    { // Variable D
        if (!hay_elementos || arr[indice] > maximo)
        {
            maximo = arr[indice];
            hay_elementos = true;
        }
    }
    *encontrado = hay_elementos;
    return maximo;
}

int main(void)
{
    return 0;
}
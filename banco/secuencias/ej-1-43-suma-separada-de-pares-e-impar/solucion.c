#include "ej-1-43-suma-separada-de-pares-e-impar.h"

#include <stdio.h>

void sumar_pares_impares(int n, int m, long long *pares, long long *impares)
{
    *pares = 0;
    *impares = 0;
    for (long long valor = n; valor <= m; valor++)
    {
        if (valor % 2 == 0)
            *pares += valor;
        else
            *impares += valor;
    }
}

int main(void)
{
    int n, m;
    long long pares, impares;
    if (scanf("%d %d", &n, &m) != 2)
        return 1;
    sumar_pares_impares(n, m, &pares, &impares);
    printf("%lld %lld\n", pares, impares);
    return 0;
}

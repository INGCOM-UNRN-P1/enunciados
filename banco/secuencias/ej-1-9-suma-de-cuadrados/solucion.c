#include <limits.h>
#include <stdio.h>

int main(void)
{
    int n, m;
    long long suma = 0;
    if (scanf("%d%d", &n, &m) != 2 || n > m)
        return 1;
    for (long long i = n; i <= m; i++)
    {
        long long cuadrado = i * i;
        if (suma > LLONG_MAX - cuadrado)
            return 1;
        suma += cuadrado;
    }
    printf("%lld\n", suma);
    return 0;
}

#include <stdio.h>

int main(void)
{
    int n, m;

    if (scanf("%d%d", &n, &m) != 2 || n > m)
        return 1;

    long long suma = 0;
    for (long long i = n; i <= m; i++)
        suma += i;

    printf("%lld\n", suma);
    return 0;
}

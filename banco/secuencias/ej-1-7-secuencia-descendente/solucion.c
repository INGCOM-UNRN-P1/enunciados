#include <stdio.h>

int main(void)
{
    int n, m;

    if (scanf("%d%d", &n, &m) != 2)
        return 1;

    for (long long i = n; i > m; i--)
        printf("%lld\n", i);

    return 0;
}

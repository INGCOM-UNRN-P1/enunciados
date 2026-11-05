#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n < 1)
        return 1;

    for (long long k = 1; k <= n; k++)
        printf("%lld\n", 2 * k - 1);

    return 0;
}

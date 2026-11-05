#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
        return 1;

    for (int i = n; i > 0; i--)
    {
        printf("%d\n", i);
        fflush(stdout);
        if (i > 1)
            sleep(1);
    }

    puts("¡Lanzamiento!");
    return 0;
}

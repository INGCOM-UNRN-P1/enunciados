#include <stdio.h>

int proc_2_cuenta_descendente(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    int i = 10;
    while (i >= 1)
    {
        printf("%d\n", i);
        i = i - 1;
    }
    return 0;
}
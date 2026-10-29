#include <stdio.h>

int proc_ctorizacion_de_break(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("valor actual: %d\n", i);
        if (i == 4)
        {
            break;
        }
    }
    return 0;
}
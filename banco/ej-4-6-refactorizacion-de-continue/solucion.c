#include <stdio.h>

int proc_rizacion_de_continue(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("i = %d\n", i);
    }
    return 0;
}
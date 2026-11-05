#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 != 0)
            printf("i = %d\n", i);
    }
    return 0;
}

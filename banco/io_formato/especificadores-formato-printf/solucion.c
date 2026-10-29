#include <stdio.h>

int proc_dores_formato_printf(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    printf("%%d=%d %%u=%u %%x=%x %%f=%.2f %%c=%c %%s=%s %%%%\n",
           -42, 42U, 255, 3.14159, 'Z', "UNRN");
    return 0;
}
#include <stdio.h>
#include <limits.h>

int proc_ntes_limites_enteros(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    printf("CHAR_BIT: %d\nINT_MIN: %d\nINT_MAX: %d\n", CHAR_BIT, INT_MIN, INT_MAX);
    return 0;
}
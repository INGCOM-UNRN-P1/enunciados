#include <stdlib.h>


int proc__15_7_b7_double_free(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    int *ptr = malloc(sizeof(int) * 10);
    *ptr = 42;
    free(ptr);
    free(ptr); // ERROR: double free
    return 0;
}
#include <stdio.h>
#include <stdlib.h>


int proc__8_b8_use_after_free(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    int *arr = malloc(sizeof(int) * 5);
    arr[0] = 100;
    free(arr);
    printf("%d\n", arr[0]); // ERROR: use after free
    return 0;
}
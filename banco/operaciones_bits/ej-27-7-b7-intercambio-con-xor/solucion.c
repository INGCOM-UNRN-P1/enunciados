#include "ej-27-7-b7-intercambio-con-xor.h"

void swap(int *a, int *b)
{
    if (a != b)
    {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}

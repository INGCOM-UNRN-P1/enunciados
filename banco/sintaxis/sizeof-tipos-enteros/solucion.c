#include <stdio.h>

int ejecutar_sizeof_tipos_enteros(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    printf("char: %zu\nshort: %zu\nint: %zu\nlong: %zu\nlong long: %zu\n",
           sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
    return 0;
}
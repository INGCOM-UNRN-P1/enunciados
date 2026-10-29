#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int proc_fer_overflow_en_heap(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    char *buffer = malloc(10);
    strcpy(buffer, "Esta cadena es mucho más larga que 10 bytes"); // OVERFLOW
    printf("%s\n", buffer);
    free(buffer);
    return 0;
}
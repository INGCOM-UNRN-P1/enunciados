#include <stdio.h>
#include <stdlib.h>


int proc_lizacion_json_simple(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    FILE *fp = fopen("archivo.txt", "r");
    if (fp == NULL) {
        return 0;
    }
    fclose(fp);
    return 0;
}

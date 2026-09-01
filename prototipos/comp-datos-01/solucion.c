/*
 * Compresion RLE Basica
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <string.h>


int ejecutar_comp_datos_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    char buffer[256] = {0};
    if (scanf("%255s", buffer) == 1) {
        size_t len = strlen(buffer);
        for (size_t i = 0; i < len; i++) {
            int cuenta = 1;
            while (i + 1 < len && buffer[i] == buffer[i + 1]) {
                cuenta++;
                i++;
            }
            printf("%d%c", cuenta, buffer[i]);
        }
        printf("\n");
    }
    return 0;
}
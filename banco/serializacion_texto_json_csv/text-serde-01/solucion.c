/*
 * Parser CSV Basico
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <string.h>


int ejecutar_text_serde_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    char linea[256] = {0};
    if (fgets(linea, sizeof(linea), stdin) != NULL) {
        char *token = strtok(linea, ",\r\n");
        int col = 0;
        while (token != NULL) {
            printf("COL[%d]: %s\n", col++, token);
            token = strtok(NULL, ",\r\n");
        }
        printf("TOTAL_COLS: %d\n", col);
    }
    return 0;
}
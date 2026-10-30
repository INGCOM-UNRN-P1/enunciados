/*
 * Serializacion Texto #04
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <string.h>


int ejecutar_text_serde_04(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    char clave[32] = {0};
    char valor[32] = {0};
    if (scanf("%31s %31s", clave, valor) == 2) {
        printf("KV_04: %s=%s\n", clave, valor);
    }
    return 0;
}
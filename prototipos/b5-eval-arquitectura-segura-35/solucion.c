/*
 * Evaluación de Seguridad y Arquitectura de Memoria #35
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER 128

typedef struct {
    char datos[MAX_BUFFER];
    size_t longitud;
    int validado;
} RegistroSeguro_35;

void inicializar(RegistroSeguro_35 *r) {
    memset(r->datos, 0, sizeof(r->datos));
    r->longitud = 0;
    r->validado = 0;
}

int validar_y_cargar(RegistroSeguro_35 *r, const char *entrada) {
    size_t len = strlen(entrada);
    if (len >= MAX_BUFFER || len == 0) {
        return 0;
    }
    memcpy(r->datos, entrada, len);
    r->datos[len] = '\0';
    r->longitud = len;
    r->validado = 1;
    return 1;
}

int main(void) {
    RegistroSeguro_35 reg;
    inicializar(&reg);
    char buf[256] = {0};
    if (scanf("%255s", buf) == 1) {
        if (validar_y_cargar(&reg, buf)) {
            printf("AUDIT_OK len=%zu\n", reg.longitud);
        } else {
            printf("AUDIT_RECHAZADO\n");
        }
    }
    return 0;
}
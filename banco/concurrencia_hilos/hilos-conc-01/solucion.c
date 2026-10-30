/*
 * Exclusion Mutua y Seccion Critica
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>

typedef struct {
    long contador;
    int bloqueado;
} contador_mutex_t;

void incrementar(contador_mutex_t *cm, int delta) {
    cm->bloqueado = 1;
    cm->contador += delta;
    cm->bloqueado = 0;
}

int main(void) {
    contador_mutex_t cm = {0, 0};
    int delta = 0;
    while (scanf("%d", &delta) == 1 && delta != 0) {
        incrementar(&cm, delta);
    }
    printf("CONTADOR_FINAL: %ld\n", cm.contador);
    return 0;
}
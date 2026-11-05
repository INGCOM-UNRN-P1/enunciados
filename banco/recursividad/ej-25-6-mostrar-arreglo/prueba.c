#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "ej-25-6-mostrar-arreglo.h"

static void verificar_salida(const int *arreglo, size_t longitud,
                             const char *esperada) {
    FILE *flujo = tmpfile();
    assert(flujo != NULL);
    proc_25_6_mostrar_arreglo(flujo, arreglo, longitud);
    assert(fflush(flujo) == 0);
    assert(fseek(flujo, 0, SEEK_SET) == 0);

    char salida[128];
    size_t leidos = fread(salida, 1, sizeof(salida) - 1, flujo);
    salida[leidos] = '\0';
    assert(strcmp(salida, esperada) == 0);
    assert(fclose(flujo) == 0);
}

int main(void) {
    const int valores[] = {4, -2, 9};
    const int uno[] = {42};

    verificar_salida(valores, 3, "4 -2 9");
    verificar_salida(uno, 1, "42");
    verificar_salida(NULL, 0, "");
    return 0;
}

#include <limits.h>
#include <stdio.h>

/* Genera una primera línea con la cantidad y luego esa cantidad de valores. */
int generar_lineal(const char *ruta, int cantidad, int inicio, int paso)
{
    if (ruta == NULL || cantidad < 0) return -1;
    FILE *archivo = fopen(ruta, "w");
    if (archivo == NULL) return -1;

    int estado = fprintf(archivo, "%d\n", cantidad) < 0 ? -1 : 0;
    int valor = inicio;
    for (int i = 0; estado == 0 && i < cantidad; ++i) {
        if (fprintf(archivo, "%d\n", valor) < 0) {
            estado = -1;
            break;
        }
        if (i + 1 < cantidad) {
            if ((paso > 0 && valor > INT_MAX - paso) ||
                (paso < 0 && valor < INT_MIN - paso)) {
                estado = -1;
                break;
            }
            valor += paso;
        }
    }
    if (fclose(archivo) != 0) estado = -1;
    return estado;
}

int main(void) { return 0; }

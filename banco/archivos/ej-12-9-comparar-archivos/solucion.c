#include <stdio.h>
#include <stdlib.h>

/* 0: idénticos, 1: distintos, -1: error de acceso o lectura. */
int comparar_archivos(const char *ruta_a, const char *ruta_b)
{
    if (ruta_a == NULL || ruta_b == NULL || ruta_a[0] == '\0' || ruta_b[0] == '\0')
        return -1;
    FILE *a = fopen(ruta_a, "rb");
    if (a == NULL) return -1;
    FILE *b = fopen(ruta_b, "rb");
    if (b == NULL) {
        fclose(a);
        return -1;
    }

    int resultado = 0;
    for (;;) {
        int ca = fgetc(a), cb = fgetc(b);
        if (ca != cb) {
            resultado = (ca == EOF && ferror(a)) || (cb == EOF && ferror(b)) ? -1 : 1;
            break;
        }
        if (ca == EOF) {
            if (ferror(a) || ferror(b)) resultado = -1;
            break;
        }
    }
    int cierre_a = fclose(a);
    int cierre_b = fclose(b);
    if (cierre_a != 0 || cierre_b != 0) resultado = -1;
    return resultado;
}

int main(int argc, char **argv)
{
    if (argc != 3) {
        fprintf(stderr, "Uso: %s archivo_a archivo_b\n", argv[0]);
        return EXIT_FAILURE;
    }
    int resultado = comparar_archivos(argv[1], argv[2]);
    if (resultado < 0) {
        perror("No se pudieron comparar los archivos");
        return EXIT_FAILURE;
    }
    puts(resultado == 0 ? "idénticos" : "distintos");
    return EXIT_SUCCESS;
}

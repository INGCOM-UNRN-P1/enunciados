#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/* Caracteres cuenta bytes, líneas incluye una última línea sin '\n'. */
int contar_archivo(const char *ruta, size_t *lineas, size_t *palabras,
                   size_t *caracteres)
{
    if (ruta == NULL || lineas == NULL || palabras == NULL || caracteres == NULL)
        return -1;
    FILE *archivo = fopen(ruta, "rb");
    if (archivo == NULL) return -1;

    size_t n_lineas = 0, n_palabras = 0, n_caracteres = 0;
    int en_palabra = 0, ultimo = EOF, error = 0;
    int c;
    while ((c = fgetc(archivo)) != EOF) {
        ++n_caracteres;
        if (c == '\n') ++n_lineas;
        if (isspace((unsigned char)c)) en_palabra = 0;
        else if (!en_palabra) {
            ++n_palabras;
            en_palabra = 1;
        }
        ultimo = c;
    }
    if (ferror(archivo)) error = 1;
    if (n_caracteres > 0 && ultimo != '\n') ++n_lineas;
    if (fclose(archivo) != 0) error = 1;
    if (error) return -1;
    *lineas = n_lineas;
    *palabras = n_palabras;
    *caracteres = n_caracteres;
    return 0;
}

int main(int argc, char **argv)
{
    size_t lineas, palabras, caracteres;
    if (argc != 2) {
        fprintf(stderr, "Uso: %s ruta\n", argv[0]);
        return EXIT_FAILURE;
    }
    if (contar_archivo(argv[1], &lineas, &palabras, &caracteres) != 0) {
        perror("No se pudo contar el archivo");
        return EXIT_FAILURE;
    }
    printf("%zu líneas %zu palabras %zu caracteres %s\n",
           lineas, palabras, caracteres, argv[1]);
    return EXIT_SUCCESS;
}

#define _POSIX_C_SOURCE 200809L
#include "ej-14-34-implementar-getline.h"
#include <stdint.h>
#include <stdlib.h>

ssize_t mi_getline(char **lineptr, size_t *n, FILE *stream)
{
    if (lineptr == NULL || n == NULL || stream == NULL) {
        return -1;
    }

    size_t usados = 0;
    if (*lineptr == NULL) {
        size_t inicial = 128;
        char *nuevo = malloc(inicial);
        if (nuevo == NULL) {
            return -1;
        }
        *lineptr = nuevo;
        *n = inicial;
    } else if (*n == 0) {
        size_t inicial = 128;
        char *nuevo = realloc(*lineptr, inicial);
        if (nuevo == NULL) {
            return -1;
        }
        *lineptr = nuevo;
        *n = inicial;
    }
    (*lineptr)[0] = '\0';

    for (;;) {
        int ch = fgetc(stream);
        if (ch == EOF) {
            if (ferror(stream) || usados == 0) {
                return -1;
            }
            return (ssize_t)usados;
        }

        if (usados + 1 >= *n) {
            if (*n > SIZE_MAX / 2) {
                (*lineptr)[usados] = '\0';
                return -1;
            }
            size_t capacidad_nueva = *n * 2;
            char *nuevo = realloc(*lineptr, capacidad_nueva);
            if (nuevo == NULL) {
                /* realloc fallido conserva el bloque original y la capacidad. */
                (*lineptr)[usados] = '\0';
                return -1;
            }
            *lineptr = nuevo;
            *n = capacidad_nueva;
        }

        (*lineptr)[usados++] = (char)ch;
        (*lineptr)[usados] = '\0';
        if (ch == '\n') {
            return (ssize_t)usados;
        }
    }
}

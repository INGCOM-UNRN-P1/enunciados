#include "ej-14-20-historial-de-comandos.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void historial_iniciar(historial_t *h)
{
    if (h) {
        h->comandos = NULL;
        h->cantidad = 0;
        h->capacidad = 0;
    }
}

bool historial_agregar(historial_t *h, const char *s)
{
    if (!h || !s) return false;
    char *c = malloc(strlen(s) + 1);
    if (!c) return false;
    strcpy(c, s);
    if (h->cantidad == h->capacidad) {
        size_t cap = h->capacidad ? h->capacidad * 2 : 4;
        if (cap < h->capacidad || cap > SIZE_MAX / sizeof *h->comandos) {
            free(c);
            return false;
        }
        char **p = realloc(h->comandos, cap * sizeof *p);
        if (!p) {
            free(c);
            return false;
        }
        h->comandos = p;
        h->capacidad = cap;
    }
    h->comandos[h->cantidad++] = c;
    return true;
}

const char *historial_obtener(const historial_t *h, size_t i)
{
    return h && i < h->cantidad ? h->comandos[i] : NULL;
}

void historial_liberar(historial_t *h)
{
    if (h) {
        for (size_t i = 0; i < h->cantidad; i++) free(h->comandos[i]);
        free(h->comandos);
        historial_iniciar(h);
    }
}

static char *leer_linea(FILE *entrada)
{
    size_t n = 0, capacidad = 32;
    char *linea = malloc(capacidad);
    if (!linea) return NULL;
    int c;
    while ((c = fgetc(entrada)) != EOF && c != '\n') {
        if (n + 1 >= capacidad) {
            if (capacidad > SIZE_MAX / 2) { free(linea); return NULL; }
            size_t nueva_capacidad = capacidad * 2;
            char *temporal = realloc(linea, nueva_capacidad);
            if (!temporal) { free(linea); return NULL; }
            linea = temporal;
            capacidad = nueva_capacidad;
        }
        linea[n++] = (char)c;
    }
    if (c == EOF && ferror(entrada)) { free(linea); return NULL; }
    if (c == EOF && n == 0) { free(linea); return NULL; }
    linea[n] = '\0';
    return linea;
}

int main(void)
{
    historial_t historial;
    historial_iniciar(&historial);
    puts("Ingrese comandos; termine la entrada con EOF (Ctrl-D). ");
    for (;;) {
        char *linea = leer_linea(stdin);
        if (!linea) break;
        bool agregado = historial_agregar(&historial, linea);
        free(linea);
        if (!agregado) {
            fputs("No se pudo guardar el comando.\n", stderr);
            historial_liberar(&historial);
            return EXIT_FAILURE;
        }
    }
    puts("Historial:");
    for (size_t i = 0; i < historial.cantidad; i++) {
        printf("%zu: %s\n", i + 1, historial_obtener(&historial, i));
    }
    historial_liberar(&historial);
    return EXIT_SUCCESS;
}

#include "ej-14-24-lista-de-compras-dinamica.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lista_compras_iniciar(lista_compras_t *l)
{
    if (l) {
        l->items = NULL;
        l->cantidad = 0;
        l->capacidad = 0;
    }
}

bool lista_compras_agregar(lista_compras_t *l, const char *s)
{
    if (!l || !s) return false;
    char *copia = malloc(strlen(s) + 1);
    if (!copia) return false;
    strcpy(copia, s);
    if (l->cantidad == l->capacidad) {
        size_t cap = l->capacidad ? l->capacidad * 2 : 4;
        if (cap < l->capacidad || cap > SIZE_MAX / sizeof *l->items) {
            free(copia);
            return false;
        }
        char **p = realloc(l->items, cap * sizeof *p);
        if (!p) { free(copia); return false; }
        l->items = p;
        l->capacidad = cap;
    }
    l->items[l->cantidad++] = copia;
    return true;
}

bool lista_compras_eliminar(lista_compras_t *l, const char *item)
{
    if (!l || !item) return false;
    size_t i = 0;
    while (i < l->cantidad && strcmp(l->items[i], item) != 0) i++;
    if (i == l->cantidad) return false;
    free(l->items[i]);
    for (; i + 1 < l->cantidad; i++) l->items[i] = l->items[i + 1];
    l->cantidad--;
    return true;
}

void lista_compras_liberar(lista_compras_t *l)
{
    if (l) {
        for (size_t i = 0; i < l->cantidad; i++) free(l->items[i]);
        free(l->items);
        lista_compras_iniciar(l);
    }
}

static char *leer_linea(void)
{
    size_t n = 0, capacidad = 32;
    char *s = malloc(capacidad);
    if (!s) return NULL;
    int c;
    while ((c = getchar()) != EOF && c != '\n') {
        if (n + 1 >= capacidad) {
            if (capacidad > SIZE_MAX / 2) { free(s); return NULL; }
            size_t nueva = capacidad * 2;
            char *p = realloc(s, nueva);
            if (!p) { free(s); return NULL; }
            s = p;
            capacidad = nueva;
        }
        s[n++] = (char)c;
    }
    if (c == EOF && n == 0) { free(s); return NULL; }
    s[n] = '\0';
    return s;
}

int main(void)
{
    lista_compras_t lista;
    lista_compras_iniciar(&lista);
    for (;;) {
        puts("1 Añadir, 2 Eliminar, 3 Mostrar, 0 Salir");
        int opcion;
        if (scanf("%d", &opcion) != 1) break;
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { }
        if (opcion == 0) break;
        if (opcion == 1 || opcion == 2) {
            fputs("Producto: ", stdout);
            char *item = leer_linea();
            if (!item) {
                fputs("No se pudo leer el producto.\n", stderr);
                continue;
            }
            bool ok = opcion == 1 ? lista_compras_agregar(&lista, item)
                                  : lista_compras_eliminar(&lista, item);
            puts(ok ? "Operación realizada." : "No se pudo realizar la operación.");
            free(item);
        } else if (opcion == 3) {
            for (size_t i = 0; i < lista.cantidad; i++)
                printf("%zu. %s\n", i + 1, lista.items[i]);
        } else {
            puts("Opción inválida.");
        }
    }
    lista_compras_liberar(&lista);
    return EXIT_SUCCESS;
}

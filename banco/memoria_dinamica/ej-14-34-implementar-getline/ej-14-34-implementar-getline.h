#ifndef EJERCICIO_EJ_14_34_IMPLEMENTAR_GETLINE_H
#define EJERCICIO_EJ_14_34_IMPLEMENTAR_GETLINE_H

#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>

/* Lee una línea, incluyendo '\n' si aparece. Retorna -1 ante EOF sin bytes o error. */
ssize_t mi_getline(char **lineptr, size_t *n, FILE *stream);

#endif

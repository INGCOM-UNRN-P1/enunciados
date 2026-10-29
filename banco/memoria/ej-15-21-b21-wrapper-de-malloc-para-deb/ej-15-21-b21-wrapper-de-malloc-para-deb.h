#ifndef EJERCICIO_EJ_15_21_B21_WRAPPER_DE_MALLOC_PARA_DEB_H
#define EJERCICIO_EJ_15_21_B21_WRAPPER_DE_MALLOC_PARA_DEB_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación debug_free */
void debug_free(void *ptr, const char *archivo, int linea);

#endif /* EJERCICIO_EJ_15_21_B21_WRAPPER_DE_MALLOC_PARA_DEB_H */

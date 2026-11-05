#ifndef EJERCICIO_EJ_14_20_HISTORIAL_DE_COMANDOS_H
#define EJERCICIO_EJ_14_20_HISTORIAL_DE_COMANDOS_H

#include <stddef.h>
#include <stdbool.h>
typedef struct { char **comandos; size_t cantidad; size_t capacidad; } historial_t;
void historial_iniciar(historial_t *h);
bool historial_agregar(historial_t *h, const char *comando);
const char *historial_obtener(const historial_t *h, size_t indice);
void historial_liberar(historial_t *h);

#endif

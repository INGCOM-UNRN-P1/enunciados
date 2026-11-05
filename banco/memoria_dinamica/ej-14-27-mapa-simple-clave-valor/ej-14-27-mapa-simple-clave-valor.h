#ifndef EJERCICIO_EJ_14_27_MAPA_SIMPLE_CLAVE_VALOR_H
#define EJERCICIO_EJ_14_27_MAPA_SIMPLE_CLAVE_VALOR_H

#include <stddef.h>
#include <stdbool.h>
typedef struct { char *clave; char *valor; } entrada_mapa_t;
typedef struct { entrada_mapa_t *entradas; size_t cantidad; size_t capacidad; } mapa_t;
void mapa_iniciar(mapa_t *m);
bool mapa_poner(mapa_t *m, const char *clave, const char *valor);
const char *mapa_obtener(const mapa_t *m, const char *clave);
void mapa_liberar(mapa_t *m);

#endif

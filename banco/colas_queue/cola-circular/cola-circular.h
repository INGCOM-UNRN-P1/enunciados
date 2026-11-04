#ifndef COLA_CIRCULAR_H
#define COLA_CIRCULAR_H

#include <stdbool.h>

#define CAPACIDAD 6

typedef struct {
    int datos[CAPACIDAD];
    int frente;
    int final;
    int cantidad;
} cola_t;

void cola_inicializar(cola_t *cola);
bool cola_encolar(cola_t *cola, int valor);
bool cola_desencolar(cola_t *cola, int *valor);
bool cola_esta_vacia(const cola_t *cola);
bool cola_esta_llena(const cola_t *cola);

#endif

#ifndef GEOM_COMP_11_H
#define GEOM_COMP_11_H
#include <stddef.h>
typedef struct { double x, y; } punto2d_t;
/* Devuelve cantidad de vértices antihorarios o 0 si la entrada/capacidad no sirve. */
size_t envolvente_convexa_jarvis(const punto2d_t *puntos, size_t n,
                                 punto2d_t *salida, size_t capacidad);
#endif

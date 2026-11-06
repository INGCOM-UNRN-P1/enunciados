# Rotación 2D de Puntos Alrededor del Origen y Pivote

Rota alrededor de un pivote; el origen se obtiene pasando (0,0). El ángulo se mide en radianes.

Contrato C11:

```c
#ifndef GEOM_COMP_18_H
#define GEOM_COMP_18_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

punto2d_t rotar_punto(punto2d_t,punto2d_t,double);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

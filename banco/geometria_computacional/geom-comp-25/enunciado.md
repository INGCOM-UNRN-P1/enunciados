# Distancia de Hausdorff entre Dos Conjuntos de Puntos

Calcula Hausdorff discreta simétrica: máximo de las distancias dirigidas al vecino más cercano.

Contrato C11:

```c
#ifndef GEOM_COMP_25_H
#define GEOM_COMP_25_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

double hausdorff_discreta(const punto2d_t*,size_t,const punto2d_t*,size_t);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

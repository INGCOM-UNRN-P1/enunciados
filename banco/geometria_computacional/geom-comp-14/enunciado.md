# Detección de Colisión entre Dos Cajas AABB

Las cajas se expresan con mínimos y máximos normalizados. Compartir borde o vértice cuenta como intersección.

Contrato C11:

```c
#ifndef GEOM_COMP_14_H
#define GEOM_COMP_14_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;
typedef struct {double min_x,min_y,max_x,max_y;} caja2d_t;
bool aabb_intersectan(caja2d_t,caja2d_t);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

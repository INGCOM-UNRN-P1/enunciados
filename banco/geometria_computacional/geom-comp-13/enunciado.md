# Cálculo de Bounding Box Alineada a los Ejes AABB

Los límites inclusivos se obtienen independientemente en ambos ejes. La entrada vacía no define una caja.

Contrato C11:

```c
#ifndef GEOM_COMP_13_H
#define GEOM_COMP_13_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;
typedef struct {double min_x,min_y,max_x,max_y;} caja2d_t;
bool calcular_aabb(const punto2d_t*,size_t,caja2d_t*);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

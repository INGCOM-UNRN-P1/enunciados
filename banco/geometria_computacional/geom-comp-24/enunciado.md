# Proyección Ortogonal de un Punto sobre una Recta

Proyecta sobre la recta infinita, no sobre el segmento. Los extremos deben ser distintos.

Contrato C11:

```c
#ifndef GEOM_COMP_24_H
#define GEOM_COMP_24_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

bool proyectar_punto_recta(punto2d_t,punto2d_t,punto2d_t,punto2d_t*);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

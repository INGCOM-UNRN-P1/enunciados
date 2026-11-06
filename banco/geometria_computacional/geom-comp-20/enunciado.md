# Reflexión de Puntos respecto a un Eje Arbitrario

Proyecta sobre la recta infinita definida por dos puntos y refleja a través de esa proyección.

Contrato C11:

```c
#ifndef GEOM_COMP_20_H
#define GEOM_COMP_20_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

bool reflejar_punto_recta(punto2d_t,punto2d_t,punto2d_t,punto2d_t*);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

# Escalamiento y Traslación de Polígonos 2D

Modifica los vértices in situ: escala cada eje respecto del origen y luego suma la traslación.

Contrato C11:

```c
#ifndef GEOM_COMP_19_H
#define GEOM_COMP_19_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

bool escalar_trasladar(punto2d_t*,size_t,double,double,punto2d_t);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

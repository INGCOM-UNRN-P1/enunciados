# Cálculo del Perímetro de Polígonos Irregulares

Interpreta los puntos como vértices ordenados de un polígono cerrado e incluye el lado de cierre.

Contrato C11:

```c
#ifndef GEOM_COMP_22_H
#define GEOM_COMP_22_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

double perimetro_poligono(const punto2d_t*,size_t);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

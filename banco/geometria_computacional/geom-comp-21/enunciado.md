# Triangulación Simple de Polígonos Convexos

Para vértices de un polígono convexo ordenados, genera n-2 triángulos en abanico desde el primero.

Contrato C11:

```c
#ifndef GEOM_COMP_21_H
#define GEOM_COMP_21_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;
typedef struct {punto2d_t a,b,c;} triangulo2d_t;
size_t triangular_fan_convexo(const punto2d_t*,size_t,triangulo2d_t*,size_t);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

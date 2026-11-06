# Detección de Colisión entre Círculos en 2D

Compara la distancia entre centros con la suma de radios, sin calcular raíces. La tangencia cuenta como colisión.

Contrato C11:

```c
#ifndef GEOM_COMP_15_H
#define GEOM_COMP_15_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;
typedef struct {punto2d_t centro;double radio;} circulo2d_t;
bool circulos_intersectan(circulo2d_t,circulo2d_t);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

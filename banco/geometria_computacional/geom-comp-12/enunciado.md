# Par de Puntos Más Cercanos en el Plano 2D

Busca el mínimo entre todos los pares distintos. En empates conserva el primer par según los índices crecientes.

Contrato C11:

```c
#ifndef GEOM_COMP_12_H
#define GEOM_COMP_12_H
#include <stdbool.h>
#include <stddef.h>
typedef struct { double x, y; } punto2d_t;
/* Guarda índices del par de menor distancia; false con menos de dos puntos. */
bool par_mas_cercano(const punto2d_t *puntos, size_t n, size_t *indice_a, size_t *indice_b);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

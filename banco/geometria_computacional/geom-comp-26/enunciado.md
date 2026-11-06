# Segmentación Voronoi y Asignación de Puntos al Sitio Más Cercano

Asigna cada consulta al sitio euclídeamente más cercano. Ante empate elige el menor índice.

Contrato C11:

```c
#ifndef GEOM_COMP_26_H
#define GEOM_COMP_26_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

bool asignar_sitios(const punto2d_t*,size_t,const punto2d_t*,size_t,size_t*);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

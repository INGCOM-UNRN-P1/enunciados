# Centroide y Centro de Masa de un Conjunto de Puntos

Implementa por separado el centroide (pesos iguales) y centro de masa (pesos dados); rechaza masas negativas y suma de masa nula.

Contrato C11:

```c
#ifndef GEOM_COMP_17_H
#define GEOM_COMP_17_H
#include <stdbool.h>
#include <stddef.h>
typedef struct { double x, y; } punto2d_t;
typedef struct { punto2d_t posicion; double masa; } particula2d_t;
bool centroide_puntos(const punto2d_t *puntos, size_t n, punto2d_t *salida);
bool centro_masa(const particula2d_t *particulas, size_t n, punto2d_t *salida);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

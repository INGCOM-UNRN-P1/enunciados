# Detección de Autointersección en Polilíneas

La polilínea es abierta. Compara segmentos no adyacentes; el contacto cuenta como autointersección.

Contrato C11:

```c
#ifndef GEOM_COMP_23_H
#define GEOM_COMP_23_H
#include <stdbool.h>
#include <stddef.h>
typedef struct {double x,y;} punto2d_t;

bool polilinea_autointersecta(const punto2d_t*,size_t);
#endif
```

Convenciones y casos inválidos: las funciones que escriben parámetros de salida retornan false o cero si no pueden producir un resultado válido. Los casos esenciales están declarados en tests_funciones del YAML.

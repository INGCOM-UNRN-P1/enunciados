# Producto vectorial 2D y orientación

Implementá las operaciones geométricas para puntos cartesianos bidimensionales. Las coordenadas y resultados son `double`.

```c
typedef struct { double x, y; } punto2d_t;
typedef enum { COLINEAL=0, GIRO_ANTIHORARIO=1, GIRO_HORARIO=-1 } orientacion_t;
double producto_vectorial_2d(punto2d_t a, punto2d_t b);
orientacion_t orientacion(punto2d_t a, punto2d_t b, punto2d_t c);
```

Convenciones: la orientación positiva indica giro antihorario; los casos degenerados se especifican en el contrato.

Casos de prueba requeridos: entradas ordinarias, borde/degeneración pertinente y una figura o configuración que discrimine el algoritmo frente a una fórmula genérica.

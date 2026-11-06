# Intersección de dos segmentos 2D

Implementá las operaciones geométricas para puntos cartesianos bidimensionales. Las coordenadas y resultados son `double`.

```c
typedef struct { double x, y; } punto2d_t;
bool segmentos_intersectan(punto2d_t a, punto2d_t b, punto2d_t c, punto2d_t d);
```

Convenciones: los segmentos incluyen sus extremos y la colinealidad se considera intersección.

Casos de prueba requeridos: entradas ordinarias, borde/degeneración pertinente y una figura o configuración que discrimine el algoritmo frente a una fórmula genérica.

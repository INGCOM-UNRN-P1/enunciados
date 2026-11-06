# Distancia de punto a segmento

Implementá las operaciones geométricas para puntos cartesianos bidimensionales. Las coordenadas y resultados son `double`.

```c
typedef struct { double x, y; } punto2d_t;
double distancia_punto_segmento(punto2d_t p, punto2d_t a, punto2d_t b);
```

Convenciones: la distancia se mide al punto más cercano del segmento, incluyendo la proyección recortada a sus extremos.

Casos de prueba requeridos: entradas ordinarias, borde/degeneración pertinente y una figura o configuración que discrimine el algoritmo frente a una fórmula genérica.

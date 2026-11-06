# Ray casting: punto dentro de polígono

Implementá las operaciones geométricas para puntos cartesianos bidimensionales. Las coordenadas y resultados son `double`.

```c
typedef struct { double x, y; } punto2d_t;
/* El borde cuenta como interior. */
bool punto_en_poligono(punto2d_t p, const punto2d_t *vertices, size_t n);
```

Convenciones: los puntos sobre el borde se consideran interiores.

Casos de prueba requeridos: entradas ordinarias, borde/degeneración pertinente y una figura o configuración que discrimine el algoritmo frente a una fórmula genérica.

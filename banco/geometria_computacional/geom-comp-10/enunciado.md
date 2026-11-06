# Envolvente convexa con Graham scan

Implementá las operaciones geométricas para puntos cartesianos bidimensionales. Las coordenadas y resultados son `double`.

```c
typedef struct { double x, y; } punto2d_t;
/* Retorna cantidad de vértices antihorarios, sin repetir el primero; 0 si capacidad menor que la cantidad de vértices de la envolvente o entrada degenerada. */
size_t envolvente_convexa_graham(const punto2d_t *puntos, size_t n, punto2d_t *salida, size_t capacidad);
```

Convenciones: el resultado de la envolvente está en orden antihorario y no repite el vértice inicial.

Casos de prueba requeridos: entradas ordinarias, borde/degeneración pertinente y una figura o configuración que discrimine el algoritmo frente a una fórmula genérica.

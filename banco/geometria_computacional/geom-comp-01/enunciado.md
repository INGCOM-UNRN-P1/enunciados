# Distancia Euclidiana y norma 2D

Implementá las operaciones geométricas para puntos cartesianos bidimensionales. Las coordenadas y resultados son `double`.

```c
typedef struct { double x, y; } punto2d_t;
double norma_vectorial(punto2d_t v);
double distancia_euclidiana(punto2d_t a, punto2d_t b);
```

Convenciones: se aplican directamente las definiciones euclidianas indicadas por el nombre de las operaciones.

Casos de prueba requeridos: entradas ordinarias, borde/degeneración pertinente y una figura o configuración que discrimine el algoritmo frente a una fórmula genérica.

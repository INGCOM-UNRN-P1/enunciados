# Área de polígono por fórmula del cordón

Implementá las operaciones geométricas para puntos cartesianos bidimensionales. Las coordenadas y resultados son `double`.

```c
typedef struct { double x, y; } punto2d_t;
double area_poligono(const punto2d_t *vertices, size_t n);
```

Convenciones: el área es no negativa y el polígono se cierra entre el último y el primer vértice.

Casos de prueba requeridos: entradas ordinarias, borde/degeneración pertinente y una figura o configuración que discrimine el algoritmo frente a una fórmula genérica.

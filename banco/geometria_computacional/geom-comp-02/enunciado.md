# Producto escalar y ángulo entre vectores

Implementá las operaciones geométricas para puntos cartesianos bidimensionales. Las coordenadas y resultados son `double`.

```c
typedef struct { double x, y; } vector2d_t;
double producto_escalar(vector2d_t a, vector2d_t b);
bool angulo_entre_vectores(vector2d_t a, vector2d_t b, double *radianes);
```

Convenciones: el ángulo se expresa en radianes y la función devuelve `false` si el resultado no está definido o `radianes` es NULL.

Casos de prueba requeridos: entradas ordinarias, borde/degeneración pertinente y una figura o configuración que discrimine el algoritmo frente a una fórmula genérica.

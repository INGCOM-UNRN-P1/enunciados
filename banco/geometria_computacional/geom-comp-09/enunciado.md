# Verificar polígono convexo o cóncavo

Implementá las operaciones geométricas para puntos cartesianos bidimensionales. Las coordenadas y resultados son `double`.

```c
typedef struct { double x, y; } punto2d_t;
/* Ignora giros colineales; devuelve false si es degenerado o no convexo. */
bool poligono_es_convexo(const punto2d_t *vertices, size_t n);
```

Convenciones: se aplican directamente las definiciones euclidianas indicadas por el nombre de las operaciones.

Casos de prueba requeridos: entradas ordinarias, borde/degeneración pertinente y una figura o configuración que discrimine el algoritmo frente a una fórmula genérica.

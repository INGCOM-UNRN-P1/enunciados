# Optimización unidimensional por sección áurea

Implementa búsqueda de sección áurea para minimizar una función unimodal continua en un intervalo cerrado `[a,b]`. El intervalo y la tolerancia deben ser finitos, `a < b`, tolerancia positiva y `max_iter > 0`.

## Interfaz
```c
typedef double (*funcion_objetivo_t)(double);
double minimizar_seccion_aurea(funcion_objetivo_t f, double a, double b,
                                 double tolerancia, size_t max_iter);
```

Devuelve el punto medio del intervalo final; `NAN` si hay argumentos inválidos, la función produce un valor no finito o se agota el máximo de iteraciones antes de alcanzar tolerancia.

## Casos de referencia

Con `f(x)=(x-2)²` en `[0,5]`, devuelve un punto a distancia menor que `1e-6` de 2. Rechaza intervalos degenerados y tolerancia cero.

# Integración Numérica por Regla del Trapecio

Regla compuesta del trapecio en [a,b] con intervalos > 0. NAN para entradas o evaluaciones no finitas.

## Firma

```c
double integrar_trapecio(double (*f)(double), double a, double b, int intervalos);
```

La integral de x² en [0,1] con 1000 intervalos aproxima 1/3.


El callback debe ser determinista y devolver valores finitos en los puntos consultados. La función no modifica estado global.

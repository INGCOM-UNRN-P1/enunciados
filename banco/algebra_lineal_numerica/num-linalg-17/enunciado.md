# Integración Numérica por Regla de Simpson Un Tercio

Simpson compuesto 1/3; intervalos debe ser positivo y par. NAN ante contrato inválido o evaluación no finita.

## Firma

```c
double integrar_simpson_tercio(double (*f)(double), double a, double b, int intervalos);
```

La integral de x² en [0,1] con 10 intervalos aproxima 1/3.


El callback debe ser determinista y devolver valores finitos en los puntos consultados. La función no modifica estado global.

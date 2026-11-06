# Integración Numérica por Regla de Simpson Tres Octavos

Simpson compuesto 3/8; intervalos debe ser positivo y múltiplo de 3. NAN ante contrato inválido o evaluación no finita.

## Firma

```c
double integrar_simpson_tres_octavos(double (*f)(double), double a, double b, int intervalos);
```

La integral de x² en [0,1] con 12 intervalos aproxima 1/3.


El callback debe ser determinista y devolver valores finitos en los puntos consultados. La función no modifica estado global.

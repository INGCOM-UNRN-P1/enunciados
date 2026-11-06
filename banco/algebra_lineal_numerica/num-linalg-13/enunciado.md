# Interpolación Polinómica por Fórmula de Lagrange

Evalúa el polinomio interpolante en punto. NAN para datos inválidos o abscisas repetidas.

## Firma

```c
double interpolar_lagrange(const double *x, const double *y, int n, double punto);
```

Los puntos (0,1),(1,3),(2,5) interpolan f(1.5)=4.


Los arreglos de entrada tienen n elementos y son de solo lectura. Los valores no finitos y abscisas repetidas se rechazan con NAN.

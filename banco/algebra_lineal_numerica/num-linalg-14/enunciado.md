# Interpolación Polinómica por Diferencias Divididas de Newton

Evalúa el polinomio por diferencias divididas de Newton. NAN ante datos inválidos o abscisas repetidas.

## Firma

```c
double interpolar_newton(const double *x, const double *y, int n, double punto);
```

Los puntos (0,1),(1,3),(2,5) interpolan f(1.5)=4.


Los arreglos de entrada tienen n elementos y son de solo lectura. Los valores no finitos y abscisas repetidas se rechazan con NAN.

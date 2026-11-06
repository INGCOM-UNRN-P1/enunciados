# Diferenciación Numérica por Diferencias Finitas Centrales

Aproxima f'(x) por (f(x+h)-f(x-h))/(2h). Requiere h distinto de cero y evaluaciones finitas.

## Firma

```c
double derivada_central(double (*f)(double), double x, double h);
```

Para f(x)=x², x=3 y h=0.001, aproxima derivada 6.


El callback debe ser determinista y devolver valores finitos en los puntos consultados. La función no modifica estado global.

# Evaluación de polinomios por la regla de Horner

Evalúa un polinomio de grado `n-1` usando Horner. Los coeficientes se reciben en orden descendente: para `a[0]x²+a[1]x+a[2]`, `coeficientes={a[0],a[1],a[2]}`.

## Interfaz
```c
double evaluar_horner(const double *coeficientes, size_t n, double x);
```

Devuelve el valor; devuelve `NAN` si el puntero es nulo, `n==0`, la entrada contiene valores no finitos o el resultado desborda a infinito.

## Casos de referencia

`{2,-3,4}` en `x=2` vale `6`; un polinomio constante `{7}` vale `7` para cualquier `x`.

# Método de Gauss–Seidel

Resuelve Ax=b por Gauss-Seidel desde x inicial cero y actualiza cada componente inmediatamente dentro de la iteración.

## Firma requerida

```c
double *metodo_gauss_seidel(double **A, double *b, int n, double tolerancia,
                            int max_iter);
```

## Memoria, errores y terminación

Devuelve vector n reservado con malloc, a liberar por quien llama. NULL ante argumentos inválidos, diagonal nula, falta de memoria o falta de convergencia. Converge cuando la norma infinito del cambio en una iteración <= tolerancia; diagonal estrictamente dominante es suficiente, pero no necesaria.

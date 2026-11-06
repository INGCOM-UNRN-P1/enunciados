# Método de Jacobi

Resuelve Ax=b por Jacobi desde x inicial cero. En cada iteración todos los componentes nuevos se calculan usando exclusivamente el vector anterior.

## Firma requerida

```c
double *metodo_jacobi(double **A, double *b, int n, double tolerancia,
                      int max_iter);
```

## Memoria, errores y terminación

Devuelve vector n reservado con malloc, a liberar por quien llama. NULL si los argumentos son inválidos, hay diagonal nula, falta memoria o no converge en max_iter. Converge cuando la norma infinito de x nuevo menos x anterior es <= tolerancia. Para convergencia se requiere matriz convergente; diagonal estrictamente dominante es condición suficiente.

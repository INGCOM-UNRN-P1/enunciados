# Eliminación gaussiana con pivoteo completo

resuelve Ax=b con eliminación gaussiana y pivoteo completo, incluyendo intercambio de columnas. A y b no se modifican.

## Firma requerida

```c
double *resolver_sistema(double **A, double *b, int n);
```

## Memoria, errores y terminación

Devuelve un vector de n doubles reservado con malloc; la persona que llama debe liberarlo con free. Devuelve NULL si n<=0, hay punteros inválidos, falta memoria o la matriz es singular.

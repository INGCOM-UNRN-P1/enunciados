# Determinante por triangulación

Calcula det(A) mediante eliminación gaussiana con pivoteo parcial. Devuelve NAN para argumentos inválidos, entradas no finitas o falta de memoria; una matriz singular produce 0.0. Un pivote es nulo solo si es exactamente 0.0; no se aplica umbral absoluto.

La matriz se representa mediante `n` filas, cada una con `n` valores `double`. La función no toma propiedad de la memoria recibida.

## Firma

```c
double determinante_triangularizacion(double **A, int n);
```

## Ejemplos y casos de prueba

Para la inversa, `[[4,7],[2,6]]` produce `[[0.6,-0.7],[-0.2,0.4]]`; una matriz singular debe rechazarse y no modificarse. Para el determinante, `[[0,2],[3,4]]` da `-6` (requiere intercambio de filas) y `[[1,2],[2,4]]` da `0`.

Se requieren C11 y compilación limpia con `-Wall -Wextra -Werror`.

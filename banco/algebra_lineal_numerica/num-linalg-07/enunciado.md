# Inversión de matrices por Gauss-Jordan

La matriz cuadrada A se modifica in situ para contener A⁻¹. Usa pivoteo parcial por filas. Devuelve 1 si se completó y 0 ante argumentos inválidos, falta de memoria o matriz singular. Un pivote se considera nulo solo cuando es exactamente 0.0; no se aplica un umbral absoluto.

La matriz se representa mediante `n` filas, cada una con `n` valores `double`. La función no toma propiedad de la memoria recibida.

## Firma

```c
int invertir_gauss_jordan(double **A, int n);
```

## Ejemplos y casos de prueba

Para la inversa, `[[4,7],[2,6]]` produce `[[0.6,-0.7],[-0.2,0.4]]`; una matriz singular debe rechazarse y no modificarse. Para el determinante, `[[0,2],[3,4]]` da `-6` (requiere intercambio de filas) y `[[1,2],[2,4]]` da `0`.

Se requieren C11 y compilación limpia con `-Wall -Wextra -Werror`.

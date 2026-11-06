# Descomposición QR por Proceso de Gram-Schmidt

QR reducido por Gram-Schmidt clásico. A es m×n, Q salida m×n, R salida n×n. Devuelve 1; 0 para dimensiones inválidas, datos no finitos, columnas dependientes exactas o falta de memoria.

## Firma

```c
int gram_schmidt_qr(double **A, int m, int n, double **Q, double **R);
```

Para columnas (1,0) y (1,1), Q tiene columnas ortonormales y A=QR.


A tiene m filas de n valores. Q se escribe en m filas de n valores y R en n filas de n valores. La función no reserva ni toma propiedad de las matrices del llamador.

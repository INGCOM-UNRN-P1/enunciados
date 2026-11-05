Genere una matriz de Hankel de orden n a partir de la primera columna c y la última fila r; c[n-1] y r[0] deben coincidir. Las diagonales i+j son constantes. Devuelva NULL ante entrada inválida o falla de reserva. Libere cada fila y luego el vector de filas.

```c
double **matriz_hankel(double *c, double *r, int n);
```

# Percolación en una grilla

Abrí las celdas en el orden dado. Una celda abierta conecta con sus vecinas ortogonales abiertas. Devolvé el número de apertura (base 1) en que aparece por primera vez un camino desde la fila superior a la inferior; `0` si nunca aparece y `-1` para dimensiones, coordenadas o memoria inválidas. Coordenadas base 0. Celdas repetidas no cuentan como una nueva apertura.

```c
int dsu15_primer_cruce(size_t filas, size_t columnas, const size_t aperturas[][2], size_t cantidad);
```

En una grilla 2×2, abrir `(0,0),(1,0)` devuelve `2`.

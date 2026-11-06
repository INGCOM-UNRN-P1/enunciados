# Submatriz 2×2 de mayor suma

Buscar entre todas las submatrices contiguas 2×2 de una matriz filas×columnas la de suma máxima. Entregar suma y coordenadas (fila,columna) de su esquina superior izquierda. Empates: conservar la primera en recorrido por filas.

### Interfaz

```c
int submatriz_2x2_mayor(const double *A, size_t filas, size_t columnas, double *suma, size_t *fila, size_t *columna);
```

### Contrato

1 si existe; 0 con dimensiones menores que 2 o argumentos inválidos.

Las matrices se representan en buffers contiguos row-major. Los tamaños se expresan en elementos, no en bytes.

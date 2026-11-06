# Descomposición LU de Doolittle

Factorizar una matriz cuadrada row-major como A=L·U mediante Doolittle sin pivoteo. L tiene diagonal unitaria.

### Interfaz

```c
int descomponer_lu(const double *A, size_t n, double *L, double *U);
```

### Contrato

1 si la factorización existe; 0 ante argumentos inválidos, pivote nulo o matriz que requiere pivoteo.

Las matrices se representan en buffers contiguos row-major. Los tamaños se expresan en elementos, no en bytes.

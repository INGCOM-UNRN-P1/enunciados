# Eliminación gaussiana con pivoteo parcial

Resolver Ax=b con eliminación gaussiana y pivoteo parcial por filas. A y b no se modifican; escribir la solución en x.

### Interfaz

```c
int gauss_pivoteo_parcial(const double *A, const double *b, size_t n, double *x);
```

### Contrato

1 si resuelve; 0 ante argumentos inválidos, matriz singular o falta de memoria.

Las matrices se representan en buffers contiguos row-major. Los tamaños se expresan en elementos, no en bytes.

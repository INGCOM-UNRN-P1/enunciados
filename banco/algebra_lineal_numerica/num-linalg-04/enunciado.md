# Eliminación gaussiana sin pivoteo

Resolver Ax=b mediante eliminación gaussiana sin intercambiar filas. A se almacena row-major; no se modifica.

### Interfaz

```c
int gauss_simple(const double *A, const double *b, size_t n, double *x);
```

### Contrato

1 si resuelve sin necesitar intercambio de filas y escribe en x; 0 ante argumentos inválidos, pivote nulo o falta de memoria.

Las matrices se representan en buffers contiguos row-major. Los tamaños se expresan en elementos, no en bytes.

Calcular el producto de Hadamard de dos matrices de las mismas dimensiones. Las entradas se almacenan en arreglos contiguos en orden por filas (row-major). El resultado tiene `filas * columnas` elementos y cada elemento es `a[k] * b[k]`.

```c
bool producto_hadamard(const int *a, const int *b, size_t filas, size_t columnas,
                       int64_t *resultado);
```

Retorna `false` si algún puntero es nulo, una dimensión es cero o el producto de dimensiones no cabe en `size_t`; en otro caso calcula todos los productos y retorna `true`. El resultado usa `int64_t`, que puede representar el producto de dos valores `int`.

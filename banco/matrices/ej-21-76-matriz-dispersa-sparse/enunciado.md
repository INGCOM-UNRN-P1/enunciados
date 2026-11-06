# Matriz dispersa con mapa de ocupación

Representar una matriz con buffers paralelos: valores contiene celdas y ocupado marca las entradas no nulas. Implementar asignación y consulta con validación de límites; asignar cero elimina lógicamente el elemento.

### Interfaz

```c
int sparse_set(double *valores, unsigned char *ocupado, size_t filas, size_t columnas, size_t fila, size_t columna, double valor);
double sparse_get(const double *valores, const unsigned char *ocupado, size_t filas, size_t columnas, size_t fila, size_t columna, int *valido);
```

### Contrato

sparse_set devuelve 1/0; sparse_get devuelve el valor o cero y escribe en valido si la consulta fue válida.

Las matrices se representan en buffers contiguos row-major. Los tamaños se expresan en elementos, no en bytes.

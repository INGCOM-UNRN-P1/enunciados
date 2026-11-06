# Búsqueda binaria

Busca en un arreglo ordenado ascendentemente y devuelve un índice coincidente o -1. Debe ejecutarse en O(log n).

```c
int busqueda_binaria(const int *datos, size_t n, int objetivo);
```

Un puntero nulo no debe desreferenciarse: las búsquedas devuelven `-1`; los ordenamientos sin estado de error no hacen nada. Para `n == 0` no se accede al arreglo.

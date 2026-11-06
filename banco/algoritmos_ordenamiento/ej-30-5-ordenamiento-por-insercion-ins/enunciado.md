# Ordenamiento por inserción

Ordena in situ ascendentemente insertando cada elemento en el prefijo ordenado; conserva estabilidad.

```c
void ordenar_insercion(int *datos, size_t n);
```

Un puntero nulo no debe desreferenciarse: las búsquedas devuelven `-1`; los ordenamientos sin estado de error no hacen nada. Para `n == 0` no se accede al arreglo.

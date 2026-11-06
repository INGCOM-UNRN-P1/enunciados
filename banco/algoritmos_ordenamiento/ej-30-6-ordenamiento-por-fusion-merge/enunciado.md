# Ordenamiento por fusión

Ordena in situ ascendentemente con merge sort estable. Devuelve false si no puede reservar memoria auxiliar.

```c
bool ordenar_fusion(int *datos, size_t n);
```

Un puntero nulo no debe desreferenciarse: las búsquedas devuelven `-1`; los ordenamientos sin estado de error no hacen nada. Para `n == 0` no se accede al arreglo.

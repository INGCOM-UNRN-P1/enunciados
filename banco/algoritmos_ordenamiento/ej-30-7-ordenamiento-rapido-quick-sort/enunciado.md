# Ordenamiento rápido

Ordena in situ ascendentemente mediante partición quicksort; debe soportar duplicados y arreglos vacíos.

```c
void ordenar_rapido(int *datos, size_t n);
```

Un puntero nulo no debe desreferenciarse: las búsquedas devuelven `-1`; los ordenamientos sin estado de error no hacen nada. Para `n == 0` no se accede al arreglo.

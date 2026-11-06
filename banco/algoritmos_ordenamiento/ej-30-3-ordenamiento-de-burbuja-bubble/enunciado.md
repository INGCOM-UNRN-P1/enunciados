# Ordenamiento burbuja

Ordena in situ ascendentemente mediante pasadas adyacentes; termina antes si una pasada no intercambia elementos.

```c
void ordenar_burbuja(int *datos, size_t n);
```

Un puntero nulo no debe desreferenciarse: las búsquedas devuelven `-1`; los ordenamientos sin estado de error no hacen nada. Para `n == 0` no se accede al arreglo.

# Ordenamiento por selección

Ordena in situ ascendentemente eligiendo en cada posición el mínimo del sufijo restante.

```c
void ordenar_seleccion(int *datos, size_t n);
```

Un puntero nulo no debe desreferenciarse: las búsquedas devuelven `-1`; los ordenamientos sin estado de error no hacen nada. Para `n == 0` no se accede al arreglo.

# Segmentación por crecimiento de regiones

Cada píxel es un nivel de gris entre 0 y 255. Dos píxeles ortogonalmente vecinos pertenecen a la misma región si la diferencia absoluta entre sus valores es como máximo `tolerancia`; la relación se propaga transitivamente. Devolvé la cantidad de regiones o `-1` ante entrada inválida o falta de memoria.

```c
int dsu17_contar_regiones(size_t filas, size_t columnas, const int pixeles[], int tolerancia);
```

Para píxeles `0,2,10` en una fila y tolerancia `2`, hay dos regiones.

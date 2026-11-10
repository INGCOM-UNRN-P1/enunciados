# Rollback de uniones

Operaciones `{tipo,u,v}`: `0` une dos nodos; `1` guarda una instantánea; `2` revierte hasta la instantánea más reciente (LIFO); `3` consulta conectividad. Cada operación produce un elemento de `resultados`; solo las consultas pueden devolver uno. Los vértices son `0..n-1`. Un rollback sin instantánea, un índice inválido o falta de memoria produce `-1`. Se usa unión por tamaño sin compresión de caminos para que cada cambio pueda deshacerse.

```c
int dsu12_procesar(size_t n, const int operaciones[][3], size_t cantidad, int resultados[]);
```

Ejemplo: unir `0-1`, guardar snapshot, unir `1-2`, rollback y consultar `0-2` da falso.

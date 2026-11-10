# Listado de miembros por componente

Luego de unir las aristas no dirigidas, escribí en `representantes[i]` un identificador común para todos los vértices de cada componente. El identificador es un índice válido de vértice; no se exige un orden particular entre componentes. Devolvé `n` o `-1` ante arista o argumento inválido/falta de memoria.

```c
int dsu21_representantes(size_t n, const int aristas[][2], size_t cantidad, int representantes[]);
```

Si las aristas unen `0-2` y `1-3`, las salidas para 0 y 2 coinciden, al igual que las de 1 y 3; los dos representantes son distintos.

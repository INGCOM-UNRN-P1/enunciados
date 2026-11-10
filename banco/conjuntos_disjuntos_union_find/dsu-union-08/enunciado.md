# Tamaño del componente de un nodo

Dado un grafo no dirigido con vértices `0..n-1`, calculá el tamaño del componente que contiene a `nodo`. Las aristas son pares `{u,v}`; lazos y aristas repetidas son válidos y no cambian el tamaño. Devolvé `-1` ante parámetros inválidos o falta de memoria.

```c
int dsu08_tamano_componente(size_t n, const int aristas[][2], size_t cantidad, int nodo);
```

Ejemplo: aristas `(0,1),(1,2),(3,4)` y `nodo=1` producen `3`; el nodo `4` produce `2`.

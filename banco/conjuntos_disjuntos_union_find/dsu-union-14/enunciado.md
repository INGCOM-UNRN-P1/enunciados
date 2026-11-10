# Componentes bipartitas con DSU de paridad

Determiná si un grafo no dirigido puede colorearse con dos colores de modo que los extremos de toda arista tengan colores distintos. Los vértices son `0..n-1`; lazos son inválidos para la bipartición y producen `0`. Devolvé `1` si es bipartito, `0` si no y `-1` ante datos inválidos o falta de memoria.

```c
int dsu14_es_bipartito(size_t n, const int aristas[][2], size_t cantidad);
```

Un triángulo produce `0`; un camino de tres vértices produce `1`.

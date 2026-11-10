# Detección de ciclos con Union-Find

El grafo es no dirigido y sus vértices se numeran `0..n-1`. Una arista cuyos extremos ya están en el mismo conjunto cierra un ciclo. Un lazo cuenta como ciclo; las aristas paralelas también. Devolvé `1` si existe ciclo, `0` si no y `-1` ante datos inválidos o falta de memoria.

```c
int dsu09_tiene_ciclo(size_t n, const int aristas[][2], size_t cantidad);
```

Ejemplo: `(0,1),(1,2),(2,0)` produce `1`; `(0,1),(1,2)` produce `0`.

# Recorrido en Anchura BFS con Cola en Grafos

Recorré en anchura desde el vértice inicial y guardá el orden de visita en salida. Devolvé la cantidad; los vértices vecinos se encolan por índice ascendente.

La función trabaja con grafos de hasta 20 vértices, índices desde 0 y matrices cuadradas. Los elementos distintos de cero indican aristas; para grafos no dirigidos la matriz es simétrica. Las funciones que reciben un vértice inválido devuelven el valor de error indicado en su firma.

```c
size_t bfs_recorrido(size_t n, const int matriz[20][20], size_t inicio, size_t salida[20]);
```

```{plantuml}
:caption: BFS desde `0` en un grafo de 6 vértices, dibujado por niveles. Con los vecinos encolados en orden ascendente, el orden de visita es `0 2 4 1 3 5` y la función devuelve 6. La arista `3–5` no agrega nada: `5` ya fue descubierto desde `1`.
:width: 300px
@startdot
graph G {
  node [shape=circle, fontname="monospace"];
  0 -- 2; 0 -- 4; 2 -- 1; 4 -- 3; 1 -- 5; 3 -- 5 [style=dashed];
  { rank=same; 2; 4; }
  { rank=same; 1; 3; }
}
@enddot
```

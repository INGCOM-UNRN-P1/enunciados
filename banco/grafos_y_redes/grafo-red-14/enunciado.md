# Ordenamiento Topológico de Grafos Dirigidos Acíclicos DAG

Producí un orden topológico mediante el algoritmo de Kahn. Devolvé la cantidad emitida; si existe un ciclo, devolvé 0. En un DAG no vacío siempre hay al menos un vértice.

La función trabaja con grafos de hasta 20 vértices, índices desde 0 y matrices cuadradas. Los elementos distintos de cero indican aristas; para grafos no dirigidos la matriz es simétrica. Las funciones que reciben un vértice inválido devuelven el valor de error indicado en su firma.

```c
size_t orden_topologico(size_t n, const int matriz[20][20], size_t orden[20]);
```

```{plantuml}
:caption: El DAG de las pruebas (`0→1`, `0→2`, `1→3`, `2→3`). Kahn empieza por los vértices sin aristas entrantes (`0`); al emitir cada vértice descuenta un grado de entrada a sus sucesores. Un orden válido es `0 1 2 3`; en un grafo con ciclo, como `0⇄1`, nunca aparece un vértice con grado de entrada cero y la función devuelve 0.
:width: 260px
@startdot
digraph G {
  rankdir=LR; node [shape=circle, fontname="monospace"];
  0 -> 1; 0 -> 2; 1 -> 3; 2 -> 3;
}
@enddot
```

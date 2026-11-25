# Representación de Grafo por Listas de Adyacencia

Construí listas de adyacencia para un grafo simple no dirigido a partir de sus aristas. Cada fila guarda vecinos en orden ascendente y se completa con -1. Calculá el grado consultando esa representación.

Índices de vértices desde 0; se admiten hasta 20 vértices.

```c
int construir_listas_adyacencia(size_t n, size_t m, const size_t aristas[40][2], int listas[20][20]);
int grado_vertice(size_t n, const int listas[20][20], size_t vertice);
```

```{dibu}
:caption: Listas de adyacencia del grafo de aristas `{0,1}`, `{0,2}`, `{1,2}` y `{2,3}` (sólo las primeras cuatro columnas): cada fila guarda los vecinos en orden ascendente y se completa con `-1`. El grado de un vértice es la cantidad de valores antes del primer `-1`; el del vértice `2` es 3.
type: matrix
name: listas
values: [[1, 2, -1, -1], [0, 2, -1, -1], [0, 1, 3, -1], [2, -1, -1, -1]]
showIndices: true
highlightRows: [2]
```

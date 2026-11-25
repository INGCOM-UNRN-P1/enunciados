# Representación de Grafo por Matriz de Adyacencia

Cargá una lista de `m` aristas no dirigidas en una matriz de adyacencia y consultá si dos vértices son adyacentes. Una arista inválida produce error; la matriz se inicializa a cero.

Índices de vértices desde 0; se admiten hasta 50 vértices.

```c
int cargar_grafo_no_dirigido(size_t n, size_t m, const size_t (*aristas)[2], int matriz[50][50]);
bool grafo_adyacente(size_t n, const int matriz[50][50], size_t origen, size_t destino);
```

Por ejemplo, con `n = 4` y las aristas `{0,1}`, `{0,2}`, `{1,2}` y `{2,3}`, la matriz queda simétrica: cada arista no dirigida marca dos celdas.

```{plantuml}
:caption: El grafo de ejemplo.
:width: 220px
@startdot
graph G {
  layout=neato; node [shape=circle, fontname="monospace"];
  0 [pos="0,1!"]; 1 [pos="1.4,1!"]; 2 [pos="0.7,0!"]; 3 [pos="2.1,0!"];
  0 -- 1; 0 -- 2; 1 -- 2; 2 -- 3;
}
@enddot
```

```{dibu}
:caption: Su matriz de adyacencia (sólo las primeras `n` filas y columnas de `matriz[50][50]`). La arista `{1,2}` marca `matriz[1][2]` y `matriz[2][1]`.
type: matrix
name: matriz
values: [[0, 1, 1, 0], [1, 0, 1, 0], [1, 1, 0, 1], [0, 0, 1, 0]]
showIndices: true
highlight: [[1, 2], [2, 1]]
```

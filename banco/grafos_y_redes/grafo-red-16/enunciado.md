# Algoritmo de Dijkstra para Caminos Mínimos con Pesos Positivos

Con una matriz de pesos no negativos (0 significa que no hay arista), calculá las distancias mínimas desde el origen. Usá INT_MAX para vértices inalcanzables.

La función trabaja con grafos de hasta 20 vértices, índices desde 0 y matrices cuadradas. Los elementos distintos de cero indican aristas; para grafos no dirigidos la matriz es simétrica. Las funciones que reciben un vértice inválido devuelven el valor de error indicado en su firma.

```c
bool dijkstra(size_t n, const int pesos[20][20], size_t origen, int distancias[20]);
```

```{dibu}
:caption: Dijkstra desde `0` sobre el grafo dirigido de las pruebas (`pesos[0][1] = 4`, `pesos[0][2] = 10`, `pesos[1][2] = 2`, `pesos[1][3] = 5`, `pesos[2][3] = 3`). Las distancias finales son `0 4 6 9`: el camino `0→1→2` (6) mejora la arista directa `0→2` (10).
type: dijkstra
source: "0"
edges: ["0->1:4", "0->2:10", "1->2:2", "1->3:5", "2->3:3"]
```

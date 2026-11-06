# Camino Mínimo en Grafos No Ponderados con BFS

Calculá la distancia en aristas entre dos vértices de un grafo no dirigido; devolvé -1 si no existe camino y 0 si origen y destino coinciden.

La función trabaja con grafos de hasta 20 vértices, índices desde 0 y matrices cuadradas. Los elementos distintos de cero indican aristas; para grafos no dirigidos la matriz es simétrica. Las funciones que reciben un vértice inválido devuelven el valor de error indicado en su firma.

```c
int distancia_bfs(size_t n, const int matriz[20][20], size_t origen, size_t destino);
```

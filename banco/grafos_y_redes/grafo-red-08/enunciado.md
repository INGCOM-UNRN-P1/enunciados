# Detección de Ciclos en Grafos No Dirigidos con DFS

Determiná si un grafo simple no dirigido contiene un ciclo, incluyendo componentes desconectadas.

La función trabaja con grafos de hasta 20 vértices, índices desde 0 y matrices cuadradas. Los elementos distintos de cero indican aristas; para grafos no dirigidos la matriz es simétrica. Las funciones que reciben un vértice inválido devuelven el valor de error indicado en su firma.

```c
bool tiene_ciclo_no_dirigido(size_t n, const int matriz[20][20]);
```

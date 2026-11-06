# Algoritmo de Dijkstra para Caminos Mínimos con Pesos Positivos

Con una matriz de pesos no negativos (0 significa que no hay arista), calculá las distancias mínimas desde el origen. Usá INT_MAX para vértices inalcanzables.

La función trabaja con grafos de hasta 20 vértices, índices desde 0 y matrices cuadradas. Los elementos distintos de cero indican aristas; para grafos no dirigidos la matriz es simétrica. Las funciones que reciben un vértice inválido devuelven el valor de error indicado en su firma.

```c
bool dijkstra(size_t n, const int pesos[20][20], size_t origen, int distancias[20]);
```

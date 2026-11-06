# Recorrido en Anchura BFS con Cola en Grafos

Recorré en anchura desde el vértice inicial y guardá el orden de visita en salida. Devolvé la cantidad; los vértices vecinos se encolan por índice ascendente.

La función trabaja con grafos de hasta 20 vértices, índices desde 0 y matrices cuadradas. Los elementos distintos de cero indican aristas; para grafos no dirigidos la matriz es simétrica. Las funciones que reciben un vértice inválido devuelven el valor de error indicado en su firma.

```c
size_t bfs_recorrido(size_t n, const int matriz[20][20], size_t inicio, size_t salida[20]);
```

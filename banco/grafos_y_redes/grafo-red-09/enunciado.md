# Detección de Ciclos en Grafos Dirigidos con Marcado de Tres Colores

Determiná si un grafo dirigido contiene un ciclo.

La función trabaja con grafos de hasta 20 vértices, índices desde 0 y matrices cuadradas. Los elementos distintos de cero indican aristas; para grafos no dirigidos la matriz es simétrica. Las funciones que reciben un vértice inválido devuelven el valor de error indicado en su firma.

```c
bool tiene_ciclo_dirigido(size_t n, const int matriz[20][20]);
```

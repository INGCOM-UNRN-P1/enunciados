# Cálculo de Grado de Entrada y Salida en Nodos Dirigidos

Para un grafo dirigido simple, calculá el grado de entrada o salida del vértice indicado.

La función trabaja con grafos de hasta 20 vértices, índices desde 0 y matrices cuadradas. Los elementos distintos de cero indican aristas; para grafos no dirigidos la matriz es simétrica. Las funciones que reciben un vértice inválido devuelven el valor de error indicado en su firma.

```c
int grado_dirigido(size_t n, const int matriz[20][20], size_t vertice, bool entrada);
```

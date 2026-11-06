# Conteo de Componentes Conexas en Grafos No Dirigidos

Contá las componentes conexas de un grafo no dirigido. El grafo vacío tiene cero componentes.

La función trabaja con grafos de hasta 20 vértices, índices desde 0 y matrices cuadradas. Los elementos distintos de cero indican aristas; para grafos no dirigidos la matriz es simétrica. Las funciones que reciben un vértice inválido devuelven el valor de error indicado en su firma.

```c
size_t contar_componentes(size_t n, const int matriz[20][20]);
```

# Representación de Grafo por Listas de Adyacencia

Construí listas de adyacencia para un grafo simple no dirigido a partir de sus aristas. Cada fila guarda vecinos en orden ascendente y se completa con -1. Calculá el grado consultando esa representación.

Índices de vértices desde 0; se admiten hasta 20 vértices.

```c
int construir_listas_adyacencia(size_t n, size_t m, const size_t aristas[40][2], int listas[20][20]);
int grado_vertice(size_t n, const int listas[20][20], size_t vertice);
```

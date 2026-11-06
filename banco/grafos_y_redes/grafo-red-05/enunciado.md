# Recorrido en Profundidad DFS Recursivo

Devolvé el orden de descubrimiento del DFS iniciado en `inicio`, visitando vecinos por índice ascendente. El arreglo de salida contiene cada vértice alcanzable una sola vez y la función devuelve su longitud. El grafo se recibe como matriz de adyacencia; no hay entrada estándar.

Índices de vértices desde 0; se admiten hasta 20 vértices.

```c
size_t dfs_recursivo(size_t n, const int matriz[20][20], size_t inicio, size_t orden[20]);
```

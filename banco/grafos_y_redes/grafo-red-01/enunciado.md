# Representación de Grafo por Matriz de Adyacencia

Cargá una lista de `m` aristas no dirigidas en una matriz de adyacencia y consultá si dos vértices son adyacentes. Una arista inválida produce error; la matriz se inicializa a cero.

Índices de vértices desde 0; se admiten hasta 50 vértices.

```c
int cargar_grafo_no_dirigido(size_t n, size_t m, const size_t (*aristas)[2], int matriz[50][50]);
bool grafo_adyacente(size_t n, const int matriz[50][50], size_t origen, size_t destino);
```

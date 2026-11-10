# Cantidad de aristas críticas (puentes) con DSU

Una arista es crítica si al quitarla aumenta la cantidad de componentes conexas. Contá los puentes de un grafo no dirigido, que puede tener componentes desconectadas, lazos y aristas paralelas. Los vértices se numeran `0..n-1`.

```c
int dsu20_contar_puentes(size_t n, const int aristas[][2], size_t cantidad);
```

Devolvé `-1` ante argumentos inválidos o falta de memoria. Para cada arista, la solución reconstruye la conectividad con Union-Find omitiéndola y compara el número de componentes. El costo es `O(E(V+E) α(V))`; por eso se admiten hasta 2000 vértices y 2000 aristas. La matriz vacía (`n=0,m=0`) tiene cero puentes.

Ejemplo: el camino `0-1-2` tiene dos puentes; un triángulo no tiene ninguno. Dos aristas paralelas entre los mismos vértices no son puentes.

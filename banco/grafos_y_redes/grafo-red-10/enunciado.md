# Verificación de Grafo Bipartito y Dos-Coloración

Verificá si un grafo no dirigido es bipartito y, cuando lo sea, devolvé una dos-coloración de todos sus vértices, incluidas las componentes desconectadas. Los colores son 0 y 1; cada arista debe unir vértices de colores distintos. Si el grafo no es bipartito, la función devuelve `false` y deja el arreglo de salida sin modificar. La matriz es simétrica, sus entradas distintas de cero representan aristas y se admiten hasta 20 vértices.

```c
bool dos_colorear(size_t n, const int matriz[20][20], int colores[20]);
bool es_bipartito(size_t n, const int matriz[20][20]);
```

`es_bipartito` es un wrapper de conveniencia que solo informa el resultado.

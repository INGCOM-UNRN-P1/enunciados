# Árbol de Expansión Mínima MST por Algoritmo de Kruskal

Kruskal recibe una lista de aristas no dirigidas con pesos no negativos. Ordena la lista de entrada in-place y devuelve el peso del MST; las aristas seleccionadas se copian en `seleccionadas`, con su cantidad en `cantidad_seleccionada`. Devuelve `-1` ante desconexión, peso negativo, índices inválidos o capacidad insuficiente. Para un solo vértice, devuelve cero.

Consultá `grafo-red-20.h` para la firma completa. Los tests de `ejercicio.yaml` verifican los resultados, las condiciones de error y los casos límite. Compilación requerida: C11 con `-Wall -Wextra -Werror`.

```{plantuml}
:caption: Kruskal sobre las aristas de las pruebas. Ordenadas por peso, se aceptan `{1,2}` (1), `{0,1}` (2) y `{1,3}` (4); `{0,2}` (3) y `{2,3}` (5) se descartan porque cerrarían un ciclo. El MST, en trazo grueso, pesa 7.
:width: 260px
@startdot
graph G {
  layout=neato; node [shape=circle, fontname="monospace"]; edge [fontname="monospace"];
  0 [pos="0,1!"]; 1 [pos="1.6,1!"]; 2 [pos="0,-0.4!"]; 3 [pos="1.6,-0.4!"];
  1 -- 2 [label="1", penwidth=3];
  0 -- 1 [label="2", penwidth=3];
  1 -- 3 [label="4", penwidth=3];
  0 -- 2 [label="3", style=dashed];
  2 -- 3 [label="5", style=dashed];
}
@enddot
```

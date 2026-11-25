# Trie de búsqueda de prefijos

La raíz es propiedad del llamador y se inicializa a cero. `trie_insertar` agrega una palabra alfabética ASCII, con letras, dígitos y guion bajo; una cadena con carácter no admitido se rechaza completa. `trie_buscar_prefijo` devuelve 1 si existe el camino del prefijo (también para la cadena vacía) y 0 si no existe o algún argumento es nulo. `liberar_trie` libera un nodo dinámico y todos sus descendientes; para liberar la raíz en stack, liberá cada hijo.

El programa lee palabras hasta `FIN`, luego un prefijo, e imprime `PREFIJO_<prefijo>: 0|1`. Las entradas se limitan de forma segura a 255 caracteres.

```{plantuml}
:caption: El trie después de insertar `sal`, `se`, `sol` y `solo`. Cada arista es un carácter y los nodos con doble borde terminan una palabra. `trie_buscar_prefijo` devuelve 1 para `so` o `sa` (el camino existe) y 0 para `su`.
:width: 200px
@startdot
digraph G {
  node [shape=circle, label="", width=0.3, fontname="monospace"]; edge [fontname="monospace"];
  r [label="raíz", shape=plaintext];
  r -> s [label="s"];
  s -> a [label="a"]; a -> al [label="l"];
  s -> e [label="e"];
  s -> o [label="o"]; o -> ol [label="l"]; ol -> olo [label="o"];
  al [shape=doublecircle]; e [shape=doublecircle];
  ol [shape=doublecircle]; olo [shape=doublecircle];
}
@enddot
```

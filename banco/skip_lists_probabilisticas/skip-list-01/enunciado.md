# Basic ordered skip list insertion and lookup

Implementá la operación de skip list indicada por la API `skip_list_01_...`. La estructura almacena claves enteras únicas y mantiene orden creciente en el nivel cero. Cada nodo se enlaza en `height` niveles (entre 1 y `SKIP_LIST_MAX_LEVEL`). El nivel se genera geométricamente con probabilidad 1/2 de continuar; la semilla hace reproducibles las pruebas.

Inicializá toda lista con `skip_list_init` antes de usarla y liberá sus nodos con `skip_list_destroy`. Las funciones reciben claves repetidas como inserción fallida y deben tolerar punteros nulos según el contrato de la cabecera. En inserción explícita, una altura inválida no debe modificar la lista. La búsqueda, eliminación y métricas deben respetar los límites inclusivos que indica su nombre.

```{plantuml}
:caption: Una skip list con las claves `3 7 12 19 25` y alturas `1 3 1 2 1`. El nivel 0 enlaza todas las claves en orden; cada nivel superior es una "vía rápida" con un subconjunto. Buscar `19` recorre `cabecera → 7` en el nivel 2, baja al 1 y llega a `19` sin pasar por `12`.
@startdot
digraph G {
  rankdir=LR; nodesep=0.05; node [shape=record, fontname="monospace", height=0.3];
  h [label="<l2>2|<l1>1|<l0>0|cabecera"];
  n3 [label="<l0>|3"]; n7 [label="<l2>|<l1>|<l0>|7"]; n12 [label="<l0>|12"];
  n19 [label="<l1>|<l0>|19"]; n25 [label="<l0>|25"];
  nil [label="NULL", shape=plaintext];
  h:l0 -> n3:l0 -> n7:l0 -> n12:l0 -> n19:l0 -> n25:l0 -> nil;
  h:l1 -> n7:l1 -> n19:l1 -> nil;
  h:l2 -> n7:l2 -> nil;
}
@enddot
```

El header documenta las firmas y resultados. Las operaciones del ejercicio deben preservar orden, enlaces, longitud, altura activa y extremos.

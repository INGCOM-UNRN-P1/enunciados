# Aplanamiento global del bosque DSU

`dsu_flatten_all` recibe un DSU válido y recorre todos sus elementos. Para cada uno reemplaza su padre por la raíz de su componente, de modo que al terminar cada nodo apunte directamente a una raíz. Retorna cuántos enlaces de padre cambió. Un puntero nulo, un TAD vacío o sin arreglo de padres no requiere cambios y retorna cero. La operación deja intactos los rangos, tamaños y cantidad de componentes.

Esto es una pasada global explícita: no alcanza con llamar `find` sobre un subconjunto de elementos.

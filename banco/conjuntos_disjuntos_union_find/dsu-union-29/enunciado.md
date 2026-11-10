# Verificación de invariantes de Union-Find

Implementá un validador de solo lectura para el TAD `dsu_t` definido en `dsu_union_common.h`. Verificá que cada padre esté dentro del arreglo, que los enlaces terminen en una raíz sin ciclos, que la raíz tenga rango estrictamente mayor que sus hijos, que el tamaño almacenado en cada raíz coincida con sus miembros y que la cantidad de raíces coincida con `components`. Para un TAD vacío, todos los arreglos deben ser nulos y `components` debe ser cero.

Retorná `true` solo si todas las invariantes se cumplen. El validador no repara ni modifica el objeto.

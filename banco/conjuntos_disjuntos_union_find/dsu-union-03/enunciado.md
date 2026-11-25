Implementá `dsu03_find` recursivo con compresión total de caminos. La estructura contiene `n <= INT_MAX` y un arreglo `parent` válido con índices en `[0,n)`. Retorná la raíz o `-1` si el objeto, el arreglo o el índice no son válidos.

```{dibu}
:caption: Compresión total de caminos: después de `dsu03_find(4)` sobre la cadena `4 → 3 → 2 → 1 → 0`, todos los nodos recorridos apuntan directamente a la raíz `0`.
- type: array
  title: parent antes
  values: [0, 0, 1, 2, 3]
- type: array
  title: parent después de dsu03_find(4)
  values: [0, 0, 0, 0, 0]
```

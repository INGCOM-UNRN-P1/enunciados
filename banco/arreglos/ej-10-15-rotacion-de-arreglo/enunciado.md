## Rotación de arreglo

Implementá una función que rote un arreglo `k` posiciones hacia la derecha: los
últimos `k` elementos pasan al comienzo y los demás se desplazan hacia la
derecha. Reducí `k` módulo el tamaño del arreglo para contemplar rotaciones
mayores que ese tamaño. Un arreglo vacío o una rotación de cero posiciones queda
sin cambios.

Podés resolverlo con un arreglo auxiliar del mismo tamaño: el elemento de la
posición `i` se copia a `(i + k) % n` y luego se copia el resultado al arreglo
original. Como alternativa, podés hacerlo *in-place* invirtiendo todo el arreglo,
luego los primeros `k` elementos y finalmente los `n-k` restantes.

### Casos de comprobación

| Arreglo | `k` | Resultado |
| --- | ---: | --- |
| `{1, 2, 3, 4, 5}` | 2 | `{4, 5, 1, 2, 3}` |
| `{1, 2, 3, 4, 5}` | 7 | `{4, 5, 1, 2, 3}` |
| `{1, 2, 3}` | 0 | `{1, 2, 3}` |
| `{}` | 3 | `{}` |

### Interfaz

```c
#include <stddef.h>
void rotar_derecha(int *arreglo, size_t n, size_t k);
```

`arreglo` apunta a `n` enteros modificables; puede ser `NULL` si `n` es cero.

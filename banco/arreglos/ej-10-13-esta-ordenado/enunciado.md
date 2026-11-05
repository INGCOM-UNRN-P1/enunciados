## ¿Está ordenado?

Implementá una función que indique si un arreglo de enteros está ordenado de
forma ascendente. Recorré los elementos consecutivos y compará cada elemento
con el siguiente. Si encontrás una pareja en la que el primero sea mayor que el
segundo, el arreglo no está ordenado. Si no encontrás ninguna, sí lo está.

El orden es no decreciente: los valores iguales se permiten. Un arreglo vacío o
con un solo elemento se considera ordenado.

### Casos de comprobación

| Arreglo | Resultado |
| --- | --- |
| `{1, 2, 2, 5}` | Ordenado |
| `{1, 3, 2, 4}` | No ordenado |
| `{}` | Ordenado |
| `{7}` | Ordenado |

### Interfaz

```c
#include <stdbool.h>
#include <stddef.h>
bool esta_ordenado(const int *arreglo, size_t n);
```

`arreglo` apunta a `n` elementos; puede ser `NULL` cuando `n` es cero.
Si `n` es positivo y el puntero es nulo, devolvé `false`.

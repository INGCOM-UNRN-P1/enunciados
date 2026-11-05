Implementá `flags.h` y `flags.c` para gestionar un arreglo de banderas booleanas:

```c
#include <stdbool.h>
#include <stddef.h>
void flag_activar(bool banderas[], size_t n, size_t indice);
void flag_desactivar(bool banderas[], size_t n, size_t indice);
bool flag_consultar(const bool banderas[], size_t n, size_t indice);
void flag_reiniciar_todas(bool banderas[], size_t n, bool valor_defecto);
size_t flag_contar_activas(const bool banderas[], size_t n);
```

Si el índice está fuera del arreglo, activar y desactivar no hacen cambios y
consultar devuelve `false`. Un arreglo de longitud cero no se accede y tiene
cero banderas activas; cuando `n > 0`, los punteros deben ser válidos.

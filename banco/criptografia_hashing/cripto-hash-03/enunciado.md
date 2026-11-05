Implementá FNV-1a de 32 bits para una cadena terminada en NUL.

```c
#include <stdint.h>
uint32_t fnv1a_32(const char *texto);
```

`texto` debe apuntar a una cadena válida; puede estar vacía. Interpretá cada
byte como un valor sin signo. Inicializá el resultado con 2166136261 y, para
cada byte anterior al NUL, aplicá XOR con ese byte y multiplicá por 16777619.
Conservá los 32 bits menos significativos tras cada multiplicación.

Para la cadena vacía el resultado es `0x811c9dc5` y para `"foobar"` es
`0xbf9cf968`.

:::{hint} Ayuda
Usá `uint32_t`: sus operaciones aritméticas se reducen módulo 2³².
:::

Implementá una transición del generador pseudoaleatorio Xorshift32:

```c
#include <stdint.h>
uint32_t xorshift32(uint32_t estado);
```

A partir del estado de 32 bits, aplicá en orden `estado ^= estado << 13`,
`estado ^= estado >> 17` y `estado ^= estado << 5`. Devolvé el nuevo estado;
quien llama debe conservarlo para generar el siguiente valor. Las operaciones
se realizan sobre 32 bits sin signo.

Con semilla 1 los primeros estados son `0x00042021` y `0x04080601`. El estado
cero produce siempre cero: para obtener una secuencia no constante elegí una
semilla distinta de cero. Este generador no es apto para seguridad criptográfica.

Implementá el cálculo de la suma de verificación Adler-32 sobre los bytes de una
cadena terminada en NUL. La cadena puede estar vacía; `texto` debe apuntar a
una cadena válida. Interpretá cada byte como un valor sin signo.

```c
#include <stdint.h>
uint32_t adler32(const char *texto);
```

Inicializá `a` en 1 y `b` en 0. Para cada byte, sumalo a `a` y luego sumá
`a` a `b`, reduciendo ambas sumas módulo 65521. El resultado contiene `b`
en los 16 bits superiores y `a` en los inferiores.

Ejemplos: `adler32("")` devuelve `0x00000001` y
`adler32("Wikipedia")` devuelve `0x11e60398`.

:::{hint} Consideraciones didácticas
- Operá con enteros sin signo (`uint32_t`).
- Usá operaciones de bits y sumas modulares.
:::

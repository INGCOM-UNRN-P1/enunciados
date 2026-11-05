Diseñá `eval_logica.h` y `eval_logica.c` con funciones puras para evaluar operaciones lógicas:

```c
#include <stdbool.h>
bool eval_and_3(bool a, bool b, bool c);
bool eval_or_3(bool a, bool b, bool c);
bool eval_xor(bool a, bool b);
bool eval_implicacion(bool p, bool q);
bool eval_equivalencia(bool p, bool q);
```

La implicación es falsa únicamente si `p` es verdadera y `q` falsa. La
equivalencia es verdadera cuando ambos valores coinciden.

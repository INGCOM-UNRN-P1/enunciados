# Fusión de cuentas duplicadas

Cada cuenta aporta un nombre y una lista de direcciones de correo. Dos cuentas pertenecen al mismo grupo si comparten al menos un correo, directa o transitivamente. Implementá `dsu_merge_accounts`: devuelve `true` y asigna en `*groups` un arreglo de `count` índices canónicos, uno por cuenta; cuentas conectadas tienen el mismo índice. El llamador libera ese arreglo con `free`. Las cuentas sin correos quedan como grupos individuales.

Con `count == 0`, la operación tiene éxito y devuelve `NULL` en `*groups`. Rechazá punteros obligatorios nulos, nombres o correos nulos y desbordamientos de tamaño sin filtrar memoria ni publicar un resultado parcial. No se modifican las cuentas de entrada.

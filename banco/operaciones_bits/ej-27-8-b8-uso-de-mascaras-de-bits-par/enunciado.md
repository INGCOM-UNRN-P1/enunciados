Simulá permisos de archivo con una variable `unsigned char`. Usá los bits 0,
1 y 2 para lectura, escritura y ejecución respectivamente.

Implementá `conceder(permisos, mascara)` y `revocar(permisos, mascara)`, que
devuelven los permisos con los bits de la máscara agregados o quitados.
Implementá `tiene_permisos(permisos, mascara)`, que devuelve 1 si todos los
bits de la máscara están presentes y 0 en otro caso. Una máscara vacía está
contenida en cualquier conjunto. No alteres bits ajenos a la máscara.

```c
#define LECTURA   (1u << 0)
#define ESCRITURA (1u << 1)
#define EJECUCION (1u << 2)
unsigned char conceder(unsigned char permisos, unsigned char mascara);
unsigned char revocar(unsigned char permisos, unsigned char mascara);
int tiene_permisos(unsigned char permisos, unsigned char mascara);
```

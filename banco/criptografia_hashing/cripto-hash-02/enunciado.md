Calculá el checksum CRC-32/ISO-HDLC de una secuencia de bytes. Implementá:

```c
#include <stddef.h>
#include <stdint.h>
uint32_t crc32_ieee(const unsigned char *datos, size_t longitud);
```

`datos` apunta a `longitud` bytes; puede ser `NULL` solamente cuando la
longitud es cero. La secuencia puede contener bytes nulos. Inicializá el
registro a `0xffffffff`, procesá los bits de cada byte desde el menos
significativo usando el polinomio reflejado `0xedb88320` y aplicá XOR final
con `0xffffffff`.

Para la secuencia vacía el resultado es `0x00000000`. Para los nueve bytes
ASCII `123456789` es `0xcbf43926`.

:::{hint} Ayuda
Por cada byte, aplicá XOR con el registro. Luego repetí ocho veces: desplazá
un bit a la derecha y, si el bit menos significativo anterior era 1, aplicá
XOR con el polinomio.
:::

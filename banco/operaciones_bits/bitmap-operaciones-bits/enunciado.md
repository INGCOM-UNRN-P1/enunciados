Implementá un bitmap compacto para administrar `total_bits` bits, almacenados en
un arreglo de bytes. El bit de índice 0 es el menos significativo del primer
byte. La estructura `bitmap_t` y las declaraciones están en
`bitmap-operaciones-bits.h`.

El programa debe leer comandos hasta `EXIT`:

- `INIT <total_bits>` libera el bitmap previo e inicializa uno nuevo vacío.
- `SET <bit_index>` y `CLEAR <bit_index>` actualizan el índice indicado.
- `TEST <bit_index>` imprime `1` si está encendido y `0` si no lo está.
- `COUNT` imprime la cantidad de bits encendidos.
- `EXIT` termina el programa y libera el bitmap.

Cada resultado de `TEST` y `COUNT` se imprime en una línea. Los comandos de
actualización no producen salida.

- `bitmap_init` inicializa un bitmap vacío. Si `bm` es `NULL`, no hace nada. Si
  no puede reservar la memoria necesaria, deja el bitmap vacío (`bytes == NULL`
  y tamaños en cero). Para `total_bits == 0`, también queda vacío.
- `bitmap_set` y `bitmap_clear` encienden o apagan el índice indicado. Ignoran
  punteros nulos, bitmaps sin almacenamiento e índices fuera de rango.
- `bitmap_test` devuelve 1 si el índice válido está encendido y 0 en cualquier
  otro caso.
- `bitmap_count` devuelve la cantidad de bits encendidos; con puntero nulo o
  bitmap vacío devuelve 0.
- `bitmap_free` libera el almacenamiento y restablece los campos. Acepta `NULL`.

Inicializá `bitmap_t` como `{NULL, 0, 0}` antes de la primera llamada a
`bitmap_init`. Liberá un bitmap inicializado antes de volver a inicializarlo.

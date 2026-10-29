Implementar una estructura de Bitmap (arreglo de bits compacto) que administre un rango de $N$ bits utilizando la mínima cantidad de memoria (`uint8_t` contiguos).

Comandos:
- `INIT <total_bits>`: Inicializa el bitmap a 0 con tamaño `<total_bits>`.
- `SET <bit_index>`: Enciende el bit en la posición indicada.
- `CLEAR <bit_index>`: Apaga el bit en la posición indicada.
- `TEST <bit_index>`: Imprime `1` si está encendido o `0` si está apagado.
- `COUNT`: Cuenta e imprime la cantidad total de bits encendidos en el bitmap.
- `EXIT`: Libera memoria y finaliza.

### 📋 Contrato de las Funciones

```c
/*
 * Operación bitmap_init
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void bitmap_init(Bitmap *bm, size_t total_bits);

/*
 * Operación bitmap_set
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void bitmap_set(Bitmap *bm, size_t index);

/*
 * Operación bitmap_clear
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void bitmap_clear(Bitmap *bm, size_t index);

/*
 * Operación bitmap_test
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int bitmap_test(const Bitmap *bm, size_t index);

/*
 * Operación bitmap_count
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
size_t bitmap_count(const Bitmap *bm);

/*
 * Operación bitmap_free
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void bitmap_free(Bitmap *bm);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Para un bit $n$, el byte que lo contiene es `n / 8` y la posición dentro del byte es `n % 8`.
- Para encender el bit: `buffer[n / 8] |= (1 << (n % 8))`.
- Para apagar el bit: `buffer[n / 8] &= ~(1 << (n % 8))`.
- Para consultar el bit: `(buffer[n / 8] & (1 << (n % 8))) != 0`.
:::

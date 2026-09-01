### Ejercicio 7.30 - Librería de Verificación de Integridad (Checksum) ⭐⭐⭐⭐⭐

Creá `checksum.h` y `checksum.c`:
- `unsigned char chk_luhn_calcular(const char *digitos, size_t len_digitos)`: algoritmo de Luhn para números de tarjeta/identificación.
- `bool chk_luhn_validar(const char *digitos, size_t len_digitos)`
- `unsigned char chk_suma_paridad(const unsigned char *datos, size_t len)`
- `uint16_t chk_fletcher16(const unsigned char *datos, size_t len)`

:::{hint} Lógica y Consideraciones
- **[*plus ultra*]:** Validar que `datos` no sea `NULL` y manejar adecuadamente los desbordamientos intermedios.
:::
<!-- {hint} Lógica y Consideraciones -->

---

## Notas Finales

:::{tip} Diseño de Librerías y Estructura del Proyecto
- **Estructura limpia:** Ubicá los archivos `.h` en `include/` y los `.c` en `src/`.
- **Ejemplos y Tests:** Agregá un programa de prueba en `examples/` y pruebas unitarias en `tests/`.
- **Automatización:** Proveé un `Makefile` con los objetivos `make`, `make test`, `make run` y `make clean`.
- **Guardas de inclusión:** Usá siempre `#ifndef NOMBRE_H`, `#define NOMBRE_H` y `#endif` en cada cabecera.
- **Encapsulamiento:** Ocultá funciones auxiliares usando la palabra clave `static` dentro del archivo `.c` en `src/`.
- **Prefijos de funciones:** Utilizá prefijos en los nombres de las funciones (ej. `geo_`, `str_`, `mat_`) para evitar colisiones de nombres.
:::
<!-- {tip} Diseño de Librerías y Estructura del Proyecto -->

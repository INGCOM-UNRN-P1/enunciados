Creá `checksum.h` y `checksum.c`:
- `unsigned char chk_luhn_calcular(const char *digitos, size_t len_digitos)`: algoritmo de Luhn para números de tarjeta/identificación.
- `bool chk_luhn_validar(const char *digitos, size_t len_digitos)`
- `unsigned char chk_suma_paridad(const unsigned char *datos, size_t len)`
- `uint16_t chk_fletcher16(const unsigned char *datos, size_t len)`


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

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Verificación de Integridad (Checksum)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_verificacion_de_in(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Validar que `datos` no sea `NULL` y manejar adecuadamente los desbordamientos intermedios.
- **Estructura limpia:** Ubicá los archivos `.h` en `include/` y los `.c` en `src/`.
- **Ejemplos y Tests:** Agregá un programa de prueba en `examples/` y pruebas unitarias en `tests/`.
- **Automatización:** Proveé un `Makefile` con los objetivos `make`, `make test`, `make run` y `make clean`.
- **Guardas de inclusión:** Usá siempre `#ifndef NOMBRE_H`, `#define NOMBRE_H` y `#endif` en cada cabecera.
- **Encapsulamiento:** Ocultá funciones auxiliares usando la palabra clave `static` dentro del archivo `.c` en `src/`.
- **Prefijos de funciones:** Utilizá prefijos en los nombres de las funciones (ej. `geo_`, `str_`, `mat_`) para evitar colisiones de nombres.
:::

Diseñá `str_transform.h` y `str_transform.c`:
- `void str_a_mayusculas(char *str, size_t len_str)`
- `void str_a_minusculas(char *str, size_t len_str)`
- `void str_capitalizar(char *str, size_t len_str)` (primera letra de cada palabra en mayúscula)
- `void str_invertir(char *str, size_t len_str)`
- `void str_recortar_espacios(char *str, size_t len_str)` (elimina espacios al inicio y al final)


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Transformación de Cadenas Seguras
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_transformacion_de(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Entrada con valor 5
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Entrada con valor 0
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Usá funciones de `<ctype.h>` como `toupper` y `tolower`.
:::

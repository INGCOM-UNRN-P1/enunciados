Implementá la librería `text_search.h` y `text_search.c`:
- `size_t text_contar_palabras(const char *texto, size_t len_texto)`
- `size_t text_contar_caracter(const char *texto, size_t len_texto, char c)`
- `size_t text_contar_vocales(const char *texto, size_t len_texto)`
- `bool text_es_palindromo(const char *texto, size_t len_texto)`


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Búsqueda y Conteo en Texto
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_busqueda_y_conteo(int val);

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
- Para comprobar palíndromos podés ignorar diferencias entre mayúsculas y minúsculas y caracteres no alfabéticos.
:::

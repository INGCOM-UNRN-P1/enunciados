Creá `sanitizer.h` y `sanitizer.c`:
- `bool san_es_entero_valido(const char *str, size_t len_str)`
- `bool san_es_decimal_valido(const char *str, size_t len_str)`
- `bool san_es_email_basico(const char *str, size_t len_str)` (presencia de `@` y al menos un `.`)
- `void san_reemplazar_caracter(char *str, size_t len_str, char viejo, char nuevo)`


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Sanitización e Inspección de Entradas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_sanitizacion_e_ins(int val);

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
- Utilizá esta librería para validar la entrada ingresada por el usuario antes de convertirla a tipos numéricos.
:::

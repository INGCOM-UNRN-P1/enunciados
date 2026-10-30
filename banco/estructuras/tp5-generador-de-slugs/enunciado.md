Implementar el módulo [`slug_generator.h`](ejercicios/ejercicio2/slug_generator.h) para transformar títulos arbitrarios en identificadores amigables para URL (slugs):

- `bool generar_slug(const cadena_segura_t *titulo, cadena_segura_t *slug);`  
  Normaliza `titulo` convirtiendo mayúsculas a minúsculas, sustituyendo caracteres no alfanuméricos por guiones (`-`), y colapsando múltiples guiones consecutivos en uno solo, sin guiones al inicio ni al final.
- `bool contiene_palabra_prohibida(const cadena_segura_t *texto, const char *palabra);`  
  Verifica si el texto contiene una palabra no permitida o término prohibido utilizando `cadena_segura_buscar`.
- `bool acotar_longitud_slug(cadena_segura_t *slug, size_t max_longitud);`  
  Recorta la longitud máxima del slug generado empleando `cadena_segura_subcadena`, asegurando que el slug resultante no finalice con un guion cortado.

Usa la biblioteca del ejercicio `tp5-libcadena-segura`.

### 📋 Contrato de las Funciones

```c
/*
 * Transforma un titulo en un slug normalizado en minusculas,
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool generar_slug(const cadena_segura_t *titulo, cadena_segura_t *slug);

/*
 * Verifica si una cadena contiene una palabra prohibida o subcadena especifica.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool contiene_palabra_prohibida(const cadena_segura_t *texto, const char *palabra);

/*
 * Acota la longitud de un slug a un maximo dado, evitando que termine en guion.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool acotar_longitud_slug(cadena_segura_t *slug, size_t max_longitud);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Salida: Retorno calculado correctamente
```
:::
:::{tab-item} Caso límite
```text
val = 0
Salida: Retorno neutral o código de validación
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante AddressSanitizer o Valgrind.

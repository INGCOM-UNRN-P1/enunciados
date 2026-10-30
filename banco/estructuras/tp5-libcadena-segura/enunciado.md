Encapsula cadenas de caracteres terminadas en `\0` en el heap, rastreando su longitud efectiva y capacidad reservada para evitar desbordes de buffer (*buffer overflow*).

#### Estructura de Datos

```c
typedef struct cadena_segura {
    char *texto;       /**< Puntero al búfer de caracteres en heap */
    size_t longitud;   /**< Longitud de la cadena (sin contar '\\0') */
    size_t capacidad;  /**< Tamaño total reservado en heap */
} cadena_segura_t;
```

| Campo | Tipo | Descripción |
| :--- | :--- | :--- |
| `texto` | `char *` | Cadena en heap garantizada con terminador nulo (`\0`). |
| `longitud` | `size_t` | Cantidad de caracteres útiles (equivalente a `strlen(texto)`). |
| `capacidad` | `size_t` | Bytes asignados en heap (siempre `>= longitud + 1`). |

#

### 📋 Contrato de las Funciones

```c
/*
 * Inicializa una cadena segura copiando el contenido de un literal o cadena C.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool cadena_segura_crear(cadena_segura_t *cadena, const char *literal);

/*
 * Libera la memoria dinamica asociada y restablece los campos a cero.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void cadena_segura_destruir(cadena_segura_t *cadena);

/*
 * Concatena una cadena C al final de la cadena segura, redimensionando si es necesario.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool cadena_segura_concatenar(cadena_segura_t *cadena, const char *sufijo);

/*
 * Extrae una subcadena a partir de una posicion de inicio y longitud maxima.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool cadena_segura_subcadena(const cadena_segura_t *origen, size_t inicio, size_t longitud, cadena_segura_t *destino);

/*
 * Crea un clon profundo independiente de la cadena de origen.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool cadena_segura_clonar(const cadena_segura_t *origen, cadena_segura_t *destino);

/*
 * Busca la primera aparicion de una subcadena (aguja) dentro de la cadena segura.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int cadena_segura_buscar(const cadena_segura_t *cadena, const char *aguja);

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

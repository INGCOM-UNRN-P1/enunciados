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

#### Contratos de la API (`cadena_segura.h`)

- `bool cadena_segura_crear(cadena_segura_t *cadena, const char *literal);`  
  Inicializa `cadena` copiando el contenido de `literal`. Si `literal == NULL`, crea una cadena vacía (`""`). Retorna `false` ante error de asignación o puntero nulo.
- `void cadena_segura_destruir(cadena_segura_t *cadena);`  
  Libera el buffer `texto` en heap y resetea `longitud` y `capacidad` a 0. Operación segura ante punteros `NULL`.
- `bool cadena_segura_concatenar(cadena_segura_t *cadena, const char *sufijo);`  
  Anexa `sufijo` al final de `cadena`. Si la longitud resultante excede la capacidad disponible, redimensiona el bloque en heap.
- `bool cadena_segura_subcadena(const cadena_segura_t *origen, size_t inicio, size_t longitud, cadena_segura_t *destino);`  
  Extrae hasta `longitud` caracteres a partir del índice `inicio` y genera una nueva `cadena_segura_t` en `destino`.
- `bool cadena_segura_clonar(const cadena_segura_t *origen, cadena_segura_t *destino);`  
  Crea una copia profunda (*deep copy*) e independiente de `origen` en `destino`.
- `int cadena_segura_buscar(const cadena_segura_t *cadena, const char *aguja);`  
  Busca la primera aparición de la subcadena `aguja`. Retorna el índice 0-based de inicio, o `-1` si no coincide o parámetros inválidos.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Inicializa una cadena segura copiando el contenido de un literal o cadena C.
 *
 * @param cadena Puntero a la estructura cadena_segura_t a inicializar.
 * @param literal Puntero a la cadena de caracteres origen (o NULL para cadena vacia).
 * @return true si la reserva de memoria fue exitosa, false en caso contrario.
 */
bool cadena_segura_crear(cadena_segura_t *cadena, const char *literal);

/**
 * @brief Libera la memoria dinamica asociada y restablece los campos a cero.
 *
 * @param cadena Puntero a la estructura cadena_segura_t a destruir.
 */
void cadena_segura_destruir(cadena_segura_t *cadena);

/**
 * @brief Concatena una cadena C al final de la cadena segura, redimensionando si es necesario.
 *
 * @param cadena Puntero a la estructura cadena_segura_t destino.
 * @param sufijo Puntero a la cadena a anexar (si es NULL o vacia, no modifica la cadena).
 * @return true si la operacion fue exitosa, false en caso de fallo de asignacion de memoria.
 */
bool cadena_segura_concatenar(cadena_segura_t *cadena, const char *sufijo);

/**
 * @brief Extrae una subcadena a partir de una posicion de inicio y longitud maxima.
 *
 * @param origen Puntero a la cadena segura de origen.
 * @param inicio Indice base (0-indexado) donde comienza la subcadena.
 * @param longitud Cantidad maxima de caracteres a extraer.
 * @param destino Puntero a la estructura donde se inicializara la nueva subcadena.
 * @return true si se extrajo y creo exitosamente la subcadena, false en caso de error.
 */
bool cadena_segura_subcadena(const cadena_segura_t *origen, size_t inicio, size_t longitud, cadena_segura_t *destino);

/**
 * @brief Crea un clon profundo independiente de la cadena de origen.
 *
 * @param origen Puntero a la cadena segura a duplicar.
 * @param destino Puntero a la estructura donde se creara la copia independiente.
 * @return true si la clonacion fue exitosa, false en caso de error.
 */
bool cadena_segura_clonar(const cadena_segura_t *origen, cadena_segura_t *destino);

/**
 * @brief Busca la primera aparicion de una subcadena (aguja) dentro de la cadena segura.
 *
 * @param cadena Puntero a la cadena segura donde buscar.
 * @param aguja Subcadena a localizar en la cadena.
 * @return Indice base 0 de la primera coincidencia, o -1 si no se encuentra o parametros invalidos.
 */
int cadena_segura_buscar(const cadena_segura_t *cadena, const char *aguja);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).

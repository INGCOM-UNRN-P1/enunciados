Encapsula un bloque de memoria contigua en heap de enteros con redimensionamiento geométrico automático.

#### Estructura de Datos

```c
typedef struct arreglo_dinamico {
    int *datos;         /**< Puntero al bloque contiguo en heap */
    size_t cantidad;    /**< Cantidad actual de elementos almacenados */
    size_t capacidad;   /**< Capacidad física total reservada en memoria */
} arreglo_dinamico_t;
```

| Campo | Tipo | Descripción |
| :--- | :--- | :--- |
| `datos` | `int *` | Puntero a la memoria asignada dinámicamente en el heap. |
| `cantidad` | `size_t` | Cantidad de elementos enteros válidos almacenados. |
| `capacidad` | `size_t` | Capacidad física total reservada (alcanza para `capacidad` enteros sin realocar). |

#### Contratos de la API (`dinamicos.h`)

- `bool arreglo_dinamico_crear(arreglo_dinamico_t *arreglo, size_t capacidad_inicial);`  
  Inicializa `arreglo` reservando espacio para `capacidad_inicial` enteros. Si `capacidad_inicial == 0`, asigna una capacidad mínima por defecto (4). Retorna `false` ante puntero nulo o fallo de `malloc`.
- `void arreglo_dinamico_destruir(arreglo_dinamico_t *arreglo);`  
  Libera la memoria de `datos` en heap y resetea `cantidad` y `capacidad` a 0. Tolera punteros `NULL` o llamadas repetidas sin errores.
- `bool arreglo_dinamico_agregar(arreglo_dinamico_t *arreglo, int valor);`  
  Agrega `valor` al final. Si `cantidad == capacidad`, duplica la capacidad mediante `realloc`. Retorna `false` si falla la asignación.
- `int *arreglo_dinamico_obtener(const arreglo_dinamico_t *arreglo, size_t indice);`  
  Retorna un puntero al elemento en `indice`. Si `arreglo == NULL` o `indice >= cantidad`, retorna `NULL`.
- `bool arreglo_dinamico_filtrar_pares(const arreglo_dinamico_t *origen, arreglo_dinamico_t *destino);`  
  Crea e inicializa `destino` con los elementos pares de `origen` preservando el orden original.
- `int arreglo_dinamico_buscar(const arreglo_dinamico_t *arreglo, int valor);`  
  Retorna el índice 0-based de la primera aparición de `valor`, o `-1` si no existe o ante parámetros inválidos.
- `void arreglo_dinamico_invertir(arreglo_dinamico_t *arreglo);`  
  Invierte los elementos del arreglo *in-place*. Sin efecto si `arreglo == NULL` o `cantidad <= 1`.
- `size_t arreglo_dinamico_compactar(arreglo_dinamico_t *arreglo, int valor);`  
  Elimina todas las ocurrencias de `valor` desplazando los elementos contiguos sin dejar huecos. Retorna la cantidad de elementos eliminados.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Inicializa un arreglo dinamico reservando capacidad inicial.
 *
 * @param arreglo Puntero a la estructura arreglo_dinamico_t a inicializar.
 * @param capacidad_inicial Capacidad inicial solicitada (si es 0, asigna 4).
 * @return true si la inicializacion fue exitosa, false en caso de error.
 */
bool arreglo_dinamico_crear(arreglo_dinamico_t *arreglo, size_t capacidad_inicial);

/**
 * @brief Libera la memoria en heap del arreglo y restablece los campos a cero.
 *
 * @param arreglo Puntero a la estructura arreglo_dinamico_t a destruir.
 */
void arreglo_dinamico_destruir(arreglo_dinamico_t *arreglo);

/**
 * @brief Agrega un valor al final del arreglo, redimensionando si es necesario.
 *
 * @param arreglo Puntero a la estructura arreglo_dinamico_t.
 * @param valor Entero a insertar.
 * @return true si se inserto exitosamente, false en caso de fallo de memoria.
 */
bool arreglo_dinamico_agregar(arreglo_dinamico_t *arreglo, int valor);

/**
 * @brief Obtiene un puntero al elemento en la posicion indicada.
 *
 * @param arreglo Puntero constante a la estructura arreglo_dinamico_t.
 * @param indice Posicion del elemento a consultar.
 * @return Puntero al entero solicitado, o NULL si indice fuera de rango.
 */
int *arreglo_dinamico_obtener(const arreglo_dinamico_t *arreglo, size_t indice);

/**
 * @brief Filtra los numeros pares del arreglo origen hacia un nuevo destino.
 *
 * @param origen Puntero al arreglo fuente de lectura.
 * @param destino Puntero al arreglo destino que sera creado y poblado.
 * @return true si el filtrado fue exitoso, false ante error de asignacion o NULL.
 */
bool arreglo_dinamico_filtrar_pares(const arreglo_dinamico_t *origen,
                                    arreglo_dinamico_t *destino);

/**
 * @brief Busca la primera aparicion de un valor en el arreglo.
 *
 * @param arreglo Puntero constante al arreglo donde buscar.
 * @param valor Entero a buscar.
 * @return Indice de la primera aparicion (>= 0), o -1 si no se encuentra.
 */
int arreglo_dinamico_buscar(const arreglo_dinamico_t *arreglo, int valor);

/**
 * @brief Invierte el orden de los elementos del arreglo in-place.
 *
 * @param arreglo Puntero al arreglo a invertir.
 */
void arreglo_dinamico_invertir(arreglo_dinamico_t *arreglo);

/**
 * @brief Elimina todas las ocurrencias de un valor compactando in-place.
 *
 * @param arreglo Puntero al arreglo a compactar.
 * @param valor Entero a eliminar.
 * @return Cantidad de elementos eliminados del arreglo.
 */
size_t arreglo_dinamico_compactar(arreglo_dinamico_t *arreglo, int valor);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).

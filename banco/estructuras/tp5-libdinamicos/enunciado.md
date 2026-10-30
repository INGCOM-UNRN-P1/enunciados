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

#

### 📋 Contrato de las Funciones

```c
/*
 * Inicializa un arreglo dinamico reservando capacidad inicial.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool arreglo_dinamico_crear(arreglo_dinamico_t *arreglo, size_t capacidad_inicial);

/*
 * Libera la memoria en heap del arreglo y restablece los campos a cero.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void arreglo_dinamico_destruir(arreglo_dinamico_t *arreglo);

/*
 * Agrega un valor al final del arreglo, redimensionando si es necesario.
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
bool arreglo_dinamico_agregar(arreglo_dinamico_t *arreglo, int valor);

/*
 * Obtiene un puntero al elemento en la posicion indicada.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int * arreglo_dinamico_obtener(const arreglo_dinamico_t *arreglo, size_t indice);

/*
 * Filtra los numeros pares del arreglo origen hacia un nuevo destino.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool arreglo_dinamico_filtrar_pares(const arreglo_dinamico_t *origen, arreglo_dinamico_t *destino);

/*
 * Busca la primera aparicion de un valor en el arreglo.
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int arreglo_dinamico_buscar(const arreglo_dinamico_t *arreglo, int valor);

/*
 * Invierte el orden de los elementos del arreglo in-place.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void arreglo_dinamico_invertir(arreglo_dinamico_t *arreglo);

/*
 * Elimina todas las ocurrencias de un valor compactando in-place.
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
size_t arreglo_dinamico_compactar(arreglo_dinamico_t *arreglo, int valor);

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

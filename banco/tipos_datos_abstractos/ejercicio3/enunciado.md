Implementar un Tipo de Dato Abstracto que modele un conjunto matemático finito de números enteros con capacidad máxima establecida al crearse. En un conjunto no existen elementos repetidos ni importa el orden de inserción.


En `conjunto.c`, la función `static bool conjunto_invariante(const conjunto_t *c)` debe verificar:
1. `c != NULL`.
2. `c->elementos != NULL`.
3. `c->cardinal <= c->capacidad`.
4. Invariante de unicidad: para todo par de índices válidos $0 \le i < j < \text{cardinal}$, se cumple que `c->elementos[i] != c->elementos[j]`.


- **Constructor:** `conjunto_t *conjunto_crear(size_t capacidad);`
- **Destructor:** `void conjunto_destruir(conjunto_t *c);`
- **Consultores:**
  - `size_t conjunto_cardinal(const conjunto_t *c);`
  - `bool conjunto_esta_vacio(const conjunto_t *c);`
  - `bool conjunto_pertenece(const conjunto_t *c, int elemento);`
  - `bool conjunto_es_subconjunto(const conjunto_t *a, const conjunto_t *b);`
- **Mutadores:**
  - `bool conjunto_agregar(conjunto_t *c, int elemento);` (idempotente: si ya existe retorna true sin duplicar; retorna false si está lleno).
  - `bool conjunto_eliminar(conjunto_t *c, int elemento);` (mantiene contigüidad por corrimiento).
- **Operaciones:**
  - `conjunto_t *conjunto_union(const conjunto_t *a, const conjunto_t *b);`
  - `conjunto_t *conjunto_interseccion(const conjunto_t *a, const conjunto_t *b);`

### 📋 Contrato de las Funciones

```c
/*
 * Constructor de conjunto con capacidad máxima.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
conjunto_t * conjunto_crear(size_t capacidad);

/*
 * Destructor tolerante a NULL.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void conjunto_destruir(conjunto_t *c);

/*
 * Consultor de cantidad actual de elementos únicos.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
size_t conjunto_cardinal(const conjunto_t *c);

/*
 * Consultor booleano de conjunto vacío.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool conjunto_esta_vacio(const conjunto_t *c);

/*
 * Consultor de pertenencia de elemento en el conjunto.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool conjunto_pertenece(const conjunto_t *c, int elemento);

/*
 * Consultor de inclusión A subconjunto B.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool conjunto_es_subconjunto(const conjunto_t *a, const conjunto_t *b);

/*
 * Mutador de inserción idempotente respetando unicidad.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool conjunto_agregar(conjunto_t *c, int elemento);

/*
 * Mutador de eliminación manteniendo contigüidad.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool conjunto_eliminar(conjunto_t *c, int elemento);

/*
 * Constructor derivado de unión de conjuntos.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
conjunto_t * conjunto_union(const conjunto_t *a, const conjunto_t *b);

/*
 * Constructor derivado de intersección de conjuntos.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
conjunto_t * conjunto_interseccion(const conjunto_t *a, const conjunto_t *b);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 3
Salida / Retorno: 1
```
:::
:::{tab-item} Valor positivo
```text
Entrada: 3
Salida / Retorno: 1
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- El invariante de representación exige verificar unicidad: ningún par de elementos distintos puede ser igual.
- En conjunto_agregar, si el elemento ya pertenece, la operación retorna true de forma idempotente sin duplicar.
- En conjunto_eliminar, al hallar el elemento se realiza un corrimiento a la izquierda para mantener la contigüidad.
- El conjunto vacío es subconjunto de cualquier conjunto, cumpliendo la definición matemática de inclusión.
:::

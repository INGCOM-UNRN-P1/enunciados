Se desea modelar un Tipo de Dato Abstracto general de secuencia lineal de enteros que permita acceso posicional e inserciones/eliminaciones intermedias.


- **Constructor:** `secuencia_t *secuencia_crear(size_t capacidad);`
- **Destructor:** `void secuencia_destruir(secuencia_t *s);`
- **Selector:** `bool secuencia_obtener(const secuencia_t *sec, size_t indice, int *destino);`
- **Consultores:**
  - `size_t secuencia_largo(const secuencia_t *sec);`
  - `bool secuencia_esta_vacia(const secuencia_t *sec);`
- **Mutadores:**
  - `bool secuencia_insertar(secuencia_t *sec, size_t pos, int valor);`
  - `bool secuencia_eliminar(secuencia_t *sec, size_t pos, int *dato_extraido);`
- **Conversor:**
  - `char *secuencia_a_cadena(const secuencia_t *sec);` (formato `"[10, 20, 30]"` en heap, `free()` a cargo del llamador).


1. **Implementación sobre Arreglo Dinámico (`secuencia_arreglo.c`):** Almacena los datos en memoria contigua (`int *datos`, `size_t cantidad`, `size_t capacidad`). Invariante: `s != NULL && s->datos != NULL && s->capacidad > 0 && s->cantidad <= s->capacidad`.
2. **Implementación sobre Lista Enlazada (`secuencia_lista.c`):** Almacena los datos mediante una cadena de nodos simples (`struct nodo { int valor; struct nodo *siguiente; }`). Invariante: `s != NULL && s->capacidad > 0 && s->cantidad <= s->capacidad` y la cantidad de nodos coincide con `s->cantidad`.

### 📋 Contrato de las Funciones

```c
/*
 * Constructor de secuencia con capacidad máxima.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
secuencia_t * secuencia_crear(size_t capacidad);

/*
 * Destructor tolerante a NULL.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void secuencia_destruir(secuencia_t *s);

/*
 * Selector por índice posicional.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool secuencia_obtener(const secuencia_t *sec, size_t indice, int *destino);

/*
 * Consultor de cantidad actual de elementos.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
size_t secuencia_largo(const secuencia_t *sec);

/*
 * Consultor booleano de secuencia vacía.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool secuencia_esta_vacia(const secuencia_t *sec);

/*
 * Mutador de inserción en posición específica.
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
bool secuencia_insertar(secuencia_t *sec, size_t pos, int valor);

/*
 * Mutador de extracción y eliminación posicional.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool secuencia_eliminar(secuencia_t *sec, size_t pos, int *dato_extraido);

/*
 * Conversor a representación textual en heap [10, 20, 30].
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
char * secuencia_a_cadena(const secuencia_t *sec);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 3
Salida / Retorno: 2
```
:::
:::{tab-item} Valor positivo
```text
Entrada: 3
Salida / Retorno: 10
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
- En secuencia_crear, una capacidad de 0 debe retornar NULL.
- En secuencia_insertar, recordá verificar que pos <= cantidad y que cantidad < capacidad.
- En secuencia_eliminar, extraé el valor y compactá hacia la izquierda o reconectá nodos según la representación.
- En secuencia_a_cadena, formateá la salida exacta como [10, 20, 30] en heap y devolvé [] para secuencias vacías.
:::

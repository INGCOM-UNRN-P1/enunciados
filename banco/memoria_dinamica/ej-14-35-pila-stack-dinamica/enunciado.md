### Ejercicio 14.35 - Pila (Stack) Dinámica ⭐⭐⭐☆☆

Implementar una Pila (Stack) usando un arreglo dinámico. La estructura debe
tener capacidad y tamaño. Cuando la pila se llena, su capacidad debe duplicarse.
Cuando el tamaño es un cuarto de la capacidad, esta debe reducirse a la mitad.
Implementar `push`, `pop` y `peek`.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

## Ejercicio 14.36 - Array Dinámico Simple ⭐☆☆☆☆

Leé un tamaño `n`, creá un array dinámico de `n` enteros, llenalo, mostralo y
liberalo.

**Orientación:**
- `int *arr = malloc(n * sizeof(int));`
- Verificá: `if (arr == NULL) return 1;`
- Al final: `free(arr);`


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.37 - String Dinámico ⭐⭐☆☆☆

Leé un string de tamaño arbitrario (hasta 1000 caracteres), almacenalo
dinámicamente con el tamaño exacto.

**Orientación:**
- Leé en buffer temporal: `char temp[1001];`
- Asigná memoria exacta: `strlen(temp) + 1`
- Copiá con `strcpy`
- Liberá al final


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.38 - Redimensionar Array ⭐⭐⭐☆☆

Implementá un programa que permita agregar elementos dinámicamente a un array,
redimensionándolo cuando se llene.

**Orientación:**
- Mantené `capacidad` actual y `tamanio` usado
- Cuando `tamanio == capacidad`, duplicá capacidad con `realloc`
- `arr = realloc(arr, nueva_capacidad * sizeof(int));`
- Verificá que `realloc` no retorne NULL


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.39 - Copiar String Dinámicamente ⭐⭐⭐☆☆

Implementá `char *duplicar_string(const char *src)` que retorne una copia
dinámica.

**Orientación:**
- Calculá longitud con `strlen`
- Asigná `strlen + 1` bytes (para '\0')
- Copiá con `strcpy`
- El llamador es responsable de liberar


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.40 - Concatenar Strings Dinámicamente ⭐⭐⭐☆☆

Implementá `char *concatenar(const char *s1, const char *s2)` que retorne
concatenación en memoria dinámica.

**Orientación:**
- Longitud total = `strlen(s1) + strlen(s2) + 1`
- Copiá s1 primero, luego s2
- Retorná el nuevo string


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.41 - Matriz Dentada ⭐⭐⭐⭐☆

Creá una matriz donde cada fila tiene diferente cantidad de columnas.

**Orientación:**
- `int **matriz = malloc(filas * sizeof(int*));`
- Para cada fila: `matriz[i] = malloc(cols[i] * sizeof(int));`
- Liberá en orden inverso: filas primero, luego array de punteros


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.42 - Lista de Strings ⭐⭐⭐⭐☆

Leé N strings y almacenalos en un array dinámico de strings.

**Orientación:**
- `char **strings = malloc(n * sizeof(char*));`
- Para cada string: asigná memoria exacta
- Liberá cada string individualmente, luego el array


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.43 - Histograma Dinámico ⭐⭐⭐⭐☆

Leé números hasta EOF y creá un histograma de frecuencias (0-9).

**Orientación:**
- Asigná array dinámico de 10 enteros (inicializado a 0)
- Usá `calloc(10, sizeof(int))` para inicialización automática
- Incrementá contador según el dígito
- Mostrá histograma visual con asteriscos


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.44 - Vector Dinámico (Estructura) ⭐⭐⭐⭐☆

Implementá un vector dinámico encapsulado en estructura:

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
typedef struct
{
    int *datos;
    size_t tamanio;
    size_t capacidad;
} vector_t;
```
<!-- c -->

Funciones:
- `vector_t *crear_vector()`
- `void agregar(vector_t *v, int valor)`
- `void destruir_vector(vector_t *v)`

**Orientación:**
- `crear_vector` asigna estructura y array inicial
- `agregar` redimensiona si es necesario
- `destruir_vector` libera datos y luego estructura

---
## Ejercicio 14.45 - Leer Archivo Completo en Memoria ⭐⭐⭐⭐☆

Leé un archivo de texto completo en memoria dinámica.

**Orientación:**
- Obtené tamaño con `fseek` y `ftell`
- Asigná `tamanio + 1` bytes
- Leé todo con `fread`
- Terminá con '\0'
- Liberá memoria al terminar


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.46 - Merge de Arrays ⭐⭐⭐⭐☆

Implementá `int *merge(int *arr1, int n1, int *arr2, int n2)` que retorne un
nuevo array con ambos ordenados.

**Orientación:**
- Asigná array de tamaño `n1 + n2`
- Usá dos índices para recorrer ambos arrays
- Copiá el menor en cada paso
- Liberá los arrays originales si ya no se usan


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.47 - Lista Enlazada con Memoria Dinámica ⭐⭐⭐⭐⭐

Implementá lista enlazada completamente dinámica:

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
typedef struct nodo
{
    int dato;
    struct nodo *siguiente;
} nodo_t;
```
<!-- c -->

Funciones:
- `nodo_t *crear_nodo(int valor)`
- `void insertar_ordenado(nodo_t **cabeza, int valor)`
- `void eliminar_valor(nodo_t **cabeza, int valor)`
- `void liberar_lista(nodo_t **cabeza)`

**Orientación:**
- Cada nodo se asigna con `malloc`
- `insertar_ordenado` encuentra posición correcta
- `eliminar_valor` busca, reenlaza y libera
- `liberar_lista` recorre y libera todos los nodos

---
## Ejercicio 14.48 - Árbol Binario de Búsqueda ⭐⭐⭐⭐⭐

Implementá un ABB (Árbol Binario de Búsqueda):

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
typedef struct nodo_arbol
{
    int dato;
    struct nodo_arbol *izquierdo;
    struct nodo_arbol *derecho;
} nodo_arbol_t;
```
<!-- c -->

Funciones:
- `nodo_arbol_t *insertar(nodo_arbol_t *raiz, int valor)`
- `bool buscar(nodo_arbol_t *raiz, int valor)`
- `void liberar_arbol(nodo_arbol_t *raiz)`

**Orientación:**
- Inserción recursiva: menor a izquierda, mayor a derecha
- Búsqueda recursiva similar
- Liberación: postorden (izquierdo, derecho, raíz)

---
## Ejercicio 14.49 - Tabla Hash Simple ⭐⭐⭐⭐⭐

Implementá una tabla hash con encadenamiento:

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
typedef struct entrada
{
    char *clave;
    int valor;
    struct entrada *siguiente;
} entrada_t;
typedef struct
{
    entrada_t **tabla;
    size_t tamanio;
} hash_t;
```
<!-- {code-block} c -->

Funciones:
- `hash_t *crear_hash(size_t tam)`
- `void insertar(hash_t *h, const char *clave, int valor)`
- `int *buscar(hash_t *h, const char *clave)`
- `void destruir_hash(hash_t *h)`

**Orientación:**
- Función hash simple: suma de caracteres % tamaño
- Encadenamiento para colisiones
- Destruir: libera cadenas, claves, y tabla

---
## Ejercicio 14.50 - Pool de Memoria ⭐⭐⭐⭐⭐

Implementá un allocator simple que asigna de un pool preasignado.

**Orientación:**
- Asigná bloque grande inicial con `malloc`
- Mantené puntero a espacio libre
- `pool_alloc(size)` retorna puntero y avanza
- `pool_free()` libera todo el pool de una vez
- No soporta liberación individual


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.51 - Parser de CSV Dinámico ⭐⭐⭐⭐⭐

Leé un archivo CSV y almacená datos en estructura dinámica.

**Orientación:**
- Leé línea por línea con `fgets`
- Parseá con `strtok` o manualmente
- Almacená en array dinámico de estructuras
- Redimensioná si es necesario
- Liberá todo al terminar


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.52 - Búfer Circular Dinámico ⭐⭐⭐⭐⭐

Implementá un búfer circular continuo en memoria dinámica:

**Orientación:**
- Asigná un arreglo continuo dinámico de enteros con `malloc`
- Mantené los índices `inicio`, `fin` y la cantidad de elementos
- Si el búfer se llena, duplicá su capacidad reubicando los elementos en orden contiguo
- Liberá toda la memoria al destruir el búfer

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar que las operaciones de inserción y extracción mantengan la consistencia de los índices circulares.
-   **[*plus ultra*]:** Comprobar la liberación sin pérdidas de memoria con Valgrind.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.53 - Arreglo Dinámico de Cadenas de Texto ⭐⭐⭐⭐⭐

Implementá un arreglo dinámico de cadenas de texto (`char **`):

**Orientación:**
- Asigná dinámicamente un arreglo de punteros `char **lineas`
- Cada línea individual debe alojarse dinámicamente según su longitud exacta
- Permití agregar nuevas líneas redimensionando el arreglo de punteros con `realloc`
- En la función de destrucción, liberá cada cadena antes de liberar el arreglo de punteros

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.54 - Simulador de Memoria ⭐⭐⭐⭐⭐

Implementá un simulador que registre todas las asignaciones/liberaciones.

**Orientación:**
- Envolvé `malloc` y `free`
- Mantené registro de bloques activos
- Detectá double-free y memory leaks
- Mostrá estadísticas al final


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 14.55 - Sistema de Gestión de Memoria Personalizado ⭐⭐⭐⭐⭐

Implementá tu propio `malloc` y `free` usando `sbrk` o un buffer grande.

**Orientación:**
- Mantené lista de bloques libres/ocupados
- Algoritmo first-fit o best-fit
- Metadata en cada bloque (tamaño, ocupado)
- Coalescencia de bloques libres adyacentes


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Notas Finales

:::{danger} Errores Fatales a Evitar

1. **No verificar NULL:** Siempre: `if (ptr == NULL) { handle error; }`
2. **Olvidar free:** Cada `malloc` debe tener su `free` correspondiente
3. **Double free:** Liberar el mismo puntero dos veces
4. **Use after free:** Usar memoria después de liberarla
5. **Memory leak:** Perder referencias sin liberar

:::
<!-- {danger} Errores Fatales a Evitar -->

:::{tip} Herramientas de Debugging

```{code-block} bash
:linenos:
# Valgrind - detecta leaks y accesos inválidos
valgrind --leak-check=full --show-leak-kinds=all ./programa

# AddressSanitizer - más rápido, menos completo
gcc -fsanitize=address -g programa.c -o programa
./programa

# Verificar código de salida de Valgrind
valgrind ./programa
echo $?  # 0 si no hay errores

```
<!-- {code-block} bash -->

:::
<!-- {tip} Herramientas de Debugging -->

:::{note} Patrones Comunes

1. **Siempre liberar en orden inverso a asignación**
2. **Usar `calloc` para inicialización a cero**
3. **Verificar `realloc` antes de reasignar puntero original**
4. **Mantener punteros a NULL después de `free`**
5. **Encapsular estructuras dinámicas en funciones de gestión**

:::
<!-- {note} Patrones Comunes -->

Estas consignas cubren todos los aspectos de memoria dinámica: asignación
básica, redimensionamiento, estructuras complejas, gestión avanzada y prevención
de errores.

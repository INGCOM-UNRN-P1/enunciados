### Ejercicio 31.15 - Punteros a Funciones y Callbacks ⭐⭐⭐☆☆

:::{exercise} analisis_callbacks
:label: analisis_callbacks

Analizá este código que implementa callbacks usando punteros a funciones:

```{code-block} c
:linenos:
#include <stdbool.h>
#include <stdio.h>
typedef bool (*predicado_t)(int);
typedef int (*operacion_t)(int);
bool es_par(int n)
{
    return n % 2 == 0;
}
bool es_positivo(int n)
{
    return n > 0;
}
int duplicar(int n)
{
    return n * 2;
}
int cuadrado(int n)
{
    return n * n;
}
// Función A
int contar_si(const int *arr, size_t n, predicado_t predicado)
{
    int contador = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (predicado(arr[i]))
        {
            contador++;
        }
    }
    return contador;
}
// Función B
void aplicar(int *arr, size_t n, operacion_t operacion)
{
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = operacion(arr[i]);
    }
}
// Función C
void procesar(int *arr, size_t n, predicado_t filtro,
              operacion_t transformacion)
{
    for (size_t i = 0; i < n; i++)
    {
        if (filtro(arr[i]))
        {
            arr[i] = transformacion(arr[i]);
        }
    }
}
int main(void)
{
    int numeros[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5};
    size_t n = sizeof(numeros) / sizeof(numeros[0]);
    printf("Pares: %d\n", contar_si(numeros, n, es_par));
    printf("Positivos: %d\n", contar_si(numeros, n, es_positivo));
    int copia1[] = {1, 2, 3, 4, 5};
    aplicar(copia1, 5, duplicar);
    int copia2[] = {-2, -1, 0, 1, 2};
    procesar(copia2, 5, es_positivo, cuadrado);
    return 0;
}
```
<!-- {code-block} c -->

**Tarea**:

1. **Análisis de tipos**: Explicá qué son `predicado_t` y `operacion_t`
2. **Roles de punteros a función**: ¿Qué rol cumplen en cada función?
3. **Flujo de ejecución**: Trazá el flujo cuando se llama `contar_si(numeros, n,
   es_par)`
4. **Predicción de resultados**: ¿Qué valores finales tienen `copia1` y
   `copia2`?
5. **Ventajas del patrón**: ¿Por qué este diseño es mejor que tener múltiples
   funciones específicas?
6. **Extensión**: ¿Cómo agregarías una función que encuentre el primer elemento
   que cumple una condición?

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {exercise} analisis_callbacks -->

:::{solution} analisis_callbacks
:class: dropdown

**1. Análisis de Tipos:**

``` c
typedef bool (*predicado_t)(int);
typedef int (*operacion_t)(int);
```
<!-- c -->

**`predicado_t`**: 
- Es un **tipo de puntero a función**
- La función apuntada debe recibir un `int` y retornar `bool`
- Se usa para funciones que evalúan condiciones/predicados

**`operacion_t`**:
- Es un **tipo de puntero a función**
- La función apuntada debe recibir un `int` y retornar `int`
- Se usa para funciones que transforman valores

**Sintaxis explicada:**
``` c
// Sin typedef (más confuso):
bool (*predicado)(int); // Variable que es puntero a función
// Con typedef (más claro):
predicado_t predicado; // Variable de tipo "puntero a función"
```
<!-- c -->

**2. Roles de Punteros a Función:**

**En `contar_si`:**
- `predicado`: **Callback/Strategy** - define la estrategia de filtrado
- Rol: Inyección de dependencia - el comportamiento se define externamente

**En `aplicar`:**
- `operacion`: **Callback/Transformer** - define cómo transformar cada elemento
- Rol: Separación de iteración y operación

**En `procesar`:**
- `filtro`: **Callback/Predicate** - decide qué elementos procesar
- `transformacion`: **Callback/Transformer** - define cómo procesar
- Rol: Composición de comportamientos

**3. Flujo de Ejecución:**

**Llamada:** `contar_si(numeros, n, es_par)`

```
Paso 1: Entrada a contar_si
  arr = &numeros[0]
  n = 9
  predicado = dirección de es_par

Paso 2: Inicialización
  contador = 0

Paso 3: Iteración i=0
  arr[0] = -3
  predicado(-3)  -> llamada a es_par(-3)
    return -3 % 2 == 0  -> false
  if (false) -> no incrementa contador

Paso 4: Iteración i=1
  arr[1] = -2
  predicado(-2)  -> llamada a es_par(-2)
    return -2 % 2 == 0  -> true
  if (true) -> contador++ (contador = 1)

Paso 5: Iteración i=2
  arr[2] = -1
  predicado(-1)  -> es_par(-1) -> false
  No incrementa

Paso 6: Iteración i=3
  arr[3] = 0
  predicado(0)  -> es_par(0) -> true
  contador++ (contador = 2)

... continúa ...

Resultado: contador = 5 (elementos: -2, 0, 2, 4)
```

**4. Predicción de Resultados:**

**`copia1` después de `aplicar(copia1, 5, duplicar)`:**
```
Estado inicial: {1, 2, 3, 4, 5}
Después de aplicar duplicar a cada elemento:
copia1 = {2, 4, 6, 8, 10}
```

**`copia2` después de `procesar(copia2, 5, es_positivo, cuadrado)`:**
```
Estado inicial: {-2, -1, 0, 1, 2}

Procesamiento:
- copia2[0] = -2  -> es_positivo(-2) = false -> no transforma
- copia2[1] = -1  -> es_positivo(-1) = false -> no transforma
- copia2[2] = 0   -> es_positivo(0)  = false -> no transforma
- copia2[3] = 1   -> es_positivo(1)  = true  -> cuadrado(1) = 1
- copia2[4] = 2   -> es_positivo(2)  = true  -> cuadrado(2) = 4

Estado final: {-2, -1, 0, 1, 4}
```

**Salida completa del programa:**
```
Pares: 5
Positivos: 5
```

**5. Ventajas del Patrón:**

**Sin callbacks (enfoque ingenuo):**
```{code-block} c
:linenos:
int contar_pares(const int *arr, size_t n)
{
    int contador = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            contador++;
    }
    return contador;
}
int contar_positivos(const int *arr, size_t n)
{
    int contador = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            contador++;
    }
    return contador;
}
int contar_negativos(const int *arr, size_t n)
{
    // Otra función casi idéntica...
}
// ¡Mucha duplicación!
```
<!-- {code-block} c -->

**Con callbacks (enfoque genérico):**
```{code-block} c
:linenos:
// Una sola función, infinitas posibilidades
int contar_si(const int *arr, size_t n, predicado_t pred);
// Uso:
contar_si(arr, n, es_par);
contar_si(arr, n, es_positivo);
contar_si(arr, n, es_negativo);
contar_si(arr, n, es_multiplo_de_tres);
// ... cualquier predicado
```
<!-- {code-block} c -->

**Ventajas:**
1. **DRY (Don't Repeat Yourself)**: Evita duplicación de código
2. **Extensibilidad**: Agregar nuevas condiciones sin modificar código existente
3. **Composición**: Combinar comportamientos (como en `procesar`)
4. **Testabilidad**: Más fácil probar funciones pequeñas e independientes
5. **Reusabilidad**: Las funciones de alto nivel sirven para múltiples
   propósitos

**Patrón de diseño:** **Strategy Pattern** - el comportamiento se selecciona en
tiempo de ejecución

**6. Extensión - Encontrar Primer Elemento:**

```{code-block} c
:linenos:
int *encontrar_si(int *arr, size_t n, predicado_t predicado)
{
    for (size_t i = 0; i < n; i++)
    {
        if (predicado(arr[i]))
        {
            return &arr[i]; // Retorna puntero al primer elemento que cumple
        }
    }
    return NULL; // No se encontró
}
// Uso:
int numeros[] = {-3, -2, -1, 0, 1, 2, 3};
int *primer_positivo = encontrar_si(numeros, 7, es_positivo);
if (primer_positivo != NULL)
{
    printf("Primer positivo: %d\n", *primer_positivo);
}
else
{
    printf("No hay positivos\n");
}
```
<!-- {code-block} c -->

**Extensión adicional - Con contexto:**

A veces los callbacks necesitan estado adicional. Se puede extender usando un
puntero `void*`:

```{code-block} c
:linenos:
typedef bool (*predicado_ctx_t)(int, void *);
int contar_si_ctx(const int *arr, size_t n, predicado_ctx_t pred,
                  void *contexto)
{
    int contador = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (pred(arr[i], contexto))
        {
            contador++;
        }
    }
    return contador;
}
// Ejemplo: contar mayores que un umbral
bool es_mayor_que(int valor, void *ctx)
{
    int umbral = *(int *)ctx;
    return valor > umbral;
}
// Uso:
int umbral = 3;
int cantidad = contar_si_ctx(numeros, n, es_mayor_que, &umbral);
```
<!-- {code-block} c -->

**Comparación con otros lenguajes:**

Esta técnica en C es la base de conceptos más avanzados en otros lenguajes:
- **C++**: Templates, functors, lambdas
- **Python**: Lambdas, funciones de orden superior
- **JavaScript**: Callbacks, `map`, `filter`, `reduce`

**Ejemplo equivalente en Python:**
``` python
numeros = [-3, -2, -1, 0, 1, 2, 3, 4, 5]
pares = len(list(filter(lambda x: x % 2 == 0, numeros)))
positivos = len(list(filter(lambda x: x > 0, numeros)))
```
<!-- python -->

:::
<!-- {solution} analisis_callbacks -->

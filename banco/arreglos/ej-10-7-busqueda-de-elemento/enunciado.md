Implementá una **búsqueda lineal** (o secuencial) que encuentre la **primera
ocurrencia** de un elemento dentro de un arreglo de enteros. Si el elemento
está presente, la función debe devolver el índice de esa primera ocurrencia;
si no está, debe devolver `-1`.

Para eso, completá las dos funciones declaradas en
`ej-10-7-busqueda-de-elemento.h`:

```{code-block} c
:caption: Contrato de las funciones a implementar

/* Devuelve el índice de la primera aparición de `buscado` en
 * `arreglo[0 .. tamano - 1]`, o -1 si el elemento no está presente.
 *
 * Precondiciones:
 *   - `arreglo != NULL`, o bien `tamano == 0` (arreglo vacío);
 *   - `tamano` representa la cantidad *real* de elementos almacenados.
 * Poscondiciones:
 *   - -1 <= resultado < tamano;
 *   - si resultado >= 0, entonces arreglo[resultado] == buscado, y
 *     para todo k < resultado se cumple arreglo[k] != buscado.
 */
int busqueda_lineal(const int arreglo[], size_t tamano, int buscado);

/* Flujo principal: busca `val` en el arreglo de trabajo
 * {4, -2, 7, 0, -2, 9} y devuelve el índice hallado (o -1).
 */
int proc_busqueda_de_elemento(int val);
```

:::{note} Casos borde y precondiciones

Prestá especial atención a estas situaciones, que tu implementación debe
resolver correctamente:

-   **Arreglo vacío** (`tamano == 0`): el lazo no debe ejecutarse ni una
    iteración y la función devuelve `-1`.
-   **Elemento ausente**: se recorre el arreglo completo sin éxito y se
    devuelve `-1`.
-   **Elemento repetido**: se devuelve el índice de la **primera**
    aparición (por ejemplo, en `{4, -2, 7, 0, -2, 9}` el valor `-2`
    aparece en los índices 1 y 4: el resultado correcto es `1`).
-   **Elemento en los extremos**: verificá el comportamiento cuando el
    elemento buscado está en el índice `0` o en el índice `tamano - 1`.
-   **Valores negativos en el arreglo**: son elementos válidos y deben
    poder buscarse en igualdad de condiciones.

:::

:::{tip} Ejemplos de ejecución
:class: dropdown

Con el arreglo de trabajo `{4, -2, 7, 0, -2, 9}` (índices `0` a `5`):

```{code-block} text
:caption: Elemento presente (ocurrencia única)

>>> busqueda_lineal(arreglo, 6, 7)
2            /* arreglo[2] == 7 */

>>> proc_busqueda_de_elemento(0)
3            /* arreglo[3] == 0 */
```

```{code-block} text
:caption: Elemento repetido: se informa la primera ocurrencia

>>> proc_busqueda_de_elemento(-2)
1            /* NO 4: la primera aparición de -2 está en el índice 1 */
```

```{code-block} text
:caption: Elemento ausente

>>> proc_busqueda_de_elemento(100)
-1           /* el lazo terminó sin hallar coincidencia */
```

```{code-block} text
:caption: Arreglo vacío

>>> busqueda_lineal(NULL, 0, 42)
-1           /* caso degenerado: no hay elementos por recorrer */
```

:::


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION busqueda_lineal(arreglo, tamano, buscado)
INICIO
    PARA i DESDE 0 HASTA tamano-1 HACER
        SI arreglo[i] == buscado ENTONCES
            RETORNAR i // Elemento encontrado
        FIN SI
    FIN PARA
    RETORNAR -1 // Elemento no encontrado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Búsqueda de elemento
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_busqueda_de_elemento(int val);

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
- **Entrada:** Un arreglo, su tamaño y el elemento a buscar.
- **Proceso:** Recorrer el arreglo con un lazo `for` desde el índice 0.
- **Condición:** En cada iteración, comparar el elemento actual del arreglo con el elemento buscado. Si son iguales, se ha encontrado.
- **Salida:** Si se encuentra el elemento, la función debe devolver el índice actual. Si el lazo termina sin encontrar el elemento, se debe devolver un valor especial que indique que no se encontró, como `-1`.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::

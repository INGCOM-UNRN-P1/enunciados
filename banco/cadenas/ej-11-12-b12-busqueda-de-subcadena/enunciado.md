#### Descripción
Implementar una función que busque la primera ocurrencia de una subcadena
(`needle` o aguja) dentro de una cadena principal (`haystack` o pajar). Es una
reimplementación de la función `strstr`.



:::{tip} Lógica y Consideraciones

-   **Proceso (Fuerza Bruta):**
    1.  Usar un lazo exterior para recorrer la cadena `haystack` con un índice
        `i`.
    2.  En cada posición `i`, usar un lazo interior para comparar la subcadena
        de `haystack` que empieza en `i` con la cadena `needle`.
    3.  Si todos los caracteres de `needle` coinciden, devolver la posición `i`
        (o un puntero a `haystack[i]`).
    4.  Si el lazo exterior termina, la subcadena no se encontró.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION buscar_subcadena(haystack, needle)
VARIABLES:
    n, m, i, j (enteros)
INICIO
    n = LONGITUD(haystack)
    m = LONGITUD(needle)

    PARA i DESDE 0 HASTA n - m HACER
        j = 0
        MIENTRAS j < m Y haystack[i+j] == needle[j] HACER
            j = j + 1
        FIN MIENTRAS

        SI j == m ENTONCES
            RETORNAR i // Subcadena encontrada en el índice i
        FIN SI
    FIN PARA

    RETORNAR -1 // No encontrada
FIN FUNCION

```

:::

## Conversión de Base Numérica

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Búsqueda de subcadena
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_usqueda_de_subcadena(int val);

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
4. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
- **Proceso (Fuerza Bruta):**
- Usar un lazo exterior para recorrer la cadena `haystack` con un índice `i`.
- En cada posición `i`, usar un lazo interior para comparar la subcadena de `haystack` que empieza en `i` con la cadena `needle`.
- Si todos los caracteres de `needle` coinciden, devolver la posición `i` (o un puntero a `haystack[i]`).
- Si el lazo exterior termina, la subcadena no se encontró.
:::
